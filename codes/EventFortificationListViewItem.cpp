// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
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
  IconLabelInfo_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  IconLabelInfo_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v52; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x24
  __int64 v54; // x25
  __int64 v55; // x26
  int32_t v56; // w0
  struct ServantEntity_o *Entity; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct UserServantEntity_o *v64; // x8
  ServantEntity_o *servantEntity; // x24
  int32_t v66; // w0
  struct System_String_o *Name; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UserServantEntity_o *v74; // x0
  int32_t SvtClassId; // w0
  UserServantEntity_o *v76; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v78; // x0
  bool IsLock; // w0
  UserServantEntity_o *v80; // x8
  bool IsChoice; // w0
  struct UserServantEntity_o *v82; // x8
  __int128 v83; // q1
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *v85; // x8
  __int128 v86; // q0
  int64_t pushUserSvtId; // x24
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  bool v94; // w8
  const MethodInfo *v95; // x1
  bool v96; // w0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  UserServantEntity_o *v103; // x0
  WebViewManager_o *v104; // x0
  WarQuestSelectionMaster_o *v105; // x0
  struct UserServantEntity_o *v106; // x8
  __int128 v107; // q0
  UserServantCollectionMaster_o *v108; // x22
  int64_t v109; // x0
  struct UserServantEntity_o *v110; // x8
  int64_t v111; // x23
  __int64 v112; // x24
  __int64 v113; // x25
  int32_t v114; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  WebViewManager_o *v116; // x0
  UserDeckMaster_o *v117; // x22
  int64_t UserId; // x0
  int64_t DeckList; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x23
  int64_t v123; // x22
  unsigned int v124; // w24
  __int64 v125; // x25
  __int64 v126; // x8
  unsigned int v127; // w27
  __int64 v128; // x8
  unsigned int v129; // w9
  __int64 v130; // x8
  struct UserServantEntity_o *v131; // x9
  __int128 v132; // q0
  __int64 v133; // x28
  UserServantEntity_o *v134; // x0
  int32_t adjustHp; // w22
  BalanceConfig_c *v136; // x8
  WebViewManager_o *v137; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v138; // x0
  WarEntity_o *v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  struct System_String_o *age; // x1
  WarEntity_o *v147; // x23
  int64_t bannerId; // x8
  struct ServantEntity_o *v149; // x9
  struct UserServantEntity_o *v150; // x8
  __int64 v151; // x21
  __int64 v152; // x22
  IconLabelInfo_o *iconLabelInfo1; // x0
  struct UserServantEntity_o *v154; // x8
  __int64 v155; // x22
  __int64 v156; // x23
  int32_t v157; // w0
  const MethodInfo *v158; // x2
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16

  if ( (byte_40FC6B1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userServantEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v18);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&TutorialFlag_TypeInfo, v24);
    byte_40FC6B1 = 1;
  }
  v25 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             userServantEntity,
                             *(_QWORD *)&eventId,
                             baseUserSvtId,
                             setupInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo1 = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v36 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v32, v33, v34, v35);
  IconLabelInfo___ctor(v36, 0LL);
  this->fields.iconLabelInfo2 = v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v52 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v55 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v165.fields.currentCryptoKey = v55;
  *(_QWORD *)&v165.fields.fakeValue = v54;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v165, 0LL);
  if ( !v53 )
    goto LABEL_95;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v53,
                                       v56,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = this->fields.userServantEntity;
  if ( !v64 )
    goto LABEL_95;
  servantEntity = this->fields.servantEntity;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_95;
  Name = ServantEntity__getName(servantEntity, v66, -1, 0LL);
  this->fields.servantName = Name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)Name,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = this->fields.userServantEntity;
  if ( !v74 )
    goto LABEL_95;
  SvtClassId = UserServantEntity__getSvtClassId(v74, 0LL);
  v76 = this->fields.userServantEntity;
  this->fields.classId = SvtClassId;
  if ( !v76 )
    goto LABEL_95;
  Rarity = UserServantEntity__getRarity(v76, 0LL);
  v78 = this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !v78 )
    goto LABEL_95;
  IsLock = UserServantEntity__IsLock(v78, 0LL);
  v80 = this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !v80 )
    goto LABEL_95;
  IsChoice = UserServantEntity__IsChoice(v80, 0LL);
  v82 = this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  if ( !v82 )
    goto LABEL_95;
  v83 = *(_OWORD *)&v82->fields.userId.fields.fakeValue;
  *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v82->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v164.fields.fakeValue = v83;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v163 = v164;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v163, 0LL) == 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_95;
  v85 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v86 = *(_OWORD *)&v85->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v162.fields.currentCryptoKey = *(_OWORD *)&v85->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v162.fields.fakeValue = v86;
  v94 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v162, 0LL)
     && !this->fields.isNpc;
  this->fields.isPush = v94;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)targetFortificationWorkItem,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  this->fields.svtTypeSetInMaster = -1;
  v96 = EventFortificationListViewItem__CheckFortificationAppointment(this, v95);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v96;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v103 = this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !v103 )
    goto LABEL_95;
  if ( UserServantEntity__IsHeroine(v103, 0LL) )
  {
    this->fields.isHeroineSvt = 1;
  }
  else if ( !this->fields.isHeroineSvt )
  {
    goto LABEL_32;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(126, 0LL) )
  {
LABEL_33:
    this->fields.isCanNotSelect = 1;
    goto LABEL_34;
  }
