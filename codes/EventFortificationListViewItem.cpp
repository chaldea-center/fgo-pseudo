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
  IconLabelInfo_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int64_t Instance; // x0
  __int64 v47; // x1
  struct UserServantEntity_o *v48; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x24
  __int64 v50; // x25
  __int64 v51; // x26
  struct ServantEntity_o *Entity; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct UserServantEntity_o *v59; // x8
  ServantEntity_o *servantEntity; // x24
  struct System_String_o *Name; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UserServantEntity_o *v68; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v70; // x8
  struct UserServantEntity_o *v71; // x8
  __int128 v72; // q1
  struct UserServantEntity_o *v73; // x8
  __int128 v74; // q0
  __int64 v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  bool v82; // w8
  const MethodInfo *v83; // x1
  bool v84; // w0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct UserServantEntity_o *v91; // x8
  __int128 v92; // q0
  UserServantCollectionMaster_o *v93; // x22
  struct UserServantEntity_o *v94; // x8
  int64_t v95; // x23
  __int64 v96; // x24
  __int64 v97; // x25
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v99; // x23
  int64_t v100; // x22
  unsigned int v101; // w24
  __int64 v102; // x25
  __int64 v103; // x8
  unsigned int v104; // w27
  __int64 v105; // x8
  unsigned int v106; // w9
  __int64 v107; // x8
  struct UserServantEntity_o *v108; // x9
  __int128 v109; // q0
  __int64 v110; // x28
  __int64 v111; // x0
  int v112; // w22
  BalanceConfig_c *v113; // x8
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  struct System_String_o *v120; // x1
  int64_t v121; // x23
  int64_t v122; // x8
  struct ServantEntity_o *v123; // x9
  struct UserServantEntity_o *v124; // x8
  __int64 v125; // x21
  __int64 v126; // x22
  struct UserServantEntity_o *v127; // x8
  __int64 v128; // x22
  __int64 v129; // x23
  int32_t v130; // w0
  const MethodInfo *v131; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_418A3E8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userServantEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v18);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&TutorialFlag_TypeInfo, v24);
    byte_418A3E8 = 1;
  }
  v25 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0LL);
  this->fields.iconLabelInfo1 = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v32, 0LL);
  this->fields.iconLabelInfo2 = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v138.fields.currentCryptoKey = v51;
  *(_QWORD *)&v138.fields.fakeValue = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v138, 0LL);
  if ( !v49 )
    goto LABEL_95;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v49,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = this->fields.userServantEntity;
  if ( !v59 )
    goto LABEL_95;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v59->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_95;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantName,
    (System_Int32_array **)Name,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
  v68 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v68 )
    goto LABEL_95;
  Rarity = UserServantEntity__getRarity(v68, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v70 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v70 )
    goto LABEL_95;
  Instance = UserServantEntity__IsChoice(v70, 0LL);
  v71 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v71 )
    goto LABEL_95;
  v72 = *(_OWORD *)&v71->fields.userId.fields.fakeValue;
  *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&v71->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v137.fields.fakeValue = v72;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v136 = v137;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v136, 0LL) == 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_95;
  v73 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
  v75 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v135.fields.fakeValue = v74;
  v82 = v75 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v135, 0LL) && !this->fields.isNpc;
  this->fields.isPush = v82;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetFortificationWorkItem,
    (System_Int32_array **)targetFortificationWorkItem,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields.svtTypeSetInMaster = -1;
  v84 = EventFortificationListViewItem__CheckFortificationAppointment(this, v83);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v84;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
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
  Instance = TutorialFlag__Get_28617756(126, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_33:
    this->fields.isCanNotSelect = 1;
    goto LABEL_34;
  }
LABEL_32:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_33;
  v127 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v129 = *(_QWORD *)&v127->fields.svtId.fields.currentCryptoKey;
  v128 = *(_QWORD *)&v127->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v141.fields.currentCryptoKey = v129;
  *(_QWORD *)&v141.fields.fakeValue = v128;
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v141, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v130, v131) )
    goto LABEL_33;
