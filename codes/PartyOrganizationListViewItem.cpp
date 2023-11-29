void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32278708(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  WebViewManager_o *v55; // x0
  ServantLimitMaster_o *v56; // x0
  ServantLimitEntity_o *v57; // x0
  WebViewManager_o *v58; // x0
  ServantExceedMaster_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x2
  int v67; // w9

  if ( (byte_40FDC9A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_40FDC9A = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.followerInfo = followerInfo;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       svtId,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v55
    || (v56 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v55,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (v57 = ServantLimitMaster__GetEntity(v56, svtId, limitCount, 0LL), !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !v57)
    || (this->fields.rarityId = v57->fields.rarity,
        (v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v59 = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v58,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_30698720(v59, svtId, limitCount, 0, 0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v60, v61, v62, v63, v64, v65);
  this->fields.fatigureTime = -1LL;
  this->fields.isFixMultipleNpc = 0;
  *(_WORD *)&this->fields.isServantNumRestriction = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
  this->fields.isRestrictionServantPos = 0;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  if ( initPos )
    v67 = initPos;
  else
    v67 = index + 1;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._TimesToRestart_k__BackingField = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v67;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v66);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32282080(
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
  FollowerInfo_o **p_followerInfo; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  FollowerInfo_o *followerInfo; // x23
  int32_t ReturnTypeByQuestId; // w2
  int32_t v57; // w0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  FollowerInfo_o *v66; // x24
  struct QuestRestrictionInfo_o *v67; // x8
  int32_t followerIndex; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x22
  int32_t v70; // w2
  int32_t SvtId; // w0
  struct ServantEntity_o *v72; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  WebViewManager_o *v80; // x0
  WarQuestSelectionMaster_o *v81; // x0
  struct ServantEntity_o *v82; // x8
  ServantLimitMaster_o *v83; // x27
  __int64 v84; // x23
  __int64 v85; // x24
  int32_t v86; // w0
  FollowerInfo_o *v87; // x24
  struct QuestRestrictionInfo_o *v88; // x8
  int32_t v89; // w23
  int32_t v90; // w28
  int32_t v91; // w2
  int32_t LimitCount; // w0
  ServantLimitEntity_o *v93; // x0
  FollowerInfo_o *v94; // x28
  FollowerInfo_o *v95; // x24
  struct QuestRestrictionInfo_o *v96; // x8
  int32_t v97; // w23
  int32_t v98; // w2
  int32_t FrameType; // w0
  FollowerInfo_o *v100; // x24
  struct QuestRestrictionInfo_o *v101; // x8
  int32_t v102; // w23
  int32_t v103; // w2
  int32_t v104; // w0
  FollowerInfo_o *v105; // x24
  struct QuestRestrictionInfo_o *v106; // x8
  int32_t v107; // w27
  int32_t v108; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  const MethodInfo *v116; // x1
  _BOOL4 v117; // w23
  const MethodInfo *v118; // x1
  QuestRestrictionInfo_o *v119; // x27
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v121; // x23
  __int64 v122; // x24
  int32_t v123; // w28
  const MethodInfo *v124; // x1
  ServantLeaderInfo_o *v125; // x0
  const MethodInfo *v126; // x1
  int32_t v127; // w24
  ServantLeaderInfo_o *v128; // x0
  int32_t DispLimitCount; // w23
  const MethodInfo *v130; // x1
  ServantLeaderInfo_o *v131; // x0
  bool IsRestriction_31241596; // w0
  unsigned __int64 v133; // x1
  WebViewManager_o *v134; // x0
  UserServantMaster_o *v135; // x0
  UserServantEntity_array *OrganizationList; // x0
  __int64 v137; // x2
  int max_length; // w8
  UserServantEntity_array *v139; // x23
  unsigned int v140; // w28
  UserServantEntity_o *v141; // x25
  QuestRestrictionInfo_o *v142; // x24
  __int64 v143; // x26
  __int64 v144; // x27
  int32_t v145; // w26
  int32_t v146; // w27
  int32_t v147; // w0
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  QuestRestrictionInfo_o *v149; // x0
  bool IsUseOldMaster; // w0
  struct QuestRestrictionInfo_o *v151; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x23
  int64_t UserId; // x0
  struct ServantEntity_o *v154; // x8
  UserEventDataLostEntity_o *v155; // x23
  __int64 v156; // x24
  __int64 v157; // x25
  int32_t v158; // w0
  bool IsRestart; // w0
  struct ServantEntity_o *v160; // x9
  UserEventDataLostEntity_o *v161; // x22
  __int64 v162; // x23
  __int64 v163; // x24
  int32_t v164; // w0
  int32_t v165; // w0
  struct QuestRestrictionInfo_o *v166; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v168; // x0
  EventServantPointRankMaster_o *v169; // x23
  const MethodInfo *v170; // x1
  const MethodInfo *v171; // x2
  const MethodInfo *v172; // x1
  ServantLeaderInfo_o *v173; // x0
  const MethodInfo *v174; // x1
  int32_t eventSvtPoint; // w21
  ServantLeaderInfo_o *v176; // x0
  __int64 v177; // x24
  __int64 v178; // x25
  int32_t v179; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v181; // x1
  const MethodInfo *v182; // x2
  ServantLeaderInfo_o *v183; // x0
  QuestRestrictionInfo_o *v184; // x8
  QuestPhaseMaster_o *v185; // x0
  const MethodInfo *v186; // x1
  bool IsNotClassBoard; // w20
  ServantLeaderInfo_o *v188; // x0
  _BOOL4 v189; // [xsp+4h] [xbp-6Ch]
  FollowerInfo_o *v190; // [xsp+8h] [xbp-68h]
  QuestPhaseEntity_o *v191; // [xsp+10h] [xbp-60h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16

  v11 = isFixNpc;
  if ( (byte_40FDC98 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v23);
    sub_B16FFC(&DataManager_TypeInfo, v24);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_B16FFC(&NetworkManager_TypeInfo, v26);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_40FDC98 = 1;
  }
  v191 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B16F98(
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
  sub_B16F98(
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
    if ( !followerInfo )
      goto LABEL_147;
  }
  else
  {
    ReturnTypeByQuestId = 0;
    if ( !followerInfo )
      goto LABEL_147;
  }
  v189 = v11;
  v57 = FollowerInfo__getIndex(followerInfo, followerClassId, ReturnTypeByQuestId, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v57;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_147;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = this->fields.followerInfo;
  v67 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( v67 )
  {
    v70 = FollowerInfo__GetReturnTypeByQuestId(v67->fields.questId, 0LL);
    if ( !v66 )
      goto LABEL_147;
  }
  else
  {
    v70 = 0;
    if ( !v66 )
      goto LABEL_147;
  }
  SvtId = FollowerInfo__getSvtId(v66, followerIndex, v70, 0LL);
  if ( !v69 )
    goto LABEL_147;
  v72 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v69,
                                    SvtId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v72;
  p_servantEntity = &this->fields.servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v72,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v80 )
    goto LABEL_147;
  v81 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v80,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v82 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_147;
  v190 = follower;
  v83 = (ServantLimitMaster_o *)v81;
  v85 = *(_QWORD *)&v82->fields.id.fields.currentCryptoKey;
  v84 = *(_QWORD *)&v82->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v193.fields.currentCryptoKey = v85;
  *(_QWORD *)&v193.fields.fakeValue = v84;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v193, 0LL);
  v87 = this->fields.followerInfo;
  v88 = this->fields.questRestrictionInfo;
  v89 = this->fields.followerIndex;
  v90 = v86;
  if ( v88 )
  {
    v91 = FollowerInfo__GetReturnTypeByQuestId(v88->fields.questId, 0LL);
    if ( !v87 )
      goto LABEL_147;
  }
  else
  {
    v91 = 0;
    if ( !v87 )
      goto LABEL_147;
  }
  LimitCount = FollowerInfo__getLimitCount(v87, v89, v91, 0LL);
  if ( !v83 )
    goto LABEL_147;
  v93 = ServantLimitMaster__GetEntity(v83, v90, LimitCount, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_147;
  v94 = v190;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v93 )
    goto LABEL_147;
  v95 = this->fields.followerInfo;
  v96 = this->fields.questRestrictionInfo;
  v97 = this->fields.followerIndex;
  this->fields.rarityId = v93->fields.rarity;
  if ( v96 )
  {
    v98 = FollowerInfo__GetReturnTypeByQuestId(v96->fields.questId, 0LL);
    if ( !v95 )
      goto LABEL_147;
  }
  else
  {
    v98 = 0;
    if ( !v95 )
      goto LABEL_147;
  }
  FrameType = FollowerInfo__getFrameType(v95, v97, v98, 0LL);
  v100 = this->fields.followerInfo;
  v101 = this->fields.questRestrictionInfo;
  v102 = this->fields.followerIndex;
  this->fields.frameType = FrameType;
  if ( v101 )
  {
    v103 = FollowerInfo__GetReturnTypeByQuestId(v101->fields.questId, 0LL);
    if ( !v100 )
      goto LABEL_147;
  }
  else
  {
    v103 = 0;
    if ( !v100 )
      goto LABEL_147;
  }
  v104 = FollowerInfo__getLimitCount(v100, v102, v103, 0LL);
  v105 = this->fields.followerInfo;
  v106 = this->fields.questRestrictionInfo;
  v107 = this->fields.followerIndex;
  this->fields.svtLimitCount = v104;
  if ( v106 )
  {
    v108 = FollowerInfo__GetReturnTypeByQuestId(v106->fields.questId, 0LL);
    if ( !v105 )
      goto LABEL_147;
  }
  else
  {
    v108 = 0;
    if ( !v105 )
      goto LABEL_147;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v105, v107, v108, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  v117 = v189;
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v116) )
    goto LABEL_49;
  if ( !*p_followerInfo )
    goto LABEL_147;
  if ( !FollowerInfo__get_IsNpc(*p_followerInfo, 0LL) && (v119 = *p_questRestrictionInfo) != 0LL )
  {
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v118);
    if ( !ServantLeader )
      goto LABEL_147;
    v122 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v121 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v194.fields.currentCryptoKey = v122;
    *(_QWORD *)&v194.fields.fakeValue = v121;
    v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v194, 0LL);
    v125 = PartyOrganizationListViewItem__get_ServantLeader(this, v124);
    if ( !v125 )
      goto LABEL_147;
    v127 = v125->fields.limitCount;
    v128 = PartyOrganizationListViewItem__get_ServantLeader(this, v126);
    if ( !v128 )
      goto LABEL_147;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(v128, 0LL);
    v131 = PartyOrganizationListViewItem__get_ServantLeader(this, v130);
    if ( !v131 )
      goto LABEL_147;
    IsRestriction_31241596 = QuestRestrictionInfo__IsRestriction_31241596(
                               v119,
                               &this->fields.isQuestRestrictionWhole,
                               v123,
                               v127,
                               DispLimitCount,
                               v131->fields.lv,
                               this->fields._InitPos_k__BackingField,
                               0LL);
    v94 = v190;
    v117 = v189;
    this->fields.isQuestRestriction = IsRestriction_31241596;
  }
  else
  {
LABEL_49:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v133 = (unsigned int)initPos;
  else
    v133 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v133;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(questRestrictionInfo, v133, 0LL) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !v94 )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = v94->fields.npcFollowerSvtId;
    v134 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v134 )
      goto LABEL_147;
    v135 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v134,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !v135 )
      goto LABEL_147;
    OrganizationList = UserServantMaster__getOrganizationList(v135, 0LL);
    if ( !OrganizationList )
      goto LABEL_147;
    max_length = OrganizationList->max_length;
    v139 = OrganizationList;
    if ( max_length >= 1 )
    {
      v140 = 0;
      while ( 1 )
      {
        if ( v140 >= max_length )
        {
          sub_B17100(OrganizationList, v133, v137);
          sub_B170A0();
        }
        v141 = v139->m_Items[v140];
        if ( !v141 )
          goto LABEL_147;
        v142 = *p_questRestrictionInfo;
        v144 = *(_QWORD *)&v141->fields.svtId.fields.currentCryptoKey;
        v143 = *(_QWORD *)&v141->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v195.fields.currentCryptoKey = v144;
        *(_QWORD *)&v195.fields.fakeValue = v143;
        v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v195, 0LL);
        v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v141->fields.limitCount, 0LL);
        v147 = UserServantEntity__getDispLimitCount(v141, 0, 0LL);
        if ( !v142 )
          goto LABEL_147;
        OrganizationList = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                        v142,
                                                        v145,
                                                        v146,
                                                        v147,
                                                        this->fields._InitPos_k__BackingField,
                                                        0,
                                                        0LL);
        if ( ((unsigned __int8)OrganizationList & 1) == 0 )
          break;
        max_length = v139->max_length;
        if ( (int)++v140 >= max_length )
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
    if ( !IsNpcMulitipleOrOnly || !v117 )
    {
      this->fields.isFixMultipleNpc = 0;
      goto LABEL_84;
    }
    v149 = this->fields.questRestrictionInfo;
    this->fields.isFixMultipleNpc = 1;
    if ( !v149 )
      goto LABEL_147;
    IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(v149, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_147;
    if ( IsUseOldMaster )
    {
      if ( !(*p_questRestrictionInfo)->fields.isNpcEditablePos )
        goto LABEL_84;
    }
    else if ( !QuestRestrictionInfo__IsEditablePos(*p_questRestrictionInfo, initPos, 0LL) )
    {
      goto LABEL_84;
    }
    if ( !v94 )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = v94->fields.npcFollowerSvtId;
  }