LABEL_32:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_33;
  v154 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v156 = *(_QWORD *)&v154->fields.svtId.fields.currentCryptoKey;
  v155 = *(_QWORD *)&v154->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v168.fields.currentCryptoKey = v156;
  *(_QWORD *)&v168.fields.fakeValue = v155;
  v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v168, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v157, v158) )
    goto LABEL_33;
LABEL_34:
  v104 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v104 )
    goto LABEL_95;
  v105 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v104,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v106 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v107 = *(_OWORD *)&v106->fields.userId.fields.fakeValue;
  v108 = (UserServantCollectionMaster_o *)v105;
  *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v106->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v164.fields.fakeValue = v107;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v161 = v164;
  v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v161, 0LL);
  v110 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v111 = v109;
  v113 = *(_QWORD *)&v110->fields.svtId.fields.currentCryptoKey;
  v112 = *(_QWORD *)&v110->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v166.fields.currentCryptoKey = v113;
  *(_QWORD *)&v166.fields.fakeValue = v112;
  v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v166, 0LL);
  if ( !v108 )
    goto LABEL_95;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v108, v111, v114, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_95;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  v116 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v116 )
    goto LABEL_95;
  v117 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v116,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v117 )
    goto LABEL_95;
  DeckList = (int64_t)UserDeckMaster__getDeckList(v117, UserId, 0LL);
  if ( !DeckList )
    goto LABEL_95;
  v122 = *(_QWORD *)(DeckList + 24);
  v123 = DeckList;
  if ( (int)v122 >= 1 )
  {
    v124 = 0;
    while ( 1 )
    {
      v125 = *(_QWORD *)(v123 + 8LL * (int)v124 + 32);
      if ( !v125 )
        break;
      v126 = *(_QWORD *)(v125 + 48);
      if ( !v126 )
        break;
      v127 = 0;
      while ( 1 )
      {
        v128 = *(_QWORD *)(v126 + 16);
        if ( !v128 )
          goto LABEL_95;
        v129 = *(_DWORD *)(v128 + 24);
        if ( (int)v127 >= (int)v129 )
          break;
        if ( v127 >= v129 )
          goto LABEL_70;
        v130 = *(_QWORD *)(v128 + 8LL * (int)v127 + 32);
        if ( !v130 )
          goto LABEL_95;
        v131 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_95;
        v132 = *(_OWORD *)&v131->fields.id.fields.fakeValue;
        v133 = *(_QWORD *)(v130 + 24);
        *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v131->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v164.fields.fakeValue = v132;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v160 = v164;
        DeckList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v160, 0LL);
        if ( v133 == DeckList )
        {
          this->fields.isParty = 1;
          goto LABEL_72;
        }
        v126 = *(_QWORD *)(v125 + 48);
        ++v127;
        if ( !v126 )
          goto LABEL_95;
      }
      if ( this->fields.isParty )
        goto LABEL_72;
      if ( (int)++v124 >= (int)v122 )
        goto LABEL_72;
      if ( v124 >= *(_DWORD *)(v123 + 24) )
      {
LABEL_70:
        sub_B17100(DeckList, v120, v121);
        sub_B170A0();
      }
    }
