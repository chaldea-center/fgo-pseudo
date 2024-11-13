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
  const MethodInfo_37DEB14 **v7; // x27
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  IconLabelInfo_o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  IconLabelInfo_o *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct UserServantEntity_o **p_userServantEntity; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t Instance; // x0
  __int64 v63; // x1
  struct UserServantEntity_o *v64; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v65; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // x24
  __int64 v67; // x25
  __int64 v68; // x26
  Il2CppObject *Entity; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct UserServantEntity_o *v76; // x8
  ServantEntity_o *servantEntity; // x24
  struct System_String_o *Name; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  UserServantEntity_o *v85; // x8
  int32_t Rarity; // w8
  UserServantEntity_o *v87; // x8
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q1
  struct UserServantEntity_o *v90; // x8
  __int128 v91; // q0
  __int64 v92; // x24
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  bool v99; // w8
  const MethodInfo *v100; // x1
  bool v101; // w0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct UserServantEntity_o *v108; // x8
  __int128 v109; // q0
  UserServantCollectionMaster_o *v110; // x22
  struct UserServantEntity_o *v111; // x8
  int64_t v112; // x23
  __int64 v113; // x24
  __int64 v114; // x25
  __int64 v115; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v117; // x23
  int64_t v118; // x22
  unsigned int v119; // w24
  __int64 v120; // x25
  __int64 v121; // x8
  const MethodInfo_37DEB14 **v122; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v123; // x27
  unsigned int v124; // w29
  __int64 v125; // x8
  unsigned int v126; // w9
  __int64 v127; // x8
  struct UserServantEntity_o *v128; // x9
  __int128 v129; // q0
  __int64 v130; // x28
  int v131; // w22
  BalanceConfig_c *v132; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct System_String_o *v140; // x1
  int64_t v141; // x23
  int64_t v142; // x8
  struct ServantEntity_o *v143; // x9
  struct UserServantEntity_o *v144; // x8
  __int64 v145; // x21
  __int64 v146; // x22
  struct UserServantEntity_o *v147; // x8
  __int64 v148; // x22
  __int64 v149; // x23
  int32_t v150; // w0
  const MethodInfo *v151; // x2
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  v7 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4B1A0B6 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userServantEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22, v23);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v24, v25);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v36, v37);
    byte_4B1A0B6 = 1;
  }
  v38 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, userServantEntity, *(_QWORD *)&eventId, baseUserSvtId);
  IconLabelInfo___ctor(v38, 0LL);
  this->fields.iconLabelInfo1 = v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  v48 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v45, v46, v47);
  IconLabelInfo___ctor(v48, 0LL);
  this->fields.iconLabelInfo2 = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.eventId = eventId;
  this->fields.baseUserSvtId = baseUserSvtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v64 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v65 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v66 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v68 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
  v67 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
  *(_QWORD *)&v158.fields.currentCryptoKey = v68;
  *(_QWORD *)&v158.fields.fakeValue = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v158, 0LL);
  if ( !v66 )
    goto LABEL_85;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v66,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v70, v71, v72, v73, v74, v75);
  v76 = this->fields.userServantEntity;
  if ( !v76 )
    goto LABEL_85;
  servantEntity = this->fields.servantEntity;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v76->fields.limitCount, 0LL);
  if ( !servantEntity )
    goto LABEL_85;
  Name = ServantEntity__getName(servantEntity, Instance, -1, 0LL);
  this->fields.servantName = Name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantName, (int64_t)Name, v79, v80, v81, v82, v83, v84);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  v85 = this->fields.userServantEntity;
  this->fields.classId = Instance;
  if ( !v85 )
    goto LABEL_85;
  Rarity = UserServantEntity__getRarity(v85, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarity = Rarity;
  this->fields.isParty = 0;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v87 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v87 )
    goto LABEL_85;
  Instance = UserServantEntity__IsChoice(v87, 0LL);
  v88 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v88 )
    goto LABEL_85;
  v89 = *(_OWORD *)&v88->fields.userId.fields.fakeValue;
  *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&v88->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v157.fields.fakeValue = v89;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v63);
  v156 = v157;
  this->fields.isNpc = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v156, 0LL) == 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_85;
  v90 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v91 = *(_OWORD *)&v90->fields.id.fields.fakeValue;
  v92 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v90->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v155.fields.fakeValue = v91;
  v99 = v92 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v155, 0LL) && !this->fields.isNpc;
  this->fields.isPush = v99;
  this->fields.targetFortificationWorkItem = targetFortificationWorkItem;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetFortificationWorkItem,
    (int64_t)targetFortificationWorkItem,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.svtTypeSetInMaster = -1;
  v101 = EventFortificationListViewItem__CheckFortificationAppointment(this, v100);
  this->fields.setupInfo = setupInfo;
  this->fields.isAppointment = v101;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.setupInfo,
    (int64_t)setupInfo,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isHeroineSvt = 0;
  *(_DWORD *)&this->fields.isSwapLock = 0;
  if ( !Instance )
    goto LABEL_85;
  Instance = UserServantEntity__IsHeroine((UserServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    this->fields.isHeroineSvt = 1;
  }
  else if ( !this->fields.isHeroineSvt )
  {
    goto LABEL_29;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v63);
  Instance = TutorialFlag__Get_38402052(126, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_30:
    this->fields.isCanNotSelect = 1;
    goto LABEL_31;
  }
LABEL_29:
  if ( this->fields.isNpc || !this->fields.svtTypeSetInMaster )
    goto LABEL_30;
  v147 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v149 = *(_QWORD *)&v147->fields.svtId.fields.currentCryptoKey;
  v148 = *(_QWORD *)&v147->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
  *(_QWORD *)&v161.fields.currentCryptoKey = v149;
  *(_QWORD *)&v161.fields.fakeValue = v148;
  v150 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v161, 0LL);
  if ( EventFortificationListViewItem__isNotSelect(this, v150, v151) )
    goto LABEL_30;