LABEL_84:
  v151 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v151 && v151->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_147;
    if ( UserEventDataLostMaster__TryGetEntity(
           (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
           &entity,
           UserId,
           (*p_questRestrictionInfo)->fields.dataLostBattleId,
           0LL) )
    {
      v154 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v155 = entity;
      v157 = *(_QWORD *)&v154->fields.id.fields.currentCryptoKey;
      v156 = *(_QWORD *)&v154->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v196.fields.currentCryptoKey = v157;
      *(_QWORD *)&v196.fields.fakeValue = v156;
      v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v196, 0LL);
      if ( !v155 )
        goto LABEL_147;
      IsRestart = UserEventDataLostEntity__IsRestart(v155, v158, 0LL);
      v160 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v161 = entity;
      v163 = *(_QWORD *)&v160->fields.id.fields.currentCryptoKey;
      v162 = *(_QWORD *)&v160->fields.id.fields.fakeValue;
      if ( IsRestart )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v197.fields.currentCryptoKey = v163;
        *(_QWORD *)&v197.fields.fakeValue = v162;
        v164 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v197, 0LL);
        if ( !v161 )
          goto LABEL_147;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v161, v164, 0LL);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v198.fields.currentCryptoKey = v163;
        *(_QWORD *)&v198.fields.fakeValue = v162;
        v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v198, 0LL);
        if ( !v161 )
          goto LABEL_147;
        if ( UserEventDataLostEntity__IsDataLost(v161, v165, 0LL) )
          this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  v166 = this->fields.questRestrictionInfo;
  this->fields.isFatigureRecover = 0;
  this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields.fatigureTime = -1LL;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpVal_k__BackingField = 0;
  if ( v166 )
  {
    eventId = v166->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v168 = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !v168 )
      goto LABEL_147;
    v169 = v168;
    if ( EventServantPointRankMaster__IsEnableEvent(v168, eventId, 0LL) )
    {
      if ( !*p_followerInfo )
        goto LABEL_147;
      if ( !FollowerInfo__get_IsNpc(*p_followerInfo, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v170) )
        {
          v173 = PartyOrganizationListViewItem__get_ServantLeader(this, v172);
          if ( !v173 )
            goto LABEL_147;
          eventSvtPoint = v173->fields.eventSvtPoint;
          this->fields._SvtPoint_k__BackingField = eventSvtPoint;
          v176 = PartyOrganizationListViewItem__get_ServantLeader(this, v174);
          if ( !v176 )
            goto LABEL_147;
          v178 = *(_QWORD *)&v176->fields.svtId.fields.currentCryptoKey;
          v177 = *(_QWORD *)&v176->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v199.fields.currentCryptoKey = v178;
          *(_QWORD *)&v199.fields.fakeValue = v177;
          v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v199, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v169, eventId, eventSvtPoint, v179, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v171);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v133) )
    goto LABEL_142;
  v183 = PartyOrganizationListViewItem__get_ServantLeader(this, v181);
  if ( !v183 )
    goto LABEL_147;
  if ( ServantLeaderInfo__IsNpc(v183, 0LL) )
  {
    v184 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v185 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && v185 )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               v185,
               &v191,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          if ( !v191 )
            goto LABEL_147;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v191, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        v188 = PartyOrganizationListViewItem__get_ServantLeader(this, v186);
        if ( v188 )
        {
          LOBYTE(v184) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(v188, 0LL);
          goto LABEL_146;
        }
      }
LABEL_147:
      sub_B170D4();
    }
  }
  else
  {
LABEL_142:
    LOBYTE(v184) = 0;
  }