LABEL_95:
    sub_B170D4();
  }
LABEL_72:
  v134 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  adjustHp = v134->fields.adjustHp;
  v136 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v136 = BalanceConfig_TypeInfo;
    v134 = *p_userServantEntity;
  }
  this->fields.hpReinforceValue = v136->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v134 )
    goto LABEL_95;
  this->fields.atkReinforceValue = v136->static_fields->StatusUpAdjustAtk * v134->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v134,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v137 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v137 )
    goto LABEL_95;
  v138 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v137,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v138 )
    goto LABEL_95;
  v139 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v138,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v139 )
    goto LABEL_95;
  age = v139->fields.age;
  v147 = v139;
  this->fields.className = age;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)age,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
  bannerId = v147->fields.bannerId;
  v149 = this->fields.servantEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  if ( !v149 )
    goto LABEL_95;
  v150 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  this->fields.sortValue2 = ((__int64)v149->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v150->fields.lv;
  v152 = *(_QWORD *)&v150->fields.svtId.fields.currentCryptoKey;
  v151 = *(_QWORD *)&v150->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v167.fields.currentCryptoKey = v152;
  *(_QWORD *)&v167.fields.fakeValue = v151;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v167, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !iconLabelInfo1 )
    goto LABEL_95;
  IconLabelInfo__Clear(iconLabelInfo1, 0LL);
  if ( !*p_iconLabelInfo2 )
    goto LABEL_95;
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
}


bool __fastcall EventFortificationListViewItem__CheckFortificationAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  WebViewManager_o *Instance; // x0
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v17; // x0
  EventFortificationDetailMaster_o *v18; // x20
  WebViewManager_o *v19; // x0
  WarQuestSelectionMaster_o *v20; // x0
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  struct System_String_o *TeamName; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EventFortificationWorkItem_o *v29; // x0
  struct System_String_o *Name; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  EventFortificationWorkItem_o *v37; // x0
  int32_t WorkType; // w0
  bool v39; // w8
  EventFortificationMaster_o *v40; // x21
  char v41; // w8
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  WebViewManager_o *v50; // x0
  EventFortificationSvtMaster_o *v51; // x0
  bool v52; // w0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v59; // x25
  WarBoardData_SquareRangeSearch_o *v60; // x0
  const MethodInfo *v61; // x5
  WarBoardData_SquareRangeSearch_o *v62; // x24
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  BattleServantConfConponent_o *p_myDetailName; // [xsp+8h] [xbp-B8h]
  BattleServantConfConponent_o *p_myTeamName; // [xsp+10h] [xbp-B0h]
  bool v72; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+20h] [xbp-A0h] BYREF
  EventFortificationSvtEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  EventFortificationEntity_o *v75; // [xsp+40h] [xbp-80h] BYREF
  EventFortificationDetailEntity_o *v76; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40FC6B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__, v9);
    sub_B16FFC(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__, v10);
    sub_B16FFC(&Method_System_Func_SetSvtInfo__bool___ctor__, v11);
    sub_B16FFC(&System_Func_SetSvtInfo__bool__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FC6B8 = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v77, 0, sizeof(v77));
  v75 = 0LL;
  v76 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          MasterData_WarQuestSelectionMaster,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_36;
  v18 = (EventFortificationDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v17,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_36;
  v20 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v19,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( targetFortificationWorkItem )
    {
      TeamName = EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0LL);
      this->fields.myTeamName = TeamName;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.myTeamName,
        (System_Int32_array **)TeamName,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = this->fields.targetFortificationWorkItem;
      if ( v29 )
      {
        Name = EventFortificationWorkItem__get_Name(v29, 0LL);
        this->fields.myDetailName = Name;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.myDetailName,
          (System_Int32_array **)Name,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v37 = this->fields.targetFortificationWorkItem;
        if ( v37 )
        {
          WorkType = EventFortificationWorkItem__get_WorkType(v37, 0LL);
          v39 = 1;
          this->fields.myWorkType = WorkType;
          this->fields.svtTypeSetInMaster = 1;
          return v39;
        }
      }
    }
