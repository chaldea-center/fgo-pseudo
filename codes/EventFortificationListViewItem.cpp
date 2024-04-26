void __fastcall EventFortificationListViewItem___ctor(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int64_t baseUserSvtId,
        EventUpValSetupInfo_o *setupInfo,
        EventFortificationWorkItem_o *targetFortificationWorkItem,
        const MethodInfo *method)
{
  IconLabelInfo_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  IconLabelInfo_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int64_t Instance; // x0
  __int64 v35; // x1
  struct UserServantEntity_o *v36; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x24
  __int64 v38; // x25
  __int64 v39; // x26
  struct ServantEntity_o *Entity; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UserServantEntity_o *v47; // x8
  ServantEntity_o *servantEntity; // x24
  struct System_String_o *Name; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UserServantEntity_o *v56; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v58; // x8
  struct UserServantEntity_o *v59; // x8
  __int128 v60; // q1
  struct UserServantEntity_o *v61; // x8
  __int128 v62; // q0
  __int64 v63; // x24
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  bool v70; // w8
  const MethodInfo *v71; // x1
  bool v72; // w0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q0
  UserServantCollectionMaster_o *v81; // x22
  struct UserServantEntity_o *v82; // x8
  int64_t v83; // x23
  __int64 v84; // x24
  __int64 v85; // x25
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v87; // x23
  int64_t v88; // x22
  unsigned int v89; // w24
  __int64 v90; // x25
  __int64 v91; // x8
  unsigned int v92; // w27
  __int64 v93; // x8
  unsigned int v94; // w9
  __int64 v95; // x8
  struct UserServantEntity_o *v96; // x9
  __int128 v97; // q0
  __int64 v98; // x28
  __int64 v99; // x0
  int v100; // w22
  BalanceConfig_c *v101; // x8
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct System_String_o *v108; // x1
  int64_t v109; // x23
  int64_t v110; // x8
  struct ServantEntity_o *v111; // x9
  struct UserServantEntity_o *v112; // x8
  __int64 v113; // x21
  __int64 v114; // x22
  struct UserServantEntity_o *v115; // x8
  __int64 v116; // x22
  __int64 v117; // x23
  int32_t v118; // w0
  const MethodInfo *v119; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16

  if ( (byte_43545C9 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B70694(&IconLabelInfo_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_43545C9 = 1;
  }
  v13 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v13, 0LL);
  this->fields.iconLabelInfo1 = v13;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo2 = v20;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v36 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v126.fields.currentCryptoKey = v39;
  *(_QWORD *)&v126.fields.fakeValue = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v126, 0LL);
  if ( !v37 )
    goto LABEL_95;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v37,
                                       Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = this->fields.userServantEntity;
  if ( !v47 )
    goto LABEL_95;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v47->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_95;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)Name,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
  v56 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v56 )
    goto LABEL_95;
  Rarity = UserServantEntity__getRarity(v56, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v58 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v58 )
    goto LABEL_95;
  Instance = UserServantEntity__IsChoice(v58, 0LL);
  v59 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v59 )
    goto LABEL_95;
  v60 = *(_OWORD *)&v59->fields.userId.fields.fakeValue;
  *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v59->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v125.fields.fakeValue = v60;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v124 = v125;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v124, 0LL) == 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_95;
  v61 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v62 = *(_OWORD *)&v61->fields.id.fields.fakeValue;
  v63 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v61->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v123.fields.fakeValue = v62;
  v70 = v63 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v123, 0LL) && !this->fields.isNpc;
  this->fields.isPush = v70;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)targetFortificationWorkItem,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.svtTypeSetInMaster = -1;
  v72 = EventFortificationListViewItem__CheckFortificationAppointment(this, v71);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v72;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
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
  Instance = TutorialFlag__Get_29045252(126, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_33:
    this->fields.isCanNotSelect = 1;
    goto LABEL_34;
  }
LABEL_32:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_33;
  v115 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v117 = *(_QWORD *)&v115->fields.svtId.fields.currentCryptoKey;
  v116 = *(_QWORD *)&v115->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v129.fields.currentCryptoKey = v117;
  *(_QWORD *)&v129.fields.fakeValue = v116;
  v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v129, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v118, v119) )
    goto LABEL_33;
