// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItem___ctor(
        WarehouseListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        EventUpValSetupInfo_o *setupinfo,
        System_Int64_array *partyUserServantList,
        System_Int64_array *partyUserEquipList,
        System_Int64_array *recoverySvtList,
        bool isFavorite,
        const MethodInfo *method)
{
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
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  IconLabelInfo_o *v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  IconLabelInfo_o *v64; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct UserServantEntity_o **p_userServantEntity; // x22
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t Instance; // x0
  const MethodInfo *v86; // x1
  struct UserServantEntity_o *v87; // x8
  __int64 v88; // x26
  __int64 v89; // x27
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct UserServantEntity_o *v98; // x8
  ServantLimitMaster_o *v99; // x27
  int32_t svtId; // w28
  int32_t v101; // w8
  struct UserServantEntity_o *v102; // x8
  __int128 v103; // q1
  __int64 v104; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t v106; // w8
  UserServantEntity_o *v107; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v109; // x8
  UserServantEntity_o *v110; // x8
  struct UserServantEntity_o *v111; // x8
  __int128 v112; // q0
  UserServantCollectionMaster_o *v113; // x23
  struct UserServantEntity_o *v114; // x8
  int64_t v115; // x26
  __int64 v116; // x27
  __int64 v117; // x28
  struct UserServantEntity_o *v118; // x8
  __int128 v119; // q0
  int64_t v120; // x23
  signed int max_length; // w8
  int32_t v122; // w9
  signed int v123; // w8
  int32_t v124; // w9
  __int64 v125; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v128; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v131; // x8
  __int64 v132; // x9
  int32_t *v133; // x10
  __int64 v134; // x0
  _QWORD *v135; // x0
  __int64 v136; // x1
  __int64 methodPtr_low; // x9
  __int64 v138; // x8
  __int128 v139; // q0
  System_Collections_Generic_IEnumerator_T__c *v140; // x8
  __int64 v141; // x9
  int32_t *v142; // x10
  __int64 v143; // x0
  __int64 v144; // x1
  System_Collections_Generic_IEnumerator_T__o *v145; // x24
  System_Collections_Generic_IEnumerator_T__c *v146; // x8
  __int64 v147; // x9
  int32_t *v148; // x10
  __int64 v149; // x0
  System_Collections_Generic_IEnumerator_T__c *v150; // x8
  __int64 v151; // x9
  int32_t *v152; // x10
  __int64 v153; // x0
  _QWORD *v154; // x0
  __int64 v155; // x1
  __int64 v156; // x9
  System_Collections_Generic_IEnumerator_T__c *v157; // x8
  __int64 v158; // x9
  int32_t *v159; // x10
  __int64 v160; // x0
  __int64 v161; // x1
  bool IsSettingServant; // w0
  __int64 v163; // x8
  int64_t v164; // x24
  unsigned __int64 v165; // x25
  __int64 v166; // x8
  __int128 v167; // q0
  __int64 v168; // x1
  __int64 v169; // x8
  int64_t v170; // x24
  unsigned __int64 v171; // x25
  __int64 v172; // x8
  __int128 v173; // q0
  int v174; // w24
  BalanceConfig_c *v175; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserServantEntity_o *v177; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  struct System_Int32_array *EquipCategoryIdList; // x1
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  signed int v193; // w8
  __int64 v194; // x9
  int64_t UserSvtId; // x0
  int64_t v196; // x8
  struct UserServantEntity_o *v197; // x8
  __int64 rarity; // x21
  __int64 v199; // x22
  __int64 lv; // x23
  struct UserServantEntity_o *v201; // x8
  __int64 v202; // x21
  __int64 v203; // x22
  IconLabelInfo_o *iconLabelInfo1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+10h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v207; // [xsp+30h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v208; // [xsp+50h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v209; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v210; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v211; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v212; // [xsp+D0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16

  if ( (byte_4B141A4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, userServantEntity);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserRecommendSupportMaster___, v28, v29);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantStorageMaster___, v30, v31);
    sub_1BCA7E0(&DataManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v34, v35);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v36, v37);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v38, v39);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v42, v43);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v44, v45);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46, v47);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51);
    sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v52, v53);
    byte_4B141A4 = 1;
  }
  v54 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity, setupinfo);
  IconLabelInfo___ctor(v54, 0LL);
  this->fields.iconLabelInfo1 = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  v64 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v61, v62, v63);
  IconLabelInfo___ctor(v64, 0LL);
  this->fields.iconLabelInfo2 = v64;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v64, v66, v67, v68, v69, v70, v71);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.setupInfo = setupinfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupinfo, v79, v80, v81, v82, v83, v84);
  v87 = this->fields.userServantEntity;
  if ( !v87 )
    goto LABEL_177;
  v89 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
  v88 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v86);
  *(_QWORD *)&v213.fields.currentCryptoKey = v89;
  *(_QWORD *)&v213.fields.fakeValue = v88;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v213, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_177;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.svtId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v92, v93, v94, v95, v96, v97);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v98 = this->fields.userServantEntity;
  if ( !v98 )
    goto LABEL_177;
  v99 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v98->fields.limitCount, 0LL);
  if ( !v99 )
    goto LABEL_177;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v99, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_177;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_177;
  v101 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v101;
  if ( !Instance )
    goto LABEL_177;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_177;
  v102 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v103 = *(_OWORD *)&v102->fields.id.fields.fakeValue;
  v104 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v212.fields.currentCryptoKey = *(_OWORD *)&v102->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v212.fields.fakeValue = v103;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v86);
  v211 = v212;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v211, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isPush = v104 == Instance;
  this->fields.isEnabled = 1;
  if ( !servantEntity )
    goto LABEL_177;
  if ( servantEntity->fields.type == 2 )
  {
    v106 = 1;
LABEL_24:
    this->fields.attribute = v106;
    goto LABEL_26;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL) )
  {
    v106 = 2;
    goto LABEL_24;
  }
  this->fields.attribute = 0;
