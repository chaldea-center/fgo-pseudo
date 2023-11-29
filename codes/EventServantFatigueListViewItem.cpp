// local variable allocation has failed, the output may be wrong!
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  IconLabelInfo_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *v53; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v54; // x26
  __int64 v55; // x27
  __int64 v56; // x28
  int32_t v57; // w0
  struct ServantEntity_o *Entity; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct UserServantEntity_o *v65; // x8
  ServantEntity_o *servantEntity; // x26
  int32_t v67; // w0
  struct System_String_o *Name; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  UserServantEntity_o *v75; // x0
  int32_t SvtClassId; // w0
  UserServantEntity_o *v77; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v79; // x0
  bool IsLock; // w0
  UserServantEntity_o *v81; // x8
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *v83; // x8
  __int128 v84; // q1
  int64_t pushUserSvtId; // x26
  bool v86; // w8
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  UserServantEntity_o *v99; // x0
  WebViewManager_o *v100; // x0
  WarQuestSelectionMaster_o *v101; // x0
  UserServantEntity_o *v102; // x8
  UserEventServantFatigueMaster_o *v103; // x24
  __int64 v104; // x25
  __int64 v105; // x26
  int32_t v106; // w0
  int64_t v107; // x25
  UserServantEntity_o *v108; // x8
  __int128 v109; // q0
  int64_t v110; // x0
  WebViewManager_o *v111; // x0
  WarQuestSelectionMaster_o *v112; // x0
  UserServantEntity_o *v113; // x8
  __int128 v114; // q0
  UserServantCollectionMaster_o *v115; // x22
  int64_t v116; // x0
  UserServantEntity_o *v117; // x8
  int64_t v118; // x23
  __int64 v119; // x24
  __int64 v120; // x25
  int32_t v121; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  WebViewManager_o *v123; // x0
  UserDeckMaster_o *v124; // x22
  int64_t UserId; // x0
  int64_t DeckList; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x23
  int64_t v130; // x22
  unsigned int v131; // w24
  __int64 v132; // x25
  __int64 v133; // x8
  unsigned int v134; // w26
  __int64 v135; // x8
  unsigned int v136; // w9
  __int64 v137; // x8
  UserServantEntity_o *v138; // x9
  __int128 v139; // q0
  __int64 v140; // x28
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v142; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  UserServantEntity_o *v150; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  struct UserServantEntity_o *v158; // x0
  int32_t adjustHp; // w22
  BalanceConfig_c *v160; // x8
  WebViewManager_o *v161; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v162; // x0
  WarEntity_o *v163; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  struct System_String_o *age; // x1
  WarEntity_o *v171; // x23
  int64_t bannerId; // x8
  struct ServantEntity_o *v173; // x9
  UserServantEntity_o *v174; // x8
  __int64 v175; // x21
  __int64 v176; // x22
  int32_t v177; // w8
  IconLabelInfo_o *iconLabelInfo1; // x0
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v182; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+90h] [xbp-80h]
  int64_t recoverAt[2]; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16

  if ( (byte_40FD166 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userServantEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v19);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v20);
    sub_B16FFC(&NetworkManager_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&TutorialFlag_TypeInfo, v25);
    byte_40FD166 = 1;
  }
  recoverAt[0] = 0LL;
  v26 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             userServantEntity,
                             *(_QWORD *)&eventId,
                             baseUserSvtId,
                             setupInfo);
  IconLabelInfo___ctor(v26, 0LL);
  this->fields.iconLabelInfo1 = v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v37 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v33, v34, v35, v36);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v53 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v54 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v56 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
  v55 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v186.fields.currentCryptoKey = v56;
  *(_QWORD *)&v186.fields.fakeValue = v55;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v186, 0LL);
  if ( !v54 )
    goto LABEL_104;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v54,
                                       v57,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = this->fields.userServantEntity;
  if ( !v65 )
    goto LABEL_104;
  servantEntity = this->fields.servantEntity;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v65->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_104;
  Name = ServantEntity__getName(servantEntity, v67, -1, 0LL);
  this->fields.servantName = Name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)Name,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = this->fields.userServantEntity;
  if ( !v75 )
    goto LABEL_104;
  SvtClassId = UserServantEntity__getSvtClassId(v75, 0LL);
  v77 = this->fields.userServantEntity;
  this->fields.classId = SvtClassId;
  if ( !v77 )
    goto LABEL_104;
  Rarity = UserServantEntity__getRarity(v77, 0LL);
  v79 = this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !v79 )
    goto LABEL_104;
  IsLock = UserServantEntity__IsLock(v79, 0LL);
  v81 = this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !v81 )
    goto LABEL_104;
  this->fields.isChoice = UserServantEntity__IsChoice(v81, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_104;
  v83 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v184.fields.fakeValue = v84;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v183 = v184;
  v86 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v183, 0LL);
  this->fields.baseUserSvtId = baseUserSvtId;
  this->fields.isPush = v86;
  this->fields.targetRecoveryFatigueItem = targetRecoveryFatigueItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetRecoveryFatigueItem,
    (System_Int32_array **)targetRecoveryFatigueItem,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.isFatigueRecover = 0;
  v99 = this->fields.userServantEntity;
  this->fields.fatigueTime = -1LL;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !v99 )
    goto LABEL_104;
  if ( UserServantEntity__IsHeroine(v99, 0LL) )
    this->fields.isHeroineSvt = 1;
  v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v100 )
    goto LABEL_104;
  v101 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v100,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  v102 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v103 = (UserEventServantFatigueMaster_o *)v101;
  v105 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
  v104 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v187.fields.currentCryptoKey = v105;
  *(_QWORD *)&v187.fields.fakeValue = v104;
  v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v187, 0LL);
  if ( !v103 )
    goto LABEL_104;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v103,
         recoverAt,
         &this->fields.isFatigueRecover,
         eventId,
         v106,
         0LL) )
  {
    v107 = recoverAt[0];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v107 > NetworkManager__getTime(0LL) )
      this->fields.fatigueTime = recoverAt[0];
    if ( this->fields.isFatigueRecover )
    {
      v108 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_104;
      v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
      *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v184.fields.fakeValue = v109;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v182 = v184;
      v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v182, 0LL);
      this->fields.isCanNotSelect = !UserEventServantFatigueMaster__IsRecoverUserServant(v103, eventId, v110, 0LL);
    }
  }
  if ( this->fields.isHeroineSvt )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28023340(126, 0LL) )
      this->fields.isCanNotSelect = 1;
  }
  v111 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v111 )
    goto LABEL_104;
  v112 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v111,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v113 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v114 = *(_OWORD *)&v113->fields.userId.fields.fakeValue;
  v115 = (UserServantCollectionMaster_o *)v112;
  *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v113->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v184.fields.fakeValue = v114;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v181 = v184;
  v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v181, 0LL);
  v117 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  v118 = v116;
  v120 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
  v119 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v188.fields.currentCryptoKey = v120;
  *(_QWORD *)&v188.fields.fakeValue = v119;
  v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v188, 0LL);
  if ( !v115 )
    goto LABEL_104;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v115, v118, v121, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_104;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  v123 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v123 )
    goto LABEL_104;
  v124 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v123,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v124 )
    goto LABEL_104;
  DeckList = (int64_t)UserDeckMaster__getDeckList(v124, UserId, 0LL);
  if ( !DeckList )
    goto LABEL_104;
  v129 = *(_QWORD *)(DeckList + 24);
  v130 = DeckList;
  if ( (int)v129 < 1 )
    goto LABEL_85;
  v131 = 0;
