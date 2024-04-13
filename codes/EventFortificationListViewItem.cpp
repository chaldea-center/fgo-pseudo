void __fastcall EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
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
  IconLabelInfo_o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  IconLabelInfo_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  int64_t Instance; // x0
  __int64 v71; // x1
  struct UserServantEntity_o *v72; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v73; // x24
  __int64 v74; // x25
  __int64 v75; // x26
  struct ServantEntity_o *Entity; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct UserServantEntity_o *v83; // x8
  ServantEntity_o *servantEntity; // x24
  struct System_String_o *Name; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  UserServantEntity_o *v92; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v94; // x8
  struct UserServantEntity_o *v95; // x8
  __int128 v96; // q1
  struct UserServantEntity_o *v97; // x8
  __int128 v98; // q0
  __int64 v99; // x24
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  bool v106; // w8
  const MethodInfo *v107; // x1
  bool v108; // w0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct UserServantEntity_o *v115; // x8
  __int128 v116; // q0
  UserServantCollectionMaster_o *v117; // x22
  struct UserServantEntity_o *v118; // x8
  int64_t v119; // x23
  __int64 v120; // x24
  __int64 v121; // x25
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v123; // x23
  int64_t v124; // x22
  unsigned int v125; // w24
  __int64 v126; // x25
  __int64 v127; // x8
  unsigned int v128; // w27
  __int64 v129; // x8
  unsigned int v130; // w9
  __int64 v131; // x8
  struct UserServantEntity_o *v132; // x9
  __int128 v133; // q0
  __int64 v134; // x28
  __int64 v135; // x0
  int v136; // w22
  BalanceConfig_c *v137; // x8
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct System_String_o *v144; // x1
  int64_t v145; // x23
  int64_t v146; // x8
  struct ServantEntity_o *v147; // x9
  struct UserServantEntity_o *v148; // x8
  __int64 v149; // x21
  __int64 v150; // x22
  struct UserServantEntity_o *v151; // x8
  __int64 v152; // x22
  __int64 v153; // x23
  int32_t v154; // w0
  const MethodInfo *v155; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16

  if ( (byte_42EB22A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)userServantEntity, eventId, baseUserSvtId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&NetworkManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44, v45);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v46, v47, v48);
    byte_42EB22A = 1;
  }
  v49 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v49, 0LL);
  this->fields.iconLabelInfo1 = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v56, 0LL);
  this->fields.iconLabelInfo2 = v56;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v72 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v73 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v75 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v162.fields.currentCryptoKey = v75;
  *(_QWORD *)&v162.fields.fakeValue = v74;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v162, 0LL);
  if ( !v73 )
    goto LABEL_95;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v73,
                                       Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v83 = this->fields.userServantEntity;
  if ( !v83 )
    goto LABEL_95;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v83->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_95;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)Name,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
  v92 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v92 )
    goto LABEL_95;
  Rarity = UserServantEntity__getRarity(v92, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v94 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v94 )
    goto LABEL_95;
  Instance = UserServantEntity__IsChoice(v94, 0LL);
  v95 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v95 )
    goto LABEL_95;
  v96 = *(_OWORD *)&v95->fields.userId.fields.fakeValue;
  *(_OWORD *)&v161.fields.currentCryptoKey = *(_OWORD *)&v95->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v161.fields.fakeValue = v96;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v160 = v161;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v160, 0LL) == 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_95;
  v97 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v98 = *(_OWORD *)&v97->fields.id.fields.fakeValue;
  v99 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v97->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v159.fields.fakeValue = v98;
  v106 = v99 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v159, 0LL) && !this->fields.isNpc;
  this->fields.isPush = v106;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)targetFortificationWorkItem,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  this->fields.svtTypeSetInMaster = -1;
  v108 = EventFortificationListViewItem__CheckFortificationAppointment(this, v107);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v108;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
  }
  else if ( !this->fields.isHeroineSvt )
  {
    goto LABEL_32;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = TutorialFlag__Get_29295864(126, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_33:
    this->fields.isCanNotSelect = 1;
    goto LABEL_34;
  }
LABEL_32:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_33;
  v151 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v153 = *(_QWORD *)&v151->fields.svtId.fields.currentCryptoKey;
  v152 = *(_QWORD *)&v151->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v165.fields.currentCryptoKey = v153;
  *(_QWORD *)&v165.fields.fakeValue = v152;
  v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v165, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v154, v155) )
    goto LABEL_33;
