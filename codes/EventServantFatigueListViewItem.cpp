void __fastcall EventServantFatigueListViewItem___ctor(
        EventServantFatigueListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
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
  IconLabelInfo_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  IconLabelInfo_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int64_t Instance; // x0
  __int64 v48; // x1
  struct UserServantEntity_o *v49; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x26
  __int64 v51; // x27
  __int64 v52; // x28
  struct ServantEntity_o *Entity; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct UserServantEntity_o *v60; // x8
  ServantEntity_o *servantEntity; // x26
  struct System_String_o *Name; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UserServantEntity_o *v69; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v71; // x8
  struct UserServantEntity_o *v72; // x8
  __int128 v73; // q1
  __int64 v74; // x26
  bool v75; // w8
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct UserServantEntity_o *v88; // x8
  UserEventServantFatigueMaster_o *v89; // x24
  __int64 v90; // x25
  __int64 v91; // x26
  int64_t v92; // x25
  struct UserServantEntity_o *v93; // x8
  __int128 v94; // q0
  int64_t v95; // x0
  struct UserServantEntity_o *v96; // x8
  __int128 v97; // q0
  UserServantCollectionMaster_o *v98; // x22
  struct UserServantEntity_o *v99; // x8
  int64_t v100; // x23
  __int64 v101; // x24
  __int64 v102; // x25
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v104; // x23
  int64_t v105; // x22
  unsigned int v106; // w24
  __int64 v107; // x25
  __int64 v108; // x8
  unsigned int v109; // w26
  __int64 v110; // x8
  unsigned int v111; // w9
  __int64 v112; // x8
  struct UserServantEntity_o *v113; // x9
  __int128 v114; // q0
  __int64 v115; // x28
  __int64 v116; // x0
  UserServantEntity_o *v117; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  int v132; // w22
  BalanceConfig_c *v133; // x8
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  struct System_String_o *v140; // x1
  int64_t v141; // x23
  int64_t v142; // x8
  struct ServantEntity_o *v143; // x9
  struct UserServantEntity_o *v144; // x8
  __int64 v145; // x21
  __int64 v146; // x22
  int32_t v147; // w8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+90h] [xbp-80h]
  int64_t recoverAt[2]; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16

  if ( (byte_418A977 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userServantEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v19);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v20);
    sub_B2C35C(&NetworkManager_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&TutorialFlag_TypeInfo, v25);
    byte_418A977 = 1;
  }
  recoverAt[0] = 0LL;
  v26 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v33, 0LL);
  this->fields.iconLabelInfo2 = v33;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v49 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v50 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v52 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v155.fields.currentCryptoKey = v52;
  *(_QWORD *)&v155.fields.fakeValue = v51;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v155, 0LL);
  if ( !v50 )
    goto LABEL_104;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v50,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = this->fields.userServantEntity;
  if ( !v60 )
    goto LABEL_104;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v60->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_104;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)Name,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_104;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
  v69 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v69 )
    goto LABEL_104;
  Rarity = UserServantEntity__getRarity(v69, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_104;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v71 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v71 )
    goto LABEL_104;
  this->fields.isChoice = UserServantEntity__IsChoice(v71, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_104;
  v72 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v73 = *(_OWORD *)&v72->fields.id.fields.fakeValue;
  v74 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v153.fields.currentCryptoKey = *(_OWORD *)&v72->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v153.fields.fakeValue = v73;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v152 = v153;
  v75 = v74 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v152, 0LL);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v75;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetRecoveryFatigueItem,
    (System_Int32_array **)targetRecoveryFatigueItem,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields.isFatigueRecover = 0;
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.fatigueTime = -1LL;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_104;
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL) )
    this->fields.isHeroineSvt = 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v88 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v89 = (UserEventServantFatigueMaster_o *)Instance;
  v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
  v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v156.fields.currentCryptoKey = v91;
  *(_QWORD *)&v156.fields.fakeValue = v90;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v156, 0LL);
  if ( !v89 )
    goto LABEL_104;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v89,
         recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         Instance,
         0LL) )
  {
    v92 = recoverAt[0];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__getTime(0LL);
    if ( v92 > Instance )
      this->fields.fatigueTime = recoverAt[0];
    if ( this->fields.isFatigueRecover )
    {
      v93 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_104;
      v94 = *(_OWORD *)&v93->fields.id.fields.fakeValue;
      *(_OWORD *)&v153.fields.currentCryptoKey = *(_OWORD *)&v93->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v153.fields.fakeValue = v94;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v151 = v153;
      v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v151, 0LL);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v89, eventId, v95, 0LL);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28617756(126, 0LL) )
      this->fields.isCanNotSelect = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v96 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v97 = *(_OWORD *)&v96->fields.userId.fields.fakeValue;
  v98 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v153.fields.currentCryptoKey = *(_OWORD *)&v96->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v153.fields.fakeValue = v97;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v150 = v153;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v150, 0LL);
  v99 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v100 = Instance;
  v102 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
  v101 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v157.fields.currentCryptoKey = v102;
  *(_QWORD *)&v157.fields.fakeValue = v101;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v157, 0LL);
  if ( !v98 )
    goto LABEL_104;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v98, v100, Instance, 0LL);
  if ( !Instance )
    goto LABEL_104;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
  v104 = *(_QWORD *)(Instance + 24);
  v105 = Instance;
  if ( (int)v104 < 1 )
    goto LABEL_85;
  v106 = 0;