LABEL_66:
  v132 = *(_QWORD *)(v130 + 8LL * (int)v131 + 32);
  if ( !v132 )
    goto LABEL_104;
  v133 = *(_QWORD *)(v132 + 48);
  if ( !v133 )
    goto LABEL_104;
  v134 = 0;
  while ( 1 )
  {
    v135 = *(_QWORD *)(v133 + 16);
    if ( !v135 )
      goto LABEL_104;
    v136 = *(_DWORD *)(v135 + 24);
    if ( (int)v134 >= (int)v136 )
    {
      if ( this->fields.isParty )
        goto LABEL_85;
      if ( (int)++v131 >= (int)v129 )
        goto LABEL_85;
      if ( v131 >= *(_DWORD *)(v130 + 24) )
      {
LABEL_83:
        sub_B17100(DeckList, v127, v128);
        sub_B170A0();
      }
      goto LABEL_66;
    }
    if ( v134 >= v136 )
      goto LABEL_83;
    v137 = *(_QWORD *)(v135 + 8LL * (int)v134 + 32);
    if ( !v137 )
      goto LABEL_104;
    v138 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_104;
    v139 = *(_OWORD *)&v138->fields.id.fields.fakeValue;
    v140 = *(_QWORD *)(v137 + 24);
    *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v138->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v184.fields.fakeValue = v139;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v180 = v184;
    DeckList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v180, 0LL);
    if ( v140 == DeckList )
      break;
    v133 = *(_QWORD *)(v132 + 48);
    ++v134;
    if ( !v133 )
      goto LABEL_104;
  }
  this->fields.isParty = 1;