LABEL_34:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v115 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v116 = *(_OWORD *)&v115->fields.userId.fields.fakeValue;
  v117 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v161.fields.currentCryptoKey = *(_OWORD *)&v115->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v161.fields.fakeValue = v116;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v158 = v161;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v158, 0LL);
  v118 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v119 = Instance;
  v121 = *(_QWORD *)&v118->fields.svtId.fields.currentCryptoKey;
  v120 = *(_QWORD *)&v118->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v163.fields.currentCryptoKey = v121;
  *(_QWORD *)&v163.fields.fakeValue = v120;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v163, 0LL);
  if ( !v117 )
    goto LABEL_95;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v117, v119, Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
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
    goto LABEL_95;
  Instance = (int64_t)UserDeckMaster__getDeckList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  v123 = *(_QWORD *)(Instance + 24);
  v124 = Instance;
  if ( (int)v123 >= 1 )
  {
    v125 = 0;
    while ( 1 )
    {
      v126 = *(_QWORD *)(v124 + 8LL * (int)v125 + 32);
      if ( !v126 )
        break;
      v127 = *(_QWORD *)(v126 + 48);
      if ( !v127 )
        break;
      v128 = 0;
      while ( 1 )
      {
        v129 = *(_QWORD *)(v127 + 16);
        if ( !v129 )
          goto LABEL_95;
        v130 = *(_DWORD *)(v129 + 24);
        if ( (int)v128 >= (int)v130 )
          break;
        if ( v128 >= v130 )
          goto LABEL_70;
        v131 = *(_QWORD *)(v129 + 8LL * (int)v128 + 32);
        if ( !v131 )
          goto LABEL_95;
        v132 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_95;
        v133 = *(_OWORD *)&v132->fields.id.fields.fakeValue;
        v134 = *(_QWORD *)(v131 + 24);
        *(_OWORD *)&v161.fields.currentCryptoKey = *(_OWORD *)&v132->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v161.fields.fakeValue = v133;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v157 = v161;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v157, 0LL);
        if ( v134 == Instance )
        {
          this->fields.isParty = 1;
          goto LABEL_72;
        }
        v127 = *(_QWORD *)(v126 + 48);
        ++v128;
        if ( !v127 )
          goto LABEL_95;
      }
      if ( this->fields.isParty )
        goto LABEL_72;
      if ( (int)++v125 >= (int)v123 )
        goto LABEL_72;
      if ( v125 >= *(_DWORD *)(v124 + 24) )
      {
LABEL_70:
        v135 = sub_B5D6C8(Instance);
        sub_B5D668(v135, 0LL);
      }
    }
LABEL_95:
    sub_B5D69C(Instance, v71);
  }