LABEL_34:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v91 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v92 = *(_OWORD *)&v91->fields.userId.fields.fakeValue;
  v93 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&v91->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v137.fields.fakeValue = v92;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v134 = v137;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v134, 0LL);
  v94 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v95 = Instance;
  v97 = *(_QWORD *)&v94->fields.svtId.fields.currentCryptoKey;
  v96 = *(_QWORD *)&v94->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v139.fields.currentCryptoKey = v97;
  *(_QWORD *)&v139.fields.fakeValue = v96;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v139, 0LL);
  if ( !v93 )
    goto LABEL_95;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v93, v95, Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
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
    goto LABEL_95;
  Instance = (int64_t)UserDeckMaster__getDeckList(MasterData_WarQuestSelectionMaster, Instance, 0LL);
  if ( !Instance )
    goto LABEL_95;
  v99 = *(_QWORD *)(Instance + 24);
  v100 = Instance;
  if ( (int)v99 >= 1 )
  {
    v101 = 0;
    while ( 1 )
    {
      v102 = *(_QWORD *)(v100 + 8LL * (int)v101 + 32);
      if ( !v102 )
        break;
      v103 = *(_QWORD *)(v102 + 48);
      if ( !v103 )
        break;
      v104 = 0;
      while ( 1 )
      {
        v105 = *(_QWORD *)(v103 + 16);
        if ( !v105 )
          goto LABEL_95;
        v106 = *(_DWORD *)(v105 + 24);
        if ( (int)v104 >= (int)v106 )
          break;
        if ( v104 >= v106 )
          goto LABEL_70;
        v107 = *(_QWORD *)(v105 + 8LL * (int)v104 + 32);
        if ( !v107 )
          goto LABEL_95;
        v108 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_95;
        v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
        v110 = *(_QWORD *)(v107 + 24);
        *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v137.fields.fakeValue = v109;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v133 = v137;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v133, 0LL);
        if ( v110 == Instance )
        {
          this->fields.isParty = 1;
          goto LABEL_72;
        }
        v103 = *(_QWORD *)(v102 + 48);
        ++v104;
        if ( !v103 )
          goto LABEL_95;
      }
      if ( this->fields.isParty )
        goto LABEL_72;
      if ( (int)++v101 >= (int)v99 )
        goto LABEL_72;
      if ( v101 >= *(_DWORD *)(v100 + 24) )
      {
LABEL_70:
        v111 = sub_B2C460(Instance);
        sub_B2C400(v111, 0LL);
      }
    }
LABEL_95:
    sub_B2C434(Instance, v47);
  }