LABEL_34:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v79 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v80 = *(_OWORD *)&v79->fields.userId.fields.fakeValue;
  v81 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v79->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v125.fields.fakeValue = v80;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v122 = v125;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v122, 0LL);
  v82 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v83 = Instance;
  v85 = *(_QWORD *)&v82->fields.svtId.fields.currentCryptoKey;
  v84 = *(_QWORD *)&v82->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v127.fields.currentCryptoKey = v85;
  *(_QWORD *)&v127.fields.fakeValue = v84;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v127, 0LL);
  if ( !v81 )
    goto LABEL_95;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v81, v83, Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
  v87 = *(_QWORD *)(Instance + 24);
  v88 = Instance;
  if ( (int)v87 >= 1 )
  {
    v89 = 0;
    while ( 1 )
    {
      v90 = *(_QWORD *)(v88 + 8LL * (int)v89 + 32);
      if ( !v90 )
        break;
      v91 = *(_QWORD *)(v90 + 48);
      if ( !v91 )
        break;
      v92 = 0;
      while ( 1 )
      {
        v93 = *(_QWORD *)(v91 + 16);
        if ( !v93 )
          goto LABEL_95;
        v94 = *(_DWORD *)(v93 + 24);
        if ( (int)v92 >= (int)v94 )
          break;
        if ( v92 >= v94 )
          goto LABEL_70;
        v95 = *(_QWORD *)(v93 + 8LL * (int)v92 + 32);
        if ( !v95 )
          goto LABEL_95;
        v96 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_95;
        v97 = *(_OWORD *)&v96->fields.id.fields.fakeValue;
        v98 = *(_QWORD *)(v95 + 24);
        *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v96->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v125.fields.fakeValue = v97;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v121 = v125;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v121, 0LL);
        if ( v98 == Instance )
        {
          this->fields.isParty = 1;
          goto LABEL_72;
        }
        v91 = *(_QWORD *)(v90 + 48);
        ++v92;
        if ( !v91 )
          goto LABEL_95;
      }
      if ( this->fields.isParty )
        goto LABEL_72;
      if ( (int)++v89 >= (int)v87 )
        goto LABEL_72;
      if ( v89 >= *(_DWORD *)(v88 + 24) )
      {
LABEL_70:
        v99 = sub_B70798(Instance);
        sub_B70738(v99, 0LL);
      }
    }
LABEL_95:
    sub_B7076C(Instance, v35);
  }