LABEL_36:
    sub_B170D4();
  }
  v40 = (EventFortificationMaster_o *)v20;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v73,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userEventFortificationList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myTeamName = (BattleServantConfConponent_o *)&this->fields.myTeamName;
  p_myDetailName = (BattleServantConfConponent_o *)&this->fields.myDetailName;
  v41 = 0;
  v77 = v73;
LABEL_23:
  v72 = v41;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__) )
  {
    current = v77.fields.current;
    if ( !v77.fields.current )
      sub_B170D4();
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v77.fields.current[2].monitor;
    v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_SetSvtInfo__bool__TypeInfo,
                                                                               v53,
                                                                               v54,
                                                                               v55,
                                                                               v56);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v59,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_SetSvtInfo__bool___ctor__);
    v60 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            monitor,
            (System_Func_TSource__bool__o *)v59,
            (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v62 = v60;
    if ( v60 )
    {
      if ( !v18 )
        sub_B170D4();
      if ( EventFortificationDetailMaster__TryGetEntity(
             v18,
             &v76,
             this->fields.eventId,
             HIDWORD(current[1].monitor),
             v60->fields.squareIndex,
             v61) )
      {
        if ( !v40 )
          sub_B170D4();
        if ( EventFortificationMaster__TryGetEntity(v40, &v75, this->fields.eventId, HIDWORD(current[1].monitor), 0LL) )
        {
          if ( !v75 )
            sub_B170D4();
          v42 = (System_Int32_array **)v75->fields.name;
          p_myTeamName->klass = (BattleServantConfConponent_c *)v42;
          sub_B16F98(p_myTeamName, v42, v63, v64, v65, v66, v67, v68);
          if ( !v76 )
            sub_B170D4();
          v49 = (System_Int32_array **)v76->fields.name;
          p_myDetailName->klass = (BattleServantConfConponent_c *)v49;
          sub_B16F98(p_myDetailName, v49, v43, v44, v45, v46, v47, v48);
          if ( !v75 )
            sub_B170D4();
          this->fields.myWorkType = v75->fields.workType;
          v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v50 )
            sub_B170D4();
          v51 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v50,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v51 )
            sub_B170D4();
          v52 = EventFortificationSvtMaster__TryGetEntity(
                  v51,
                  &entity,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  v62->fields.squareIndex,
                  0LL);
          v41 = 1;
          if ( v52 )
          {
            if ( !entity )
              sub_B170D4();
            this->fields.svtTypeSetInMaster = entity->fields.type;
            v41 = 1;
          }
          goto LABEL_23;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v72;
}


bool __fastcall EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  UserServantEntity_o *userServantEntity; // x0
  WebViewManager_o *Instance; // x0
  ServantFilterMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v12; // x8

  if ( (byte_40FC6B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC6B5 = 1;
  }
  if ( !sort )
    goto LABEL_19;
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
    if ( bonusKind2 != 1 )
      return 0;
    userServantEntity = this->fields.userServantEntity;
    if ( userServantEntity )
      return UserServantEntity__getEventUpVal_21445528(userServantEntity, this->fields.setupInfo, bonusKind2Id, 0LL);
LABEL_19:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (ServantFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  v12 = this->fields.userServantEntity;
  if ( !v12 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  return ServantFilterMaster__IsEnableServant(
           MasterData_WarQuestSelectionMaster,
           v12->fields.svtId,
           this->fields.bonusKindId,
           0LL);
}


void __fastcall EventFortificationListViewItem__InitFortificationItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, method);
}


bool __fastcall EventFortificationListViewItem__IsMatchServantFilter(
        EventFortificationListViewItem_o *this,
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

  if ( (byte_40FC6B4 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_40FC6B4 = 1;
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
    goto LABEL_41;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_41;
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
      goto LABEL_41;
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
    goto LABEL_41;
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
    goto LABEL_41;
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
LABEL_41:
    sub_B170D4();
  if ( !v22->max_length )
  {
    sub_B17100(v22, v22, v23);
    sub_B170A0();
  }
  v22->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


void __fastcall EventFortificationListViewItem__ModifyChoiceItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B170D4();
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EventFortificationListViewItem__ModifyItem(
        EventFortificationListViewItem_o *this,
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
  const MethodInfo *v12; // x1

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
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v9);
  EventFortificationListViewItem__ModifyLockItem(this, v10);
  EventFortificationListViewItem__ModifyChoiceItem(this, v11);
  EventFortificationListViewItem__ModifyPushItem(this, v12);
}


void __fastcall EventFortificationListViewItem__ModifyLockItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B170D4();
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventFortificationListViewItem__ModifyPushItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  int64_t pushUserSvtId; // x20
  bool v7; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_40FC6B2 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FC6B2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_B170D4();
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  v7 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v8, 0LL)
    && !this->fields.isNpc;
  this->fields.isPush = v7;
}


bool __fastcall EventFortificationListViewItem__SetSortValue(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t *p_sortValue0; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  _BOOL4 isChoice; // w8
  bool result; // w0
  IconLabelInfo_o *iconLabelInfo2; // x0
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  int64_t v20; // x0
  struct UserServantEntity_o *v21; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  int64_t friendship; // x2
  IconLabelInfo_o *v24; // x0
  int32_t friendshipMax; // w3
  int32_t v26; // w1
  int64_t rarity; // x8
  struct UserServantEntity_o *v28; // x0
  struct UserServantEntity_o *v29; // x0
  struct UserServantEntity_o *v30; // x8
  IconLabelInfo_o *v31; // x0
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v34; // w1
  struct UserServantEntity_o *v35; // x8
  struct ServantEntity_o *v36; // x8
  IconLabelInfo_o *v37; // x0
  IconLabelInfo_o *v38; // x19
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x8
  __int64 v41; // x11
  struct ListViewManager_o *v42; // x20
  int32_t lv; // w20
  int32_t LevelMax; // w0
  struct UserServantEntity_o *v45; // x8
  __int64 v46; // x21
  __int64 v47; // x22
  int32_t v48; // w0
  struct ServantEntity_o *v49; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v51; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_40FC6B3 & 1) == 0 )
  {
    sub_B16FFC(&EventFortificationListViewManager_TypeInfo, sort);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_40FC6B3 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v9)
    || !EventFortificationListViewItem__get_IsBaseSvt(this, v8)
    && this->fields.userServantEntity
    && !EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v10) )
  {
    return 0;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice == isChoice )
  {
    if ( !sort )
      goto LABEL_82;
  }
  else
  {
    if ( !sort )
      goto LABEL_82;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10LL;
  }
  if ( sort->fields.isSmartSort )
  {
    if ( sort->fields.isChoiceSort && isChoice )
      this->fields.sortValue0B = 10LL;
    if ( this->fields.isCanNotSelect )
      *p_sortValue0 = -30LL;
  }
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2
    || (IconLabelInfo__Clear(iconLabelInfo2, 0LL),
        servantEntity = this->fields.servantEntity,
        this->fields.sortValue1B = this->fields.priority,
        !servantEntity)
    || (userServantEntity = this->fields.userServantEntity) == 0LL )
  {
LABEL_82:
    sub_B170D4();
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v17;
  *(_QWORD *)&v55.fields.fakeValue = v16;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL);
  result = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v18 = this->fields.userServantEntity;
      if ( !v18 )
        goto LABEL_82;
      v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v53.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v52 = v53;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v52, 0LL);
      v21 = this->fields.userServantEntity;
      this->fields.sortValue1 = v20;
      if ( !v21 )
        goto LABEL_82;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_82;
      IconLabelInfo__SetTime(iconLabelInfo1, 49, v21->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_64;
    case 2:
      rarity = this->fields.rarity;
      v28 = this->fields.userServantEntity;
      goto LABEL_53;
    case 3:
      v28 = this->fields.userServantEntity;
      if ( !v28 )
        goto LABEL_82;
      this->fields.sortValue1 = v28->fields.lv;
      goto LABEL_54;
    case 4:
      v29 = this->fields.userServantEntity;
      if ( !v29 )
        goto LABEL_82;
      this->fields.sortValue1 = v29->fields.treasureDeviceLv1;
      UserServantEntity__getTreasureDeviceInfo_21453148(v29, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      v24 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !v24 )
        goto LABEL_82;
      friendshipMax = tdMaxLv[0];
      v26 = 33;
      goto LABEL_63;
    case 5:
      v30 = this->fields.userServantEntity;
      if ( !v30 )
        goto LABEL_82;
      v31 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v30->fields.hp;
      if ( !v31 )
        goto LABEL_82;
      adjustHp = v30->fields.adjustHp;
      hp = v30->fields.hp;
      v34 = 3;
      goto LABEL_48;
    case 6:
      v35 = this->fields.userServantEntity;
      if ( !v35 )
        goto LABEL_82;
      v31 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v35->fields.atk;
      if ( !v31 )
        goto LABEL_82;
      adjustHp = v35->fields.adjustAtk;
      hp = v35->fields.atk;
      v34 = 5;
LABEL_48:
      IconLabelInfo__Set_28888132(v31, v34, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_64;
    case 7:
      v36 = this->fields.servantEntity;
      if ( !v36 )
        goto LABEL_82;
      v37 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v36->fields.cost;
      if ( !v37 )
        goto LABEL_82;
      IconLabelInfo__Set_28888132(v37, 7, v36->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_64;
    case 8:
      v28 = this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_53:
      this->fields.sortValue1 = rarity;
      if ( !v28 )
        goto LABEL_82;
LABEL_54:
      v38 = this->fields.iconLabelInfo1;
      goto LABEL_66;
    case 0xA:
      friendship = this->fields.friendship;
      v24 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v24 )
        goto LABEL_82;
      friendshipMax = this->fields.friendshipMax;
      v26 = 32;
      goto LABEL_63;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_79;
      manager = sort->fields.manager;
      if ( manager
        && (v41 = *(&EventFortificationListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v41) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v41 - 1] == EventFortificationListViewManager_TypeInfo )
          v42 = sort->fields.manager;
        else
          v42 = 0LL;
      }
      else
      {
        v42 = 0LL;
      }
      v45 = this->fields.userServantEntity;
      if ( !v45 )
        goto LABEL_82;
      v47 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
      v46 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v56.fields.currentCryptoKey = v47;
      *(_QWORD *)&v56.fields.fakeValue = v46;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
      if ( !v42 )
        goto LABEL_82;
      amountSortValue = EventFortificationListViewManager__GetAmountSortValue(
                          (EventFortificationListViewManager_o *)v42,
                          v48,
                          0LL);
      this->fields.amountSortValue = amountSortValue;
LABEL_79:
      v49 = this->fields.servantEntity;
      if ( !v49 )
        goto LABEL_82;
      collectionNo = v49->fields.collectionNo;
      v51 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (amountSortValue << 48)) | collectionNo;
      if ( !v51 )
        goto LABEL_82;
      v38 = this->fields.iconLabelInfo1;
      lv = v51->fields.lv;
      v28 = v51;
      goto LABEL_67;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      v24 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v24 )
        goto LABEL_82;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v26 = 44;
      goto LABEL_63;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      v24 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v24 )
        goto LABEL_82;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v26 = 45;