LABEL_66:
  v107 = *(_QWORD *)(v105 + 8LL * (int)v106 + 32);
  if ( !v107 )
    goto LABEL_104;
  v108 = *(_QWORD *)(v107 + 48);
  if ( !v108 )
    goto LABEL_104;
  v109 = 0;
  while ( 1 )
  {
    v110 = *(_QWORD *)(v108 + 16);
    if ( !v110 )
      goto LABEL_104;
    v111 = *(_DWORD *)(v110 + 24);
    if ( (int)v109 >= (int)v111 )
    {
      if ( this->fields.isParty )
        goto LABEL_85;
      if ( (int)++v106 >= (int)v104 )
        goto LABEL_85;
      if ( v106 >= *(_DWORD *)(v105 + 24) )
      {
LABEL_83:
        v116 = sub_B2C460(Instance);
        sub_B2C400(v116, 0LL);
      }
      goto LABEL_66;
    }
    if ( v109 >= v111 )
      goto LABEL_83;
    v112 = *(_QWORD *)(v110 + 8LL * (int)v109 + 32);
    if ( !v112 )
      goto LABEL_104;
    v113 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_104;
    v114 = *(_OWORD *)&v113->fields.id.fields.fakeValue;
    v115 = *(_QWORD *)(v112 + 24);
    *(_OWORD *)&v153.fields.currentCryptoKey = *(_OWORD *)&v113->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v153.fields.fakeValue = v114;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v149 = v153;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v149, 0LL);
    if ( v115 == Instance )
      break;
    v108 = *(_QWORD *)(v107 + 48);
    ++v109;
    if ( !v108 )
      goto LABEL_104;
  }
  this->fields.isParty = 1;
