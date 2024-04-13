void __fastcall EventServantFatigueListViewItem___ctor(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
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
  IconLabelInfo_o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  IconLabelInfo_o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int64_t Instance; // x0
  __int64 v74; // x1
  struct UserServantEntity_o *v75; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v76; // x26
  __int64 v77; // x27
  __int64 v78; // x28
  struct ServantEntity_o *Entity; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct UserServantEntity_o *v86; // x8
  ServantEntity_o *servantEntity; // x26
  struct System_String_o *Name; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  UserServantEntity_o *v95; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v97; // x8
  struct UserServantEntity_o *v98; // x8
  __int128 v99; // q1
  __int64 v100; // x26
  bool v101; // w8
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct UserServantEntity_o *v114; // x8
  UserEventServantFatigueMaster_o *v115; // x24
  __int64 v116; // x25
  __int64 v117; // x26
  int64_t v118; // x25
  struct UserServantEntity_o *v119; // x8
  __int128 v120; // q0
  int64_t v121; // x0
  struct UserServantEntity_o *v122; // x8
  __int128 v123; // q0
  UserServantCollectionMaster_o *v124; // x22
  struct UserServantEntity_o *v125; // x8
  int64_t v126; // x23
  __int64 v127; // x24
  __int64 v128; // x25
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v130; // x23
  int64_t v131; // x22
  unsigned int v132; // w24
  __int64 v133; // x25
  __int64 v134; // x8
  unsigned int v135; // w26
  __int64 v136; // x8
  unsigned int v137; // w9
  __int64 v138; // x8
  struct UserServantEntity_o *v139; // x9
  __int128 v140; // q0
  __int64 v141; // x28
  __int64 v142; // x0
  UserServantEntity_o *v143; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  int v158; // w22
  BalanceConfig_c *v159; // x8
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  struct System_String_o *v166; // x1
  int64_t v167; // x23
  int64_t v168; // x8
  struct ServantEntity_o *v169; // x9
  struct UserServantEntity_o *v170; // x8
  __int64 v171; // x21
  __int64 v172; // x22
  int32_t v173; // w8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+90h] [xbp-80h]
  int64_t recoverAt[2]; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16

  if ( (byte_42EC03B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)userServantEntity, eventId, baseUserSvtId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v31, v32, v33);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&NetworkManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46, v47, v48);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v49, v50, v51);
    byte_42EC03B = 1;
  }
  recoverAt[0] = 0LL;
  v52 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v52, 0LL);
  this->fields.iconLabelInfo1 = v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v59, 0LL);
  this->fields.iconLabelInfo2 = v59;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v75 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v76 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v78 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
  v77 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v181.fields.currentCryptoKey = v78;
  *(_QWORD *)&v181.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v181, 0LL);
  if ( !v76 )
    goto LABEL_104;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v76,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = this->fields.userServantEntity;
  if ( !v86 )
    goto LABEL_104;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v86->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_104;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)Name,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_104;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
  v95 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v95 )
    goto LABEL_104;
  Rarity = UserServantEntity__getRarity(v95, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_104;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v97 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v97 )
    goto LABEL_104;
  this->fields.isChoice = UserServantEntity__IsChoice(v97, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_104;
  v98 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v99 = *(_OWORD *)&v98->fields.id.fields.fakeValue;
  v100 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)&v98->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v179.fields.fakeValue = v99;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v178 = v179;
  v101 = v100 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v178, 0LL);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v101;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetRecoveryFatigueItem,
    (System_Int32_array **)targetRecoveryFatigueItem,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  this->fields.isFatigueRecover = 0;
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.fatigueTime = -1LL;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_104;
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isHeroineSvt = 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v114 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v115 = (UserEventServantFatigueMaster_o *)Instance;
  v117 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
  v116 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v182.fields.currentCryptoKey = v117;
  *(_QWORD *)&v182.fields.fakeValue = v116;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v182, 0LL);
  if ( !v115 )
    goto LABEL_104;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v115,
         recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         Instance,
         0LL) )
  {
    v118 = recoverAt[0];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    if ( v118 > Instance )
      this->fields.fatigueTime = recoverAt[0];
    if ( this->fields.isFatigueRecover )
    {
      v119 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_104;
      v120 = *(_OWORD *)&v119->fields.id.fields.fakeValue;
      *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)&v119->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v179.fields.fakeValue = v120;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v177 = v179;
      v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v177, 0LL);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v115, eventId, v121, 0LL);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29295864(126, 0LL) )
      this->fields.isCanNotSelect = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v122 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v123 = *(_OWORD *)&v122->fields.userId.fields.fakeValue;
  v124 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)&v122->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v179.fields.fakeValue = v123;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v176 = v179;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v176, 0LL);
  v125 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v126 = Instance;
  v128 = *(_QWORD *)&v125->fields.svtId.fields.currentCryptoKey;
  v127 = *(_QWORD *)&v125->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v183.fields.currentCryptoKey = v128;
  *(_QWORD *)&v183.fields.fakeValue = v127;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v183, 0LL);
  if ( !v124 )
    goto LABEL_104;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v124, v126, Instance, 0LL);
  if ( !Instance )
    goto LABEL_104;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_104;
  Instance = (int64_t)UserDeckMaster__getDeckList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
  if ( !Instance )
    goto LABEL_104;
  v130 = *(_QWORD *)(Instance + 24);
  v131 = Instance;
  if ( (int)v130 < 1 )
    goto LABEL_85;
  v132 = 0;