LABEL_63:
      IconLabelInfo__Set_28888132(v24, v26, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_64:
      v28 = this->fields.userServantEntity;
      if ( !v28 )
        goto LABEL_82;
      v38 = this->fields.iconLabelInfo2;
LABEL_66:
      lv = v28->fields.lv;
LABEL_67:
      LevelMax = UserServantEntity__getLevelMax(v28, 0LL);
      if ( !v38 )
        goto LABEL_82;
      IconLabelInfo__Set_28888132(v38, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}


void __fastcall EventFortificationListViewItem__SetUserServantEntity(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

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
  this->fields.svtTypeSetInMaster = -1;
  this->fields.isAppointment = EventFortificationListViewItem__CheckFortificationAppointment(this, v9);
}


bool __fastcall EventFortificationListViewItem__SwapChoice(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall EventFortificationListViewItem__SwapLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall EventFortificationListViewItem___CheckFortificationAppointment_b__114_0(
        EventFortificationListViewItem_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t userSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_40FC6BA & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, info);
    byte_40FC6BA = 1;
  }
  if ( !info || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_B170D4();
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v9, 0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_AddPoint(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventFortificationDataLogic__CalculationGetPoint(this->fields.userServantEntity, this->fields.eventId, v2);
}


System_String_o *__fastcall EventFortificationListViewItem__get_ClassName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.className;
}


int32_t __fastcall EventFortificationListViewItem__get_EventId(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}


IconLabelInfo_o *__fastcall EventFortificationListViewItem__get_IconInfo1(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall EventFortificationListViewItem__get_IconInfo2(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall EventFortificationListViewItem__get_IsAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isAppointment;
}


bool __fastcall EventFortificationListViewItem__get_IsBaseSvt(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_40FC6B7 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FC6B7 = 1;
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


bool __fastcall EventFortificationListViewItem__get_IsCanNotLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotLock;
}


bool __fastcall EventFortificationListViewItem__get_IsCanNotSelect(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


bool __fastcall EventFortificationListViewItem__get_IsCanNotSelectPush(
        EventFortificationListViewItem_o *this,
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


bool __fastcall EventFortificationListViewItem__get_IsChoice(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall EventFortificationListViewItem__get_IsDispChoice(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall EventFortificationListViewItem__get_IsDispLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
}


bool __fastcall EventFortificationListViewItem__get_IsHeroineSvt(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHeroineSvt;
}


bool __fastcall EventFortificationListViewItem__get_IsLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall EventFortificationListViewItem__get_IsNpc(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNpc;
}


bool __fastcall EventFortificationListViewItem__get_IsParty(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isParty;
}


bool __fastcall EventFortificationListViewItem__get_IsPush(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall EventFortificationListViewItem__get_IsSwapChoice(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall EventFortificationListViewItem__get_IsSwapLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


System_String_o *__fastcall EventFortificationListViewItem__get_MyDetailName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myDetailName;
}


System_String_o *__fastcall EventFortificationListViewItem__get_MyTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myTeamName;
}


int32_t __fastcall EventFortificationListViewItem__get_MyWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.myWorkType;
}


int32_t __fastcall EventFortificationListViewItem__get_Rarity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *__fastcall EventFortificationListViewItem__get_ServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


System_String_o *__fastcall EventFortificationListViewItem__get_ServantName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantName;
}


int32_t __fastcall EventFortificationListViewItem__get_SvtTypeDataSetInMaster(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtTypeSetInMaster;
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetDetailName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B170D4();
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0LL);
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B170D4();
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B170D4();
  return EventFortificationWorkItem__get_WorkType(targetFortificationWorkItem, 0LL);
}


UserServantEntity_o *__fastcall EventFortificationListViewItem__get_UserServantEntity(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall EventFortificationListViewItem__get_UserSvtId(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40FC6B6 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FC6B6 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  EventFortificationListViewItem___c__DisplayClass115_0_o *v22; // x20
  EventFortificationSvtMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v36; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v37; // x20
  Il2CppObject *current; // x21
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w22
  struct EventFortificationWorkItem_o *v41; // x8
  char v42; // w19
  int v43; // w21
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-78h] BYREF
  int v45[3]; // [xsp+20h] [xbp-60h]
  int v46; // [xsp+2Ch] [xbp-54h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+30h] [xbp-50h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_40FC6B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__, v12);
    sub_B16FFC(&Method_System_Func_EventFortificationSvtEntity__bool___ctor__, v13);
    sub_B16FFC(&System_Func_EventFortificationSvtEntity__bool__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v18);
    sub_B16FFC(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v19);
    sub_B16FFC(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__, v20);
    sub_B16FFC(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo, v21);
    byte_40FC6B9 = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  v22 = (EventFortificationListViewItem___c__DisplayClass115_0_o *)sub_B170CC(
                                                                     EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo,
                                                                     *(_QWORD *)&svtId,
                                                                     method,
                                                                     v3,
                                                                     v4);
  EventFortificationListViewItem___c__DisplayClass115_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_37;
  v22->fields.svtId = svtId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  if ( !eventFortificationSvtList )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventFortificationSvtList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v47 = v44;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__) )
  {
    if ( !v47.fields.current )
      sub_B170D4();
    if ( !HIDWORD(v47.fields.current[1].monitor) )
    {
      if ( !v28 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v47.fields.current,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    }
  }
  v45[0] = 105;
  v46 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v46 = 0;
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventFortificationSvtEntity__bool__TypeInfo,
                                                                             v30,
                                                                             v31,
                                                                             v32,
                                                                             v33);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v22,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventFortificationSvtEntity__bool___ctor__);
  v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v28,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  v36 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v35,
                                                                                         (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !v36 )