LABEL_85:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v117 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v117 )
    goto LABEL_104;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v117, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_104;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_104;
  v132 = *(_DWORD *)(Instance + 276);
  v133 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v133 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v133->static_fields->StatusUpAdjustHp * v132;
  if ( !Instance )
    goto LABEL_104;
  this->fields.atkReinforceValue = v133->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_104;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_104;
  v140 = *(struct System_String_o **)(Instance + 24);
  v141 = Instance;
  this->fields.className = v140;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)v140,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  v142 = *(int *)(v141 + 48);
  v143 = this->fields.servantEntity;
  this->fields.priority = v142;
  this->fields.sortValue1B = v142;
  if ( !v143 )
    goto LABEL_104;
  v144 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  this->fields.sortValue2 = ((__int64)v143->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v144->fields.lv;
  v146 = *(_QWORD *)&v144->fields.svtId.fields.currentCryptoKey;
  v145 = *(_QWORD *)&v144->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v158.fields.currentCryptoKey = v146;
  *(_QWORD *)&v158.fields.fakeValue = v145;
  v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v158, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v147;
  this->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
  {
LABEL_104:
    sub_B2C434(Instance, v48);
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
  EventServantFatigueListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  struct ServantEntity_o *servantEntity; // x8
  __int64 v12; // x20
  __int64 v13; // x21
  struct ServantEntity_o *v14; // x8
  EventServantFatigueMaster_o *v15; // x20
  int32_t bonusKindId; // w19
  __int64 v17; // x21
  __int64 v18; // x22
  const MethodInfo *v19; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v4 = this;
  if ( (byte_418A97B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantFatigueMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (EventServantFatigueListViewItem_o *)sub_B2C35C(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v8);
    byte_418A97B = 1;
  }
  if ( !sort )
    goto LABEL_33;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind2 - 1) > 1 )
    return 1;
  if ( v4->fields.bonusKind != bonusKind2
    || (bonusKind2Id = v4->fields.bonusKindId, bonusKind2Id != sort->fields.bonusKind2Id) )
  {
    v4->fields.bonusKind = bonusKind2;
    bonusKind2Id = sort->fields.bonusKind2Id;
    v4->fields.bonusKindId = bonusKind2Id;
    bonusKind2 = sort->fields.bonusKind2;
  }
  if ( bonusKind2 != 2 )
  {
    if ( bonusKind2 == 1 )
    {
      this = (EventServantFatigueListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_33;
      this = (EventServantFatigueListViewItem_o *)UserServantEntity__getEventUpVal_21652144(
                                                    (UserServantEntity_o *)this,
                                                    v4->fields.setupInfo,
                                                    bonusKind2Id,
                                                    0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
    }
    servantEntity = v4->fields.servantEntity;
    if ( servantEntity )
    {
      v13 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v12 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v22.fields.currentCryptoKey = v13;
      *(_QWORD *)&v22.fields.fakeValue = v12;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL) < 1 )
        return 0;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (EventServantFatigueListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
      v14 = v4->fields.servantEntity;
      if ( v14 )
      {
        v15 = (EventServantFatigueMaster_o *)this;
        bonusKindId = v4->fields.bonusKindId;
        v18 = *(_QWORD *)&v14->fields.id.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v14->fields.id.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v23.fields.currentCryptoKey = v18;
        *(_QWORD *)&v23.fields.fakeValue = v17;
        this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                      v23,
                                                      0LL);
        if ( v15 )
          return EventServantFatigueMaster__IsBonusFilterTarget(v15, bonusKindId, (int32_t)this, v19);
      }
    }
LABEL_33:
    sub_B2C434(this, sort);
  }
  this = (EventServantFatigueListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  this = (EventServantFatigueListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !userServantEntity || !this )
    goto LABEL_33;
  return ServantFilterMaster__IsEnableServant(
           (ServantFilterMaster_o *)this,
           userServantEntity[5],
           v4->fields.bonusKindId,
           0LL);
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v2; // x19
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v6; // x8
  unsigned __int64 v7; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v9; // w20
  ServantEntity_o *servantEntity; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v13; // x8
  int32_t v14; // w22
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v2 = this;
  if ( (byte_418A97E & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B2C35C(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  method);
    byte_418A97E = 1;
  }
  targetRecoveryFatigueItem = v2->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem
    || (eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_19:
    sub_B2C434(this, method);
  }
  v6 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v6 )
    {
      v16 = sub_B2C460(this);
      sub_B2C400(v16, 0LL);
    }
    userServantEntity = v2->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_19;
    v9 = targetIndividuality->m_Items[v7 + 1];
    servantEntity = v2->fields.servantEntity;
    v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v12;
    *(_QWORD *)&v17.fields.fakeValue = v11;
    this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v17,
                                                  0LL);
    v13 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v13 )
      goto LABEL_19;
    v14 = (int)this;
    this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v13[8],
                                                  0LL);
    if ( !servantEntity )
      goto LABEL_19;
    this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(
                                                  servantEntity,
                                                  v14,
                                                  (int32_t)this,
                                                  v9,
                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v6) = targetIndividuality->max_length;
    if ( (__int64)++v7 >= (int)v6 )
      return 0;
  }
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality_30474832(
        EventServantFatigueListViewItem_o *this,
        EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem,
        const MethodInfo *method)
{
  EventServantFatigueListViewItem_o *v4; // x19
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v7; // x8
  unsigned __int64 v8; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v10; // w20
  ServantEntity_o *servantEntity; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  int32_t v15; // w22
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_418A97F & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B2C35C(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  targetRecoveryFatigueItem);
    byte_418A97F = 1;
  }
  if ( !targetRecoveryFatigueItem
    || (eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_19:
    sub_B2C434(this, targetRecoveryFatigueItem);
  }
  v7 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v7 )
    {
      v17 = sub_B2C460(this);
      sub_B2C400(v17, 0LL);
    }
    userServantEntity = v4->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_19;
    v10 = targetIndividuality->m_Items[v8 + 1];
    servantEntity = v4->fields.servantEntity;
    v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v18,
                                                  0LL);
    v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
    if ( !v14 )
      goto LABEL_19;
    v15 = (int)this;
    this = (EventServantFatigueListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v14[8],
                                                  0LL);
    if ( !servantEntity )
      goto LABEL_19;
    this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(
                                                  servantEntity,
                                                  v15,
                                                  (int32_t)this,
                                                  v10,
                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v7) = targetIndividuality->max_length;
    if ( (__int64)++v8 >= (int)v7 )
      return 0;
  }
}