LABEL_146:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v184;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v182);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32304716(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v71; // x26
  __int64 v72; // x27
  __int64 v73; // x28
  int32_t v74; // w0
  struct ServantEntity_o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  WebViewManager_o *v82; // x0
  WarQuestSelectionMaster_o *v83; // x0
  ServantLimitMaster_o *v84; // x26
  int32_t v85; // w0
  int32_t v86; // w27
  int32_t v87; // w0
  ServantLimitEntity_o *v88; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t v90; // w10
  int32_t rarity; // w8
  UserServantEntity_o *v92; // x0
  int32_t FrameType; // w0
  struct UserServantEntity_o *v94; // x8
  __int64 v95; // x24
  __int64 v96; // x25
  int32_t v97; // w0
  UserServantEntity_o *v98; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  const MethodInfo *v106; // x2
  QuestRestrictionInfo_o *v107; // x24
  struct UserServantEntity_o *v108; // x8
  __int64 v109; // x25
  __int64 v110; // x26
  int32_t v111; // w0
  int32_t v112; // w25
  int32_t v113; // w0
  int32_t v114; // w26
  int32_t DispLimitCount; // w0
  bool IsRestriction_31241596; // w0
  QuestRestrictionInfo_o *v117; // x24
  UserServantEntity_o *v118; // x8
  __int64 v119; // x25
  __int64 v120; // x26
  int32_t v121; // w0
  bool IsConvertOverwriteImage; // w0
  struct QuestRestrictionInfo_o *v123; // x8
  bool v124; // w9
  WebViewManager_o *v125; // x0
  WarQuestSelectionMaster_o *v126; // x0
  UserServantEntity_o *v127; // x9
  UserEventServantFatigueMaster_o *v128; // x25
  int32_t eventId; // w26
  __int64 v130; // x27
  __int64 v131; // x28
  int32_t v132; // w0
  int64_t v133; // x24
  struct QuestRestrictionInfo_o *v134; // x8
  int32_t allOutBattleGroupNo; // w24
  WebViewManager_o *v136; // x0
  WarQuestSelectionMaster_o *v137; // x0
  UserServantEntity_o *v138; // x8
  UserEventAlloutBattleMaster_o *v139; // x25
  __int64 v140; // x26
  __int64 v141; // x27
  int32_t v142; // w0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x24
  int64_t UserId; // x0
  UserServantEntity_o *v145; // x8
  UserEventDataLostEntity_o *v146; // x24
  __int64 v147; // x25
  __int64 v148; // x26
  int32_t v149; // w0
  bool IsRestart; // w0
  UserServantEntity_o *v151; // x9
  UserEventDataLostEntity_o *v152; // x24
  __int64 v153; // x25
  __int64 v154; // x26
  int32_t v155; // w0
  int32_t v156; // w0
  WebViewManager_o *v157; // x0
  UserServantMaster_o *v158; // x0
  UserServantEntity_array *OrganizationList; // x0
  __int64 v160; // x1
  __int64 v161; // x2
  int max_length; // w8
  UserServantEntity_array *v163; // x23
  unsigned int v164; // w19
  UserServantEntity_o *v165; // x25
  QuestRestrictionInfo_o *v166; // x24
  __int64 v167; // x26
  __int64 v168; // x27
  int32_t v169; // w26
  int32_t v170; // w27
  int32_t v171; // w0
  int32_t v172; // w23
  EventServantPointRankMaster_o *v173; // x0
  EventServantPointRankMaster_o *v174; // x24
  WarQuestSelectionMaster_o *v175; // x0
  UserServantEntity_o *v176; // x8
  __int128 v177; // q1
  UserEventServantPointMaster_o *v178; // x25
  int64_t v179; // x0
  int64_t v180; // x26
  int32_t SvtId; // w0
  int32_t SvtPoint_k__BackingField; // w25
  int32_t v183; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v185; // x2
  WebViewManager_o *v186; // x0
  EventCampaignMaster_o *v187; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v189; // x24
  WebViewManager_o *v190; // x0
  EventQuestMaster_o *v191; // x23
  EventCampaignEntity_o *current; // x24
  System_Int32_array *monitor; // x25
  UserServantEntity_o *v194; // x8
  __int64 v195; // x26
  __int64 v196; // x27
  int32_t v197; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v199; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v200; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v201; // [xsp+50h] [xbp-80h] BYREF
  UserEventServantPointEntity_o *v202; // [xsp+68h] [xbp-68h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+70h] [xbp-60h] BYREF
  int64_t recoverAt; // [xsp+78h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v208; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16

  if ( (byte_40FDC97 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v24);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v25);
    sub_B16FFC(&DataManager_TypeInfo, v26);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v31);
    sub_B16FFC(&NetworkManager_TypeInfo, v32);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    byte_40FDC97 = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  v202 = 0LL;
  memset(&v201, 0, sizeof(v201));
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.followerInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v56, v57, v58, v59, v60, v61);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_154;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v70 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_154;
  v71 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v73 = *(_QWORD *)&v70[5].fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v205.fields.currentCryptoKey = v73;
  *(_QWORD *)&v205.fields.fakeValue = v72;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v205, 0LL);
  if ( !v71 )
    goto LABEL_154;
  v75 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v71,
                                    v74,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v75;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v82 )
    goto LABEL_154;
  v83 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v82,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_154;
  v84 = (ServantLimitMaster_o *)v83;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_154;
  v86 = v85;
  v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userServantEntity)[6], 0LL);
  if ( !v84 )
    goto LABEL_154;
  v88 = ServantLimitMaster__GetEntity(v84, v86, v87, 0LL);
  servantEntity = this->fields.servantEntity;
  v90 = initPos ? initPos : index + 1;
  this->fields._InitPos_k__BackingField = v90;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !servantEntity )
    goto LABEL_154;
  this->fields.classId = servantEntity->fields.classId;
  if ( !v88 )
    goto LABEL_154;
  rarity = v88->fields.rarity;
  v92 = this->fields.userServantEntity;
  this->fields.rarityId = rarity;
  if ( !v92 )
    goto LABEL_154;
  FrameType = UserServantEntity__getFrameType(v92, 0LL);
  v94 = this->fields.userServantEntity;
  this->fields.frameType = FrameType;
  if ( !v94 )
    goto LABEL_154;
  v96 = *(_QWORD *)&v94->fields.limitCount.fields.currentCryptoKey;
  v95 = *(_QWORD *)&v94->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v206.fields.currentCryptoKey = v96;
  *(_QWORD *)&v206.fields.fakeValue = v95;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v206, 0LL);
  v98 = this->fields.userServantEntity;
  this->fields.svtLimitCount = v97;
  if ( !v98 )
    goto LABEL_154;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v98, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v107 = this->fields.questRestrictionInfo;
  if ( v107 )
  {
    v108 = this->fields.userServantEntity;
    if ( !v108 )
      goto LABEL_154;
    v110 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
    v109 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v207.fields.currentCryptoKey = v110;
    *(_QWORD *)&v207.fields.fakeValue = v109;
    v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v207, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_154;
    v112 = v111;
    v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userServantEntity)[6], 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_154;
    v114 = v113;
    DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_154;
    IsRestriction_31241596 = QuestRestrictionInfo__IsRestriction_31241596(
                               v107,
                               &this->fields.isQuestRestrictionWhole,
                               v112,
                               v114,
                               DispLimitCount,
                               (*p_userServantEntity)[16].fields.currentCryptoKey,
                               this->fields._InitPos_k__BackingField,
                               0LL);
    v117 = this->fields.questRestrictionInfo;
    this->fields.isQuestRestriction = IsRestriction_31241596;
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
    if ( v117 )
    {
      v118 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_154;
      v120 = *(_QWORD *)&v118->fields.svtId.fields.currentCryptoKey;
      v119 = *(_QWORD *)&v118->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v208.fields.currentCryptoKey = v120;
      *(_QWORD *)&v208.fields.fakeValue = v119;
      v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v208, 0LL);
      IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v117, v121, 0LL);
      v123 = *p_questRestrictionInfo;
      v124 = IsConvertOverwriteImage;
    }
    else
    {
      v123 = 0LL;
      v124 = 0;
    }
  }
  else
  {
    v123 = 0LL;
    v124 = 0;
    *(_WORD *)&this->fields.isQuestRestriction = 0;
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
  }
  this->fields.isFatigureRecover = 0;
  this->fields.isConvertOverwriteImage = v124;
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
  if ( !v123 )
    goto LABEL_153;
  if ( v123->fields.isFatigure )
  {
    v125 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v125 )
      goto LABEL_154;
    v126 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v125,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_154;
    v127 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_154;
    v128 = (UserEventServantFatigueMaster_o *)v126;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v131 = *(_QWORD *)&v127->fields.svtId.fields.currentCryptoKey;
    v130 = *(_QWORD *)&v127->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v209.fields.currentCryptoKey = v131;
    *(_QWORD *)&v209.fields.fakeValue = v130;
    v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v209, 0LL);
    if ( !v128 )
      goto LABEL_154;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v128,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           v132,
           0LL) )
    {
      v133 = recoverAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v133 > NetworkManager__getTime(0LL) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  v134 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo )
    goto LABEL_154;
  if ( v134->fields.isAllOutBattle )
  {
    allOutBattleGroupNo = v134->fields.allOutBattleGroupNo;
    v136 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v136 )
      goto LABEL_154;
    v137 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v136,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    v138 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_154;
    v139 = (UserEventAlloutBattleMaster_o *)v137;
    v141 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
    v140 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v210.fields.currentCryptoKey = v141;
    *(_QWORD *)&v210.fields.fakeValue = v140;
    v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v210, 0LL);
    if ( !*p_questRestrictionInfo || !v139 )
      goto LABEL_154;
    if ( UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           v139,
           v142,
           (*p_questRestrictionInfo)->fields.eventId,
           allOutBattleGroupNo,
           0LL) )
    {
      this->fields._IsAllOutBattle_k__BackingField = 1;
    }
  }
  if ( !*p_questRestrictionInfo )
    goto LABEL_154;
  if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_154;
    if ( UserEventDataLostMaster__TryGetEntity(
           (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
           &entity,
           UserId,
           (*p_questRestrictionInfo)->fields.dataLostBattleId,
           0LL) )
    {
      v145 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_154;
      v146 = entity;
      v148 = *(_QWORD *)&v145->fields.svtId.fields.currentCryptoKey;
      v147 = *(_QWORD *)&v145->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v211.fields.currentCryptoKey = v148;
      *(_QWORD *)&v211.fields.fakeValue = v147;
      v149 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v211, 0LL);
      if ( !v146 )
        goto LABEL_154;
      IsRestart = UserEventDataLostEntity__IsRestart(v146, v149, 0LL);
      v151 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_154;
      v152 = entity;
      v154 = *(_QWORD *)&v151->fields.svtId.fields.currentCryptoKey;
      v153 = *(_QWORD *)&v151->fields.svtId.fields.fakeValue;
      if ( IsRestart )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v212.fields.currentCryptoKey = v154;
        *(_QWORD *)&v212.fields.fakeValue = v153;
        v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v212, 0LL);
        if ( !v152 )
          goto LABEL_154;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v152, v155, 0LL);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v213.fields.currentCryptoKey = v154;
        *(_QWORD *)&v213.fields.fakeValue = v153;
        v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v213, 0LL);
        if ( !v152 )
          goto LABEL_154;
        if ( UserEventDataLostEntity__IsDataLost(v152, v156, 0LL) )
          this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
         questRestrictionInfo,
         this->fields._InitPos_k__BackingField,
         0LL) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    v157 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v157 )
      goto LABEL_154;
    v158 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v157,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !v158 )
      goto LABEL_154;
    OrganizationList = UserServantMaster__getOrganizationList(v158, 0LL);
    if ( !OrganizationList )
      goto LABEL_154;
    max_length = OrganizationList->max_length;
    v163 = OrganizationList;
    if ( max_length >= 1 )
    {
      v164 = 0;
      while ( 1 )
      {
        if ( v164 >= max_length )
        {
          sub_B17100(OrganizationList, v160, v161);
          sub_B170A0();
        }
        v165 = v163->m_Items[v164];
        if ( !v165 )
          goto LABEL_154;
        v166 = *p_questRestrictionInfo;
        v168 = *(_QWORD *)&v165->fields.svtId.fields.currentCryptoKey;
        v167 = *(_QWORD *)&v165->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v214.fields.currentCryptoKey = v168;
        *(_QWORD *)&v214.fields.fakeValue = v167;
        v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v214, 0LL);
        v170 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v165->fields.limitCount, 0LL);
        v171 = UserServantEntity__getDispLimitCount(v165, 0, 0LL);
        if ( !v166 )
          goto LABEL_154;
        OrganizationList = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                        v166,
                                                        v169,
                                                        v170,
                                                        v171,
                                                        this->fields._InitPos_k__BackingField,
                                                        0,
                                                        0LL);
        if ( ((unsigned __int8)OrganizationList & 1) == 0 )
          break;
        max_length = v163->max_length;
        if ( (int)++v164 >= max_length )
          goto LABEL_112;
      }
      this->fields.haveIndividualityServant = 1;
    }
  }
LABEL_112:
  if ( !*p_questRestrictionInfo )
    goto LABEL_154;
  v172 = (*p_questRestrictionInfo)->fields.eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v173 = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !v173 )
    goto LABEL_154;
  v174 = v173;
  if ( EventServantPointRankMaster__IsEnableEvent(v173, v172, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v175 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v176 = (UserServantEntity_o *)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v177 = *(_OWORD *)&v176->fields.userId.fields.fakeValue;
      v178 = (UserEventServantPointMaster_o *)v175;
      *(_OWORD *)&v200.fields.currentCryptoKey = *(_OWORD *)&v176->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v200.fields.fakeValue = v177;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v199 = v200;
      v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v199, 0LL);
      if ( *p_userServantEntity )
      {
        v180 = v179;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
        if ( v178 )
        {
          if ( UserEventServantPointMaster__TryGetEntity(v178, &v202, v180, v172, SvtId, 0LL) )
          {
            if ( !v202 )
              goto LABEL_154;
            this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v202, 0LL);
          }
          if ( *p_userServantEntity )
          {
            SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
            v183 = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
            EnableEntity = EventServantPointRankMaster__GetEnableEntity(v174, v172, SvtPoint_k__BackingField, v183, 0LL);
            if ( EnableEntity )
              this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
            PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v172, v185);
            goto LABEL_134;
          }
        }
      }
    }
LABEL_154:
    sub_B170D4();
  }