LABEL_72:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v136 = *(_DWORD *)(Instance + 276);
  v137 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v137 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v137->static_fields->StatusUpAdjustHp * v136;
  if ( !Instance )
    goto LABEL_95;
  this->fields.atkReinforceValue = v137->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_95;
  v144 = *(struct System_String_o **)(Instance + 24);
  v145 = Instance;
  this->fields.className = v144;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)v144,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  v146 = *(int *)(v145 + 48);
  v147 = this->fields.servantEntity;
  this->fields.priority = v146;
  this->fields.sortValue1B = v146;
  if ( !v147 )
    goto LABEL_95;
  v148 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  this->fields.sortValue2 = ((__int64)v147->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v148->fields.lv;
  v150 = *(_QWORD *)&v148->fields.svtId.fields.currentCryptoKey;
  v149 = *(_QWORD *)&v148->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v164.fields.currentCryptoKey = v150;
  *(_QWORD *)&v164.fields.fakeValue = v149;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v164, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_95;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_95;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall EventFortificationListViewItem__CheckFortificationAppointment(
        EventFortificationListViewItem_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  EventFortificationDetailMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *v44; // x0
  struct System_String_o *TeamName; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct System_String_o *Name; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int32_t WorkType; // w0
  bool v60; // w8
  EventFortificationMaster_o *v61; // x21
  char v62; // w8
  System_Int32_array **v63; // x1
  __int64 v64; // x0
  __int64 v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  __int64 v73; // x0
  __int64 v74; // x1
  WebViewManager_o *v75; // x0
  __int64 v76; // x1
  EventFortificationSvtMaster_o *v77; // x0
  __int64 v78; // x1
  _BOOL8 v79; // x0
  __int64 v80; // x1
  _BOOL8 v81; // x0
  __int64 v82; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v85; // x25
  WarBoardData_SquareRangeSearch_o *v86; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x5
  WarBoardData_SquareRangeSearch_o *v89; // x24
  _BOOL8 v90; // x0
  __int64 v91; // x1
  _BOOL8 v92; // x0
  __int64 v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  BattleServantConfConponent_o *p_myDetailName; // [xsp+8h] [xbp-B8h]
  BattleServantConfConponent_o *p_myTeamName; // [xsp+10h] [xbp-B0h]
  bool v103; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v104; // [xsp+20h] [xbp-A0h] BYREF
  EventFortificationSvtEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  EventFortificationEntity_o *v106; // [xsp+40h] [xbp-80h] BYREF
  EventFortificationDetailEntity_o *v107; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v108; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42EB231 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_SetSvtInfo__bool___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_SetSvtInfo__bool__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    byte_42EB231 = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v108, 0, sizeof(v108));
  v106 = 0LL;
  v107 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (EventFortificationDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             Instance,
                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v44 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
    if ( Instance )
    {
      TeamName = EventFortificationWorkItem__get_TeamName((EventFortificationWorkItem_o *)Instance, 0LL);
      this->fields.myTeamName = TeamName;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.myTeamName,
        (System_Int32_array **)TeamName,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
      if ( Instance )
      {
        Name = EventFortificationWorkItem__get_Name((EventFortificationWorkItem_o *)Instance, 0LL);
        this->fields.myDetailName = Name;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.myDetailName,
          (System_Int32_array **)Name,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
        if ( Instance )
        {
          WorkType = EventFortificationWorkItem__get_WorkType((EventFortificationWorkItem_o *)Instance, 0LL);
          v60 = 1;
          this->fields.myWorkType = WorkType;
          this->fields.svtTypeSetInMaster = 1;
          return v60;
        }
      }
    }
LABEL_36:
    sub_B5D69C(Instance, v42);
  }
  v61 = (EventFortificationMaster_o *)v44;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v104,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userEventFortificationList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myTeamName = (BattleServantConfConponent_o *)&this->fields.myTeamName;
  p_myDetailName = (BattleServantConfConponent_o *)&this->fields.myDetailName;
  v62 = 0;
  v108 = v104;
LABEL_23:
  v103 = v62;
  while ( 1 )
  {
    v81 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v108,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v81 )
      break;
    current = v108.fields.current;
    if ( !v108.fields.current )
      sub_B5D69C(v81, v82);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v108.fields.current[2].monitor;
    v85 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v85,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_SetSvtInfo__bool___ctor__);
    v86 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            monitor,
            (System_Func_TSource__bool__o *)v85,
            (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v89 = v86;
    if ( v86 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(v86, v87);
      v90 = EventFortificationDetailMaster__TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &v107,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              v86->fields.squareIndex,
              v88);
      if ( v90 )
      {
        if ( !v61 )
          sub_B5D69C(v90, v91);
        v92 = EventFortificationMaster__TryGetEntity(v61, &v106, this->fields.eventId, HIDWORD(current[1].monitor), 0LL);
        if ( v92 )
        {
          if ( !v106 )
            sub_B5D69C(v92, v93);
          v63 = (System_Int32_array **)v106->fields.name;
          p_myTeamName->klass = (BattleServantConfConponent_c *)v63;
          sub_B5D560(p_myTeamName, v63, v94, v95, v96, v97, v98, v99);
          if ( !v107 )
            sub_B5D69C(v64, v65);
          v72 = (System_Int32_array **)v107->fields.name;
          p_myDetailName->klass = (BattleServantConfConponent_c *)v72;
          sub_B5D560(p_myDetailName, v72, v66, v67, v68, v69, v70, v71);
          if ( !v106 )
            sub_B5D69C(v73, v74);
          this->fields.myWorkType = v106->fields.workType;
          v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v75 )
            sub_B5D69C(0LL, v76);
          v77 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v75,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v77 )
            sub_B5D69C(0LL, v78);
          v79 = EventFortificationSvtMaster__TryGetEntity(
                  v77,
                  &entity,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  v89->fields.squareIndex,
                  0LL);
          v62 = 1;
          if ( v79 )
          {
            if ( !entity )
              sub_B5D69C(v79, v80);
            this->fields.svtTypeSetInMaster = entity->fields.type;
            v62 = 1;
          }
          goto LABEL_23;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v108,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v103;
}