bool __fastcall EventServantFatigueListViewItem__IsMatchServantFilter(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  UserServantEntity_o *v20; // x0
  int32_t dispLimitCount; // w22
  UserServantEntity_o *v22; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v38; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v40; // w0
  __int64 v41; // x0

  if ( (byte_418A97A & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_418A97A = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
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
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_66:
    sub_B2C434(ClassGroupFilterKindList, sort);
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
  v20 = this->fields.userServantEntity;
  if ( v20 )
  {
    dispLimitCount = this->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v20, 0, 0LL) )
    {
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_66;
      ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                   (UserServantEntity_o *)ClassGroupFilterKindList,
                                   0,
                                   0LL);
      v22 = this->fields.userServantEntity;
      this->fields.dispLimitCount = ClassGroupFilterKindList;
      if ( !v22 )
        goto LABEL_66;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, 0LL);
      this->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
        (System_Int32_array **)SkillCategoryIdList,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_66;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)ClassGroupFilterKindList,
                                       0,
                                       0LL);
      this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
        (System_Int32_array **)TreasureDeviceCategoryIdList,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
  }
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_67;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0LL);
  ClassGroupFilterKindList = sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
  {
LABEL_67:
    v41 = sub_B2C460(ClassGroupFilterKindList);
    sub_B2C400(v41, 0LL);
  }
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
  v38 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v40 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v38) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v40 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v40 )
  {
    return 0;
  }
LABEL_40:
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall EventServantFatigueListViewItem__ModifyChoiceItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventServantFatigueListViewItem__ModifyPushItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_418A978 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418A978 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_B2C434(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v8, 0LL);
}


bool __fastcall EventServantFatigueListViewItem__SetSortValue(
        EventServantFatigueListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t *p_sortValue0; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  int64_t IsBaseSvt; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  EventServantRecoveryFatigueItem_o **manager; // x8
  __int64 v16; // x11
  int64_t fatigueTime; // x22
  bool IsMatchIndividuality_30474832; // w0
  int64_t v19; // x8
  __int64 v20; // x9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v23; // x21
  __int64 v24; // x22
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q1
  struct UserServantEntity_o *v27; // x8
  int64_t rarity; // x8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v31; // w1
  struct UserServantEntity_o *v32; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v35; // w1
  struct UserServantEntity_o *v36; // x8
  struct ServantEntity_o *v37; // x8
  struct ListViewManager_o *v38; // x8
  __int64 v39; // x11
  struct ListViewManager_o *v40; // x20
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t priority; // x10
  struct ServantEntity_o *v43; // x8
  int32_t lv; // w20
  struct UserServantEntity_o *v45; // x8
  __int64 v46; // x21
  __int64 v47; // x22
  const MethodInfo *v48; // x2
  struct ServantEntity_o *v49; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v51; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_418A979 & 1) == 0 )
  {
    sub_B2C35C(&EventServantFatigueListViewManager_TypeInfo, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_418A979 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventServantFatigueListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventServantFatigueListViewItem__IsMatchServantFilter(this, sort, v9)
    || (IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v8), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventServantFatigueListViewItem__GetIsEventUpValShow(this, sort, v12), (IsBaseSvt & 1) == 0) )
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
  IsBaseSvt = EventServantFatigueListViewItem__get_IsBaseSvt(this, v11);
  if ( (IsBaseSvt & 1) != 0 )
  {
    v14 = 30LL;
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
    v16 = *(&EventServantFatigueListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( BYTE4((*manager)[2].monitor) < (unsigned int)v16
      || *((EventServantFatigueListViewManager_c **)(*manager)[1].fields.nameSprite + v16 - 1) != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_99;
    }
    fatigueTime = this->fields.fatigueTime;
    IsMatchIndividuality_30474832 = EventServantFatigueListViewItem__IsMatchIndividuality_30474832(
                                      this,
                                      manager[66],
                                      v13);
    v19 = 10LL;
    if ( IsMatchIndividuality_30474832 )
      v19 = 20LL;
    if ( IsMatchIndividuality_30474832 )
      v20 = -10LL;
    else
      v20 = -20LL;
    if ( fatigueTime < 1 )
      v19 = v20;
    this->fields.sortValue0 = v19;
    if ( sort->fields.isChoiceSort && this->fields.isChoice )
      this->fields.sortValue0B = 10LL;
    if ( !this->fields.isCanNotSelect )
      goto LABEL_33;
    v14 = -30LL;
  }
  *p_sortValue0 = v14;
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
  v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v24;
  *(_QWORD *)&v56.fields.fakeValue = v23;
  IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v56, 0LL);
  this->fields.sortValue2B = (int)IsBaseSvt;
  if ( !sort )