LABEL_72:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v112 = *(_DWORD *)(Instance + 276);
  v113 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v113 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v113->static_fields->StatusUpAdjustHp * v112;
  if ( !Instance )
    goto LABEL_95;
  this->fields.atkReinforceValue = v113->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_95;
  v120 = *(struct System_String_o **)(Instance + 24);
  v121 = Instance;
  this->fields.className = v120;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.className,
    (System_Int32_array **)v120,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v122 = *(int *)(v121 + 48);
  v123 = this->fields.servantEntity;
  this->fields.priority = v122;
  this->fields.sortValue1B = v122;
  if ( !v123 )
    goto LABEL_95;
  v124 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  this->fields.sortValue2 = ((__int64)v123->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v124->fields.lv;
  v126 = *(_QWORD *)&v124->fields.svtId.fields.currentCryptoKey;
  v125 = *(_QWORD *)&v124->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v140.fields.currentCryptoKey = v126;
  *(_QWORD *)&v140.fields.fakeValue = v125;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v140, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  EventFortificationDetailMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *v18; // x0
  struct System_String_o *TeamName; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_o *Name; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t WorkType; // w0
  bool v34; // w8
  EventFortificationMaster_o *v35; // x21
  char v36; // w8
  System_Int32_array **v37; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  __int64 v47; // x0
  __int64 v48; // x1
  WebViewManager_o *v49; // x0
  __int64 v50; // x1
  EventFortificationSvtMaster_o *v51; // x0
  __int64 v52; // x1
  _BOOL8 v53; // x0
  __int64 v54; // x1
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v59; // x25
  WarBoardData_SquareRangeSearch_o *v60; // x0
  __int64 v61; // x1
  const MethodInfo *v62; // x5
  WarBoardData_SquareRangeSearch_o *v63; // x24
  _BOOL8 v64; // x0
  __int64 v65; // x1
  _BOOL8 v66; // x0
  __int64 v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  BattleServantConfConponent_o *p_myDetailName; // [xsp+8h] [xbp-B8h]
  BattleServantConfConponent_o *p_myTeamName; // [xsp+10h] [xbp-B0h]
  bool v77; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+20h] [xbp-A0h] BYREF
  EventFortificationSvtEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  EventFortificationEntity_o *v80; // [xsp+40h] [xbp-80h] BYREF
  EventFortificationDetailEntity_o *v81; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_418A3EF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__, v9);
    sub_B2C35C(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__, v10);
    sub_B2C35C(&Method_System_Func_SetSvtInfo__bool___ctor__, v11);
    sub_B2C35C(&System_Func_SetSvtInfo__bool__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418A3EF = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v82, 0, sizeof(v82));
  v80 = 0LL;
  v81 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_36;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (EventFortificationDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             Instance,
                                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v18 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
    if ( Instance )
    {
      TeamName = EventFortificationWorkItem__get_TeamName((EventFortificationWorkItem_o *)Instance, 0LL);
      this->fields.myTeamName = TeamName;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.myTeamName,
        (System_Int32_array **)TeamName,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
      if ( Instance )
      {
        Name = EventFortificationWorkItem__get_Name((EventFortificationWorkItem_o *)Instance, 0LL);
        this->fields.myDetailName = Name;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.myDetailName,
          (System_Int32_array **)Name,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
        if ( Instance )
        {
          WorkType = EventFortificationWorkItem__get_WorkType((EventFortificationWorkItem_o *)Instance, 0LL);
          v34 = 1;
          this->fields.myWorkType = WorkType;
          this->fields.svtTypeSetInMaster = 1;
          return v34;
        }
      }
    }
LABEL_36:
    sub_B2C434(Instance, v16);
  }
  v35 = (EventFortificationMaster_o *)v18;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_36;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v78,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)userEventFortificationList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myTeamName = (BattleServantConfConponent_o *)&this->fields.myTeamName;
  p_myDetailName = (BattleServantConfConponent_o *)&this->fields.myDetailName;
  v36 = 0;
  v82 = v78;
LABEL_23:
  v77 = v36;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v82,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v55 )
      break;
    current = v82.fields.current;
    if ( !v82.fields.current )
      sub_B2C434(v55, v56);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v82.fields.current[2].monitor;
    v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_SetSvtInfo__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v59,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_SetSvtInfo__bool___ctor__);
    v60 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            monitor,
            (System_Func_TSource__bool__o *)v59,
            (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v63 = v60;
    if ( v60 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(v60, v61);
      v64 = EventFortificationDetailMaster__TryGetEntity(
              MasterData_WarQuestSelectionMaster,
              &v81,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              v60->fields.squareIndex,
              v62);
      if ( v64 )
      {
        if ( !v35 )
          sub_B2C434(v64, v65);
        v66 = EventFortificationMaster__TryGetEntity(v35, &v80, this->fields.eventId, HIDWORD(current[1].monitor), 0LL);
        if ( v66 )
        {
          if ( !v80 )
            sub_B2C434(v66, v67);
          v37 = (System_Int32_array **)v80->fields.name;
          p_myTeamName->klass = (BattleServantConfConponent_c *)v37;
          sub_B2C2F8(p_myTeamName, v37, v68, v69, v70, v71, v72, v73);
          if ( !v81 )
            sub_B2C434(v38, v39);
          v46 = (System_Int32_array **)v81->fields.name;
          p_myDetailName->klass = (BattleServantConfConponent_c *)v46;
          sub_B2C2F8(p_myDetailName, v46, v40, v41, v42, v43, v44, v45);
          if ( !v80 )
            sub_B2C434(v47, v48);
          this->fields.myWorkType = v80->fields.workType;
          v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v49 )
            sub_B2C434(0LL, v50);
          v51 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)v49,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v51 )
            sub_B2C434(0LL, v52);
          v53 = EventFortificationSvtMaster__TryGetEntity(
                  v51,
                  &entity,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  v63->fields.squareIndex,
                  0LL);
          v36 = 1;
          if ( v53 )
          {
            if ( !entity )
              sub_B2C434(v53, v54);
            this->fields.svtTypeSetInMaster = entity->fields.type;
            v36 = 1;
          }
          goto LABEL_23;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v82,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v77;
}