LABEL_31:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v108 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v109 = *(_OWORD *)&v108->fields.userId.fields.fakeValue;
  v110 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&v108->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v157.fields.fakeValue = v109;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v63);
  v154 = v157;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v154, 0LL);
  v111 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v112 = Instance;
  v114 = *(_QWORD *)&v111->fields.svtId.fields.currentCryptoKey;
  v113 = *(_QWORD *)&v111->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
  *(_QWORD *)&v159.fields.currentCryptoKey = v114;
  *(_QWORD *)&v159.fields.fakeValue = v113;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v159, 0LL);
  if ( !v110 )
    goto LABEL_85;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v110, v112, Instance, 0LL);
  if ( !Instance )
    goto LABEL_85;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v115);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_85;
  Instance = (int64_t)UserDeckMaster__getDeckList((UserDeckMaster_o *)MasterData_object, Instance, 0LL);
  if ( !Instance )
    goto LABEL_85;
  v117 = *(_QWORD *)(Instance + 24);
  v118 = Instance;
  if ( (int)v117 >= 1 )
  {
    v119 = 0;
    while ( 1 )
    {
      v120 = *(_QWORD *)(v118 + 8LL * (int)v119 + 32);
      if ( !v120 )
        break;
      v121 = *(_QWORD *)(v120 + 48);
      if ( !v121 )
        break;
      v122 = v7;
      v123 = v65;
      v124 = 0;
      while ( 1 )
      {
        v125 = *(_QWORD *)(v121 + 16);
        if ( !v125 )
          goto LABEL_85;
        v126 = *(_DWORD *)(v125 + 24);
        if ( (int)v124 >= (int)v126 )
          break;
        if ( v124 >= v126 )
          goto LABEL_63;
        v127 = *(_QWORD *)(v125 + 8LL * (int)v124 + 32);
        if ( !v127 )
          goto LABEL_85;
        v128 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_85;
        v129 = *(_OWORD *)&v128->fields.id.fields.fakeValue;
        v130 = *(_QWORD *)(v127 + 24);
        *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&v128->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v157.fields.fakeValue = v129;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v63);
        v153 = v157;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v153, 0LL);
        if ( v130 == Instance )
        {
          v65 = v123;
          v7 = v122;
          this->fields.isParty = 1;
          goto LABEL_65;
        }
        v121 = *(_QWORD *)(v120 + 48);
        ++v124;
        if ( !v121 )
          goto LABEL_85;
      }
      v65 = v123;
      v7 = v122;
      if ( this->fields.isParty )
        goto LABEL_65;
      if ( ++v119 == (_DWORD)v117 )
        goto LABEL_65;
      if ( v119 >= *(_DWORD *)(v118 + 24) )
LABEL_63:
        sub_1BCAA44(Instance, v63);
    }
LABEL_85:
    sub_1BCAA3C(Instance, v63);
  }