LABEL_134:
  v186 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v186 )
    goto LABEL_154;
  v187 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v186,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !v187 )
    goto LABEL_154;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns(v187, 0LL);
  if ( !FriendshipUpCampaigns )
    goto LABEL_153;
  v189 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendshipUpCampaigns;
  v190 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v190 )
    goto LABEL_154;
  v191 = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v190,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v200,
    v189,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v201 = *(System_Collections_Generic_List_Enumerator_T__o *)&v200.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v201,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    current = (EventCampaignEntity_o *)v201.fields.current;
    if ( !v201.fields.current )
      sub_B170D4();
    monitor = (System_Int32_array *)v201.fields.current[2].monitor;
    if ( !monitor || !monitor->max_length )
      goto LABEL_150;
    v194 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      sub_B170D4();
    v196 = *(_QWORD *)&v194->fields.svtId.fields.currentCryptoKey;
    v195 = *(_QWORD *)&v194->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v215.fields.currentCryptoKey = v196;
    *(_QWORD *)&v215.fields.fakeValue = v195;
    v197 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v215, 0LL);
    if ( (System_Array__IndexOf_int_(monitor, v197, (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
    {
LABEL_150:
      if ( !*p_questRestrictionInfo )
        sub_B170D4();
      if ( !v191 )
        sub_B170D4();
      if ( EventQuestMaster__IsExistQuest(
             v191,
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
    &v201,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
LABEL_153:
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v106);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32311272(
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
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int v55; // w1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  __int64 v59; // x1
  int max_length; // w8
  UserServantEntity_array *v61; // x22
  unsigned int v62; // w27
  UserServantEntity_o *v63; // x24
  QuestRestrictionInfo_o *v64; // x23
  __int64 v65; // x25
  __int64 v66; // x26
  int32_t v67; // w25
  int32_t v68; // w26
  int32_t DispLimitCount; // w0
  const MethodInfo *v70; // x2
  struct QuestRestrictionInfo_o *v71; // x8
  int32_t eventId; // w21
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_40FDC99 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FDC99 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.followerInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.servantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v43, v44, v45, v46, v47, v48);
  *(_QWORD *)&this->fields.classId = 0LL;
  if ( !this )
    goto LABEL_42;
  if ( initPos )
    v55 = initPos;
  else
    v55 = index + 1;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v55;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_32:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_33;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(questRestrictionInfo, v55, 0LL) )
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_42;
  max_length = OrganizationList->max_length;
  v61 = OrganizationList;
  if ( max_length >= 1 )
  {
    v62 = 0;
    while ( 1 )
    {
      if ( v62 >= max_length )
      {
        sub_B17100(OrganizationList, v59, v49);
        sub_B170A0();
      }
      v63 = v61->m_Items[v62];
      if ( !v63 )
        goto LABEL_42;
      v64 = this->fields.questRestrictionInfo;
      v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
      v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v74.fields.currentCryptoKey = v66;
      *(_QWORD *)&v74.fields.fakeValue = v65;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v74, 0LL);
      v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63->fields.limitCount, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(v63, 0, 0LL);
      if ( !v64 )
        goto LABEL_42;
      OrganizationList = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                      v64,
                                                      v67,
                                                      v68,
                                                      DispLimitCount,
                                                      this->fields._InitPos_k__BackingField,
                                                      0,
                                                      0LL);
      if ( ((unsigned __int8)OrganizationList & 1) == 0 )
        break;
      max_length = v61->max_length;
      if ( (int)++v62 >= max_length )
        goto LABEL_33;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_33:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v49, v50, v51, v52, v53, v54);
  v71 = this->fields.questRestrictionInfo;
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
  if ( !v71 )
    goto LABEL_40;
  eventId = v71->fields.eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_42:
    sub_B170D4();
  if ( EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v70);
  }
LABEL_40:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v70);
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
  int32_t v11; // w0
  struct UserServantEntity_o *v12; // x8
  int32_t v13; // w23
  int32_t v14; // w0
  int32_t v15; // w24
  int32_t v16; // w0
  struct UserServantEntity_o *v17; // x8
  bool v18; // w0
  struct UserServantEntity_o *v19; // x8
  QuestRestrictionInfo_o *v20; // x22
  __int64 v21; // x23
  __int64 v22; // x24
  int32_t v23; // w0
  struct UserServantEntity_o *v24; // x8
  int32_t v25; // w23
  int32_t v26; // w0
  int32_t v27; // w24
  int32_t v28; // w0
  FollowerInfo_o *followerInfo; // x0
  const MethodInfo *v30; // x1
  QuestRestrictionInfo_o *v31; // x22
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x26
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v34; // x23
  __int64 v35; // x24
  int32_t v36; // w23
  const MethodInfo *v37; // x1
  ServantLeaderInfo_o *v38; // x0
  const MethodInfo *v39; // x1
  int32_t limitCount; // w24
  ServantLeaderInfo_o *v41; // x0
  int32_t DispLimitCount; // w25
  const MethodInfo *v43; // x1
  ServantLeaderInfo_o *v44; // x0
  bool IsRestriction_31241596; // w0
  const MethodInfo *v46; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  ServantLeaderInfo_o *v48; // x0
  __int64 v49; // x23
  __int64 v50; // x24
  int32_t v51; // w23
  const MethodInfo *v52; // x1
  ServantLeaderInfo_o *v53; // x0
  const MethodInfo *v54; // x1
  int32_t v55; // w24
  ServantLeaderInfo_o *v56; // x0
  int32_t v57; // w0
  UserServantEntity_o *v58; // x0
  bool UniqueSvtRestriction_21450924; // w0
  UserServantEntity_o *v60; // x8
  bool IsUniqueIndividualityRestriction_21451324; // w0
  const MethodInfo *v62; // x1
  QuestRestrictionInfo_o *v63; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // kr00_16
  int32_t v65; // w0
  int32_t v66; // w27
  int32_t v67; // w28
  const MethodInfo *v68; // x1
  int32_t dispLimit; // w0
  FollowerInfo_o *v70; // x23
  struct QuestRestrictionInfo_o *v71; // x22
  int32_t followerIndex; // w24
  int32_t ReturnTypeByQuestId; // w5
  bool UniqueSvtRestriction_23237480; // w0
  FollowerInfo_o *v75; // x23
  struct QuestRestrictionInfo_o *v76; // x22
  int32_t v77; // w24
  int32_t v78; // w5
  bool IsUniqueIndividualityRestriction_23237656; // w0
  const MethodInfo *v80; // x1
  QuestRestrictionInfo_o *v81; // x22
  ServantLeaderInfo_o *v82; // x0
  bool IsFixedSupportPosition_31246152; // w0
  QuestRestrictionInfo_o *v84; // x8
  const MethodInfo *v85; // x1
  PartyOrganizationListViewItem_o *Member; // x0
  QuestRestrictionInfo_o *v87; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v89; // w0
  int32_t svtLimitCount; // w22
  int32_t v91; // w23
  const MethodInfo *v92; // x1
  int32_t DispImageLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_40FDCA1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
    byte_40FDCA1 = 1;
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
      goto LABEL_53;
    followerInfo = this->fields.followerInfo;
    if ( !followerInfo )
      goto LABEL_78;
    if ( !FollowerInfo__get_IsNpc(followerInfo, 0LL)
      && (p_questRestrictionInfo = &this->fields.questRestrictionInfo, (v31 = this->fields.questRestrictionInfo) != 0LL) )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v30);
      if ( !ServantLeader )
        goto LABEL_78;
      v35 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v96.fields.currentCryptoKey = v35;
      *(_QWORD *)&v96.fields.fakeValue = v34;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v96, 0LL);
      v38 = PartyOrganizationListViewItem__get_ServantLeader(this, v37);
      if ( !v38 )
        goto LABEL_78;
      limitCount = v38->fields.limitCount;
      v41 = PartyOrganizationListViewItem__get_ServantLeader(this, v39);
      if ( !v41 )
        goto LABEL_78;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(v41, 0LL);
      v44 = PartyOrganizationListViewItem__get_ServantLeader(this, v43);
      if ( !v44 )
        goto LABEL_78;
      IsRestriction_31241596 = QuestRestrictionInfo__IsRestriction_31241596(
                                 v31,
                                 &this->fields.isQuestRestrictionWhole,
                                 v36,
                                 limitCount,
                                 DispLimitCount,
                                 v44->fields.lv,
                                 this->fields._InitPos_k__BackingField,
                                 0LL);
      this->fields.isQuestRestriction = IsRestriction_31241596;
      if ( !IsRestriction_31241596 )
      {
        if ( !*p_questRestrictionInfo )
          goto LABEL_78;
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
               *p_questRestrictionInfo,
               this->fields._InitPos_k__BackingField,
               0LL) )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          v48 = PartyOrganizationListViewItem__get_ServantLeader(this, v46);
          if ( !v48 )
            goto LABEL_78;
          v50 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v97.fields.currentCryptoKey = v50;
          *(_QWORD *)&v97.fields.fakeValue = v49;
          v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v97, 0LL);
          v53 = PartyOrganizationListViewItem__get_ServantLeader(this, v52);
          if ( !v53 )
            goto LABEL_78;
          v55 = v53->fields.limitCount;
          v56 = PartyOrganizationListViewItem__get_ServantLeader(this, v54);
          if ( !v56 )
            goto LABEL_78;
          v57 = ServantLeaderInfo__getDispLimitCount(v56, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_78;
          this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              questRestrictionInfo,
                                              v51,
                                              v55,
                                              v57,
                                              this->fields._InitPos_k__BackingField,
                                              1,
                                              0LL);
        }
      }
    }
    else
    {
LABEL_53:
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      *(_WORD *)&this->fields.isQuestRestriction = 0;
    }
    v70 = this->fields.followerInfo;
    v71 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v71 )
    {
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v71->fields.questId, 0LL);
      if ( !v70 )
        goto LABEL_78;
    }
    else
    {
      ReturnTypeByQuestId = 0;
      if ( !v70 )
        goto LABEL_78;
    }
    UniqueSvtRestriction_23237480 = FollowerInfo__getUniqueSvtRestriction_23237480(
                                      v70,
                                      v71,
                                      followerIndex,
                                      partyItem,
                                      num,
                                      ReturnTypeByQuestId,
                                      0LL);
    v75 = this->fields.followerInfo;
    v76 = this->fields.questRestrictionInfo;
    v77 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = UniqueSvtRestriction_23237480;
    if ( v76 )
    {
      v78 = FollowerInfo__GetReturnTypeByQuestId(v76->fields.questId, 0LL);
      if ( !v75 )
        goto LABEL_78;
    }
    else
    {
      v78 = 0;
      if ( !v75 )
        goto LABEL_78;
    }
    IsUniqueIndividualityRestriction_23237656 = FollowerInfo__IsUniqueIndividualityRestriction_23237656(
                                                  v75,
                                                  v76,
                                                  v77,
                                                  partyItem,
                                                  num,
                                                  v78,
                                                  0LL);
    v81 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_23237656;
    if ( v81 )
    {
      v82 = PartyOrganizationListViewItem__get_ServantLeader(this, v80);
      IsFixedSupportPosition_31246152 = QuestRestrictionInfo__IsFixedSupportPosition_31246152(v81, num, v82, 0LL);
      v84 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_31246152;
      if ( v84 )
      {
        if ( !QuestRestrictionInfo__IsUseOldMaster(v84, 0LL) )
          goto LABEL_71;
        if ( !partyItem )
          goto LABEL_78;
        Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( !Member )
          goto LABEL_78;
        if ( Member->fields.isMyServantOrNpcRestriction )
          goto LABEL_71;
        if ( !*p_questRestrictionInfo )
          goto LABEL_78;
        if ( QuestRestrictionInfo__IsFixedServantPositionIncludeSupport(*p_questRestrictionInfo, 0LL) )
        {
LABEL_71:
          v87 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, v85);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
          svtLimitCount = this->fields.svtLimitCount;
          v91 = v89;
          DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v92);
          if ( v87 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v87,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v91,
              svtLimitCount,
              DispImageLimitCount,
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
  *(_QWORD *)&v94.fields.currentCryptoKey = v10;
  *(_QWORD *)&v94.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v94, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = v11,
        v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12->fields.limitCount, 0LL),
        !this->fields.userServantEntity)
    || (v15 = v14,
        v16 = UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v17 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_78:
    sub_B170D4();
  }
  v18 = QuestRestrictionInfo__IsRestriction_31241596(
          v8,
          &this->fields.isQuestRestrictionWhole,
          v13,
          v15,
          v16,
          v17->fields.lv,
          this->fields._InitPos_k__BackingField,
          0LL);
  this->fields.isQuestRestriction = v18;
  if ( !v18 )
  {
    v19 = this->fields.userServantEntity;
    if ( v19 )
    {
      v20 = this->fields.questRestrictionInfo;
      v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v95.fields.currentCryptoKey = v22;
      *(_QWORD *)&v95.fields.fakeValue = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v95, 0LL);
      v24 = this->fields.userServantEntity;
      if ( v24 )
      {
        v25 = v23;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v24->fields.limitCount, 0LL);
        if ( this->fields.userServantEntity )
        {
          v27 = v26;
          v28 = UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
          if ( v20 )
          {
            this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v20,
                                                v25,
                                                v27,
                                                v28,
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
  v58 = this->fields.userServantEntity;
  if ( !v58 )
    goto LABEL_78;
  UniqueSvtRestriction_21450924 = UserServantEntity__getUniqueSvtRestriction_21450924(
                                    v58,
                                    this->fields.questRestrictionInfo,
                                    partyItem,
                                    num,
                                    -1,
                                    0LL);
  v60 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = UniqueSvtRestriction_21450924;
  if ( !v60 )
    goto LABEL_78;
  IsUniqueIndividualityRestriction_21451324 = UserServantEntity__IsUniqueIndividualityRestriction_21451324(
                                                v60,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v63 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21451324;
  if ( v63 )
  {
    v64 = PartyOrganizationListViewItem__get_SvtId(this, v62);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64, 0LL);
    v66 = this->fields.svtLimitCount;
    v67 = v65;
    dispLimit = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v68);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v63,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v67,
      v66,
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

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  if ( !equipIdList->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t index; // w22
  __int64 v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_40FDC9B & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx);
    byte_40FDC9B = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v8 = sub_B170CC(PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx, method, v3, v4);
  *(_DWORD *)(v8 + 296) = -1;
  *(_DWORD *)(v8 + 344) = -1;
  ListViewItem___ctor_30173668((ListViewItem_o *)v8, index, 0LL);
  if ( !v8 )
    sub_B170D4();
  PartyOrganizationListViewItem__Set((PartyOrganizationListViewItem_o *)v8, this, v9);
  if ( (idx & 0x80000000) == 0 )
  {
    *(_DWORD *)(v8 + 20) = idx;
    ListViewItem__SetSortIndex((ListViewItem_o *)v8, idx, 0LL);
  }
  return (PartyOrganizationListViewItem_o *)v8;
}


bool __fastcall PartyOrganizationListViewItem__CompMember(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  _BOOL4 isFollower; // w10
  bool v6; // zf
  int v7; // w10
  char v8; // w9
  bool v9; // w8
  il2cpp_array_size_t v10; // w22
  BalanceConfig_c *v11; // x0
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *v13; // x10
  int64_t v14; // x9
  int64_t v15; // x10

  if ( (byte_40FDCA2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    byte_40FDCA2 = 1;
  }
  if ( !item )
LABEL_28:
    sub_B170D4();
  if ( this->fields.npcFollowerSvtId != item->fields.npcFollowerSvtId )
    return 0;
  isFollower = item->fields.isFollower;
  v6 = !isFollower;
  v7 = this->fields.isFollower || isFollower;
  v8 = !v6;
  if ( v7 )
    return v8 ^ !this->fields.isFollower;
  if ( this->fields.userServantEntity != item->fields.userServantEntity
    || this->fields._InitPos_k__BackingField != item->fields._InitPos_k__BackingField )
  {
    return 0;
  }
  if ( this->fields.equipIdList && item->fields.equipIdList )
  {
    v10 = 0;
    v11 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BalanceConfig_TypeInfo;
      }
      if ( (signed int)v10 >= v11->static_fields->SvtEquipMax )
        break;
      equipIdList = this->fields.equipIdList;
      if ( !equipIdList )
        goto LABEL_28;
      if ( v10 >= equipIdList->max_length )
        goto LABEL_29;
      v13 = item->fields.equipIdList;
      if ( !v13 )
        goto LABEL_28;
      if ( v10 >= v13->max_length )
      {
LABEL_29:
        sub_B17100(v11, item, method);
        sub_B170A0();
      }
      v14 = equipIdList->m_Items[v10];
      v15 = v13->m_Items[v10];
      v9 = 0;
      ++v10;
      if ( v14 != v15 )
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.followerInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.servantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v21, v22, v23, v24, v25, v26);
  *(_OWORD *)&this->fields.classId = xmmword_3148430;
  this->fields.commandCodeIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v27, v28, v29, v30, v31, v32);
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
  int32_t v7; // w0
  UserServantEntity_o *v8; // x8
  int32_t v9; // w19
  int32_t CardImageLimitCount; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  int32_t SvtId; // w0
  FollowerInfo_o *v17; // x20
  struct QuestRestrictionInfo_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w2
  int32_t v21; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40FDCB1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&UINarrowFigureRender_TypeInfo, v3);
    byte_40FDCB1 = 1;
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
    v9 = SvtId;
    if ( v18 )
    {
      v20 = FollowerInfo__GetReturnTypeByQuestId(v18->fields.questId, 0LL);
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_22:
    sub_B170D4();
  v9 = v7;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v8, 0, 0LL);
LABEL_17:
  v21 = CardImageLimitCount;
  if ( (BYTE3(UINarrowFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  }
  return UINarrowFigureRender__GetAssetName(v9, v21, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__GetCardImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t result; // w0
  UserServantEntity_o *v6; // x0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v8; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2
  BalanceConfig_c *v11; // x0

  if ( (byte_40FDCB3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDCB3 = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        v6 = this->fields.userServantEntity;
        if ( v6 )
          return UserServantEntity__getCardImageLimitCount(v6, 0, 0LL);
LABEL_22:
        sub_B170D4();
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
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      return UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(
               questRestrictionInfo,
               userServantEntity,
               0LL);
    if ( (result & 0x80000000) != 0 )
    {
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B170D4();
      return UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
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
      return FollowerInfo__getCommandCardLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Int32_array *__fastcall PartyOrganizationListViewItem__GetCommandCardList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantEntity_o *servantEntity; // x8
  System_Int32_array *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ServantEntity_o *v8; // x9
  unsigned __int64 v9; // x8
  struct System_Int32_array *cardIds; // x10
  unsigned __int64 max_length; // x11
  il2cpp_array_size_t v12; // w10

  if ( (byte_40FDCB0 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40FDCB0 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity && servantEntity->fields.cardIds )
  {
    result = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, v2);
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
            sub_B17100(result, v6, v7);
            sub_B170A0();
          }
          ++result->m_Items[v12 + 1];
          v8 = this->fields.servantEntity;
        }
        ++v9;
      }
      while ( v8 );
    }
    sub_B170D4();
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

  if ( (byte_40FDCB2 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FDCB2 = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
  return QuestRestrictionInfo__GetCorrectionIconId(questRestrictionInfo, v5, this->fields.isFollower, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__GetDispImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      return UserServantEntity__getDispLimitCount(userServantEntity, 0, 0LL);
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(
               questRestrictionInfo,
               userServantEntity,
               0LL);
    if ( (result & 0x80000000) != 0 )
    {
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B170D4();
      return UserServantEntity__getDispLimitCount(userServantEntity, 0, 0LL);
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
      return FollowerInfo__getDispLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Int64_array *__fastcall PartyOrganizationListViewItem__GetEquipList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Array_o *equipIdList; // x0
  System_Int64_array *result; // x0
  System_Int64_array *v7; // x19
  BalanceConfig_c *v8; // x0

  if ( (byte_40FDCA3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&long___TypeInfo, v4);
    byte_40FDCA3 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( !result )
      return result;
    v7 = result;
    result = (System_Int64_array *)sub_B170BC(result, long___TypeInfo);
    if ( result )
      return result;
    sub_B173C8(v7);
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax, v2);
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
  sub_B16F98(
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

  if ( (byte_40FDCAF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FDCAF = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(questRestrictionInfo, 0LL);
  else
    return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_40FDCAE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FDCAE = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(questRestrictionInfo, 0LL);
  else
    return (System_String_o *)StringLiteral_1;
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
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      return UserServantEntity__getIconLimitCount(userServantEntity, 0, 0LL);
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(
               questRestrictionInfo,
               userServantEntity,
               0LL);
    if ( (result & 0x80000000) != 0 )
    {
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B170D4();
      return UserServantEntity__getIconLimitCount(userServantEntity, 0, 0LL);
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
      return FollowerInfo__getIconImageLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_40FDCB5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FDCB5 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             this->fields.haveIndividualityServant,
             0LL);
  else
    return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_40FDCB6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FDCB6 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             this->fields.haveIndividualityServant,
             0LL);
  else
    return (System_String_o *)StringLiteral_1;
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
  int32_t result; // w0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return UserServantEntity__getPortraitLimitCount(userServantEntity, 0, 0LL);
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(questRestrictionInfo, userServantEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_B170D4();
    return UserServantEntity__getPortraitLimitCount(userServantEntity, 0, 0LL);
  }
  return result;
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
  QuestRestrictionInfo_o *v9; // x0
  QuestRestrictionInfo_o *v10; // x0
  QuestRestrictionInfo_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  System_String_o *ConfirmRestrictionMessage; // x1
  QuestRestrictionInfo_o *v15; // x0
  int32_t InitPos_k__BackingField; // w1

  if ( (byte_40FDCAB & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10329, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FDCAB = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( v6 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v6, 0LL);
LABEL_33:
    sub_B170D4();
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
    v9 = this->fields.questRestrictionInfo;
    if ( !v9 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v9, 0LL);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v10 = this->fields.questRestrictionInfo;
    if ( !v10 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v10, 0LL);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v11 = this->fields.questRestrictionInfo;
    if ( !v11 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetFixNpcMessage(v11, 0LL);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10329, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_33;
    v13 = v12;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_43743732(v13, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v15 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
    {
      InitPos_k__BackingField = 0;
      if ( !v15 )
        goto LABEL_33;
    }
    else
    {
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      if ( !v15 )
        goto LABEL_33;
    }
    return QuestRestrictionInfo__GetRestrictionMessage(v15, InitPos_k__BackingField, 0LL);
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

  if ( (byte_40FDCAD & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, isFixMessage);
    sub_B16FFC(&StringLiteral_27, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    sub_B16FFC(&StringLiteral_10363, v7);
    byte_40FDCAD = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10363, 0LL);
  return System_String__Concat_43746016(
           v10,
           (System_String_o *)StringLiteral_27,
           UniqueIndividualityRestrictionMessage,
           0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_40FDCAC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FDCAC = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetUniqueServantRestrictionMessage(questRestrictionInfo, 0LL);
  else
    return (System_String_o *)StringLiteral_1;
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
    sub_B170D4();
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v6 = v5;
  v7 = this->fields.userServantEntity;
  if ( !v7 )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
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

  if ( (byte_40FDC9F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FDC9F = 1;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v20, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v8,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this->fields.userServantEntity = Entity;
    sub_B16F98(
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
    sub_B170D4();
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewItem__Modify_32313760(this, item, v11);
}


void __fastcall PartyOrganizationListViewItem__Modify_32313760(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v17; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t v21; // w0
  struct ServantEntity_o *Entity; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UserServantEntity_o *v29; // x8
  int32_t v30; // w0
  UserServantEntity_o *v31; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v46; // x8
  __int64 v47; // x21
  __int64 v48; // x23
  int32_t v49; // w0
  bool IsConvertOverwriteImage; // w8
  _BOOL4 isMyServantOrNpcRestriction; // w9
  int32_t TimesToRestart_k__BackingField; // w8
  int32_t FriendshipUpVal_k__BackingField; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_40FDCA0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FDCA0 = 1;
  }
  if ( !item )
    goto LABEL_23;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v17 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_23;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v20 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v20;
  *(_QWORD *)&v54.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
  if ( !v18 )
    goto LABEL_23;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v18,
                                       v21,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  v29 = this->fields.userServantEntity;
  this->fields.frameType = item->fields.frameType;
  if ( !v29 )
    goto LABEL_23;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29->fields.limitCount, 0LL);
  v31 = this->fields.userServantEntity;
  this->fields.svtLimitCount = v30;
  if ( !v31 )
    goto LABEL_23;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v31, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  this->fields.isQuestRestriction = item->fields.isQuestRestriction;
  this->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  this->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  this->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  if ( !questRestrictionInfo )
  {
    IsConvertOverwriteImage = 0;
    goto LABEL_19;
  }
  v46 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_23:
    sub_B170D4();
  v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v48;
  *(_QWORD *)&v55.fields.fakeValue = v47;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v49, 0LL);
LABEL_19:
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  isMyServantOrNpcRestriction = this->fields.isMyServantOrNpcRestriction;
  this->fields.fatigureTime = item->fields.fatigureTime;
  this->fields.isFatigureRecover = item->fields.isFatigureRecover;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  this->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  this->fields._SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
  this->fields._SvtPointRank_k__BackingField = item->fields._SvtPointRank_k__BackingField;
  FriendshipUpVal_k__BackingField = item->fields._FriendshipUpVal_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  this->fields._FriendshipUpVal_k__BackingField = FriendshipUpVal_k__BackingField;
  if ( isMyServantOrNpcRestriction && this->fields.isFollower )
  {
    this->fields.followerInfo = 0LL;
    this->fields.isFollower = 0;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v39, v40, v41, v42, v43, v44);
  }
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, (const MethodInfo *)v39);
}


int32_t __fastcall PartyOrganizationListViewItem__RemoveEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w19

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  if ( !equipIdList->max_length )
  {
    sub_B17100(this, userSvtId, method);
    sub_B170A0();
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct ServantEntity_o *servantEntity; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Int32_array *commandCodeIdList; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x2

  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_B170D4();
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)commandCodeIdList,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)WaveEnemyClassIds_k__BackingField,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v61);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__SetCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *v9; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t questId; // w20
  EventBuddyPointMaster_o *Master_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *v13; // x8
  EventBuddyPointEntity_o *EntityIncludeQuestUnspecified; // x0
  EventBuddyPointEntity_o *v15; // x21
  int32_t PosPoint; // w0
  QuestMaster_o *v17; // x0
  QuestEntity_o *QuestEntity; // x0
  _BOOL4 HasFlag; // w21
  UserQuestMaster_o *v20; // x22
  int64_t UserId; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_40FDC9D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    byte_40FDC9D = 1;
  }
  if ( !this->fields.isFollower )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      if ( QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
        goto LABEL_33;
    }
  }
  if ( this->fields.index >= 1 )
  {
    v9 = this->fields.questRestrictionInfo;
    if ( v9 )
    {
      if ( v9->fields.isFixedMyServantSingle )
        goto LABEL_33;
    }
  }
  if ( this->fields.isServantNumRestriction || this->fields.isFixMultipleNpcRestriction || this->fields.isFixMultipleNpc )
    goto LABEL_33;
  v10 = this->fields.questRestrictionInfo;
  if ( !v10 )
    goto LABEL_34;
  questId = v10->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventBuddyPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v13 = this->fields.questRestrictionInfo;
  if ( !v13 || !Master_WarQuestSelectionMaster )
    goto LABEL_34;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    Master_WarQuestSelectionMaster,
                                    eventId,
                                    questId,
                                    v13->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_33;
  v15 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, this->fields.index, 0LL);
  this->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v15, 0LL) )
    goto LABEL_33;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v17 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !v17 )
    goto LABEL_34;
  QuestEntity = QuestMaster__getQuestEntity(v17, questId, 0LL);
  if ( !QuestEntity )
    goto LABEL_34;
  HasFlag = QuestEntity__HasFlag(QuestEntity, 0x20000LL, 0LL);
  v20 = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v20 )
LABEL_34:
    sub_B170D4();
  if ( UserQuestMaster__getClearCountsFromId(v20, UserId, questId, 0LL) < 1 || !HasFlag )
  {
    this->fields._IsDispCanGetBuddyPoint_k__BackingField = 1;
    return;
  }
LABEL_33:
  this->fields._IsDispCanGetBuddyPoint_k__BackingField = 0;
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
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
  WebViewManager_o *v74; // x0
  WarQuestSelectionMaster_o *v75; // x0
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v77; // x8
  int32_t followerIndex; // w25
  DataMasterBase_WarMaster__WarEntity__int__o *v79; // x23
  int32_t v80; // w2
  struct System_Int64_array **p_equipIdList; // x0
  System_Int32_array **v82; // x1
  int32_t EquipSvtId; // w0
  System_Int32_array **v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct EventUpValSetupInfo_o *v91; // x22
  struct System_Int32_array *v92; // x8
  FollowerInfo_o *v93; // x24
  struct QuestRestrictionInfo_o *v94; // x8
  int32_t v95; // w23
  int32_t v96; // w4
  BalanceConfig_c *v97; // x0
  __int64 v98; // x3
  __int64 v99; // x4
  struct EventUpValSetupInfo_o *v100; // x8
  struct System_Int32_array *v101; // x8
  int32_t v102; // w22
  ServantEntity_o *v103; // x23
  EventPersonalMargeUpValInfo_o *v104; // x21
  EventUpValInfo_o *v105; // x0
  EventDropItemUpValInfo_array *v106; // x0
  WebViewManager_o *Instance; // x0
  struct System_Int64_array *v108; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  WebViewManager_o *v112; // x0
  WarQuestSelectionMaster_o *v113; // x0
  FollowerInfo_c *v114; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v115; // x23
  Il2CppClass *v116; // x24
  Il2CppClass *v117; // x25
  int32_t v118; // w0
  System_Int32_array **Entity; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  struct System_Int64_array *v126; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x0
  __int64 v132; // x3
  __int64 v133; // x4
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct System_Int32_array *v135; // x8
  int32_t v136; // w24
  ServantEntity_o *servantEntity; // x25
  EventPersonalMargeUpValInfo_o *v138; // x23
  EventUpValInfo_o *eventUpValInfo; // x0
  EventDropItemUpValInfo_array *DropItemList; // x0
  System_Int32_array **List; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  WebViewManager_o *v148; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v149; // x24
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v154; // x23
  struct System_Int32_array *v155; // x28
  __int64 v156; // x8
  unsigned __int64 v157; // x20
  int32_t v158; // w26
  EventDetailEntity_o *v159; // x0
  __int64 v160; // x3
  __int64 v161; // x4
  ServantEntity_o *v162; // x27
  EventPersonalMargeUpValInfo_o *v163; // x25
  EventUpValInfo_o *v164; // x0
  EventDropItemUpValInfo_array *v165; // x0
  struct System_String_o *MasterName_k__BackingField; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v167; // x25
  unsigned __int64 v168; // x26
  System_Int32_array **v169; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array *v176; // x23
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  EventUpValSetupInfo_o *v181; // x24
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  UserServantEntity_o *v188; // x22
  EventUpValSetupInfo_o *v189; // x23
  System_Int64_array *v190; // x0
  struct QuestRestrictionInfo_o *v191; // x8
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v193; // x0
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x3
  __int64 v197; // x4
  UserServantEntity_o *v198; // x23
  EventUpValSetupInfo_o *v199; // x22
  System_Int64_array *v200; // x0
  struct QuestRestrictionInfo_o *v201; // x8
  ServantEntity_o *v202; // x22
  EventUpValInfo_o *v203; // x0
  EventDropItemUpValInfo_array *v204; // x0
  __int64 v205; // x1
  __int64 v206; // x2
  __int64 v207; // x3
  __int64 v208; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v209; // x19
  System_Collections_Generic_IEnumerable_T__o *v210; // x0
  System_Int32_array **v211; // x0
  BattleServantConfConponent_o *v212; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v213; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16

  v8 = equipIdList;
  if ( (byte_40FDC9C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, equipIdList);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v18);
    sub_B16FFC(&EventPersonalMargeUpValInfo_TypeInfo, v19);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v20);
    sub_B16FFC(&int___TypeInfo, v21);
    sub_B16FFC(&long___TypeInfo, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v28);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v29);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    byte_40FDC9C = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v34, v35, v36, v37, v38, v39);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventUpValInfo, 0LL, v41, v42, v43, v44, v45, v46);
  p_eventUpValItemList = (BattleServantConfConponent_o *)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v48, v49, v50, v51, v52, v53);
  if ( !this->fields.isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v82 = 0LL;
LABEL_126:
      sub_B16F98((BattleServantConfConponent_o *)p_equipIdList, v82, v56, v57, v58, v59, v60, v61);
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
        v73 = (struct System_Int64_array *)sub_B170BC(v66, long___TypeInfo);
        if ( !v73 )
        {
          sub_B173C8(v63);
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
      v97 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v97 = BalanceConfig_TypeInfo;
      }
      v73 = (struct System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v97->static_fields->SvtEquipMax, v56);
    }
    this->fields.equipIdList = v73;
    v65 = &this->fields.equipIdList;
    sub_B16F98(
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_128;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v108 = *v65;
      if ( !*v65 )
        goto LABEL_128;
      if ( !v108->max_length )
        goto LABEL_112;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_128;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(MasterData_WarQuestSelectionMaster, &this->fields.equipUserServantEntity, v108->m_Items[0], (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
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
        *(_QWORD *)&v216.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v216.fields.fakeValue = parent;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v216, 0LL) >= 1 )
        {
          v112 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v112 )
            goto LABEL_128;
          v113 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)v112,
                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
          v114 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_128;
          v115 = (DataMasterBase_WarMaster__WarEntity__int__o *)v113;
          v117 = v114->_1.declaringType;
          v116 = v114->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v217.fields.currentCryptoKey = v117;
          *(_QWORD *)&v217.fields.fakeValue = v116;
          v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v217, 0LL);
          if ( !v115 )
            goto LABEL_128;
          Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v115,
                                            v118,
                                            (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (BattleServantConfConponent_c *)Entity;
          sub_B16F98(p_equipServantEntity, Entity, v120, v121, v122, v123, v124, v125);
        }
      }
      else
      {
        v126 = *v65;
        if ( !*v65 )
          goto LABEL_128;
        if ( !v126->max_length )
          goto LABEL_112;
        v126->m_Items[0] = 0LL;
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
        EquipList = PartyOrganizationListViewItem__GetEquipList(this, v55);
        if ( !userServantEntity )
          goto LABEL_128;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__getEventUpVal_21447648(userServantEntity, p_eventUpValInfo, setupInfo, EquipList, 0LL);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        this->fields.isEventUpVal = (unsigned __int8)MasterData_WarQuestSelectionMaster & 1;
        if ( questRestrictionInfo )
        {
          if ( !*p_setupInfo )
            goto LABEL_128;
          v135 = (*p_setupInfo)->fields.eventIdList;
          if ( !v135 )
            goto LABEL_128;
          if ( !v135->max_length )
            goto LABEL_112;
          v136 = v135->m_Items[1];
          servantEntity = this->fields.servantEntity;
          v138 = (EventPersonalMargeUpValInfo_o *)sub_B170CC(EventPersonalMargeUpValInfo_TypeInfo, v55, v56, v132, v133);
          EventPersonalMargeUpValInfo___ctor(v138, v136, servantEntity, 0LL);
          eventUpValInfo = this->fields.eventUpValInfo;
          if ( !eventUpValInfo )
            goto LABEL_128;
          DropItemList = EventUpValInfo__GetDropItemList(eventUpValInfo, 0, 0LL);
          if ( !v138 )
            goto LABEL_128;
          EventPersonalMargeUpValInfo__Add(v138, DropItemList, 0LL);
          if ( !EventPersonalMargeUpValInfo__IsEmpty(v138, 0LL) )
          {
            List = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v138, 0LL);
            p_eventUpValItemList->klass = (BattleServantConfConponent_c *)List;
            sub_B16F98(p_eventUpValItemList, List, v142, v143, v144, v145, v146, v147);
          }
        }
        else
        {
          v148 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v148 )
            goto LABEL_128;
          v212 = (BattleServantConfConponent_o *)&this->fields.eventUpValItemList;
          v149 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v148,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
          v154 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v150, v151, v152, v153);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v154,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !*p_setupInfo )
            goto LABEL_128;
          v155 = (*p_setupInfo)->fields.eventIdList;
          if ( !v155 )
            goto LABEL_128;
          v156 = *(_QWORD *)&v155->max_length;
          if ( (int)v156 >= 1 )
          {
            v157 = 0LL;
            while ( 1 )
            {
              if ( v157 >= (unsigned int)v156 )
                goto LABEL_112;
              if ( !v149 )
                goto LABEL_128;
              v158 = v155->m_Items[v157 + 1];
              v159 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v149,
                                              v158,
                                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
              if ( !v159
                || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)EventDetailEntity__HasFlag(v159, 0x800000000LL, 0LL),
                    ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0) )
              {
                v162 = this->fields.servantEntity;
                v163 = (EventPersonalMargeUpValInfo_o *)sub_B170CC(
                                                          EventPersonalMargeUpValInfo_TypeInfo,
                                                          v55,
                                                          v56,
                                                          v160,
                                                          v161);
                EventPersonalMargeUpValInfo___ctor(v163, v158, v162, 0LL);
                v164 = this->fields.eventUpValInfo;
                if ( !v164 )
                  goto LABEL_128;
                v165 = EventUpValInfo__GetDropItemList(v164, 0, 0LL);
                if ( !v163 )
                  goto LABEL_128;
                EventPersonalMargeUpValInfo__Add(v163, v165, 0LL);
                MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)EventPersonalMargeUpValInfo__IsEmpty(v163, 0LL);
                if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
                {
                  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)EventPersonalMargeUpValInfo__GetList(v163, 0LL);
                  if ( !MasterData_WarQuestSelectionMaster )
                    goto LABEL_128;
                  MasterName_k__BackingField = MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
                  v167 = MasterData_WarQuestSelectionMaster;
                  if ( (int)MasterName_k__BackingField >= 1 )
                    break;
                }
              }