LABEL_26:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v107 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v107 )
    goto LABEL_177;
  IsChoice = UserServantEntity__IsChoice(v107, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v109 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v109 )
    goto LABEL_177;
  Instance = UserServantEntity__IsChocolateSvtEquip(v109, 0LL);
  v110 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v110 )
    goto LABEL_177;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v110, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v111 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v112 = *(_OWORD *)&v111->fields.userId.fields.fakeValue;
  v113 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v212.fields.currentCryptoKey = *(_OWORD *)&v111->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v212.fields.fakeValue = v112;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v86);
  v210 = v212;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v210, 0LL);
  v114 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v115 = Instance;
  v117 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
  v116 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v86);
  *(_QWORD *)&v214.fields.currentCryptoKey = v117;
  *(_QWORD *)&v214.fields.fakeValue = v116;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v214, 0LL);
  if ( !v113 )
    goto LABEL_177;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v113, v115, Instance, 0LL);
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v118 = this->fields.userServantEntity;
  *(_WORD *)&this->fields.isUseRecommendSupport = 0;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v118 )
    goto LABEL_177;
  v119 = *(_OWORD *)&v118->fields.id.fields.fakeValue;
  *(_OWORD *)&v209.fields.currentCryptoKey = *(_OWORD *)&v118->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v209.fields.fakeValue = v119;
  v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v209, 0LL);
  Instance = (int64_t)this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0LL;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0LL;
  if ( !Instance )
    goto LABEL_177;
  Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !partyUserEquipList )
      goto LABEL_177;
    max_length = partyUserEquipList->max_length;
    if ( max_length >= 1 )
    {
      v122 = 0;
      while ( 1 )
      {
        if ( max_length == v122 )
          goto LABEL_178;
        if ( v120 == partyUserEquipList->m_Items[v122] )
          break;
        if ( max_length == ++v122 )
          goto LABEL_58;
      }
      this->fields.partyIndex = v122;
      this->fields.isPartyEquip = 1;
      this->fields.isUse = 1;
    }
LABEL_58:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_177;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_177;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v125);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v128 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v128;
          p_offset += 4;
          if ( !v128 )
            goto LABEL_66;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_66:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_83;
      v131 = Enumerator->klass;
      v132 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v133 = &v131->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v133 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v132;
          v133 += 4;
          if ( !v132 )
            goto LABEL_73;
        }
        v134 = (__int64)&v131->vtable[*v133].method;
      }
      else
      {
LABEL_73:
        v134 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v135 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v134)(
                         Enumerator,
                         *(_QWORD *)(v134 + 8));
      if ( !v135 )
        goto LABEL_181;
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v135 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v135 + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      v138 = v135[4];
      if ( v138 )
      {
        v139 = *(_OWORD *)(v138 + 40);
        *(_OWORD *)&v212.fields.currentCryptoKey = *(_OWORD *)(v138 + 24);
        *(_OWORD *)&v212.fields.fakeValue = v139;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            UserServantLeaderEntity_TypeInfo);
        v208 = v212;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v208, 0LL) == v120 )
        {
          this->fields.isUseSupportEquip = 1;
LABEL_83:
          v140 = Enumerator->klass;
          v141 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v142 = &v140->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v142 - 1) != System_IDisposable_TypeInfo )
            {
              --v141;
              v142 += 4;
              if ( !v141 )
                goto LABEL_87;
            }
            v143 = (__int64)&v140->vtable[*v142].method;
          }
          else
          {
LABEL_87:
            v143 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v143)(
            Enumerator,
            *(_QWORD *)(v143 + 8));
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v168);
          Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
          if ( Instance )
          {
            this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(
                                                        (UserRecommendSupportMaster_o *)Instance,
                                                        v120,
                                                        1,
                                                        0LL);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantStorageMaster___);
            if ( Instance )
            {
              Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
              if ( Instance )
              {
                v169 = *(_QWORD *)(Instance + 24);
                v170 = Instance;
                if ( (int)v169 >= 1 )
                {
                  v171 = 0LL;
                  while ( 1 )
                  {
                    if ( v171 >= (unsigned int)v169 )
                      goto LABEL_178;
                    v172 = *(_QWORD *)(v170 + 32 + 8 * v171);
                    if ( v172 )
                    {
                      v173 = *(_OWORD *)(v172 + 32);
                      *(_OWORD *)&v212.fields.currentCryptoKey = *(_OWORD *)(v172 + 16);
                      *(_OWORD *)&v212.fields.fakeValue = v173;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v86);
                      v207 = v212;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v207, 0LL);
                      if ( Instance == v120 )
                        break;
                    }
                    LODWORD(v169) = *(_DWORD *)(v170 + 24);
                    if ( (__int64)++v171 >= (int)v169 )
                      goto LABEL_156;
                  }
                  this->fields.isWarehouseServantEquip = 1;
                }