LABEL_85:
  if ( !*p_userServantEntity )
    goto LABEL_104;
  DispLimitCount = UserServantEntity__getDispLimitCount(*p_userServantEntity, 0, 0LL);
  v142 = this->fields.userServantEntity;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v142 )
    goto LABEL_104;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v142, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  v150 = this->fields.userServantEntity;
  if ( !v150 )
    goto LABEL_104;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v150, 0, 0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  v158 = this->fields.userServantEntity;
  if ( !v158 )
    goto LABEL_104;
  adjustHp = v158->fields.adjustHp;
  v160 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v160 = BalanceConfig_TypeInfo;
    v158 = *p_userServantEntity;
  }
  this->fields.hpReinforceValue = v160->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v158 )
    goto LABEL_104;
  this->fields.atkReinforceValue = v160->static_fields->StatusUpAdjustAtk * v158->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v158,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v161 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v161 )
    goto LABEL_104;
  v162 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v161,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v162 )
    goto LABEL_104;
  v163 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v162,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v163 )
    goto LABEL_104;
  age = v163->fields.age;
  v171 = v163;
  this->fields.className = age;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)age,
    v164,
    v165,
    v166,
    v167,
    v168,
    v169);
  bannerId = v171->fields.bannerId;
  v173 = this->fields.servantEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  if ( !v173 )
    goto LABEL_104;
  v174 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_104;
  this->fields.sortValue2 = ((__int64)v173->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v174->fields.lv;
  v176 = *(_QWORD *)&v174->fields.svtId.fields.currentCryptoKey;
  v175 = *(_QWORD *)&v174->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v189.fields.currentCryptoKey = v176;
  *(_QWORD *)&v189.fields.fakeValue = v175;
  v177 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v189, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v177;
  this->fields.amountSortValue = -1LL;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), !*p_iconLabelInfo2) )
LABEL_104:
    sub_B170D4();
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  UserServantEntity_o *userServantEntity; // x0
  struct ServantEntity_o *servantEntity; // x8
  __int64 v13; // x20
  __int64 v14; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *v16; // x8
  EventServantFatigueMaster_o *v17; // x20
  int32_t bonusKindId; // w19
  __int64 v19; // x21
  __int64 v20; // x22
  int32_t v21; // w0
  const MethodInfo *v22; // x3
  WebViewManager_o *Instance; // x0
  ServantFilterMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_40FD16A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantFatigueMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FD16A = 1;
  }
  if ( !sort )
    goto LABEL_33;
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  if ( (unsigned int)(bonusKind2 - 1) > 1 )
    return 1;
  if ( this->fields.bonusKind != bonusKind2
    || (bonusKind2Id = this->fields.bonusKindId, bonusKind2Id != sort->fields.bonusKind2Id) )
  {
    this->fields.bonusKind = bonusKind2;
    bonusKind2Id = sort->fields.bonusKind2Id;
    this->fields.bonusKindId = bonusKind2Id;
    bonusKind2 = sort->fields.bonusKind2;
  }
  if ( bonusKind2 != 2 )
  {
    if ( bonusKind2 == 1 )
    {
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_33;
      if ( UserServantEntity__getEventUpVal_21445528(userServantEntity, this->fields.setupInfo, bonusKind2Id, 0LL) )
        return 1;
    }
    servantEntity = this->fields.servantEntity;
    if ( servantEntity )
    {
      v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v14;
      *(_QWORD *)&v27.fields.fakeValue = v13;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL) < 1 )
        return 0;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantFatigueMaster___);
      v16 = this->fields.servantEntity;
      if ( v16 )
      {
        v17 = (EventServantFatigueMaster_o *)Master_WarQuestSelectionMaster;
        bonusKindId = this->fields.bonusKindId;
        v20 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v28.fields.currentCryptoKey = v20;
        *(_QWORD *)&v28.fields.fakeValue = v19;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28, 0LL);
        if ( v17 )
          return EventServantFatigueMaster__IsBonusFilterTarget(v17, bonusKindId, v21, v22);
      }
    }