LABEL_66:
  v133 = *(_QWORD *)(v131 + 8LL * (int)v132 + 32);
  if ( !v133 )
    goto LABEL_104;
  v134 = *(_QWORD *)(v133 + 48);
  if ( !v134 )
    goto LABEL_104;
  v135 = 0;
  while ( 1 )
  {
    v136 = *(_QWORD *)(v134 + 16);
    if ( !v136 )
      goto LABEL_104;
    v137 = *(_DWORD *)(v136 + 24);
    if ( (int)v135 >= (int)v137 )
    {
      if ( this->fields.isParty )
        goto LABEL_85;
      if ( (int)++v132 >= (int)v130 )
        goto LABEL_85;
      if ( v132 >= *(_DWORD *)(v131 + 24) )
      {
LABEL_83:
        v142 = sub_B5D6C8(Instance);
        sub_B5D668(v142, 0LL);
      }
      goto LABEL_66;
    }
    if ( v135 >= v137 )
      goto LABEL_83;
    v138 = *(_QWORD *)(v136 + 8LL * (int)v135 + 32);
    if ( !v138 )
      goto LABEL_104;
    v139 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_104;
    v140 = *(_OWORD *)&v139->fields.id.fields.fakeValue;
    v141 = *(_QWORD *)(v138 + 24);
    *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)&v139->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v179.fields.fakeValue = v140;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v175 = v179;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v175, 0LL);
    if ( v141 == Instance )
      break;
    v134 = *(_QWORD *)(v133 + 48);
    ++v135;
    if ( !v134 )
      goto LABEL_104;
  }
  this->fields.isParty = 1;