LABEL_156:
                Instance = (int64_t)*p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(
                                          (UserServantEntity_o *)Instance,
                                          1,
                                          0LL);
                  p_equipCategoryIdList = &this->fields.equipCategoryIdList;
                  this->fields.equipCategoryIdList = EquipCategoryIdList;
                  goto LABEL_158;
                }
              }
            }
          }
          goto LABEL_177;
        }
      }
    }
    sub_1BCACFC(v135);
LABEL_180:
    sub_1BCACFC(v154);
LABEL_181:
    sub_1BCAA3C(v135, v136);
  }
  if ( !partyUserServantList )
    goto LABEL_177;
  v123 = partyUserServantList->max_length;
  if ( v123 >= 1 )
  {
    v124 = 0;
    while ( 1 )
    {
      if ( v123 == v124 )
LABEL_178:
        sub_1BCAA44(Instance, v86);
      if ( v120 == partyUserServantList->m_Items[v124] )
        break;
      if ( v123 == ++v124 )
        goto LABEL_89;
    }
    this->fields.partyIndex = v124;
  }
LABEL_89:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_177;
  v145 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v145 )
    sub_1BCAA3C(0LL, v144);
  while ( 1 )
  {
    v146 = v145->klass;
    v147 = *(unsigned __int16 *)(&v145->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v145->klass->_2.bitflags2 + 3) )
    {
      v148 = &v146->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v148 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v147;
        v148 += 4;
        if ( !v147 )
          goto LABEL_97;
      }
      v149 = (__int64)&v146->vtable[*v148].method;
    }
    else
    {
LABEL_97:
      v149 = sub_1C1C7C0(v145, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v149)(
            v145,
            *(_QWORD *)(v149 + 8)) & 1) == 0 )
      break;
    v150 = v145->klass;
    v151 = *(unsigned __int16 *)(&v145->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v145->klass->_2.bitflags2 + 3) )
    {
      v152 = &v150->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v152 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v151;
        v152 += 4;
        if ( !v151 )
          goto LABEL_104;
      }
      v153 = (__int64)&v150->vtable[*v152].method;
    }
    else
    {
LABEL_104:
      v153 = sub_1C1C7C0(v145, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v154 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v153)(
                       v145,
                       *(_QWORD *)(v153 + 8));
    if ( !v154 )
      sub_1BCAA3C(0LL, v155);
    v156 = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v154 + 304LL) < (unsigned int)v156
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v154 + 200LL) + 8 * v156 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_180;
    }
    if ( v154[7] == v120 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v157 = v145->klass;
  v158 = *(unsigned __int16 *)(&v145->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v145->klass->_2.bitflags2 + 3) )
  {
    v159 = &v157->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v159 - 1) != System_IDisposable_TypeInfo )
    {
      --v158;
      v159 += 4;
      if ( !v158 )
        goto LABEL_115;
    }
    v160 = (__int64)&v157->vtable[*v159].method;
  }
  else
  {
LABEL_115:
    v160 = sub_1C1C7C0(v145, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v160)(v145, *(_QWORD *)(v160 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v161);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_177;
  IsSettingServant = UserRecommendSupportMaster__IsSettingServant(
                       (UserRecommendSupportMaster_o *)Instance,
                       v120,
                       0,
                       0LL);
  this->fields.isWarehouseServant = 0;
  this->fields.isUseRecommendSupport = IsSettingServant;
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_177;
  v163 = *(_QWORD *)(Instance + 24);
  v164 = Instance;
  if ( (int)v163 >= 1 )
  {
    v165 = 0LL;
    while ( 1 )
    {
      if ( v165 >= (unsigned int)v163 )
        goto LABEL_178;
      v166 = *(_QWORD *)(v164 + 32 + 8 * v165);
      if ( v166 )
      {
        v167 = *(_OWORD *)(v166 + 32);
        *(_OWORD *)&v212.fields.currentCryptoKey = *(_OWORD *)(v166 + 16);
        *(_OWORD *)&v212.fields.fakeValue = v167;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v86);
        v206 = v212;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v206, 0LL);
        if ( Instance == v120 )
          break;
      }
      LODWORD(v163) = *(_DWORD *)(v164 + 24);
      if ( (__int64)++v165 >= (int)v163 )
        goto LABEL_147;
    }
    this->fields.isWarehouseServant = 1;
  }
LABEL_147:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v174 = *(_DWORD *)(Instance + 276);
  v175 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v86);
    v175 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v175->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v174;
  if ( !Instance )
    goto LABEL_177;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v177 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v177 )
    goto LABEL_177;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v177, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_177;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_158:
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_equipCategoryIdList,
    (int64_t)EquipCategoryIdList,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v193 = recoverySvtList->max_length;
    if ( v193 >= 1 )
    {
      v194 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v194 >= v193 )
          goto LABEL_178;
        if ( recoverySvtList->m_Items[v194] == v120 )
          break;
        if ( (int)++v194 >= v193 )
          goto LABEL_166;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_166:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v86);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  this->fields.amountSortValue = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_177;
  v196 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v196;
  this->fields.sortValue1B = v196;
  if ( !Instance )
    goto LABEL_177;
  v197 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  rarity = (unsigned int)this->fields.rarity;
  v199 = *(int *)(Instance + 208);
  lv = v197->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v201 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v199 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v201 )
    goto LABEL_177;
  v203 = *(_QWORD *)&v201->fields.svtId.fields.currentCryptoKey;
  v202 = *(_QWORD *)&v201->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v86);
  *(_QWORD *)&v215.fields.currentCryptoKey = v203;
  *(_QWORD *)&v215.fields.fakeValue = v202;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v215, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = (int)Instance;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_177:
    sub_1BCAA3C(Instance, v86);
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall WarehouseListViewItem__Finalize(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall WarehouseListViewItem__IsMatchFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v8; // x2

  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
    return 1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1BCAA3C(0LL, v5);
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v8);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v8);
}