bool __fastcall EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x19
  __int64 v5; // x1
  int32_t bonusKind2; // w8
  int32_t bonusKind2Id; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8

  v4 = this;
  if ( (byte_418A3EC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFilterMaster___, sort);
    this = (EventFortificationListViewItem_o *)sub_B2C35C(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v5);
    byte_418A3EC = 1;
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
      return UserServantEntity__getEventUpVal_21652144(
               (UserServantEntity_o *)this,
               v4->fields.setupInfo,
               bonusKind2Id,
               0LL);
LABEL_19:
    sub_B2C434(this, sort);
  }
  this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  Voice_BATTLE_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  UserServantEntity_o *userServantEntity; // x21
  __int64 v18; // x0

  if ( (byte_418A3EB & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B2C35C(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_418A3EB = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
  ClassGroupFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                               (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                               (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_41;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (Voice_BATTLE_array *)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_41;
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
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
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
  ClassGroupFilterKindList = (Voice_BATTLE_array *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_41;
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
  ClassGroupFilterKindList = (Voice_BATTLE_array *)sub_B2C374(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_41:
    sub_B2C434(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->max_length )
  {
    v18 = sub_B2C460(ClassGroupFilterKindList);
    sub_B2C400(v18, 0LL);
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
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418A3E9 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418A3E9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_B2C434(SelfUserGame, v4);
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
  v8 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v9, 0LL)
    && !this->fields.isNpc;
  this->fields.isPush = v8;
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
  int64_t IsBaseSvt; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  _BOOL4 isChoice; // w8
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  struct UserServantEntity_o *v20; // x8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v23; // w1
  int64_t rarity; // x8
  struct UserServantEntity_o *v25; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v28; // w1
  struct UserServantEntity_o *v29; // x8
  struct ServantEntity_o *v30; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v33; // x11
  struct ListViewManager_o *v34; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v36; // x8
  __int64 v37; // x21
  __int64 v38; // x22
  struct ServantEntity_o *v39; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v41; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-50h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_418A3EA & 1) == 0 )
  {
    sub_B2C35C(&EventFortificationListViewManager_TypeInfo, sort);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    byte_418A3EA = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v9)
    || (IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(this, v8), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v12), (IsBaseSvt & 1) == 0) )
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
    sub_B2C434(IsBaseSvt, v11);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v17;
  *(_QWORD *)&v46.fields.fakeValue = v16;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v46, 0LL);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v18 = this->fields.userServantEntity;
      if ( !v18 )
        goto LABEL_82;
      v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v44.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v43 = v44;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v43, 0LL);
      v20 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v20 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v20->fields.createdAt, 0, 0, 0, 0LL);
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
      UserServantEntity__getTreasureDeviceInfo_21659764((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = tdMaxLv[0];
      v23 = 33;
      goto LABEL_63;
    case 5:
      v25 = this->fields.userServantEntity;
      if ( !v25 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v25->fields.hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v25->fields.adjustHp;
      hp = v25->fields.hp;
      v28 = 3;
      goto LABEL_48;
    case 6:
      v29 = this->fields.userServantEntity;
      if ( !v29 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v29->fields.atk;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v29->fields.adjustAtk;
      hp = v29->fields.atk;
      v28 = 5;
LABEL_48:
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)IsBaseSvt, v28, hp, adjustHp, 0, 0, 0, 0, 0LL);
      goto LABEL_64;
    case 7:
      v30 = this->fields.servantEntity;
      if ( !v30 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v30->fields.cost;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)IsBaseSvt, 7, v30->fields.cost, 0, 0, 0, 0, 0, 0LL);
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
      v23 = 32;
      goto LABEL_63;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_79;
      manager = sort->fields.manager;
      if ( manager
        && (v33 = *(&EventFortificationListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v33) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v33 - 1] == EventFortificationListViewManager_TypeInfo )
          v34 = sort->fields.manager;
        else
          v34 = 0LL;
      }
      else
      {
        v34 = 0LL;
      }
      v36 = this->fields.userServantEntity;
      if ( !v36 )
        goto LABEL_82;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v38;
      *(_QWORD *)&v47.fields.fakeValue = v37;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
      if ( !v34 )
        goto LABEL_82;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v34,
                    IsBaseSvt,
                    0LL);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_79:
      v39 = this->fields.servantEntity;
      if ( !v39 )
        goto LABEL_82;
      collectionNo = v39->fields.collectionNo;
      v41 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v41 )
        goto LABEL_82;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      lv = v41->fields.lv;
      IsBaseSvt = (int64_t)v41;
      goto LABEL_67;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v23 = 44;
      goto LABEL_63;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !IsBaseSvt )
        goto LABEL_82;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v23 = 45;