LABEL_95:
              LODWORD(v156) = v155->max_length;
              if ( (__int64)++v157 >= (int)v156 )
                goto LABEL_96;
            }
            v168 = 0LL;
            while ( v168 < (unsigned int)MasterName_k__BackingField )
            {
              if ( !v154 )
                goto LABEL_128;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v154,
                *((EventMissionProgressRequest_Argument_ProgressData_o **)&v167->fields.list + v168),
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              LODWORD(MasterName_k__BackingField) = v167->fields._MasterName_k__BackingField;
              if ( (__int64)++v168 >= (int)MasterName_k__BackingField )
                goto LABEL_95;
            }
            goto LABEL_112;
          }
LABEL_96:
          if ( !v154 )
            goto LABEL_128;
          v169 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v154,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          p_eventUpValItemList = (BattleServantConfConponent_o *)&this->fields.eventUpValItemList;
          v212->klass = (BattleServantConfConponent_c *)v169;
          sub_B16F98(v212, v169, v170, v171, v172, v173, v174, v175);
          p_setupInfo = &this->fields.setupInfo;
        }
      }
    }
    if ( !this->fields.questRestrictionInfo )
      return;
    if ( !*p_setupInfo )
    {
      v176 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v56);
      v181 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v177, v178, v179, v180);
      EventUpValSetupInfo___ctor_24610352(v181, v176, 0, 0LL);
      *p_setupInfo = v181;
      sub_B16F98(
        (BattleServantConfConponent_o *)p_setupInfo,
        (System_Int32_array **)v181,
        v182,
        v183,
        v184,
        v185,
        v186,
        v187);
    }
    if ( this->fields.isEventUpVal )
    {
      v188 = this->fields.userServantEntity;
      v189 = this->fields.setupInfo;
      v190 = PartyOrganizationListViewItem__GetEquipList(this, v55);
      v191 = this->fields.questRestrictionInfo;
      if ( !v191 )
        goto LABEL_128;
      if ( !v188 )
        goto LABEL_128;
      UserServantEntity__GetBonusUpVal(
        v188,
        &eventUpVallInfo,
        v189,
        v190,
        v191->fields.questId,
        v191->fields.questPhase,
        0LL);
      if ( !eventUpVallInfo )
        goto LABEL_128;
      dropList = eventUpVallInfo->fields.dropList;
      if ( !dropList )
        goto LABEL_128;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v213,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dropList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
      for ( i = v213;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v193,
              (EventMissionProgressRequest_Argument_ProgressData_o *)i.fields.current,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__) )
      {
        if ( !*p_eventUpValInfo )
          sub_B170D4();
        v193 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*p_eventUpValInfo)->fields.dropList;
        if ( !v193 )
          sub_B170D4();
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    }
    else
    {
      v198 = this->fields.userServantEntity;
      v199 = this->fields.setupInfo;
      v200 = PartyOrganizationListViewItem__GetEquipList(this, v55);
      v201 = this->fields.questRestrictionInfo;
      if ( !v201 || !v198 )
        goto LABEL_128;
      this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                    v198,
                                    p_eventUpValInfo,
                                    v199,
                                    v200,
                                    v201->fields.questId,
                                    v201->fields.questPhase,
                                    0LL);
    }
    v202 = this->fields.servantEntity;
    v104 = (EventPersonalMargeUpValInfo_o *)sub_B170CC(EventPersonalMargeUpValInfo_TypeInfo, v194, v195, v196, v197);
    EventPersonalMargeUpValInfo___ctor(v104, 0, v202, 0LL);
    v203 = this->fields.eventUpValInfo;
    if ( v203 )
    {
      v204 = EventUpValInfo__GetDropItemList(v203, 0, 0LL);
      if ( v104 )
      {
        EventPersonalMargeUpValInfo__Add(v104, v204, 0LL);
        if ( EventPersonalMargeUpValInfo__IsEmpty(v104, 0LL) )
          return;
        if ( p_eventUpValItemList->klass )
        {
          v209 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v205, v206, v207, v208);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v209,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v209 )
            goto LABEL_128;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v209,
            (System_Collections_Generic_IEnumerable_T__o *)p_eventUpValItemList->klass,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v210 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v104, 0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v209,
            v210,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v211 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v209,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          goto LABEL_125;
        }