LABEL_85:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v143 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v143 )
    goto LABEL_104;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v143, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_104;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_104;
  v158 = *(_DWORD *)(Instance + 276);
  v159 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v159 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v159->static_fields->StatusUpAdjustHp * v158;
  if ( !Instance )
    goto LABEL_104;
  this->fields.atkReinforceValue = v159->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_104;
  v166 = *(struct System_String_o **)(Instance + 24);
  v167 = Instance;
  this->fields.className = v166;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)v166,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  v168 = *(int *)(v167 + 48);
  v169 = this->fields.servantEntity;
  this->fields.priority = v168;
  this->fields.sortValue1B = v168;
  if ( !v169 )
    goto LABEL_104;
  v170 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  this->fields.sortValue2 = ((__int64)v169->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v170->fields.lv;
  v172 = *(_QWORD *)&v170->fields.svtId.fields.currentCryptoKey;
  v171 = *(_QWORD *)&v170->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v184.fields.currentCryptoKey = v172;
  *(_QWORD *)&v184.fields.fakeValue = v171;
  v173 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v184, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v173;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_104:
    sub_B5D69C(Instance, v74);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall EventServantFatigueListViewItem__ClearFatigue(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.fatigueTime = -1LL;
}


bool __fastcall EventServantFatigueListViewItem__GetIsEventUpValShow(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventServantFatigueListViewItem_o *v5; // x19
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
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  struct ServantEntity_o *servantEntity; // x8
  __int64 v21; // x20
  __int64 v22; // x21
  struct ServantEntity_o *v23; // x8
  EventServantFatigueMaster_o *v24; // x20
  int32_t bonusKindId; // w19
  __int64 v26; // x21
  __int64 v27; // x22
  const MethodInfo *v28; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v5 = this;
  if ( (byte_42EC03F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFilterMaster___, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantFatigueMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    this = (EventServantFatigueListViewItem_o *)sub_B5D5C4(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v15,
                                                  v16,
                                                  v17);
    byte_42EC03F = 1;
  }
  if ( !sort )
    goto LABEL_33;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind2 - 1) > 1 )
    return 1;
  if ( v5->fields.bonusKind != bonusKind2
    || (bonusKind2Id = v5->fields.bonusKindId, bonusKind2Id != sort->fields.bonusKind2Id) )
  {
    v5->fields.bonusKind = bonusKind2;
    bonusKind2Id = sort->fields.bonusKind2Id;
    v5->fields.bonusKindId = bonusKind2Id;
    bonusKind2 = sort->fields.bonusKind2;
  }
  if ( bonusKind2 != 2 )
  {
    if ( bonusKind2 == 1 )
    {
      this = (EventServantFatigueListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_33;
      this = (EventServantFatigueListViewItem_o *)UserServantEntity__getEventUpVal_21840416(
                                                    (UserServantEntity_o *)this,
                                                    v5->fields.setupInfo,
                                                    bonusKind2Id,
                                                    0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
    }
    servantEntity = v5->fields.servantEntity;
    if ( servantEntity )
    {
      v22 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v21 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v22;
      *(_QWORD *)&v31.fields.fakeValue = v21;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL) < 1 )
        return 0;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
      v23 = v5->fields.servantEntity;
      if ( v23 )
      {
        v24 = (EventServantFatigueMaster_o *)this;
        bonusKindId = v5->fields.bonusKindId;
        v27 = *(_QWORD *)&v23->fields.id.fields.currentCryptoKey;
        v26 = *(_QWORD *)&v23->fields.id.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v32.fields.currentCryptoKey = v27;
        *(_QWORD *)&v32.fields.fakeValue = v26;
        this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                      v32,
                                                      0LL);
        if ( v24 )
          return EventServantFatigueMaster__IsBonusFilterTarget(v24, bonusKindId, (int32_t)this, v28);
      }
    }
LABEL_33:
    sub_B5D69C(this, sort);
  }
  this = (EventServantFatigueListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  this = (EventServantFatigueListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  if ( !userServantEntity || !this )
    goto LABEL_33;
  return ServantFilterMaster__IsEnableServant(
           (ServantFilterMaster_o *)this,
           userServantEntity[5],
           v5->fields.bonusKindId,
           0LL);
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventServantFatigueListViewItem_o *v4; // x19
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v8; // x8
  unsigned __int64 v9; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v11; // w20
  ServantEntity_o *servantEntity; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  int32_t v16; // w22
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_42EC042 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B5D5C4(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  (_DWORD)method,
                                                  v2,
                                                  v3);
    byte_42EC042 = 1;
  }
  targetRecoveryFatigueItem = v4->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem
    || (eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_19:
    sub_B5D69C(this, method);
  }
  v8 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v8 )
    {
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
    }
    userServantEntity = v4->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_19;
    v11 = targetIndividuality->m_Items[v9 + 1];
    servantEntity = v4->fields.servantEntity;
    v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v14;
    *(_QWORD *)&v19.fields.fakeValue = v13;
    this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v19,
                                                  0LL);
    v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
    if ( !v15 )
      goto LABEL_19;
    v16 = (int)this;
    this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v15[8],
                                                  0LL);
    if ( !servantEntity )
      goto LABEL_19;
    this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(
                                                  servantEntity,
                                                  v16,
                                                  (int32_t)this,
                                                  v11,
                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v8) = targetIndividuality->max_length;
    if ( (__int64)++v9 >= (int)v8 )
      return 0;
  }
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality_31547964(
        EventServantFatigueListViewItem_o *this,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventServantFatigueListViewItem_o *v5; // x19
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v8; // x8
  unsigned __int64 v9; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v11; // w20
  ServantEntity_o *servantEntity; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  int32_t v16; // w22
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v5 = this;
  if ( (byte_42EC043 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B5D5C4(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  (_DWORD)targetRecoveryFatigueItem,
                                                  (_DWORD)method,
                                                  v3);
    byte_42EC043 = 1;
  }
  if ( !targetRecoveryFatigueItem
    || (eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_19:
    sub_B5D69C(this, targetRecoveryFatigueItem);
  }
  v8 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v8 )
    {
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
    }
    userServantEntity = v5->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_19;
    v11 = targetIndividuality->m_Items[v9 + 1];
    servantEntity = v5->fields.servantEntity;
    v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v14;
    *(_QWORD *)&v19.fields.fakeValue = v13;
    this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v19,
                                                  0LL);
    v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
    if ( !v15 )
      goto LABEL_19;
    v16 = (int)this;
    this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v15[8],
                                                  0LL);
    if ( !servantEntity )
      goto LABEL_19;
    this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(
                                                  servantEntity,
                                                  v16,
                                                  (int32_t)this,
                                                  v11,
                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v8) = targetIndividuality->max_length;
    if ( (__int64)++v9 >= (int)v8 )
      return 0;
  }
}