bool __fastcall WarehouseListViewItem__IsMatchServantEquipFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  _BOOL4 v17; // w8

  if ( (byte_4B141A7 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    byte_4B141A7 = 1;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_35;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v13 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v13->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
    && !ListViewSort__IsMatchServantEquipCombineStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v15->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchServantEquipHaveStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
LABEL_35:
    sub_1BCAA3C(RarityFilterKindList, sort);
  if ( !RarityFilterKindList->max_length )
    sub_1BCAA44(RarityFilterKindList, RarityFilterKindList);
  RarityFilterKindList->m_Items[1] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    || !ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    return 1;
  }
  v17 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v17;
}


bool __fastcall WarehouseListViewItem__IsMatchServantFilter(
        WarehouseListViewItem_o *this,
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
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  __int64 v21; // x1
  UserServantEntity_o *userServantEntity; // x21
  __int64 v23; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x21
  UserServantEntity_o *v28; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v30; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v46; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v48; // w0

  if ( (byte_4B141A6 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    byte_4B141A6 = 1;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v13 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v13->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
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
  ClassGroupFilterKindList = (__int64)v15->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
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
  ClassGroupFilterKindList = (__int64)v17->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v21);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v28 = this->fields.userServantEntity;
    if ( v28 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v28, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v30 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v30 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v30, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
    }
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v23 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v23 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1BCAA44(ClassGroupFilterKindList, v23);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v46 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v48 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v46) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v48 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v48 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v23 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_68;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v25 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v25 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v25->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v26, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall WarehouseListViewItem__Modify(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x20
  __int64 v10; // x1
  UserServantEntity_o *IsLock; // x0
  UserServantEntity_o *v12; // x8
  bool IsChoice; // w0

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  IsLock = *p_userServantEntity;
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = (struct UserServantEntity_o *)(&dword_0 + 1);
  if ( !IsLock
    || (IsLock = (UserServantEntity_o *)UserServantEntity__IsLock(IsLock, 0LL),
        v12 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)IsLock & 1,
        !v12) )
  {
    sub_1BCAA3C(IsLock, v10);
  }
  IsChoice = UserServantEntity__IsChoice(v12, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


void __fastcall WarehouseListViewItem__ModifyItem(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = (struct UserServantEntity_o *)(&dword_0 + 1);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItem__Modify_36510376(
        WarehouseListViewItem_o *this,
        bool isFavorite,
        bool isPush,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  UserServantEntity_o *v6; // x8
  bool IsChoice; // w0

  userServantEntity = this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.isPush = isPush;
  if ( !userServantEntity
    || (userServantEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userServantEntity, 0LL),
        v6 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)userServantEntity & 1,
        !v6) )
  {
    sub_1BCAA3C(userServantEntity, isFavorite);
  }
  IsChoice = UserServantEntity__IsChoice(v6, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


bool __fastcall WarehouseListViewItem__SetSortValue(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  WarehouseListViewItem_o *v4; // x19
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  int64_t *p_sortValue0; // x23
  int64_t priority; // x8
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t v51; // w8
  int32_t bonusKind2; // w8
  int32_t v53; // w5
  int32_t v54; // w9
  int32_t v55; // w8
  int32_t v56; // w9
  int32_t bonusKindId; // w9
  int32_t bonusKind2Id; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  __int64 v60; // x2
  __int64 v61; // x3
  System_Func_object__bool__o *v62; // x22
  bool v63; // w0
  int32_t v64; // w8
  bool EventUpVal_40936896; // w0
  System_Collections_Generic_List_EventGroupEntity__o *v66; // x21
  __int64 v67; // x2
  __int64 v68; // x3
  System_Func_object__bool__o *v69; // x22
  System_Int32_array *v70; // x21
  System_Int32_array *OtherEventEquipIdList; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Func_int__bool__o *v75; // x0
  __int64 *v76; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v78; // x1
  int32_t svtId; // w22
  ServantFilterMaster_o *v80; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // kr00_16
  System_Int32_array *eventIdList; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Func_T__bool__o *v86; // x22
  _BOOL4 isChoice; // w21
  const MethodInfo *v88; // x2
  long double v89; // q0
  __int64 v90; // x8
  struct UserServantEntity_o *v91; // x8
  __int128 v92; // q1
  struct UserServantEntity_o *v93; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v95; // w21
  bool IsMaterialTd; // w8
  struct UserServantEntity_o *v97; // x8
  int64_t hp; // x2
  int32_t adjustHp; // w3
  int32_t v100; // w1
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v103; // w1
  __int64 v104; // x0
  __int64 v105; // x0
  long double v106; // q0
  WarehouseListViewItem_o *v107; // x20
  __int64 v108; // x0
  __int64 v109; // x0
  int32_t FirstOpenEventId; // w20
  long double v111; // q0
  __int64 v112; // x8
  __int64 v113; // x0
  __int64 monitor; // x8
  int64_t rarity; // x8
  int64_t v116; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  struct UserServantEntity_o *v118; // x8
  IconLabelInfo_o *v119; // x19
  struct ServantEntity_o *servantEntity; // x8
  int64_t cost; // x2
  __int64 methodPtr_low; // x10
  struct ServantEntity_o *v123; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v125; // x8
  int32_t lv; // w20
  IconLabelInfo_o *v127; // x20
  int32_t v128; // w21
  UserServantEntity_o *userServantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+30h] [xbp-60h]
  Il2CppObject *entity; // [xsp+50h] [xbp-40h] BYREF
  __int64 tdMaxLv; // [xsp+58h] [xbp-38h] BYREF

  v3 = sort;
  v4 = this;
  if ( (byte_4B141A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventGroupMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFilterMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_WarehouseListViewItem__SetSortValue_b__65_0__, v37, v38);
    sub_1BCA7E0(&Method_WarehouseListViewItem__SetSortValue_b__65_1__, v39, v40);
    sub_1BCA7E0(&Method_WarehouseListViewItem__SetSortValue_b__65_2__, v41, v42);
    sub_1BCA7E0(&Method_WarehouseListViewItem__SetSortValue_b__65_3__, v43, v44);
    this = (WarehouseListViewItem_o *)sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, v45, v46);
    byte_4B141A5 = 1;
  }
  entity = 0LL;
  tdMaxLv = 0LL;
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  priority = v4->fields.priority;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  v4->fields.sortValue1B = priority;
  v4->fields.isNeedAdjustIconLabelScale = 0;
  if ( !v3 )
    goto LABEL_209;
  if ( !v3->fields.isBonusKind )
    goto LABEL_83;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_209;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = v3->fields.bonusKind2;
    switch ( bonusKind2 )
    {
      case 0:
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = v3->fields.bonusKind2Id;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
        this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_209;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0LL);
        this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)EntitiesByGroupId,
                                            0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_83;
        if ( !EntitiesByGroupId )
          goto LABEL_209;
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          v62 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventGroupEntity__bool__TypeInfo, sort, v60, v61);
          System_Func_object__bool____ctor(
            v62,
            (Il2CppObject *)v4,
            Method_WarehouseListViewItem__SetSortValue_b__65_2__,
            0LL);
          v63 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                  (System_Func_T__bool__o *)v62,
                  (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
          v4->fields.isEventUpVal = v63;
          if ( !v63 )
            goto LABEL_95;
        }
        goto LABEL_83;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          bonusKindId = v4->fields.bonusKindId;
          bonusKind2Id = v3->fields.bonusKind2Id;
          goto LABEL_38;
        }
        bonusKind2Id = v3->fields.bonusKind2Id;
        goto LABEL_78;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind2 )
        {
          v53 = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v53 )
            goto LABEL_59;
        }
        else
        {
          v53 = v3->fields.bonusKind2Id;
        }
        this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.bonusKind = bonusKind2;
        goto LABEL_49;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v54 = v4->fields.bonusKindId;
          v55 = v3->fields.bonusKind2Id;
          goto LABEL_42;
        }
        v55 = v3->fields.bonusKind2Id;
        break;
      case 8:
        if ( v4->fields.bonusKind == 8 )
        {
          v64 = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v64 )
            goto LABEL_59;
        }
        else
        {
          v64 = v3->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 8;
        v4->fields.bonusKindId = v64;
        eventIdList = setupInfo->fields.eventIdList;
        this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_209;
        this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
        if ( !this )
          goto LABEL_209;
        OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                  (EventBonusFilterMaster_o *)this,
                                  eventIdList,
                                  0LL);
        v75 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v83, v84, v85);
        v76 = &Method_WarehouseListViewItem__SetSortValue_b__65_3__;
        goto LABEL_76;
      default:
        goto LABEL_83;
    }
    goto LABEL_67;
  }
  bonusKind = v3->fields.bonusKind;
  if ( (unsigned int)(bonusKind - 4) < 2 )
  {
    if ( v4->fields.bonusKind == bonusKind )
      goto LABEL_59;
    v4->fields.bonusKind = bonusKind;
    v53 = v3->fields.bonusKindId;
    this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
LABEL_49:
    v4->fields.bonusKindId = v53;
    if ( !this )
      goto LABEL_209;
    EventUpVal_40936896 = UserServantEntity__getEventUpVal_40936896(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v53,
                            0,
                            0LL);
    goto LABEL_82;
  }
  if ( bonusKind == 7 )
  {
    if ( v4->fields.bonusKind == 7 )
    {
      v54 = v4->fields.bonusKindId;
      v55 = v3->fields.bonusKindId;
LABEL_42:
      if ( v54 == v55 )
        goto LABEL_59;
    }
    else
    {
      v55 = v3->fields.bonusKindId;
    }
LABEL_67:
    v4->fields.bonusKind = 7;
    v4->fields.bonusKindId = v55;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_209;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    svtId = v4->fields.svtId;
    v80 = (ServantFilterMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v78);
    v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
    sort = *(ListViewSort_o **)&v81.fields.fakeValue;
    this = *(WarehouseListViewItem_o **)&v81.fields.currentCryptoKey;
    if ( !v80 )
      goto LABEL_209;
    EventUpVal_40936896 = ServantFilterMaster__IsEnableServant(v80, v81, v4->fields.bonusKindId, 0LL);
    goto LABEL_82;
  }
  if ( !bonusKind )
  {
    if ( v4->fields.bonusKind )
    {
      v51 = v3->fields.bonusKindId;
      goto LABEL_52;
    }
    v51 = v3->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v51 )
    {
LABEL_52:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v51;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
      this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( this )
      {
        v66 = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0LL);
        this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v66, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v66 )
            goto LABEL_209;
          if ( v66->fields._size >= 2 )
          {
            v69 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_EventGroupEntity__bool__TypeInfo,
                                                   sort,
                                                   v67,
                                                   v68);
            System_Func_object__bool____ctor(
              v69,
              (Il2CppObject *)v4,
              Method_WarehouseListViewItem__SetSortValue_b__65_0__,
              0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)v66,
                                        (System_Func_T__bool__o *)v69,
                                        (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_59;
      }