LABEL_124:
        v211 = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v104, 0LL);
LABEL_125:
        v82 = v211;
        p_eventUpValItemList->klass = (BattleServantConfConponent_c *)v211;
        p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
        goto LABEL_126;
      }
    }
LABEL_128:
    sub_B170D4();
  }
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v56, v57, v58, v59, v60, v61);
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
  if ( FollowerInfo__getEquipSvtId(p_equipUserServantEntity, (int32_t)v63, ReturnTypeByQuestId, 0LL) >= 1 )
  {
    v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v74 )
      goto LABEL_128;
    v75 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v74,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v77 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v79 = (DataMasterBase_WarMaster__WarEntity__int__o *)v75;
    if ( v77 )
    {
      v80 = FollowerInfo__GetReturnTypeByQuestId(v77->fields.questId, 0LL);
      if ( !followerInfo )
        goto LABEL_128;
    }
    else
    {
      v80 = 0;
      if ( !followerInfo )
        goto LABEL_128;
    }
    EquipSvtId = FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v80, 0LL);
    if ( !v79 )
      goto LABEL_128;
    v84 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v79,
                                   EquipSvtId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_equipServantEntity->klass = (BattleServantConfConponent_c *)v84;
    sub_B16F98(p_equipServantEntity, v84, v85, v86, v87, v88, v89, v90);
  }
  v91 = this->fields.setupInfo;
  if ( v91 )
  {
    v92 = v91->fields.eventIdList;
    if ( !v92 )
      goto LABEL_128;
    if ( *(_QWORD *)&v92->max_length )
    {
      v93 = this->fields.followerInfo;
      v94 = this->fields.questRestrictionInfo;
      v95 = this->fields.followerIndex;
      if ( v94 )
      {
        v96 = FollowerInfo__GetReturnTypeByQuestId(v94->fields.questId, 0LL);
        if ( !v93 )
          goto LABEL_128;
      }
      else
      {
        v96 = 0;
        if ( !v93 )
          goto LABEL_128;
      }
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)FollowerInfo__getEventUpVal_23237116(v93, p_eventUpValInfo, v91, v95, v96, 0LL);
      v100 = this->fields.setupInfo;
      this->fields.isEventUpVal = (unsigned __int8)MasterData_WarQuestSelectionMaster & 1;
      if ( !v100 )
        goto LABEL_128;
      v101 = v100->fields.eventIdList;
      if ( !v101 )
        goto LABEL_128;
      if ( v101->max_length )
      {
        v102 = v101->m_Items[1];
        v103 = this->fields.servantEntity;
        v104 = (EventPersonalMargeUpValInfo_o *)sub_B170CC(EventPersonalMargeUpValInfo_TypeInfo, v55, v56, v98, v99);
        EventPersonalMargeUpValInfo___ctor(v104, v102, v103, 0LL);
        v105 = this->fields.eventUpValInfo;
        if ( v105 )
        {
          v106 = EventUpValInfo__GetDropItemList(v105, 0, 0LL);
          if ( v104 )
          {
            EventPersonalMargeUpValInfo__Add(v104, v106, 0LL);
            if ( EventPersonalMargeUpValInfo__IsEmpty(v104, 0LL) )
              return;
            goto LABEL_124;
          }
        }
        goto LABEL_128;
      }
LABEL_112:
      sub_B17100(MasterData_WarQuestSelectionMaster, v55, v56);
      sub_B170A0();
    }
  }
}