LABEL_63:
      IconLabelInfo__Set_27362128((IconLabelInfo_o *)IsBaseSvt, v23, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_27362128(iconLabelInfo1, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
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
  sub_B2C2F8(
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
  if ( (byte_418A3F1 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B2C35C(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 info);
    byte_418A3F1 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0LL )
    sub_B2C434(this, info);
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
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v9, 0LL);
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
  if ( (byte_418A3EE & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B2C35C(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_418A3EE = 1;
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
    sub_B2C434(userServantEntity, method);
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
    sub_B2C434(0LL, method);
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0LL);
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B2C434(0LL, method);
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_B2C434(0LL, method);
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
  if ( (byte_418A3ED & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_B2C35C(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method);
    byte_418A3ED = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  EventFortificationListViewItem___c__DisplayClass115_0_o *v20; // x20
  EventFortificationSvtMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  EventFortificationSvtMaster_o *v29; // x20
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x21
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w22
  __int64 FortificationIdx; // x0
  __int64 v36; // x1
  struct EventFortificationWorkItem_o *v37; // x8
  char v38; // w19
  int v39; // w21
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-78h] BYREF
  int v41[3]; // [xsp+20h] [xbp-60h]
  int v42; // [xsp+2Ch] [xbp-54h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+30h] [xbp-50h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_418A3F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__, v10);
    sub_B2C35C(&Method_System_Func_EventFortificationSvtEntity__bool___ctor__, v11);
    sub_B2C35C(&System_Func_EventFortificationSvtEntity__bool__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v16);
    sub_B2C35C(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v17);
    sub_B2C35C(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__, v18);
    sub_B2C35C(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo, v19);
    byte_418A3F0 = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v43, 0, sizeof(v43));
  v42 = 0;
  v20 = (EventFortificationListViewItem___c__DisplayClass115_0_o *)sub_B2C42C(EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo);
  EventFortificationListViewItem___c__DisplayClass115_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_37;
  v20->fields.svtId = svtId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventFortificationSvtList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v43 = v40;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v24 )
      break;
    if ( !v43.fields.current )
      sub_B2C434(v24, v25);
    if ( !HIDWORD(v43.fields.current[1].monitor) )
    {
      if ( !v23 )
        sub_B2C434(v24, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v43.fields.current,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    }
  }
  v41[0] = 105;
  v42 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v42 = 0;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventFortificationSvtEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v20,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_EventFortificationSvtEntity__bool___ctor__);
  v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_WarQuestSelectionMaster = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                      v28,
                                                                      (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_37:
    sub_B2C434(Master_WarQuestSelectionMaster, v22);
  v29 = Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v43 = v40;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v30 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B2C434(v30, v31);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_B2C434(0LL, v31);
    klass_high = HIDWORD(v43.fields.current[1].klass);
    FortificationIdx = EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0LL);
    if ( klass_high == (_DWORD)FortificationIdx )
    {
      v37 = this->fields.targetFortificationWorkItem;
      if ( !v37 )
        sub_B2C434(FortificationIdx, v36);
      if ( LODWORD(current[1].monitor) == v37->fields.position )
      {
        v38 = 0;
        goto LABEL_27;
      }
    }
  }
  v38 = 1;
LABEL_27:
  v41[0] = 221;
  v39 = ++v42;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  if ( v39 && v41[v39 - 1] == 221 )
    v42 = v39 - 1;
  return v38 & (SLODWORD(v29->fields._MasterName_k__BackingField) > 0);
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
    sub_B2C434(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}