LABEL_209:
      sub_1BCAA3C(this, sort);
    }
LABEL_59:
    if ( !v4->fields.isEventUpVal )
      goto LABEL_95;
    goto LABEL_83;
  }
  if ( v3->fields.bonusKind2 == 8 )
  {
    if ( v4->fields.bonusKind == bonusKind )
    {
      v56 = v3->fields.bonusKindId;
      if ( v4->fields.bonusKindId == v56 )
        goto LABEL_59;
    }
    else
    {
      v56 = v3->fields.bonusKindId;
    }
    v4->fields.bonusKind = bonusKind;
    v4->fields.bonusKindId = v56;
    v70 = setupInfo->fields.eventIdList;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_209;
    this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    if ( !this )
      goto LABEL_209;
    OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList((EventBonusFilterMaster_o *)this, v70, 0LL);
    v75 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v72, v73, v74);
    v76 = &Method_WarehouseListViewItem__SetSortValue_b__65_1__;
LABEL_76:
    v86 = (System_Func_T__bool__o *)v75;
    System_Func_int__bool____ctor(v75, (Il2CppObject *)v4, *v76, 0LL);
    EventUpVal_40936896 = BasicHelper__Any_int__49273364(
                            OtherEventEquipIdList,
                            v86,
                            (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
  }
  else
  {
    if ( bonusKind != 3 )
      goto LABEL_83;
    if ( v4->fields.bonusKind == 3 )
    {
      bonusKindId = v4->fields.bonusKindId;
      bonusKind2Id = v3->fields.bonusKindId;
LABEL_38:
      if ( bonusKindId == bonusKind2Id )
        goto LABEL_59;
    }
    else
    {
      bonusKind2Id = v3->fields.bonusKindId;
    }
LABEL_78:
    v4->fields.bonusKind = 3;
    v4->fields.bonusKindId = bonusKind2Id;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
    this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !this )
      goto LABEL_209;
    EventUpVal_40936896 = EventCampaignMaster__IsEnableServant(
                            (EventCampaignMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0LL);
  }
LABEL_82:
  v4->fields.isEventUpVal = EventUpVal_40936896;
  if ( !EventUpVal_40936896 )
  {
LABEL_95:
    LOBYTE(this) = 0;
    return (char)this;
  }
LABEL_83:
  if ( (((__int64 (__fastcall *)(WarehouseListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          v3,
          v4->klass[1]._1.image) & 1) == 0 )
    goto LABEL_95;
  this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !this )
    goto LABEL_209;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  *p_sortValue0 = 0LL;
  v4->fields.sortValue0B = 0LL;
  if ( !v3->fields.isSmartSort )
  {
    if ( isChoice && v3->fields.isChoiceSort )
      *p_sortValue0 = -10LL;
    goto LABEL_109;
  }
  this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
  if ( !this )
    goto LABEL_209;
  if ( ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL) )
  {
    if ( !v4->fields.isPartyEquip )
    {
      if ( !v4->fields.isUseSupportEquip )
      {
        if ( !v4->fields.isUseRecommendSupportEquip )
          goto LABEL_107;
        goto LABEL_105;
      }
      goto LABEL_101;
    }
LABEL_99:
    v90 = -20LL;
LABEL_106:
    *p_sortValue0 = v90;
    goto LABEL_107;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_99;
  if ( v4->fields.isUseSupport )
  {
LABEL_101:
    v90 = -30LL;
    goto LABEL_106;
  }
  if ( v4->fields.isUseRecommendSupport )
  {
    v90 = -35LL;
    goto LABEL_106;
  }
  if ( v4->fields.attribute )
  {
LABEL_105:
    v90 = -40LL;
    goto LABEL_106;
  }
  if ( v4->fields.isFavorite )
  {
    v90 = -50LL;
    goto LABEL_106;
  }
  if ( v4->fields.isPush )
  {
    v90 = -55LL;
    goto LABEL_106;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( userServantEntity
    && !v4->fields.isWarehouseServant
    && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL)
    || v4->fields.isFortification )
  {
    v90 = -10LL;
    goto LABEL_106;
  }
LABEL_107:
  if ( isChoice && v3->fields.isChoiceSort )
  {
    v89 = *(long double *)&xmmword_BD2390;
    *(_OWORD *)p_sortValue0 = xmmword_BD2390;
  }
LABEL_109:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      v91 = v4->fields.userServantEntity;
      if ( !v91 )
        goto LABEL_209;
      v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
      *(_OWORD *)&v132.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v132.fields.fakeValue = v92;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
      v131 = v132;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v131, 0LL);
      v93 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v93 )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v93->fields.createdAt, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      v95 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_209;
      IconLabelInfo__Set_38850420(iconLabelInfo2, 2, v95, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0LL);
      LOBYTE(this) = 1;
      if ( IsMaterialTd )
        v4->fields.isNeedAdjustIconLabelScale = 1;
      return (char)this;
    case 2:
      rarity = v4->fields.rarity;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_165;
    case 3:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v116 = *(int *)&this->fields.isEventUpVal;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v116;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_209;
      IconLabelInfo__Set_38850420(iconLabelInfo1, 2, v116, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_198;
    case 4:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      UserServantEntity__getTreasureDeviceInfo_40943792(
        (UserServantEntity_o *)this,
        (int32_t *)&tdMaxLv + 1,
        (int32_t *)&tdMaxLv,
        0LL);
      LODWORD(friendship) = HIDWORD(tdMaxLv);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = SHIDWORD(tdMaxLv);
      if ( !this )
        goto LABEL_209;
      friendshipMax = tdMaxLv;
      v103 = 33;
      goto LABEL_179;
    case 5:
      v97 = v4->fields.userServantEntity;
      if ( !v97 )
        goto LABEL_209;
      hp = v97->fields.hp;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_209;
      adjustHp = v97->fields.adjustHp;
      v100 = 3;
      goto LABEL_159;
    case 6:
      v118 = v4->fields.userServantEntity;
      if ( !v118 )
        goto LABEL_209;
      hp = v118->fields.atk;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_209;
      adjustHp = v118->fields.adjustAtk;
      v100 = 5;
LABEL_159:
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v100, hp, adjustHp, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v119 = v4->fields.iconLabelInfo2;
      goto LABEL_195;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_209;
      cost = servantEntity->fields.cost;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_180;
    case 8:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_165:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_209;
      goto LABEL_194;
    case 0xA:
      friendship = v4->fields.friendship;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.friendshipMax;
      v103 = 32;
      goto LABEL_179;
    case 0xE:
      this = (WarehouseListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_174;
      this = (WarehouseListViewItem_o *)v3->fields.manager;
      if ( !this )
        goto LABEL_209;
      methodPtr_low = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarehouseListViewManager_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewManager_TypeInfo )
      {
        goto LABEL_209;
      }
      this = (WarehouseListViewItem_o *)WarehouseListViewManager__GetAmountSortValue(
                                          (WarehouseListViewManager_o *)this,
                                          v4->fields.svtId,
                                          v88);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_174:
      v123 = v4->fields.servantEntity;
      if ( !v123 )
        goto LABEL_209;
      collectionNo = v123->fields.collectionNo;
      v125 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v125 )
        goto LABEL_209;
      v119 = v4->fields.iconLabelInfo1;
      lv = v125->fields.lv;
      this = (WarehouseListViewItem_o *)v125;
      goto LABEL_196;
    case 0xF:
      friendship = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v103 = 44;
      goto LABEL_179;
    case 0x10:
      friendship = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v103 = 45;