bool __fastcall EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventFortificationListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8

  v5 = this;
  if ( (byte_42EB22E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFilterMaster___, (_DWORD)sort, (_DWORD)method, v3);
    this = (EventFortificationListViewItem_o *)sub_B5D5C4(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v6,
                                                 v7,
                                                 v8);
    byte_42EB22E = 1;
  }
  if ( !sort )
    goto LABEL_19;
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
    if ( bonusKind2 != 1 )
      return 0;
    this = (EventFortificationListViewItem_o *)v5->fields.userServantEntity;
    if ( this )
      return UserServantEntity__getEventUpVal_21840416(
               (UserServantEntity_o *)this,
               v5->fields.setupInfo,
               bonusKind2Id,
               0LL);
LABEL_19:
    sub_B5D69C(this, sort);
  }
  this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  if ( !userServantEntity || !this )
    goto LABEL_19;
  return ServantFilterMaster__IsEnableServant(
           (ServantFilterMaster_o *)this,
           userServantEntity[5],
           v5->fields.bonusKindId,
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
  Voice_BATTLE_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x0
  UserServantEntity_o *userServantEntity; // x21
  __int64 v25; // x0

  if ( (byte_42EB22D & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v12, v13, v14);
    byte_42EB22D = 1;
  }
  v15 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v15->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  ClassGroupFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                               (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                               (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_41;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v17 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v17 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (Voice_BATTLE_array *)v17->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_41;
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
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v19->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
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
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v21->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
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
  ClassGroupFilterKindList = (Voice_BATTLE_array *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_41:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->max_length )
  {
    v25 = sub_B5D6C8(ClassGroupFilterKindList);
    sub_B5D668(v25, 0LL);
  }
  ClassGroupFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(
           sort,
           (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
           0LL)
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
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventFortificationListViewItem__ModifyPushItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v8; // q1
  int64_t pushUserSvtId; // x20
  bool v10; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-30h]

  if ( (byte_42EB22B & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB22B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_B5D69C(SelfUserGame, v6);
  v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  v10 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v11, 0LL)
     && !this->fields.isNpc;
  this->fields.isPush = v10;
}


bool __fastcall EventFortificationListViewItem__SetSortValue(
        EventFortificationListViewItem_o *this,
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
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  _BOOL4 isChoice; // w8
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v21; // x21
  __int64 v22; // x22
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q1
  struct UserServantEntity_o *v25; // x8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v28; // w1
  int64_t rarity; // x8
  struct UserServantEntity_o *v30; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v33; // w1
  struct UserServantEntity_o *v34; // x8
  struct ServantEntity_o *v35; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v38; // x11
  struct ListViewManager_o *v39; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x21
  __int64 v43; // x22
  struct ServantEntity_o *v44; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v46; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42EB22C & 1) == 0 )
  {
    sub_B5D5C4(&EventFortificationListViewManager_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    byte_42EB22C = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v14)
    || (IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(this, v13), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v17), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
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
  IsBaseSvt = (int64_t)this->fields.iconLabelInfo2;
  if ( !IsBaseSvt
    || (IconLabelInfo__Clear((IconLabelInfo_o *)IsBaseSvt, 0LL),
        servantEntity = this->fields.servantEntity,
        this->fields.sortValue1B = this->fields.priority,
        !servantEntity)
    || (userServantEntity = this->fields.userServantEntity) == 0LL )
  {
LABEL_82:
    sub_B5D69C(IsBaseSvt, v16);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v22;
  *(_QWORD *)&v51.fields.fakeValue = v21;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v51, 0LL);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v23 = this->fields.userServantEntity;
      if ( !v23 )
        goto LABEL_82;
      v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v49.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v48 = v49;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v48, 0LL);
      v25 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v25 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v25->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_64;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_53;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 256);
      goto LABEL_54;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_21848072((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = tdMaxLv[0];
      v28 = 33;
      goto LABEL_63;
    case 5:
      v30 = this->fields.userServantEntity;
      if ( !v30 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v30->fields.hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v30->fields.adjustHp;
      hp = v30->fields.hp;
      v33 = 3;
      goto LABEL_48;
    case 6:
      v34 = this->fields.userServantEntity;
      if ( !v34 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v34->fields.atk;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v34->fields.adjustAtk;
      hp = v34->fields.atk;
      v33 = 5;
LABEL_48:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)IsBaseSvt, v33, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_64;
    case 7:
      v35 = this->fields.servantEntity;
      if ( !v35 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v35->fields.cost;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)IsBaseSvt, 7, v35->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_64;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_53:
      this->fields.sortValue1 = rarity;
      if ( !IsBaseSvt )
        goto LABEL_82;
LABEL_54:
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      goto LABEL_66;
    case 0xA:
      friendship = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = this->fields.friendshipMax;
      v28 = 32;
      goto LABEL_63;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_79;
      manager = sort->fields.manager;
      if ( manager
        && (v38 = *(&EventFortificationListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v38) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v38 - 1] == EventFortificationListViewManager_TypeInfo )
          v39 = sort->fields.manager;
        else
          v39 = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      v41 = this->fields.userServantEntity;
      if ( !v41 )
        goto LABEL_82;
      v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v52.fields.currentCryptoKey = v43;
      *(_QWORD *)&v52.fields.fakeValue = v42;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v52, 0LL);
      if ( !v39 )
        goto LABEL_82;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v39,
                    IsBaseSvt,
                    0LL);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_79:
      v44 = this->fields.servantEntity;
      if ( !v44 )
        goto LABEL_82;
      collectionNo = v44->fields.collectionNo;
      v46 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v46 )
        goto LABEL_82;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      lv = v46->fields.lv;
      IsBaseSvt = (int64_t)v46;
      goto LABEL_67;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v28 = 44;
      goto LABEL_63;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v28 = 45;
LABEL_63:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)IsBaseSvt, v28, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_64:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      iconLabelInfo1 = this->fields.iconLabelInfo2;
LABEL_66:
      lv = *(_DWORD *)(IsBaseSvt + 256);