LABEL_33:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (ServantFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  v26 = this->fields.userServantEntity;
  if ( !v26 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  return ServantFilterMaster__IsEnableServant(
           MasterData_WarQuestSelectionMaster,
           v26->fields.svtId,
           this->fields.bonusKindId,
           0LL);
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventServantFatigueListViewItem_o *v3; // x19
  struct EventServantRecoveryFatigueItem_o *targetRecoveryFatigueItem; // x8
  struct EventFatigueRecoveryEntity_o *eventFatigueRecoveryEnt; // x8
  struct System_Int32_array *targetIndividuality; // x24
  __int64 v7; // x8
  unsigned __int64 v8; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v10; // w20
  ServantEntity_o *servantEntity; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  int32_t v16; // w22
  int32_t v17; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v3 = this;
  if ( (byte_40FD16D & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B16FFC(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  method);
    byte_40FD16D = 1;
  }
  targetRecoveryFatigueItem = v3->fields.targetRecoveryFatigueItem;
  if ( !targetRecoveryFatigueItem
    || (eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v7 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v7 )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    userServantEntity = v3->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_19;
    v10 = targetIndividuality->m_Items[v8 + 1];
    servantEntity = v3->fields.servantEntity;
    v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v13;
    *(_QWORD *)&v19.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
    v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.userServantEntity;
    if ( !v15 )
      goto LABEL_19;
    v16 = v14;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15[8], 0LL);
    if ( !servantEntity )
      goto LABEL_19;
    this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(servantEntity, v16, v17, v10, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v7) = targetIndividuality->max_length;
    if ( (__int64)++v8 >= (int)v7 )
      return 0;
  }
}


bool __fastcall EventServantFatigueListViewItem__IsMatchIndividuality_30757784(
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
  int32_t v14; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  int32_t v16; // w22
  int32_t v17; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_40FD16E & 1) == 0 )
  {
    this = (EventServantFatigueListViewItem_o *)sub_B16FFC(
                                                  &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                  targetRecoveryFatigueItem);
    byte_40FD16E = 1;
  }
  if ( !targetRecoveryFatigueItem
    || (eventFatigueRecoveryEnt = targetRecoveryFatigueItem->fields.eventFatigueRecoveryEnt) == 0LL
    || (targetIndividuality = eventFatigueRecoveryEnt->fields.targetIndividuality) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v7 = *(_QWORD *)&targetIndividuality->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v7 )
    {
      sub_B17100(this, targetRecoveryFatigueItem, method);
      sub_B170A0();
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
    *(_QWORD *)&v19.fields.currentCryptoKey = v13;
    *(_QWORD *)&v19.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
    v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
    if ( !v15 )
      goto LABEL_19;
    v16 = v14;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15[8], 0LL);
    if ( !servantEntity )
      goto LABEL_19;
    this = (EventServantFatigueListViewItem_o *)ServantEntity__IsIndividuality(servantEntity, v16, v17, v10, 0LL);
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
  System_Collections_Generic_List_Voice_BATTLE__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ClassFilterKindList; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *NpEffectFilterKindList; // x0
  ListViewSort_FilterKind_array *v19; // x0
  __int64 v20; // x2
  UserServantEntity_o *userServantEntity; // x21
  ListViewSort_FilterKind_array *v22; // x0
  __int64 v23; // x2
  ListViewSort_FilterKind_array *v24; // x1
  __int64 v25; // x2
  FilterKindList_c *v26; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v28; // x21
  UserServantEntity_o *v30; // x0
  int32_t dispLimitCount; // w22
  UserServantEntity_o *v32; // x0
  int32_t v33; // w0
  UserServantEntity_o *v34; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UserServantEntity_o *v42; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v51; // x2
  _BOOL4 v52; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v54; // w0

  if ( (byte_40FD169 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_40FD169 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL) )
  {
    v11 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v11 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v11->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      goto LABEL_66;
    v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                             ClassFilterKindList,
                                             (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
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
  NpTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v14->static_fields->NpTypeFilterKindList;
  if ( !NpTypeFilterKindList )
    goto LABEL_66;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  NpEffectFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v17->static_fields->NpEffectFilterKindList;
  if ( !NpEffectFilterKindList )
    goto LABEL_66;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
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
  v22 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v20);
  if ( !v22 )
LABEL_66:
    sub_B170D4();
  v24 = v22;
  if ( !v22->max_length )
    goto LABEL_67;
  v22->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
    goto LABEL_40;
  v30 = this->fields.userServantEntity;
  if ( v30 )
  {
    dispLimitCount = this->fields.dispLimitCount;
    if ( dispLimitCount != UserServantEntity__getDispLimitCount(v30, 0, 0LL) )
    {
      v32 = this->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_66;
      v33 = UserServantEntity__getDispLimitCount(v32, 0, 0LL);
      v34 = this->fields.userServantEntity;
      this->fields.dispLimitCount = v33;
      if ( !v34 )
        goto LABEL_66;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v34, -1, 0LL);
      this->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
        (System_Int32_array **)SkillCategoryIdList,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v42 = this->fields.userServantEntity;
      if ( !v42 )
        goto LABEL_66;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v42, 0, 0LL);
      this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
        (System_Int32_array **)TreasureDeviceCategoryIdList,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
  }
  v22 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v25);
  if ( !v22 )
    goto LABEL_66;
  v24 = v22;
  if ( !v22->max_length )
    goto LABEL_67;
  v22->m_Items[1] = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL);
  v22 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v51);
  if ( !v22 )
    goto LABEL_66;
  v24 = v22;
  if ( !v22->max_length )
  {
LABEL_67:
    sub_B17100(v22, v24, v23);
    sub_B170A0();
  }
  v22->m_Items[1] = 51;
  v52 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v54 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v52) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v54 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v54 )
  {
    return 0;
  }