LABEL_179:
      IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v103, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_180:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v127 = v4->fields.iconLabelInfo2;
      v128 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v127 )
        goto LABEL_209;
      IconLabelInfo__Set_38850420(v127, 2, v128, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_188;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_188;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL) )
        goto LABEL_198;
LABEL_188:
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      goto LABEL_198;
    case 0x18:
      v104 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v104 + 309) & 1) == 0 )
        v104 = sub_1C1C6BC(v89);
      v105 = *(_QWORD *)(*(_QWORD *)(v104 + 192) + 16LL);
      if ( (*(_BYTE *)(v105 + 309) & 1) == 0 )
        v105 = sub_1C1C6BC(v89);
      this = **(WarehouseListViewItem_o ***)(v105 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0LL);
      if ( !this )
        goto LABEL_209;
      v107 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        monitor = 0x7FFFFFFFFFFFFFFFLL;
LABEL_192:
        v4->fields.sortValue1 = monitor;
        goto LABEL_193;
      }
      v108 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v108 + 309) & 1) == 0 )
        v108 = sub_1C1C6BC(v106);
      v109 = *(_QWORD *)(*(_QWORD *)(v108 + 192) + 16LL);
      if ( (*(_BYTE *)(v109 + 309) & 1) == 0 )
        v109 = sub_1C1C6BC(v106);
      this = **(WarehouseListViewItem_o ***)(v109 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v107->fields.sortIndex )
        sub_1BCAA44(this, sort);
      if ( !this )
        goto LABEL_209;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v107->fields.sortValue0, 0LL);
      v112 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v112 + 309) & 1) == 0 )
        v112 = sub_1C1C6BC(v111);
      v113 = *(_QWORD *)(*(_QWORD *)(v112 + 192) + 16LL);
      if ( (*(_BYTE *)(v113 + 309) & 1) == 0 )
        v113 = sub_1C1C6BC(v111);
      this = **(WarehouseListViewItem_o ***)(v113 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_209;
        monitor = (__int64)entity[5].monitor;
        goto LABEL_192;
      }