LABEL_72:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v100 = *(_DWORD *)(Instance + 276);
  v101 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v101 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v101->static_fields->StatusUpAdjustHp * v100;
  if ( !Instance )
    goto LABEL_95;
  this->fields.atkReinforceValue = v101->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_95;
  v108 = *(struct System_String_o **)(Instance + 24);
  v109 = Instance;
  this->fields.className = v108;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)v108,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v110 = *(int *)(v109 + 48);
  v111 = this->fields.servantEntity;
  this->fields.priority = v110;
  this->fields.sortValue1B = v110;
  if ( !v111 )
    goto LABEL_95;
  v112 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  this->fields.sortValue2 = ((__int64)v111->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v112->fields.lv;
  v114 = *(_QWORD *)&v112->fields.svtId.fields.currentCryptoKey;
  v113 = *(_QWORD *)&v112->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v128.fields.currentCryptoKey = v114;
  *(_QWORD *)&v128.fields.fakeValue = v113;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v128, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  EventFortificationDetailMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *v6; // x0
  struct System_String_o *TeamName; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *Name; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t WorkType; // w0
  bool v22; // w8
  EventFortificationMaster_o *v23; // x21
  char v24; // w8
  System_Int32_array **v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  __int64 v35; // x0
  __int64 v36; // x1
  WebViewManager_o *v37; // x0
  __int64 v38; // x1
  EventFortificationSvtMaster_o *v39; // x0
  __int64 v40; // x1
  _BOOL8 v41; // x0
  __int64 v42; // x1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x25
  WarBoardData_SquareRangeSearch_o *v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x5
  WarBoardData_SquareRangeSearch_o *v51; // x24
  _BOOL8 v52; // x0
  __int64 v53; // x1
  _BOOL8 v54; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  BattleServantConfConponent_o *p_myDetailName; // [xsp+8h] [xbp-B8h]
  BattleServantConfConponent_o *p_myTeamName; // [xsp+10h] [xbp-B0h]
  bool v65; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+20h] [xbp-A0h] BYREF
  EventFortificationSvtEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  EventFortificationEntity_o *v68; // [xsp+40h] [xbp-80h] BYREF
  EventFortificationDetailEntity_o *v69; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_43545D0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__);
    sub_B70694(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__);
    sub_B70694(&Method_System_Func_SetSvtInfo__bool___ctor__);
    sub_B70694(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43545D0 = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v70, 0, sizeof(v70));
  v68 = 0LL;
  v69 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (EventFortificationDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             Instance,
                                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v6 = DataManager__GetMasterData_WarQuestSelectionMaster_(
         Instance,
         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
    if ( Instance )
    {
      TeamName = EventFortificationWorkItem__get_TeamName((EventFortificationWorkItem_o *)Instance, 0LL);
      this->fields.myTeamName = TeamName;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.myTeamName,
        (System_Int32_array **)TeamName,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
      if ( Instance )
      {
        Name = EventFortificationWorkItem__get_Name((EventFortificationWorkItem_o *)Instance, 0LL);
        this->fields.myDetailName = Name;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.myDetailName,
          (System_Int32_array **)Name,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
        if ( Instance )
        {
          WorkType = EventFortificationWorkItem__get_WorkType((EventFortificationWorkItem_o *)Instance, 0LL);
          v22 = 1;
          this->fields.myWorkType = WorkType;
          this->fields.svtTypeSetInMaster = 1;
          return v22;
        }
      }
    }
LABEL_36:
    sub_B7076C(Instance, v4);
  }
  v23 = (EventFortificationMaster_o *)v6;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v66,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userEventFortificationList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myTeamName = (BattleServantConfConponent_o *)&this->fields.myTeamName;
  p_myDetailName = (BattleServantConfConponent_o *)&this->fields.myDetailName;
  v24 = 0;
  v70 = v66;
LABEL_23:
  v65 = v24;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v70,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v43 )
      break;
    current = v70.fields.current;
    if ( !v70.fields.current )
      sub_B7076C(v43, v44);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v70.fields.current[2].monitor;
    v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v47,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_SetSvtInfo__bool___ctor__);
    v48 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            monitor,
            (System_Func_TSource__bool__o *)v47,
            (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v51 = v48;
    if ( v48 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7076C(v48, v49);
      v52 = EventFortificationDetailMaster__TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &v69,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              v48->fields.squareIndex,
              v50);
      if ( v52 )
      {
        if ( !v23 )
          sub_B7076C(v52, v53);
        v54 = EventFortificationMaster__TryGetEntity(v23, &v68, this->fields.eventId, HIDWORD(current[1].monitor), 0LL);
        if ( v54 )
        {
          if ( !v68 )
            sub_B7076C(v54, v55);
          v25 = (System_Int32_array **)v68->fields.name;
          p_myTeamName->klass = (BattleServantConfConponent_c *)v25;
          sub_B70630(p_myTeamName, v25, v56, v57, v58, v59, v60, v61);
          if ( !v69 )
            sub_B7076C(v26, v27);
          v34 = (System_Int32_array **)v69->fields.name;
          p_myDetailName->klass = (BattleServantConfConponent_c *)v34;
          sub_B70630(p_myDetailName, v34, v28, v29, v30, v31, v32, v33);
          if ( !v68 )
            sub_B7076C(v35, v36);
          this->fields.myWorkType = v68->fields.workType;
          v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v37 )
            sub_B7076C(0LL, v38);
          v39 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v37,
                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v39 )
            sub_B7076C(0LL, v40);
          v41 = EventFortificationSvtMaster__TryGetEntity(
                  v39,
                  &entity,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  v51->fields.squareIndex,
                  0LL);
          v24 = 1;
          if ( v41 )
          {
            if ( !entity )
              sub_B7076C(v41, v42);
            this->fields.svtTypeSetInMaster = entity->fields.type;
            v24 = 1;
          }
          goto LABEL_23;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v70,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v65;
}