bool __fastcall EventServantFatigueListViewItem__IsMatchServantFilter(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
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
  FilterKindList_c *v15; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x21
  UserServantEntity_o *v27; // x0
  int32_t dispLimitCount; // w22
  UserServantEntity_o *v29; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v45; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v47; // w0
  __int64 v48; // x0

  if ( (byte_42EC03E & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v12, v13, v14);
    byte_42EC03E = 1;
  }
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v17 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v17 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v17->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( (BYTE3(ServantEventBonusFilterController_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    }
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_66:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_67;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
    goto LABEL_40;
  v27 = this->fields.userServantEntity;
  if ( v27 )
  {
    dispLimitCount = this->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v27, 0, 0LL) )
    {
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_66;
      ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                   (UserServantEntity_o *)ClassGroupFilterKindList,
                                   0,
                                   0LL);
      v29 = this->fields.userServantEntity;
      this->fields.dispLimitCount = ClassGroupFilterKindList;
      if ( !v29 )
        goto LABEL_66;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v29, -1, 0LL);
      this->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
        (System_Int32_array **)SkillCategoryIdList,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_66;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)ClassGroupFilterKindList,
                                       0,
                                       0LL);
      this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
        (System_Int32_array **)TreasureDeviceCategoryIdList,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
  }
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_67;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0LL);
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
  {
LABEL_67:
    v48 = sub_B5D6C8(ClassGroupFilterKindList);
    sub_B5D668(v48, 0LL);
  }
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
  v45 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v47 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v45) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v47 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v47 )
  {
    return 0;
  }
LABEL_40:
  v24 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v24 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v24->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v25, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall EventServantFatigueListViewItem__ModifyChoiceItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B5D69C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EventServantFatigueListViewItem__ModifyItem(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventServantFatigueListViewItem__ModifyLockItem(this, v9);
  EventServantFatigueListViewItem__ModifyChoiceItem(this, v10);
  EventServantFatigueListViewItem__ModifyPushItem(this, v11);
}