LABEL_193:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1B = v4->fields.svtId;
      if ( !this )
        goto LABEL_209;
LABEL_194:
      v119 = v4->fields.iconLabelInfo1;
LABEL_195:
      lv = *(_DWORD *)&this->fields.isEventUpVal;
LABEL_196:
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v119 )
        goto LABEL_209;
      IconLabelInfo__Set_38850420(v119, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_198:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
}


bool __fastcall WarehouseListViewItem__SwapChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall WarehouseListViewItem__SwapLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__65_0(
        WarehouseListViewItem_o *this,
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
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  int32_t svtId; // w22
  ServantFilterMaster_o *v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // kr00_16

  if ( (byte_4B141AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B141AB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  v14 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  v17 = (ServantFilterMaster_o *)v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  v12 = *(_QWORD *)&v18.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v18.fields.currentCryptoKey;
  if ( !v17 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(v17, v18, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_1BCAA3C(Master_object, v12);
  return UserServantEntity__getEventUpVal_40936896(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0LL);
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__65_1(
        WarehouseListViewItem_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__65_2(
        WarehouseListViewItem_o *this,
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
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  int32_t svtId; // w22
  ServantFilterMaster_o *v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // kr00_16

  if ( (byte_4B141AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B141AC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  v14 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  v17 = (ServantFilterMaster_o *)v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  v12 = *(_QWORD *)&v18.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v18.fields.currentCryptoKey;
  if ( !v17 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(v17, v18, entity->fields.eventId, 0LL) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_1BCAA3C(Master_object, v12);
  return UserServantEntity__getEventUpVal_40936896(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0LL);
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__65_3(
        WarehouseListViewItem_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


int32_t __fastcall WarehouseListViewItem__get_Attribute(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.attribute;
}


int32_t __fastcall WarehouseListViewItem__get_DragSelectNum(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


System_String_o *__fastcall WarehouseListViewItem__get_FortificationDetailName(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationDetailName;
}


System_String_o *__fastcall WarehouseListViewItem__get_FortificationName(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationName;
}


IconLabelInfo_o *__fastcall WarehouseListViewItem__get_IconInfo1(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall WarehouseListViewItem__get_IconInfo2(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


System_String_o *__fastcall WarehouseListViewItem__get_ImageName(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B141AA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B141AA = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall WarehouseListViewItem__get_IsCanNotSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isFavorite
    || (this->fields.partyIndex & 0x80000000) == 0
    || this->fields.isPartyEquip
    || this->fields.attribute
    || this->fields.isUseSupport
    || this->fields.isUseSupportEquip
    || this->fields.isUseRecommendSupport
    || this->fields.isUseRecommendSupportEquip
    || this->fields.isFatigueRecovery
    || this->fields.isFortification
    || this->fields.isPush )
  {
    return 1;
  }
  if ( this->fields.userServantEntity && !this->fields.isWarehouseServant )
    return UserServantEntity__IsProtectedEventServant(this->fields.userServantEntity, 0LL);
  return 0;
}


bool __fastcall WarehouseListViewItem__get_IsChocolateSvtEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool __fastcall WarehouseListViewItem__get_IsChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall WarehouseListViewItem__get_IsDispChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall WarehouseListViewItem__get_IsDispLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall WarehouseListViewItem__get_IsDragSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool __fastcall WarehouseListViewItem__get_IsEnabled(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool __fastcall WarehouseListViewItem__get_IsEventJoin(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool __fastcall WarehouseListViewItem__get_IsFatigueRecovery(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFatigueRecovery;
}


bool __fastcall WarehouseListViewItem__get_IsFavorite(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool __fastcall WarehouseListViewItem__get_IsFortification(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFortification;
}


bool __fastcall WarehouseListViewItem__get_IsFriendShipSvtEq(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool __fastcall WarehouseListViewItem__get_IsLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall WarehouseListViewItem__get_IsMaterialTdSvt(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool __fastcall WarehouseListViewItem__get_IsNeedAdjustIconLabelScale(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool __fastcall WarehouseListViewItem__get_IsOrganization(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1BCAA3C(0LL, method);
  return ServantEntity__get_IsOrganization(servantEntity, 0LL);
}


bool __fastcall WarehouseListViewItem__get_IsParty(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool __fastcall WarehouseListViewItem__get_IsPartyEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPartyEquip;
}


bool __fastcall WarehouseListViewItem__get_IsProtected(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  return userServantEntity
      && !this->fields.isWarehouseServant
      && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL);
}


bool __fastcall WarehouseListViewItem__get_IsPush(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall WarehouseListViewItem__get_IsPushMode(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall WarehouseListViewItem__get_IsSellEnableServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool __fastcall WarehouseListViewItem__get_IsSwapChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall WarehouseListViewItem__get_IsSwapLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall WarehouseListViewItem__get_IsUse(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


bool __fastcall WarehouseListViewItem__get_IsUseRecommendSupportEquip(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupportEquip;
}


bool __fastcall WarehouseListViewItem__get_IsUseRecommendSupportServant(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseRecommendSupport;
}


bool __fastcall WarehouseListViewItem__get_IsUseSupportEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupportEquip;
}


bool __fastcall WarehouseListViewItem__get_IsUseSupportServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupport;
}


System_String_o *__fastcall WarehouseListViewItem__get_NameText(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B141A9 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B141A9 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  }
  else
  {
    v10 = -1;
  }
  return ServantEntity__getName(servantEntity, v10, -1, 0LL);
}


ServantEntity_o *__fastcall WarehouseListViewItem__get_Servant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall WarehouseListViewItem__get_SvtId(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *__fastcall WarehouseListViewItem__get_UserServant(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t __fastcall WarehouseListViewItem__get_UserSvtId(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B141A8 & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B141A8 = 1;
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


void __fastcall WarehouseListViewItem__set_DragSelectNum(
        WarehouseListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItem__set_IsDragSelect(
        WarehouseListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, value);
  this->fields.dragSelectNum = value - 1;
}


void __fastcall WarehouseListViewItem__set_IsEnabled(
        WarehouseListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void __fastcall WarehouseListViewItem__set_IsPush(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}


void __fastcall WarehouseListViewItem__set_IsPushMode(
        WarehouseListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}