LABEL_65:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  v131 = *(_DWORD *)(Instance + 276);
  v132 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v63);
    v132 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v132->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v131;
  if ( !Instance )
    goto LABEL_85;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(*v7);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_85;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_85;
  v140 = *(struct System_String_o **)(Instance + 24);
  v141 = Instance;
  this->fields.className = v140;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.className, (int64_t)v140, v134, v135, v136, v137, v138, v139);
  v142 = *(int *)(v141 + 52);
  v143 = this->fields.servantEntity;
  this->fields.priority = v142;
  this->fields.sortValue1B = v142;
  if ( !v143 )
    goto LABEL_85;
  v144 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_85;
  this->fields.sortValue2 = ((__int64)v143->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v144->fields.lv;
  v146 = *(_QWORD *)&v144->fields.svtId.fields.currentCryptoKey;
  v145 = *(_QWORD *)&v144->fields.svtId.fields.fakeValue;
  if ( !(*v65)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v65, v63);
  *(_QWORD *)&v160.fields.currentCryptoKey = v146;
  *(_QWORD *)&v160.fields.fakeValue = v145;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v160, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_85;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_85;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall EventFortificationListViewItem__CheckFortificationAppointment(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v29; // x0
  struct System_String_o *TeamName; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_String_o *Name; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  bool v44; // w26
  EventFortificationMaster_o *v45; // x21
  char v46; // w8
  _BOOL8 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  Il2CppObject *current; // x27
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  System_Func_object__bool__o *v53; // x25
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  Il2CppObject *v56; // x24
  _BOOL8 v57; // x0
  __int64 v58; // x1
  _BOOL8 v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_String_o *v67; // x1
  __int64 v68; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_String_o *v76; // x1
  __int64 v77; // x0
  __int64 v78; // x1
  Il2CppObject *v79; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  _BOOL8 v83; // x0
  __int64 v84; // x1
  PartyOrganizationUtility_o *p_myDetailName; // [xsp+0h] [xbp-C0h]
  PartyOrganizationUtility_o *p_myTeamName; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+10h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v89; // [xsp+28h] [xbp-98h] BYREF
  EventFortificationEntity_o *v90; // [xsp+30h] [xbp-90h] BYREF
  EventFortificationDetailEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_UserEventFortificationEntity__o *userEventFortificationList; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B1A0BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__, v14, v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__get_Current__,
      v16,
      v17);
    sub_1BCA7E0(&Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__, v18, v19);
    sub_1BCA7E0(&System_Func_SetSvtInfo__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B1A0BD = 1;
  }
  userEventFortificationList = 0LL;
  memset(&v92, 0, sizeof(v92));
  v90 = 0LL;
  entity = 0LL;
  v89 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !Instance )
    goto LABEL_35;
  if ( !UserEventFortificationMaster__TryGetEntityList(
          (UserEventFortificationMaster_o *)Instance,
          &userEventFortificationList,
          this->fields.eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v29 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  if ( this->fields.isNpc )
  {
    Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
    if ( Instance )
    {
      TeamName = EventFortificationWorkItem__get_TeamName((EventFortificationWorkItem_o *)Instance, 0LL);
      this->fields.myTeamName = TeamName;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.myTeamName,
        (int64_t)TeamName,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
      if ( Instance )
      {
        Name = EventFortificationWorkItem__get_Name((EventFortificationWorkItem_o *)Instance, 0LL);
        this->fields.myDetailName = Name;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.myDetailName,
          (int64_t)Name,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        Instance = (DataManager_o *)this->fields.targetFortificationWorkItem;
        if ( Instance )
        {
          v44 = 1;
          this->fields.myWorkType = EventFortificationWorkItem__get_WorkType(
                                      (EventFortificationWorkItem_o *)Instance,
                                      0LL);
          this->fields.svtTypeSetInMaster = 1;
          return v44;
        }
      }
    }
LABEL_35:
    sub_1BCAA3C(Instance, v27);
  }
  v45 = (EventFortificationMaster_o *)v29;
  Instance = (DataManager_o *)userEventFortificationList;
  if ( !userEventFortificationList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
    (System_Collections_Generic_List_object__o *)userEventFortificationList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserEventFortificationEntity__GetEnumerator__);
  p_myDetailName = (PartyOrganizationUtility_o *)&this->fields.myDetailName;
  p_myTeamName = (PartyOrganizationUtility_o *)&this->fields.myTeamName;
  v46 = 0;
  v92 = v88;
LABEL_16:
  v44 = v46;
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v92,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__MoveNext__);
    if ( !v47 )
      break;
    current = v92.fields._current;
    if ( !v92.fields._current )
      sub_1BCAA3C(v47, v48);
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v92.fields._current[2].monitor;
    v53 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SetSvtInfo__bool__TypeInfo, v48, v49, v50);
    System_Func_object__bool____ctor(
      v53,
      (Il2CppObject *)this,
      Method_EventFortificationListViewItem__CheckFortificationAppointment_b__114_0__,
      0LL);
    v54 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            monitor,
            (System_Func_TSource__bool__o *)v53,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_SetSvtInfo___);
    v56 = v54;
    if ( v54 )
    {
      if ( !MasterData_object )
        sub_1BCAA3C(v54, v55);
      v57 = EventFortificationDetailMaster__TryGetEntity(
              (EventFortificationDetailMaster_o *)MasterData_object,
              &entity,
              this->fields.eventId,
              HIDWORD(current[1].monitor),
              (int32_t)v54[1].klass,
              0LL);
      if ( v57 )
      {
        if ( !v45 )
          sub_1BCAA3C(v57, v58);
        v59 = EventFortificationMaster__TryGetEntity(v45, &v90, this->fields.eventId, HIDWORD(current[1].monitor), 0LL);
        if ( v59 )
        {
          if ( !v90 )
            sub_1BCAA3C(v59, v60);
          v67 = v90->fields.name;
          p_myTeamName->klass = (PartyOrganizationUtility_c *)v67;
          sub_1BCA784(p_myTeamName, (int64_t)v67, v61, v62, v63, v64, v65, v66);
          if ( !entity )
            sub_1BCAA3C(v68, v69);
          v76 = entity->fields.name;
          p_myDetailName->klass = (PartyOrganizationUtility_c *)v76;
          sub_1BCA784(p_myDetailName, (int64_t)v76, v70, v71, v72, v73, v74, v75);
          if ( !v90 )
            sub_1BCAA3C(v77, v78);
          this->fields.myWorkType = v90->fields.workType;
          v79 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v79 )
            sub_1BCAA3C(0LL, v80);
          v81 = DataManager__GetMasterData_object_(
                  (DataManager_o *)v79,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
          if ( !v81 )
            sub_1BCAA3C(0LL, v82);
          v83 = EventFortificationSvtMaster__TryGetEntity(
                  (EventFortificationSvtMaster_o *)v81,
                  &v89,
                  this->fields.eventId,
                  HIDWORD(current[1].monitor),
                  (int32_t)v56[1].klass,
                  0LL);
          v46 = 1;
          if ( v83 )
          {
            if ( !v89 )
              sub_1BCAA3C(v83, v84);
            this->fields.svtTypeSetInMaster = v89->fields.type;
            v46 = 1;
          }
          goto LABEL_16;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserEventFortificationEntity__Dispose__);
  return v44;
}


bool __fastcall EventFortificationListViewItem__GetIsEventUpValShow(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  EventFortificationListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  unsigned int bonusKind2; // w8
  bool result; // w0
  int32_t bonusKindId; // w2
  int32_t bonusKind2Id; // w9
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  System_Func_object__bool__o *v30; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v35; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v4 = this;
  if ( (byte_4B1A0BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__, v13, v14);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    this = (EventFortificationListViewItem_o *)sub_1BCA7E0(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v21,
                                                 v22);
    byte_4B1A0BA = 1;
  }
  if ( !sort )
LABEL_36:
    sub_1BCAA3C(this, sort);
  if ( !sort->fields.isBonusKind )
    return 1;
  bonusKind2 = sort->fields.bonusKind2;
  result = 1;
  if ( bonusKind2 <= 7 && ((1 << bonusKind2) & 0xB9) != 0 )
  {
    if ( v4->fields.bonusKind == bonusKind2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKind2Id;
      if ( bonusKindId == bonusKind2Id )
      {
LABEL_12:
        switch ( bonusKind2 )
        {
          case 0u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_36;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0LL);
            this = (EventFortificationListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                         (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                         0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_23;
            if ( !EntitiesByGroupId )
              goto LABEL_36;
            if ( EntitiesByGroupId->fields._size < 2 )
            {
LABEL_23:
              result = 0;
            }
            else
            {
              v30 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                     System_Func_EventGroupEntity__bool__TypeInfo,
                                                     sort,
                                                     v28,
                                                     v29);
              System_Func_object__bool____ctor(
                v30,
                (Il2CppObject *)v4,
                Method_EventFortificationListViewItem__GetIsEventUpValShow_b__46_0__,
                0LL);
              result = BasicHelper__Any_object_(
                         (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                         (System_Func_T__bool__o *)v30,
                         (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
            }
            break;
          case 3u:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
            this = (EventFortificationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
            userServantEntity = v4->fields.userServantEntity;
            if ( !userServantEntity )
              goto LABEL_36;
            v32 = (EventCampaignMaster_o *)this;
            v34 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v33 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
            *(_QWORD *)&v36.fields.currentCryptoKey = v34;
            *(_QWORD *)&v36.fields.fakeValue = v33;
            this = (EventFortificationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                         v36,
                                                         0LL);
            if ( !v32 )
              goto LABEL_36;
            return EventCampaignMaster__IsEnableServant(v32, (int32_t)this, v4->fields.bonusKindId, 0LL);
          case 4u:
          case 5u:
            this = (EventFortificationListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_36;
            if ( UserServantEntity__getEventUpVal_40936552(
                   (UserServantEntity_o *)this,
                   v4->fields.setupInfo,
                   bonusKindId,
                   0LL,
                   0LL) )
            {
              return 1;
            }
            goto LABEL_23;
          case 7u:
            this = (EventFortificationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_36;
            this = (EventFortificationListViewItem_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            v35 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
            if ( !v35 || !this )
              goto LABEL_36;
            return ServantFilterMaster__IsEnableServant(
                     (ServantFilterMaster_o *)this,
                     v35[5],
                     v4->fields.bonusKindId,
                     0LL);
          default:
            goto LABEL_23;
        }
        return result;
      }
    }
    else
    {
      bonusKind2Id = sort->fields.bonusKind2Id;
    }
    bonusKindId = bonusKind2Id;
    v4->fields.bonusKind = bonusKind2;
    v4->fields.bonusKindId = bonusKind2Id;
    goto LABEL_12;
  }
  return result;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  System_Int32Enum_array *ClassGroupFilterKindList; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  UserServantEntity_o *userServantEntity; // x21
  _BOOL4 v21; // w8

  if ( (byte_4B1A0B9 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    byte_4B1A0B9 = 1;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v11->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  ClassGroupFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                               (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                               (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_38;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v13 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Int32Enum_array *)v13->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_38;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v15->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)v17->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_38;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  ClassGroupFilterKindList = (System_Int32Enum_array *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_38:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->max_length )
    sub_1BCAA44(ClassGroupFilterKindList, ClassGroupFilterKindList);
  ClassGroupFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v21 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v21;
}


void __fastcall EventFortificationListViewItem__ModifyChoiceItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall EventFortificationListViewItem__ModifyItem(
        EventFortificationListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
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
    sub_1BCAA3C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall EventFortificationListViewItem__ModifyPushItem(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  bool v9; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4B1A0B7 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B1A0B7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (userServantEntity = this->fields.userServantEntity) == 0LL )
    sub_1BCAA3C(SelfUserGame, v5);
  v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
  v10 = v11;
  v9 = pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v10, 0LL)
    && !this->fields.isNpc;
  this->fields.isPush = v9;
}


bool __fastcall EventFortificationListViewItem__SetSortValue(
        EventFortificationListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t *p_sortValue0; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  int64_t IsBaseSvt; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  _BOOL4 isChoice; // w8
  _BOOL4 v16; // w9
  struct ServantEntity_o *servantEntity; // x9
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v19; // x21
  __int64 v20; // x22
  struct UserServantEntity_o *v21; // x8
  __int128 v22; // q1
  struct UserServantEntity_o *v23; // x8
  int64_t rarity; // x8
  int64_t v25; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v29; // w1
  struct UserServantEntity_o *v30; // x8
  struct UserServantEntity_o *v31; // x8
  struct ServantEntity_o *v32; // x8
  int64_t cost; // x2
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v37; // x20
  int32_t lv; // w20
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x21
  __int64 v41; // x22
  struct ServantEntity_o *v42; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v44; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B1A0B8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventFortificationListViewManager_TypeInfo, sort, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
    byte_4B1A0B8 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0B = 0LL;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  if ( !EventFortificationListViewItem__get_IsBaseSvt(this, (const MethodInfo *)sort)
    && !EventFortificationListViewItem__IsMatchServantFilter(this, sort, v11)
    || (IsBaseSvt = EventFortificationListViewItem__get_IsBaseSvt(this, v10), (IsBaseSvt & 1) == 0)
    && this->fields.userServantEntity
    && (IsBaseSvt = EventFortificationListViewItem__GetIsEventUpValShow(this, sort, v14), (IsBaseSvt & 1) == 0) )
  {
    LOBYTE(IsBaseSvt) = 0;
    return IsBaseSvt;
  }
  isChoice = this->fields.isChoice;
  if ( this->fields.isSwapChoice )
    v16 = !this->fields.isChoice;
  else
    v16 = this->fields.isChoice;
  if ( v16 )
  {
    if ( !sort )
      goto LABEL_82;
    if ( sort->fields.isChoiceSort )
      *p_sortValue0 = 10LL;
  }
  else if ( !sort )
  {
    goto LABEL_82;
  }
  if ( sort->fields.isSmartSort )
  {
    if ( isChoice && sort->fields.isChoiceSort )
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
    sub_1BCAA3C(IsBaseSvt, v13);
  }
  this->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | userServantEntity->fields.lv;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v49.fields.currentCryptoKey = v20;
  *(_QWORD *)&v49.fields.fakeValue = v19;
  this->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v49, 0LL);
  IsBaseSvt = 1LL;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v21 = this->fields.userServantEntity;
      if ( !v21 )
        goto LABEL_82;
      v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
      v46 = v47;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v46, 0LL);
      v23 = this->fields.userServantEntity;
      this->fields.sortValue1 = IsBaseSvt;
      if ( !v23 )
        goto LABEL_82;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__SetTime((IconLabelInfo_o *)IsBaseSvt, 49, v23->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_65;
    case 2:
      rarity = this->fields.rarity;
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      goto LABEL_52;
    case 3:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      v25 = *(int *)(IsBaseSvt + 256);
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v25;
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_82;
      IconLabelInfo__Set_38850420(iconLabelInfo1, 2, v25, IsBaseSvt, 0, 0, 0, 0, 0LL);
      goto LABEL_70;
    case 4:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      this->fields.sortValue1 = *(int *)(IsBaseSvt + 292);
      UserServantEntity__getTreasureDeviceInfo_40943792((UserServantEntity_o *)IsBaseSvt, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = tdMaxLv[0];
      v29 = 33;
      goto LABEL_64;
    case 5:
      v30 = this->fields.userServantEntity;
      if ( !v30 )
        goto LABEL_82;
      hp = v30->fields.hp;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v30->fields.adjustHp;
      v29 = 3;
      goto LABEL_64;
    case 6:
      v31 = this->fields.userServantEntity;
      if ( !v31 )
        goto LABEL_82;
      hp = v31->fields.atk;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = v31->fields.adjustAtk;
      v29 = 5;
      goto LABEL_64;
    case 7:
      v32 = this->fields.servantEntity;
      if ( !v32 )
        goto LABEL_82;
      cost = v32->fields.cost;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = cost;
      if ( !IsBaseSvt )
        goto LABEL_82;
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)IsBaseSvt, 7, cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_65;
    case 8:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_52:
      this->fields.sortValue1 = rarity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      goto LABEL_67;
    case 0xA:
      hp = this->fields.friendship;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.friendshipMax;
      v29 = 32;
      goto LABEL_64;
    case 0xE:
      IsBaseSvt = this->fields.amountSortValue;
      if ( (IsBaseSvt & 0x8000000000000000LL) == 0 )
        goto LABEL_79;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(EventFortificationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFortificationListViewManager_TypeInfo )
          v37 = sort->fields.manager;
        else
          v37 = 0LL;
      }
      else
      {
        v37 = 0LL;
      }
      v39 = this->fields.userServantEntity;
      if ( !v39 )
        goto LABEL_82;
      v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
      *(_QWORD *)&v50.fields.currentCryptoKey = v41;
      *(_QWORD *)&v50.fields.fakeValue = v40;
      IsBaseSvt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
      if ( !v37 )
        goto LABEL_82;
      IsBaseSvt = EventFortificationListViewManager__GetAmountSortValue(
                    (EventFortificationListViewManager_o *)v37,
                    IsBaseSvt,
                    0LL);
      this->fields.amountSortValue = IsBaseSvt;
LABEL_79:
      v42 = this->fields.servantEntity;
      if ( !v42 )
        goto LABEL_82;
      collectionNo = v42->fields.collectionNo;
      v44 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (IsBaseSvt << 48)) | collectionNo;
      if ( !v44 )
        goto LABEL_82;
      iconLabelInfo2 = this->fields.iconLabelInfo1;
      lv = v44->fields.lv;
      IsBaseSvt = (int64_t)v44;
      goto LABEL_68;
    case 0xF:
      hp = this->fields.hpReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.nowMaxHpReinforceValue;
      v29 = 44;
      goto LABEL_64;
    case 0x10:
      hp = this->fields.atkReinforceValue;
      IsBaseSvt = (int64_t)this->fields.iconLabelInfo1;
      this->fields.sortValue1 = hp;
      if ( !IsBaseSvt )
        goto LABEL_82;
      adjustHp = this->fields.nowMaxAtkReinforceValue;
      v29 = 45;
LABEL_64:
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)IsBaseSvt, v29, hp, adjustHp, 0, 0, 0, 0, 0LL);
LABEL_65:
      IsBaseSvt = (int64_t)this->fields.userServantEntity;
      if ( !IsBaseSvt )
        goto LABEL_82;
      iconLabelInfo2 = this->fields.iconLabelInfo2;
LABEL_67:
      lv = *(_DWORD *)(IsBaseSvt + 256);
LABEL_68:
      IsBaseSvt = UserServantEntity__getLevelMax((UserServantEntity_o *)IsBaseSvt, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_82;
      IconLabelInfo__Set_38850420(iconLabelInfo2, 2, lv, IsBaseSvt, 0, 0, 0, 0, 0LL);
LABEL_70:
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.userServantEntity = userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
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
  if ( (byte_4B1A0C0 & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1BCA7E0(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 info,
                                                 method);
    byte_4B1A0C0 = 1;
  }
  if ( !info || (userServantEntity = v4->fields.userServantEntity) == 0LL )
    sub_1BCAA3C(this, info);
  v6 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  userSvtId = info->fields.userSvtId;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, info);
  v9 = v10;
  return userSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL);
}


bool __fastcall EventFortificationListViewItem___GetIsEventUpValShow_b__46_0(
        EventFortificationListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventCampaignMaster_o *Master_object; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  EventCampaignMaster_o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x1
  struct UserServantEntity_o *v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B1A0BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B1A0BF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_19;
  v14 = Master_object;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v20.fields.currentCryptoKey = v16;
  *(_QWORD *)&v20.fields.fakeValue = v15;
  Master_object = (EventCampaignMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
  if ( !entity || !v14 )
    goto LABEL_19;
  if ( EventCampaignMaster__IsEnableServant(v14, (int32_t)Master_object, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v18 = this->fields.userServantEntity;
  if ( !v18 || !Master_object )
    goto LABEL_19;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Master_object,
         v18->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_19:
    sub_1BCAA3C(Master_object, v12);
  return UserServantEntity__getEventUpVal_40936552(
           (UserServantEntity_o *)Master_object,
           this->fields.setupInfo,
           entity->fields.eventId,
           0LL,
           0LL);
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
  __int64 v2; // x2
  EventFortificationListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  int64_t baseUserSvtId; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B1A0BC & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1BCA7E0(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method,
                                                 v2);
    byte_4B1A0BC = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  baseUserSvtId = v3->fields.baseUserSvtId;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v8 = v9;
  return baseUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v8, 0LL);
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
    sub_1BCAA3C(userServantEntity, method);
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
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall EventFortificationListViewItem__get_IsDispLock(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
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
    sub_1BCAA3C(0LL, method);
  return EventFortificationWorkItem__get_Name(targetFortificationWorkItem, 0LL);
}


System_String_o *__fastcall EventFortificationListViewItem__get_TargetTeamName(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1BCAA3C(0LL, method);
  return EventFortificationWorkItem__get_TeamName(targetFortificationWorkItem, 0LL);
}


int32_t __fastcall EventFortificationListViewItem__get_TargetWorkType(
        EventFortificationListViewItem_o *this,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0

  targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
  if ( !targetFortificationWorkItem )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  EventFortificationListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B1A0BB & 1) == 0 )
  {
    this = (EventFortificationListViewItem_o *)sub_1BCA7E0(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                 method,
                                                 v2);
    byte_4B1A0BB = 1;
  }
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationListViewItem__isNotSelect(
        EventFortificationListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  EventFortificationListViewItem___c__DisplayClass115_0_o *v34; // x20
  EventFortificationSvtMaster_o *Master_object; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_object__o *v40; // x21
  _BOOL8 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v51; // x10
  __int64 size; // x11
  Il2CppClass **v53; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Func_object__bool__o *v58; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  EventFortificationSvtMaster_o *v60; // x20
  _BOOL8 v61; // x0
  __int64 v62; // x1
  bool v63; // w21
  Il2CppObject *v64; // x22
  EventFortificationWorkItem_o *targetFortificationWorkItem; // x0
  int klass_high; // w23
  __int64 FortificationIdx; // x0
  __int64 v68; // x1
  struct EventFortificationWorkItem_o *v69; // x8
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationSvtEntity__o *eventFortificationSvtList; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B1A0BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__get_Current__, v16, v17);
    sub_1BCA7E0(&System_Func_EventFortificationSvtEntity__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__, v30, v31);
    sub_1BCA7E0(&EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo, v32, v33);
    byte_4B1A0BE = 1;
  }
  eventFortificationSvtList = 0LL;
  memset(&v71, 0, sizeof(v71));
  v34 = (EventFortificationListViewItem___c__DisplayClass115_0_o *)sub_1BCAA2C(
                                                                     EventFortificationListViewItem___c__DisplayClass115_0_TypeInfo,
                                                                     *(_QWORD *)&svtId,
                                                                     method,
                                                                     v3);
  EventFortificationListViewItem___c__DisplayClass115_0___ctor(v34, 0LL);
  if ( !v34 )
    goto LABEL_35;
  v34->fields.svtId = svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  Master_object = (EventFortificationSvtMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !Master_object )
    goto LABEL_35;
  if ( !EventFortificationSvtMaster__TryGetEntityList(
          Master_object,
          &eventFortificationSvtList,
          this->fields.eventId,
          0LL) )
    return 0;
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Master_object = (EventFortificationSvtMaster_o *)eventFortificationSvtList;
  if ( !eventFortificationSvtList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)eventFortificationSvtList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    if ( !v41 )
      break;
    current = v71.fields._current;
    if ( !v71.fields._current )
      sub_1BCAA3C(v41, v42);
    if ( !HIDWORD(v71.fields._current[1].monitor) )
    {
      if ( !v40 )
        sub_1BCAA3C(v41, v42);
      items = v40->fields._items;
      v51 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
      ++v40->fields._version;
      if ( !items )
        sub_1BCAA3C(v41, v42);
      size = v40->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + size;
        v40->fields._size = size + 1;
        v53[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)current, v43, v44, v45, v46, v47, v48);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  v58 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_EventFortificationSvtEntity__bool__TypeInfo,
                                         v55,
                                         v56,
                                         v57);
  System_Func_object__bool____ctor(
    v58,
    (Il2CppObject *)v34,
    Method_EventFortificationListViewItem___c__DisplayClass115_0__isNotSelect_b__0__,
    0LL);
  v59 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v40,
          (System_Func_TSource__bool__o *)v58,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventFortificationSvtEntity___);
  Master_object = (EventFortificationSvtMaster_o *)System_Linq_Enumerable__ToList_object_(
                                                     v59,
                                                     (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventFortificationSvtEntity___);
  if ( !Master_object )
LABEL_35:
    sub_1BCAA3C(Master_object, v36);
  v60 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__MoveNext__);
    v63 = v61;
    if ( !v61 )
      break;
    v64 = v71.fields._current;
    if ( !v71.fields._current )
      sub_1BCAA3C(v61, v62);
    targetFortificationWorkItem = this->fields.targetFortificationWorkItem;
    if ( !targetFortificationWorkItem )
      sub_1BCAA3C(0LL, v62);
    klass_high = HIDWORD(v71.fields._current[1].klass);
    FortificationIdx = EventFortificationWorkItem__get_FortificationIdx(targetFortificationWorkItem, 0LL);
    if ( klass_high == (_DWORD)FortificationIdx )
    {
      v69 = this->fields.targetFortificationWorkItem;
      if ( !v69 )
        sub_1BCAA3C(FortificationIdx, v68);
      if ( LODWORD(v64[1].monitor) == v69->fields.position )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationSvtEntity__Dispose__);
  return !v63 && SLODWORD(v60->fields._MasterName_k__BackingField) > 0;
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.svtId == this->fields.svtId;
}