LABEL_99:
    sub_B2C434(IsBaseSvt, v11);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v25 = this->fields.userServantEntity;
      if ( !v25 )
        goto LABEL_99;
      v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
      *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v54.fields.fakeValue = v26;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v53 = v54;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v53, 0LL);
      v27 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v27 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v27->fields.createdAt, 0, 0, 0, 0LL);
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
      UserServantEntity__getTreasureDeviceInfo_21659764((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = tdMaxLv[0];
      v31 = 33;
      goto LABEL_77;
    case 5:
      v32 = this->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v32->fields.hp;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v32->fields.adjustHp;
      hp = v32->fields.hp;
      v35 = 3;
      goto LABEL_60;
    case 6:
      v36 = this->fields.userServantEntity;
      if ( !v36 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v36->fields.atk;
      if ( !IsBaseSvt )
        goto LABEL_99;
      adjustHp = v36->fields.adjustAtk;
      hp = v36->fields.atk;
      v35 = 5;
LABEL_60:
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)IsBaseSvt, v35, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_78;
    case 7:
      v37 = this->fields.servantEntity;
      if ( !v37 )
        goto LABEL_99;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v37->fields.cost;
      if ( !IsBaseSvt )
        goto LABEL_99;
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)IsBaseSvt, 7, v37->fields.cost, 0, 0, 0, 0, 0, 0LL);
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
      v31 = 32;
      goto LABEL_77;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_96;
      v38 = sort->fields.manager;
      if ( v38
        && (v39 = *(&EventServantFatigueListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v38->klass->_2.bitflags2 + 1) >= (unsigned int)v39) )
      {
        if ( (EventServantFatigueListViewManager_c *)v38->klass->_2.typeHierarchy[v39 - 1] == EventServantFatigueListViewManager_TypeInfo )
          v40 = sort->fields.manager;
        else
          v40 = 0LL;
      }
      else
      {
        v40 = 0LL;
      }
      v45 = this->fields.userServantEntity;
      if ( !v45 )
        goto LABEL_99;
      v47 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
      v46 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v57.fields.currentCryptoKey = v47;
      *(_QWORD *)&v57.fields.fakeValue = v46;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v57, 0LL);
      if ( !v40 )
        goto LABEL_99;
      IsBaseSvt = EventServantFatigueListViewManager__GetAmountSortValue(
                    (EventServantFatigueListViewManager_o *)v40,
                    IsBaseSvt,
                    v48);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_96:
      v49 = this->fields.servantEntity;
      if ( !v49 )
        goto LABEL_99;
      collectionNo = v49->fields.collectionNo;
      v51 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v51 )
        goto LABEL_99;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      lv = v51->fields.lv;
      IsBaseSvt = (int64_t)v51;
      goto LABEL_85;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v31 = 44;
      goto LABEL_77;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_99;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v31 = 45;
LABEL_77:
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)IsBaseSvt, v31, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_27362128(iconLabelInfo1, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
      LOBYTE(IsBaseSvt) = 1;
      break;
    case 0x19:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !IsBaseSvt )
        goto LABEL_99;
      priority = this->fields.priority;
      v43 = this->fields.servantEntity;
      this->fields.sortValue1B = *(int *)(IsBaseSvt + 256);
      this->fields.sortValue2 = priority;
      if ( !v43 )
        goto LABEL_99;
      this->fields.sortValue2B = ((__int64)v43->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | *(int *)(IsBaseSvt + 256);
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
  sub_B2C2F8(
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
  EventServantFatigueListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_418A97D & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B2C35C(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  method);
    byte_418A97D = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B2C434(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v2->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL);
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
    sub_B2C434(userServantEntity, method);
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
  EventServantFatigueListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_418A97C & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B2C35C(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                  method);
    byte_418A97C = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B2C434(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
}


void __fastcall EventServantFatigueListViewItem__set_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}