LABEL_40:
  v26 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v26 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v26->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_66;
  v28 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v28, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v28, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall EventServantFatigueListViewItem__ModifyChoiceItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B170D4();
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
  sub_B16F98(
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
    sub_B170D4();
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventServantFatigueListViewItem__ModifyPushItem(
        EventServantFatigueListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  int64_t pushUserSvtId; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD167 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FD167 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_B170D4();
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  this->fields.isPush = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v7, 0LL);
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
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  bool result; // w0
  EventServantRecoveryFatigueItem_o **manager; // x8
  __int64 v16; // x11
  int64_t fatigueTime; // x22
  bool IsMatchIndividuality_30757784; // w0
  int64_t v19; // x8
  __int64 v20; // x9
  IconLabelInfo_o *iconLabelInfo2; // x0
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q1
  int64_t v28; // x0
  struct UserServantEntity_o *v29; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  int64_t rarity; // x8
  struct UserServantEntity_o *v32; // x0
  struct UserServantEntity_o *v33; // x0
  int64_t friendship; // x2
  IconLabelInfo_o *v35; // x0
  int32_t friendshipMax; // w3
  int32_t v37; // w1
  struct UserServantEntity_o *v38; // x8
  IconLabelInfo_o *v39; // x0
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v42; // w1
  struct UserServantEntity_o *v43; // x8
  struct ServantEntity_o *v44; // x8
  IconLabelInfo_o *v45; // x0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *v47; // x8
  __int64 v48; // x11
  struct ListViewManager_o *v49; // x20
  IconLabelInfo_o *v50; // x19
  int64_t priority; // x10
  struct ServantEntity_o *v52; // x8
  int32_t lv; // w20
  int32_t LevelMax; // w0
  struct UserServantEntity_o *v55; // x8
  __int64 v56; // x21
  __int64 v57; // x22
  int32_t v58; // w0
  const MethodInfo *v59; // x2
  struct ServantEntity_o *v60; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_40FD168 & 1) == 0 )
  {
    sub_B16FFC(&EventServantFatigueListViewManager_TypeInfo, sort);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_40FD168 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventServantFatigueListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventServantFatigueListViewItem__IsMatchServantFilter(this, sort, v9)
    || !EventServantFatigueListViewItem__get_IsBaseSvt(this, v8)
    && this->fields.userServantEntity
    && !EventServantFatigueListViewItem__GetIsEventUpValShow(this, sort, v11) )
  {
    return 0;
  }
  if ( this->fields.isSwapChoice != this->fields.isChoice )
  {
    if ( !sort )
      goto LABEL_99;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10LL;
  }
  if ( EventServantFatigueListViewItem__get_IsBaseSvt(this, v10) )
  {
    v13 = 30LL;
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
    IsMatchIndividuality_30757784 = EventServantFatigueListViewItem__IsMatchIndividuality_30757784(
                                      this,
                                      manager[66],
                                      v12);
    v19 = 10LL;
    if ( IsMatchIndividuality_30757784 )
      v19 = 20LL;
    if ( IsMatchIndividuality_30757784 )
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
    v13 = -30LL;
  }
  *p_sortValue0 = v13;