LABEL_37:
    sub_B170D4();
  v37 = v36;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    v36,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v47 = v44;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__) )
  {
    current = v47.fields.current;
    if ( !v47.fields.current )
      sub_B170D4();
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_B170D4();
    klass_high = HIDWORD(v47.fields.current[1].klass);
    if ( klass_high == EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0LL) )
    {
      v41 = this->fields.targetFortificationWorkItem;
      if ( !v41 )
        sub_B170D4();
      if ( LODWORD(current[1].monitor) == v41->fields.position )
      {
        v42 = 0;
        goto LABEL_27;
      }
    }
  }
  v42 = 1;
LABEL_27:
  v45[0] = 221;
  v43 = ++v46;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  if ( v43 && v45[v43 - 1] == 221 )
    v46 = v43 - 1;
  return v42 & (v37->fields._size > 0);
}


void __fastcall EventFortificationListViewItem__set_IsCanNotLock(
        EventFortificationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isCanNotLock = value;
}


void __fastcall EventFortificationListViewItem___c__DisplayClass115_0___ctor(
        EventFortificationListViewItem___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventFortificationListViewItem___c__DisplayClass115_0___isNotSelect_b__0(
        EventFortificationListViewItem___c__DisplayClass115_0_o *this,
        EventFortificationSvtEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.svtId == this->fields.svtId;
}