void __fastcall PartyOrganizationListViewItem__SetEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !equipIdList->max_length )
    {
      sub_B17100(this, userSvtId, method);
      sub_B170A0();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)classIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationListViewItem__Set_32313008(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v24; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  int32_t v28; // w0
  struct ServantEntity_o *Entity; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UserServantEntity_o *v36; // x8
  int32_t v37; // w0
  UserServantEntity_o *v38; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v49; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FDC9E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FDC9E = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_13;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.followerInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_13;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v27 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v27;
  *(_QWORD *)&v50.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
  if ( !v25 )
    goto LABEL_13;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v25,
                                       v28,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  v36 = this->fields.userServantEntity;
  this->fields.frameType = item->fields.frameType;
  if ( !v36
    || (v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36->fields.limitCount, 0LL),
        v38 = this->fields.userServantEntity,
        this->fields.svtLimitCount = v37,
        !v38) )
  {
LABEL_13:
    sub_B170D4();
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v38, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v49);
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
    sub_B170D4();
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
  sub_B16F98(
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
  sub_B16F98(v11, (System_Int32_array **)followerInfo, v21, v22, v23, v24, v25, v26);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B16F98(v13, (System_Int32_array **)servantEntity, v28, v29, v30, v31, v32, v33);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_B16F98(v15, (System_Int32_array **)commandCodeIdList, v35, v36, v37, v38, v39, v40);
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
  sub_B16F98(v16, (System_Int32_array **)friendPointCampaignEntityList, v43, v44, v45, v46, v47, v48);
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
  sub_B16F98((BattleServantConfConponent_o *)v19, (System_Int32_array **)v105, v49, v50, v51, v52, v53, v54);
  item->fields.followerInfo = v12;
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
    sub_B170D4();
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
  struct ListViewObject_o *viewObject; // x20
  __int64 v6; // x9
  PartyOrganizationListViewItem_o *v7; // x0
  PartyServantListViewItem_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_40FDCB8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&PartyOrganizationListViewObject_TypeInfo, v4);
    byte_40FDCB8 = 1;
  }
  if ( !item )
    goto LABEL_14;
  viewObject = item->fields.viewObject;
  if ( viewObject
    && ((v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&viewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    sub_B173C8(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_32313760(v7, v8, v9);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)viewObject, 0LL, 0LL) )
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
      sub_B170D4();
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
  int32_t v13; // w0
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v16; // x0

  if ( (byte_40FDCB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FDCB4 = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v8 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v11);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B170D4();
    Entity = ServantCostumeMaster__GetEntity(MasterData_WarQuestSelectionMaster, v13, v8, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    byte_40F87E5 = 1;
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

  if ( (byte_40FDCA9 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FDCA9 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
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

  if ( (byte_40FDCAA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FDCAA = 1;
  }
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return ServantEntity__getName(equipServantEntity, -1, -1, 0LL);
  else
    return (System_String_o *)StringLiteral_1;
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

  if ( (byte_40FDCA8 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FDCA8 = 1;
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

  if ( (byte_40FDCA7 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FDCA7 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v7, 0LL);
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

  if ( (byte_40FDCB7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FDCB7 = 1;
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
  FollowerInfo_o *v10; // x21
  struct QuestRestrictionInfo_o *v11; // x8
  int32_t v12; // w20
  int32_t ReturnTypeByQuestId; // w2

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
    LODWORD(followerInfo) = FollowerInfo__getAtk(followerInfo, followerIndex, v9, 0LL);
    if ( equipServantEntity )
    {
      v10 = this->fields.followerInfo;
      v11 = this->fields.questRestrictionInfo;
      v12 = this->fields.followerIndex;
      if ( v11 )
      {
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v11->fields.questId, 0LL);
        if ( v10 )
        {
LABEL_11:
          LODWORD(followerInfo) = FollowerInfo__getEquipAtk(v10, v12, ReturnTypeByQuestId, 0LL) + (_DWORD)followerInfo;
          return (int)followerInfo;
        }
      }
      else
      {
        ReturnTypeByQuestId = 0;
        if ( v10 )
          goto LABEL_11;
      }
      sub_B170D4();
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
  FollowerInfo_o *v10; // x21
  struct QuestRestrictionInfo_o *v11; // x8
  int32_t v12; // w20
  int32_t ReturnTypeByQuestId; // w2

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
    LODWORD(followerInfo) = FollowerInfo__getHp(followerInfo, followerIndex, v9, 0LL);
    if ( equipServantEntity )
    {
      v10 = this->fields.followerInfo;
      v11 = this->fields.questRestrictionInfo;
      v12 = this->fields.followerIndex;
      if ( v11 )
      {
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v11->fields.questId, 0LL);
        if ( v10 )
        {
LABEL_11:
          LODWORD(followerInfo) = FollowerInfo__getEquipHp(v10, v12, ReturnTypeByQuestId, 0LL) + (_DWORD)followerInfo;
          return (int)followerInfo;
        }
      }
      else
      {
        ReturnTypeByQuestId = 0;
        if ( v10 )
          goto LABEL_11;
      }
      sub_B170D4();
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
  int32_t limitCount; // w20
  const MethodInfo *v13; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct ServantEntity_o *servantEntity; // x8
  int64_t v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  int32_t v21; // w0
  WarQuestSelectionMaster_o *v22; // x0
  struct ServantEntity_o *v23; // x8
  ServantLimitImageMaster_o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  int32_t v27; // w0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v29; // w1
  ServantEntity_o *v30; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_40FDCA5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FDCA5 = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1;
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
    *(_QWORD *)&v32.fields.currentCryptoKey = v10;
    *(_QWORD *)&v32.fields.fakeValue = v9;
    limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
  }
  else
  {
    limitCount = -1;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v13);
    if ( !ServantLeader )
      goto LABEL_42;
    limitCount = ServantLeader->fields.limitCount;
  }
  if ( limitCount != -1 )
    goto LABEL_29;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_42;
  v18 = UserId;
  v20 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v20;
  *(_QWORD *)&v33.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_42:
    sub_B170D4();
  if ( !UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v18, v21, 0LL) )
  {
    v30 = this->fields.servantEntity;
    if ( v30 )
    {
      v29 = -1;
      return ServantEntity__getName(v30, v29, -1, 0LL);
    }
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_42;
  limitCount = entity->fields.maxLimitCount;
LABEL_29:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v22 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v23 = this->fields.servantEntity;
  if ( !v23 )
    goto LABEL_42;
  v24 = (ServantLimitImageMaster_o *)v22;
  v26 = *(_QWORD *)&v23->fields.id.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v26;
  *(_QWORD *)&v34.fields.fakeValue = v25;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
  if ( !v24 )
    goto LABEL_42;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v24, v27, limitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_42;
  v29 = ServantLimitCountSealAfter;
  v30 = this->fields.servantEntity;
  return ServantEntity__getName(v30, v29, -1, 0LL);
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

  if ( (byte_40FDCA4 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FDCA4 = 1;
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
  struct FollowerInfo_o *v5; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t nameLimitCount; // w20
  const MethodInfo *v11; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  ServantEntity_o *servantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40FDCA6 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326, v3);
    byte_40FDCA6 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && FollowerInfo__get_IsNpc(followerInfo, 0LL) )
  {
    v5 = this->fields.followerInfo;
    if ( v5 )
      return v5->fields.userName;
    goto LABEL_20;
  }
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_18326;
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
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    nameLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  }
  else
  {
    nameLimitCount = this->fields.nameLimitCount;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v11);
    if ( !ServantLeader )
      goto LABEL_20;
    nameLimitCount = ServantLeader->fields.limitCount;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
LABEL_20:
    sub_B170D4();
  return ServantEntity__getName(servantEntity, nameLimitCount, -1, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}