LABEL_33:
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_99;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.sortValue1B = this->fields.priority;
  if ( !servantEntity )
    goto LABEL_99;
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_99;
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v66.fields.currentCryptoKey = v25;
  *(_QWORD *)&v66.fields.fakeValue = v24;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v66, 0LL);
  if ( !sort )
LABEL_99:
    sub_B170D4();
  result = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v26 = this->fields.userServantEntity;
      if ( !v26 )
        goto LABEL_99;
      v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
      *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v64.fields.fakeValue = v27;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v63 = v64;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v63, 0LL);
      v29 = this->fields.userServantEntity;
      this->fields.sortValue1 = v28;
      if ( !v29 )
        goto LABEL_99;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_99;
      IconLabelInfo__SetTime(iconLabelInfo1, 49, v29->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_78;
    case 2:
      rarity = this->fields.rarity;
      v32 = this->fields.userServantEntity;
      goto LABEL_65;
    case 3:
      v32 = this->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_99;
      this->fields.sortValue1 = v32->fields.lv;
      goto LABEL_83;
    case 4:
      v33 = this->fields.userServantEntity;
      if ( !v33 )
        goto LABEL_99;
      this->fields.sortValue1 = v33->fields.treasureDeviceLv1;
      UserServantEntity__getTreasureDeviceInfo_21453148(v33, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      v35 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !v35 )
        goto LABEL_99;
      friendshipMax = tdMaxLv[0];
      v37 = 33;
      goto LABEL_77;
    case 5:
      v38 = this->fields.userServantEntity;
      if ( !v38 )
        goto LABEL_99;
      v39 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v38->fields.hp;
      if ( !v39 )
        goto LABEL_99;
      adjustHp = v38->fields.adjustHp;
      hp = v38->fields.hp;
      v42 = 3;
      goto LABEL_60;
    case 6:
      v43 = this->fields.userServantEntity;
      if ( !v43 )
        goto LABEL_99;
      v39 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v43->fields.atk;
      if ( !v39 )
        goto LABEL_99;
      adjustHp = v43->fields.adjustAtk;
      hp = v43->fields.atk;
      v42 = 5;
LABEL_60:
      IconLabelInfo__Set_28888132(v39, v42, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_78;
    case 7:
      v44 = this->fields.servantEntity;
      if ( !v44 )
        goto LABEL_99;
      v45 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v44->fields.cost;
      if ( !v45 )
        goto LABEL_99;
      IconLabelInfo__Set_28888132(v45, 7, v44->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_78;
    case 8:
      v32 = this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_65:
      this->fields.sortValue1 = rarity;
      if ( !v32 )
        goto LABEL_99;
      goto LABEL_83;
    case 0xA:
      friendship = this->fields.friendship;
      v35 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v35 )
        goto LABEL_99;
      friendshipMax = this->fields.friendshipMax;
      v37 = 32;
      goto LABEL_77;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_96;
      v47 = sort->fields.manager;
      if ( v47
        && (v48 = *(&EventServantFatigueListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v47->klass->_2.bitflags2 + 1) >= (unsigned int)v48) )
      {
        if ( (EventServantFatigueListViewManager_c *)v47->klass->_2.typeHierarchy[v48 - 1] == EventServantFatigueListViewManager_TypeInfo )
          v49 = sort->fields.manager;
        else
          v49 = 0LL;
      }
      else
      {
        v49 = 0LL;
      }
      v55 = this->fields.userServantEntity;
      if ( !v55 )
        goto LABEL_99;
      v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
      v56 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v67.fields.currentCryptoKey = v57;
      *(_QWORD *)&v67.fields.fakeValue = v56;
      v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v67, 0LL);
      if ( !v49 )
        goto LABEL_99;
      amountSortValue = EventServantFatigueListViewManager__GetAmountSortValue(
                          (EventServantFatigueListViewManager_o *)v49,
                          v58,
                          v59);
      this->fields.amountSortValue = amountSortValue;
LABEL_96:
      v60 = this->fields.servantEntity;
      if ( !v60 )
        goto LABEL_99;
      collectionNo = v60->fields.collectionNo;
      v62 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (amountSortValue << 48)) | collectionNo;
      if ( !v62 )
        goto LABEL_99;
      v50 = this->fields.iconLabelInfo1;
      lv = v62->fields.lv;
      v32 = v62;
      goto LABEL_85;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      v35 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v35 )
        goto LABEL_99;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v37 = 44;
      goto LABEL_77;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      v35 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v35 )
        goto LABEL_99;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v37 = 45;