LABEL_67:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_82;
      IconLabelInfo__Set_28463004(iconLabelInfo1, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
      LOBYTE(IsBaseSvt) = 1;
      break;
    default:
      return IsBaseSvt;
  }
  return IsBaseSvt;
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
  sub_B5D560(
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
  __int64 v3; // x3
  EventFortificationListViewItem_o *v5; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v7; // q1
  int64_t userSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v5 = this;
  if ( (byte_42EB233 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B5D5C4(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 (_DWORD)info,
                                                 (_DWORD)method,
                                                 v3);
    byte_42EB233 = 1;
  }
  if ( !info || (userServantEntity = v5->fields.userServantEntity) == 0LL )
    sub_B5D69C(this, info);
  v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v10, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  EventFortificationListViewItem_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42EB230 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B5D5C4(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 (_DWORD)method,
                                                 v2,
                                                 v3);
    byte_42EB230 = 1;
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
    sub_B5D69C(0LL, method);
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0LL);
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B5D69C(0LL, method);
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  EventFortificationListViewItem_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42EB22F & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B5D5C4(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 (_DWORD)method,
                                                 v2,
                                                 v3);
    byte_42EB22F = 1;
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


bool __fastcall EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
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
  EventFortificationListViewItem___c__DisplayClass115_0_o *v51; // x20
  EventFortificationSvtMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x21
  _BOOL8 v55; // x0
  __int64 v56; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  EventFortificationSvtMaster_o *v60; // x20
  _BOOL8 v61; // x0
  __int64 v62; // x1
  Il2CppObject *current; // x21
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w22
  __int64 FortificationIdx; // x0
  __int64 v67; // x1
  struct EventFortificationWorkItem_o *v68; // x8
  char v69; // w19
  int v70; // w21
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+8h] [xbp-78h] BYREF
  int v72[3]; // [xsp+20h] [xbp-60h]
  int v73; // [xsp+2Ch] [xbp-54h]
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+30h] [xbp-50h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_42EB232 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_System_Func_EventFortificationSvtEntity__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_EventFortificationSvtEntity__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__, v45, v46, v47);
    sub_B5D5C4(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo, v48, v49, v50);
    byte_42EB232 = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v74, 0, sizeof(v74));
  v73 = 0;
  v51 = (EventFortificationListViewItem___c__DisplayClass115_0_o *)sub_B5D694(EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
  EventFortificationListViewItem___c__DisplayClass115_0___ctor(v51, 0LL);
  if ( !v51 )
    goto LABEL_37;
  v51->fields.svtId = svtId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v71,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventFortificationSvtList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v74 = v71;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v74,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v55 )
      break;
    if ( !v74.fields.current )
      sub_B5D69C(v55, v56);
    if ( !HIDWORD(v74.fields.current[1].monitor) )
    {
      if ( !v54 )
        sub_B5D69C(v55, v56);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v54,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v74.fields.current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    }
  }
  v72[0] = 105;
  v73 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v74,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v73 = 0;
  v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v58,
    (Il2CppObject *)v51,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventFortificationSvtEntity__bool___ctor__);
  v59 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v54,
          (System_Func_TSource__bool__o *)v58,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                      v59,
                                                                      (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_37:
    sub_B5D69C(Master_WarQuestSelectionMaster, v53);
  v60 = Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v71,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v74 = v71;
  while ( 1 )
  {
    v61 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v74,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v61 )
      break;
    current = v74.fields.current;
    if ( !v74.fields.current )
      sub_B5D69C(v61, v62);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_B5D69C(0LL, v62);
    klass_high = HIDWORD(v74.fields.current[1].klass);
    FortificationIdx = EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0LL);
    if ( klass_high == (_DWORD)FortificationIdx )
    {
      v68 = this->fields.targetFortificationWorkItem;
      if ( !v68 )
        sub_B5D69C(FortificationIdx, v67);
      if ( LODWORD(current[1].monitor) == v68->fields.position )
      {
        v69 = 0;
        goto LABEL_27;
      }
    }
  }
  v69 = 1;
LABEL_27:
  v72[0] = 221;
  v70 = ++v73;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v74,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  if ( v70 && v72[v70 - 1] == 221 )
    v73 = v70 - 1;
  return v69 & (SLODWORD(v60->fields._MasterName_k__BackingField) > 0);
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
    sub_B5D69C(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}