void __fastcall EventServantFatigueListViewItem__ModifyLockItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B5D69C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventServantFatigueListViewItem__ModifyPushItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v8; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-30h]

  if ( (byte_42EC03C & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC03C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_B5D69C(SelfUserGame, v6);
  v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v10, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__SetSortValue(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t *p_sortValue0; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  int64_t IsBaseSvt; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  EventServantRecoveryFatigueItem_o **manager; // x8
  __int64 v21; // x11
  int64_t fatigueTime; // x22
  bool IsMatchIndividuality_31547964; // w0
  int64_t v24; // x8
  __int64 v25; // x9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v28; // x21
  __int64 v29; // x22
  struct UserServantEntity_o *v30; // x8
  __int128 v31; // q1
  struct UserServantEntity_o *v32; // x8
  int64_t rarity; // x8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v36; // w1
  struct UserServantEntity_o *v37; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v40; // w1
  struct UserServantEntity_o *v41; // x8
  struct ServantEntity_o *v42; // x8
  struct ListViewManager_o *v43; // x8
  __int64 v44; // x11
  struct ListViewManager_o *v45; // x20
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t priority; // x10
  struct ServantEntity_o *v48; // x8
  int32_t lv; // w20
  struct UserServantEntity_o *v50; // x8
  __int64 v51; // x21
  __int64 v52; // x22
  const MethodInfo *v53; // x2
  struct ServantEntity_o *v54; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v56; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_42EC03D & 1) == 0 )
  {
    sub_B5D5C4(&EventServantFatigueListViewManager_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    byte_42EC03D = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventServantFatigueListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventServantFatigueListViewItem__IsMatchServantFilter(this, sort, v14)
    || (IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v13), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventServantFatigueListViewItem__GetIsEventUpValShow(this, sort, v17), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  if ( this->fields.isSwapChoice != this->fields.isChoice )
  {
    if ( !sort )
      goto LABEL_99;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10LL;
  }
  IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v16);
  if ( (IsBaseSvt & 1) != 0 )
  {
    v19 = 30LL;
  }
  else
  {
    if ( !sort )
      goto LABEL_99;
    if ( !sort->fields.isSmartSort )
      goto LABEL_33;
    manager = (EventServantRecoveryFatigueItem_o **)sort->fields.manager;
    if ( !manager )
      goto LABEL_99;
    v21 = *(&EventServantFatigueListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*manager)[2].monitor) < (unsigned int)v21
      || *((EventServantFatigueListViewManager_c **)(*manager)[1].fields.nameSprite + v21 - 1) != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_99;
    }
    fatigueTime = this->fields.fatigueTime;
    IsMatchIndividuality_31547964 = EventServantFatigueListViewItem__IsMatchIndividuality_31547964(
                                      this,
                                      manager[66],
                                      v18);
    v24 = 10LL;
    if ( IsMatchIndividuality_31547964 )
      v24 = 20LL;
    if ( IsMatchIndividuality_31547964 )
      v25 = -10LL;
    else
      v25 = -20LL;
    if ( fatigueTime < 1 )
      v24 = v25;
    this->fields.sortValue0 = v24;
    if ( sort->fields.isChoiceSort && this->fields.isChoice )
      this->fields.sortValue0B = 10LL;
    if ( !this->fields.isCanNotSelect )
      goto LABEL_33;
    v19 = -30LL;
  }
  *p_sortValue0 = v19;
LABEL_33:
  IsBaseSvt = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsBaseSvt )
    goto LABEL_99;
  IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.sortValue1B = this->fields.priority;
  if ( !servantEntity )
    goto LABEL_99;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_99;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v29 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v29;
  *(_QWORD *)&v61.fields.fakeValue = v28;
  IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL);
  this->fields.sortValue2B = (int)IsBaseSvt;
  if ( !sort )
LABEL_99:
    sub_B5D69C(IsBaseSvt, v16);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v30 = this->fields.userServantEntity;
      if ( !v30 )
        goto LABEL_99;
      v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
      *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v59.fields.fakeValue = v31;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v58 = v59;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v58, 0LL);
      v32 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v32 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v32->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_78;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_65;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 256);
      goto LABEL_83;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_21848072((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = tdMaxLv[0];
      v36 = 33;
      goto LABEL_77;
    case 5:
      v37 = this->fields.userServantEntity;
      if ( !v37 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v37->fields.hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v37->fields.adjustHp;
      hp = v37->fields.hp;
      v40 = 3;
      goto LABEL_60;
    case 6:
      v41 = this->fields.userServantEntity;
      if ( !v41 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v41->fields.atk;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v41->fields.adjustAtk;
      hp = v41->fields.atk;
      v40 = 5;
LABEL_60:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)IsBaseSvt, v40, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_78;
    case 7:
      v42 = this->fields.servantEntity;
      if ( !v42 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v42->fields.cost;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)IsBaseSvt, 7, v42->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_78;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_65:
      this->fields.sortValue1 = rarity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      goto LABEL_83;
    case 0xA:
      friendship = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = this->fields.friendshipMax;
      v36 = 32;
      goto LABEL_77;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_96;
      v43 = sort->fields.manager;
      if ( v43
        && (v44 = *(&EventServantFatigueListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v43->klass->_2.bitflags2 + 1) >= (unsigned int)v44) )
      {
        if ( (EventServantFatigueListViewManager_c *)v43->klass->_2.typeHierarchy[v44 - 1] == EventServantFatigueListViewManager_TypeInfo )
          v45 = sort->fields.manager;
        else
          v45 = 0LL;
      }
      else
      {
        v45 = 0LL;
      }
      v50 = this->fields.userServantEntity;
      if ( !v50 )
        goto LABEL_99;
      v52 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
      v51 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v62.fields.currentCryptoKey = v52;
      *(_QWORD *)&v62.fields.fakeValue = v51;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v62, 0LL);
      if ( !v45 )
        goto LABEL_99;
      IsBaseSvt = EventServantFatigueListViewManager__GetAmountSortValue(
                    (EventServantFatigueListViewManager_o *)v45,
                    IsBaseSvt,
                    v53);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_96:
      v54 = this->fields.servantEntity;
      if ( !v54 )
        goto LABEL_99;
      collectionNo = v54->fields.collectionNo;
      v56 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v56 )
        goto LABEL_99;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      lv = v56->fields.lv;
      IsBaseSvt = (int64_t)v56;
      goto LABEL_85;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v36 = 44;
      goto LABEL_77;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v36 = 45;
LABEL_77:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)IsBaseSvt, v36, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_78:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_99;
      iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_84:
      lv = *(_DWORD *)(IsBaseSvt + 256);