bool __fastcall EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x19
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8

  v4 = this;
  if ( (byte_43545CD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    this = (EventFortificationListViewItem_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43545CD = 1;
  }
  if ( !sort )
    goto LABEL_19;
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
    if ( bonusKind2 != 1 )
      return 0;
    this = (EventFortificationListViewItem_o *)v4->fields.userServantEntity;
    if ( this )
      return UserServantEntity__getEventUpVal_21624572(
               (UserServantEntity_o *)this,
               v4->fields.setupInfo,
               bonusKind2Id,
               0LL,
               0LL);
LABEL_19:
    sub_B7076C(this, sort);
  }
  this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  if ( !userServantEntity || !this )
    goto LABEL_19;
  return ServantFilterMaster__IsEnableServant(
           (ServantFilterMaster_o *)this,
           userServantEntity[5],
           v4->fields.bonusKindId,
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
  FilterKindList_c *v5; // x0
  Voice_BATTLE_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  UserServantEntity_o *userServantEntity; // x21
  __int64 v15; // x0

  if ( (byte_43545CC & 1) == 0 )
  {
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&ListViewSort_FilterKind___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B70694(&ServantEventBonusFilterController_TypeInfo);
    byte_43545CC = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  ClassGroupFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                               (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                               (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_41;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (Voice_BATTLE_array *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_41;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
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
  ClassGroupFilterKindList = (Voice_BATTLE_array *)sub_B706AC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_41:
    sub_B7076C(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->max_length )
  {
    v15 = sub_B70798(ClassGroupFilterKindList);
    sub_B70738(v15, 0LL);
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
    sub_B7076C(0LL, method);
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
  sub_B70630(
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
    sub_B7076C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventFortificationListViewItem__ModifyPushItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  bool v8; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-30h]

  if ( (byte_43545CA & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43545CA = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_B7076C(SelfUserGame, v4);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  v8 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v9, 0LL)
    && !this->fields.isNpc;
  this->fields.isPush = v8;
}


bool __fastcall EventFortificationListViewItem__SetSortValue(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t *p_sortValue0; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int64_t IsBaseSvt; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  _BOOL4 isChoice; // w8
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v14; // x21
  __int64 v15; // x22
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  struct UserServantEntity_o *v18; // x8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v21; // w1
  int64_t rarity; // x8
  struct UserServantEntity_o *v23; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v26; // w1
  struct UserServantEntity_o *v27; // x8
  struct ServantEntity_o *v28; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v31; // x11
  struct ListViewManager_o *v32; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v34; // x8
  __int64 v35; // x21
  __int64 v36; // x22
  struct ServantEntity_o *v37; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v39; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_43545CB & 1) == 0 )
  {
    sub_B70694(&EventFortificationListViewManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43545CB = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v7)
    || (IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(this, v6), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v10), (IsBaseSvt & 1) == 0) )
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
    sub_B7076C(IsBaseSvt, v9);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v15;
  *(_QWORD *)&v44.fields.fakeValue = v14;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v44, 0LL);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v16 = this->fields.userServantEntity;
      if ( !v16 )
        goto LABEL_82;
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v42.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v41 = v42;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v41, 0LL);
      v18 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v18 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v18->fields.createdAt, 0, 0, 0, 0LL);
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
      UserServantEntity__getTreasureDeviceInfo_21632300((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = tdMaxLv[0];
      v21 = 33;
      goto LABEL_63;
    case 5:
      v23 = this->fields.userServantEntity;
      if ( !v23 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v23->fields.hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v23->fields.adjustHp;
      hp = v23->fields.hp;
      v26 = 3;
      goto LABEL_48;
    case 6:
      v27 = this->fields.userServantEntity;
      if ( !v27 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v27->fields.atk;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v27->fields.adjustAtk;
      hp = v27->fields.atk;
      v26 = 5;
LABEL_48:
      IconLabelInfo__Set_27789840((IconLabelInfo_o *)IsBaseSvt, v26, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_64;
    case 7:
      v28 = this->fields.servantEntity;
      if ( !v28 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v28->fields.cost;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__Set_27789840((IconLabelInfo_o *)IsBaseSvt, 7, v28->fields.cost, 0, 0, 0, 0, 0, 0LL);
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
      v21 = 32;
      goto LABEL_63;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_79;
      manager = sort->fields.manager;
      if ( manager
        && (v31 = *(&EventFortificationListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v31) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v31 - 1] == EventFortificationListViewManager_TypeInfo )
          v32 = sort->fields.manager;
        else
          v32 = 0LL;
      }
      else
      {
        v32 = 0LL;
      }
      v34 = this->fields.userServantEntity;
      if ( !v34 )
        goto LABEL_82;
      v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v45.fields.currentCryptoKey = v36;
      *(_QWORD *)&v45.fields.fakeValue = v35;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v45, 0LL);
      if ( !v32 )
        goto LABEL_82;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v32,
                    IsBaseSvt,
                    0LL);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_79:
      v37 = this->fields.servantEntity;
      if ( !v37 )
        goto LABEL_82;
      collectionNo = v37->fields.collectionNo;
      v39 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v39 )
        goto LABEL_82;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      lv = v39->fields.lv;
      IsBaseSvt = (int64_t)v39;
      goto LABEL_67;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v21 = 44;
      goto LABEL_63;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v21 = 45;
LABEL_63:
      IconLabelInfo__Set_27789840((IconLabelInfo_o *)IsBaseSvt, v21, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_27789840(iconLabelInfo1, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
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
  sub_B70630(
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
  EventFortificationListViewItem_o *v4; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  int64_t userSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_43545D2 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43545D2 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0LL )
    sub_B7076C(this, info);
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
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v9, 0LL);
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
  EventFortificationListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_43545CF & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43545CF = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B7076C(this, method);
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
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v7, 0LL);
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
    sub_B7076C(userServantEntity, method);
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
    sub_B7076C(0LL, method);
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0LL);
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B7076C(0LL, method);
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B7076C(0LL, method);
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
  EventFortificationListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_43545CE & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_43545CE = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B7076C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v6, 0LL);
}


bool __fastcall EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  EventFortificationListViewItem___c__DisplayClass115_0_o *v5; // x20
  EventFortificationSvtMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  EventFortificationSvtMaster_o *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x21
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w22
  __int64 FortificationIdx; // x0
  __int64 v21; // x1
  struct EventFortificationWorkItem_o *v22; // x8
  char v23; // w19
  int v24; // w21
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  int v26[3]; // [xsp+20h] [xbp-60h]
  int v27; // [xsp+2Ch] [xbp-54h]
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+30h] [xbp-50h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_43545D1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__);
    sub_B70694(&Method_System_Func_EventFortificationSvtEntity__bool___ctor__);
    sub_B70694(&System_Func_EventFortificationSvtEntity__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_B70694(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_B70694(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__);
    sub_B70694(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
    byte_43545D1 = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v28, 0, sizeof(v28));
  v27 = 0;
  v5 = (EventFortificationListViewItem___c__DisplayClass115_0_o *)sub_B70764(EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
  EventFortificationListViewItem___c__DisplayClass115_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_37;
  v5->fields.svtId = svtId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventFortificationSvtList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v28 = v25;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v28,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v9 )
      break;
    if ( !v28.fields.current )
      sub_B7076C(v9, v10);
    if ( !HIDWORD(v28.fields.current[1].monitor) )
    {
      if ( !v8 )
        sub_B7076C(v9, v10);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28.fields.current,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    }
  }
  v26[0] = 105;
  v27 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v27 = 0;
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_EventFortificationSvtEntity__bool___ctor__);
  v13 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                      v13,
                                                                      (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_37:
    sub_B7076C(Master_WarQuestSelectionMaster, v7);
  v14 = Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v28 = v25;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v28.fields.current;
    if ( !v28.fields.current )
      sub_B7076C(v15, v16);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_B7076C(0LL, v16);
    klass_high = HIDWORD(v28.fields.current[1].klass);
    FortificationIdx = EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0LL);
    if ( klass_high == (_DWORD)FortificationIdx )
    {
      v22 = this->fields.targetFortificationWorkItem;
      if ( !v22 )
        sub_B7076C(FortificationIdx, v21);
      if ( LODWORD(current[1].monitor) == v22->fields.position )
      {
        v23 = 0;
        goto LABEL_27;
      }
    }
  }
  v23 = 1;
LABEL_27:
  v26[0] = 221;
  v24 = ++v27;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  if ( v24 && v26[v24 - 1] == 221 )
    v27 = v24 - 1;
  return v23 & (SLODWORD(v14->fields._MasterName_k__BackingField) > 0);
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
    sub_B7076C(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}