LABEL_77:
      IconLabelInfo__Set_28888132(v35, v37, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_78:
      v32 = this->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_99;
      v50 = this->fields.iconLabelInfo2;
LABEL_84:
      lv = v32->fields.lv;
LABEL_85:
      LevelMax = UserServantEntity__getLevelMax(v32, 0LL);
      if ( !v50 )
        goto LABEL_99;
      IconLabelInfo__Set_28888132(v50, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
      result = 1;
      break;
    case 0x19:
      v32 = this->fields.userServantEntity;
      this->fields.sortValue1 = this->fields.fatigueTime;
      if ( !v32 )
        goto LABEL_99;
      priority = this->fields.priority;
      v52 = this->fields.servantEntity;
      this->fields.sortValue1B = v32->fields.lv;
      this->fields.sortValue2 = priority;
      if ( !v52 )
        goto LABEL_99;
      this->fields.sortValue2B = ((__int64)v52->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v32->fields.lv;
LABEL_83:
      v50 = this->fields.iconLabelInfo1;
      goto LABEL_84;
    default:
      return result;
  }
  return result;
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
  sub_B16F98(
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD16C & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FD16C = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B170D4();
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = this->fields.baseUserSvtId;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v7, 0LL);
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
  UserServantEntity_o *v6; // x0
  UserServantEntity_o *v7; // x0

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
  v6 = this->fields.userServantEntity;
  if ( !v6 )
    goto LABEL_11;
  if ( UserServantEntity__IsCombineMaterial(v6, 0LL) )
    return 1;
  v7 = this->fields.userServantEntity;
  if ( !v7 )
LABEL_11:
    sub_B170D4();
  return UserServantEntity__IsStatusUp(v7, 0LL);
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40FD16B & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FD16B = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B170D4();
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
}


void __fastcall EventServantFatigueListViewItem__set_IsCanNotLock(
        EventServantFatigueListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}