LABEL_85:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__Set_28463004(iconLabelInfo1, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
      LOBYTE(IsBaseSvt) = 1;
      break;
    case 0x19:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !IsBaseSvt )
        goto LABEL_99;
      priority = this->fields.priority;
      v48 = this->fields.servantEntity;
      this->fields.sortValue1B = *(int *)(IsBaseSvt + 256);
      this->fields.sortValue2 = priority;
      if ( !v48 )
        goto LABEL_99;
      this->fields.sortValue2B = ((__int64)v48->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | *(int *)(IsBaseSvt + 256);
LABEL_83:
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      goto LABEL_84;
    default:
      return IsBaseSvt;
  }
  return IsBaseSvt;
}


void __fastcall EventServantFatigueListViewItem__SetUserServantEntity(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.userServantEntity = userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall EventServantFatigueListViewItem__SwapChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall EventServantFatigueListViewItem__SwapLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


System_String_o *__fastcall EventServantFatigueListViewItem__get_ClassName(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.className;
}


int64_t __fastcall EventServantFatigueListViewItem__get_FatigueTime(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigueTime;
}


IconLabelInfo_o *__fastcall EventServantFatigueListViewItem__get_IconInfo1(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall EventServantFatigueListViewItem__get_IconInfo2(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall EventServantFatigueListViewItem__get_IsBaseSvt(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventServantFatigueListViewItem_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42EC041 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B5D5C4(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  (_DWORD)method,
                                                  v2,
                                                  v3);
    byte_42EC041 = 1;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B5D69C(this, method);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v4->fields.baseUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v9, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__get_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool __fastcall EventServantFatigueListViewItem__get_IsCanNotSelect(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


bool __fastcall EventServantFatigueListViewItem__get_IsCanNotSelectPush(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v5; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsEventJoin(userServantEntity, 0LL) )
    return 1;
  if ( this->fields.isCanNotLock )
    return 1;
  v5 = this->fields.userServantEntity;
  if ( !v5 || UserServantEntity__IsLeave(v5, 0LL) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_11;
  if ( UserServantEntity__IsCombineMaterial(userServantEntity, 0LL) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_11:
    sub_B5D69C(userServantEntity, method);
  return UserServantEntity__IsStatusUp(userServantEntity, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__get_IsChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall EventServantFatigueListViewItem__get_IsDispChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall EventServantFatigueListViewItem__get_IsDispLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall EventServantFatigueListViewItem__get_IsFatigueRecover(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFatigueRecover;
}


bool __fastcall EventServantFatigueListViewItem__get_IsHeroineSvt(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool __fastcall EventServantFatigueListViewItem__get_IsLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall EventServantFatigueListViewItem__get_IsParty(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isParty;
}


bool __fastcall EventServantFatigueListViewItem__get_IsPush(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall EventServantFatigueListViewItem__get_IsSwapChoice(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall EventServantFatigueListViewItem__get_IsSwapLock(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


int32_t __fastcall EventServantFatigueListViewItem__get_Rarity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *__fastcall EventServantFatigueListViewItem__get_ServantEntity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


System_String_o *__fastcall EventServantFatigueListViewItem__get_ServantName(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantName;
}


UserServantEntity_o *__fastcall EventServantFatigueListViewItem__get_UserServantEntity(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall EventServantFatigueListViewItem__get_UserSvtId(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventServantFatigueListViewItem_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42EC040 & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B5D5C4(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  (_DWORD)method,
                                                  v2,
                                                  v3);
    byte_42EC040 = 1;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B5D69C(this, method);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL);
}


void __fastcall EventServantFatigueListViewItem__set_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}