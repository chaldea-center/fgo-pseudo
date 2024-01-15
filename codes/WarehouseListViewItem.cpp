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
  IconLabelInfo_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  IconLabelInfo_o *v43; // x28
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UserServantEntity_o *v63; // x8
  __int64 v64; // x26
  __int64 v65; // x27
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  WebViewManager_o *v76; // x0
  WarQuestSelectionMaster_o *v77; // x0
  struct UserServantEntity_o *v78; // x8
  ServantLimitMaster_o *v79; // x27
  int32_t svtId; // w28
  int32_t v81; // w0
  ServantLimitEntity_o *v82; // x0
  int32_t rarity; // w8
  UserServantEntity_o *v84; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *v86; // x8
  __int128 v87; // q1
  int64_t pushUserSvtId; // x23
  int64_t v89; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t v91; // w8
  bool IsLock; // w0
  UserServantEntity_o *v93; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v95; // x0
  bool IsFriendShipSvtEquip; // w0
  UserServantEntity_o *v97; // x8
  bool IsChocolateSvtEquip; // w0
  UserServantEntity_o *v99; // x8
  WebViewManager_o *v100; // x0
  WarQuestSelectionMaster_o *v101; // x0
  UserServantEntity_o *v102; // x8
  __int128 v103; // q0
  UserServantCollectionMaster_o *v104; // x23
  int64_t v105; // x0
  UserServantEntity_o *v106; // x8
  int64_t v107; // x26
  __int64 v108; // x27
  __int64 v109; // x28
  int32_t v110; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantEntity_o *v112; // x8
  __int128 v113; // q0
  int64_t v114; // x23
  ServantEntity_o *v115; // x0
  __int64 IsKeepServantEquip; // x0
  const MethodInfo *v117; // x1
  __int64 v118; // x2
  signed int max_length; // w8
  unsigned int v120; // w9
  signed int v121; // w8
  unsigned int v122; // w9
  WebViewManager_o *v123; // x0
  WarQuestSelectionMaster_o *v124; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v128; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v131; // x8
  unsigned __int64 v132; // x10
  int32_t *v133; // x11
  __int64 v134; // x0
  _QWORD *v135; // x0
  __int64 v136; // x9
  __int64 v137; // x8
  __int128 v138; // q0
  System_Collections_Generic_IEnumerator_T__c *v139; // x8
  unsigned __int64 v140; // x10
  int32_t *v141; // x11
  __int64 v142; // x0
  WebViewManager_o *v143; // x0
  WarQuestSelectionMaster_o *v144; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v145; // x0
  System_Collections_Generic_IEnumerator_T__o *v146; // x24
  System_Collections_Generic_IEnumerator_T__c *v147; // x8
  unsigned __int64 v148; // x10
  int32_t *v149; // x11
  __int64 v150; // x0
  System_Collections_Generic_IEnumerator_T__c *v151; // x8
  unsigned __int64 v152; // x10
  int32_t *v153; // x11
  __int64 v154; // x0
  _QWORD *v155; // x0
  __int64 v156; // x9
  System_Collections_Generic_IEnumerator_T__c *v157; // x8
  unsigned __int64 v158; // x10
  int32_t *v159; // x11
  __int64 v160; // x0
  UserServantEntity_o *v161; // x0
  int32_t adjustHp; // w24
  BalanceConfig_c *v163; // x8
  UserServantEntity_o *v164; // x0
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v166; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  UserServantEntity_o *v174; // x0
  struct System_Int32_array *EquipCategoryIdList; // x1
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  signed int v183; // w8
  __int64 v184; // x9
  int64_t UserSvtId; // x0
  WebViewManager_o *v186; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v187; // x0
  WarEntity_o *v188; // x0
  int64_t bannerId; // x8
  struct ServantEntity_o *v190; // x0
  __int64 v191; // x20
  __int64 collectionNo; // x21
  __int64 lv; // x22
  bool IsServantMaterialTd; // w0
  struct UserServantEntity_o *v195; // x8
  __int64 v196; // x21
  __int64 v197; // x22
  int32_t v198; // w0
  IconLabelInfo_o *iconLabelInfo1; // x8
  IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v202; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v203; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+90h] [xbp-90h]
  int v207; // [xsp+B0h] [xbp-70h]
  int v208; // [xsp+C0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16

  if ( (byte_40FA994 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v21);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v23);
    sub_B16FFC(&System_IDisposable_TypeInfo, v24);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v25);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v26);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v27);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v31);
    byte_40FA994 = 1;
  }
  v208 = 0;
  v32 = (IconLabelInfo_o *)sub_B170CC(
                             IconLabelInfo_TypeInfo,
                             *(_QWORD *)&index,
                             userServantEntity,
                             setupinfo,
                             partyUserServantList);
  IconLabelInfo___ctor(v32, 0LL);
  this->fields.iconLabelInfo1 = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v43 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v39, v40, v41, v42);
  IconLabelInfo___ctor(v43, 0LL);
  this->fields.iconLabelInfo2 = v43;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.setupInfo = setupinfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupinfo,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = this->fields.userServantEntity;
  if ( !v63 )
    goto LABEL_162;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v209.fields.currentCryptoKey = v65;
  *(_QWORD *)&v209.fields.fakeValue = v64;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v209, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_162;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_162;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       this->fields.svtId,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v76 )
    goto LABEL_162;
  v77 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v76,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v78 = this->fields.userServantEntity;
  if ( !v78 )
    goto LABEL_162;
  v79 = (ServantLimitMaster_o *)v77;
  svtId = this->fields.svtId;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v78->fields.limitCount, 0LL);
  if ( !v79 )
    goto LABEL_162;
  v82 = ServantLimitMaster__GetEntity(v79, svtId, v81, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_162;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !v82 )
    goto LABEL_162;
  rarity = v82->fields.rarity;
  v84 = this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = rarity;
  if ( !v84 )
    goto LABEL_162;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin(v84, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_162;
  v86 = *p_userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v87 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v206.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v206.fields.fakeValue = v87;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v205 = v206;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v205, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isPush = pushUserSvtId == v89;
  this->fields.isEnabled = 1;
  if ( !servantEntity )
    goto LABEL_162;
  if ( servantEntity->fields.type == 2 )
  {
    v91 = 1;
LABEL_26:
    this->fields.attribute = v91;
    goto LABEL_28;
  }
  if ( !*p_userServantEntity )
    goto LABEL_162;
  if ( UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL) )
  {
    v91 = 2;
    goto LABEL_26;
  }
  this->fields.attribute = 0;
LABEL_28:
  if ( !*p_userServantEntity )
    goto LABEL_162;
  IsLock = UserServantEntity__IsLock(*p_userServantEntity, 0LL);
  v93 = this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !v93 )
    goto LABEL_162;
  IsChoice = UserServantEntity__IsChoice(v93, 0LL);
  v95 = this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !v95 )
    goto LABEL_162;
  IsFriendShipSvtEquip = UserServantEntity__IsFriendShipSvtEquip(v95, 0LL);
  v97 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = IsFriendShipSvtEquip;
  if ( !v97 )
    goto LABEL_162;
  IsChocolateSvtEquip = UserServantEntity__IsChocolateSvtEquip(v97, 0LL);
  v99 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = IsChocolateSvtEquip;
  if ( !v99 )
    goto LABEL_162;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v99, 0LL);
  v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v100 )
    goto LABEL_162;
  v101 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v100,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v102 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v103 = *(_OWORD *)&v102->fields.userId.fields.fakeValue;
  v104 = (UserServantCollectionMaster_o *)v101;
  *(_OWORD *)&v206.fields.currentCryptoKey = *(_OWORD *)&v102->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v206.fields.fakeValue = v103;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v204 = v206;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v204, 0LL);
  v106 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v107 = v105;
  v109 = *(_QWORD *)&v106->fields.svtId.fields.currentCryptoKey;
  v108 = *(_QWORD *)&v106->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v210.fields.currentCryptoKey = v109;
  *(_QWORD *)&v210.fields.fakeValue = v108;
  v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v210, 0LL);
  if ( !v104 )
    goto LABEL_162;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v104, v107, v110, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_162;
  UserServantCollectionEntity__getFriendShipRankInfo(
    EntityDefinitely,
    &this->fields.friendship,
    &this->fields.friendshipMax,
    0LL);
  v112 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v112 )
    goto LABEL_162;
  v113 = *(_OWORD *)&v112->fields.id.fields.fakeValue;
  *(_OWORD *)&v203.fields.currentCryptoKey = *(_OWORD *)&v112->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v203.fields.fakeValue = v113;
  v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v203, 0LL);
  v115 = this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0LL;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0LL;
  if ( !v115 )
    goto LABEL_162;
  IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(v115, 0LL);
  if ( (IsKeepServantEquip & 1) != 0 )
  {
    if ( !partyUserEquipList )
      goto LABEL_162;
    max_length = partyUserEquipList->max_length;
    if ( max_length >= 1 )
    {
      v120 = 0;
      while ( 1 )
      {
        if ( v120 >= max_length )
          goto LABEL_164;
        if ( v114 == partyUserEquipList->m_Items[v120] )
          break;
        if ( (int)++v120 >= max_length )
          goto LABEL_62;
      }
      this->fields.partyIndex = v120;
      this->fields.isPartyEquip = 1;
      this->fields.isUse = 1;
    }
LABEL_62:
    v123 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v123 )
      goto LABEL_162;
    v124 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v123,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !v124 )
      goto LABEL_162;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v124->fields.list;
    if ( !list )
      goto LABEL_162;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v128 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v128;
          p_offset += 4;
          if ( v128 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_70:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_88;
      v131 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v132 = 0LL;
        v133 = &v131->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v133 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v132;
          v133 += 4;
          if ( v132 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_77;
        }
        v134 = (__int64)&v131->vtable[*v133].method;
      }
      else
      {
LABEL_77:
        v134 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v135 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v134)(
                         Enumerator,
                         *(_QWORD *)(v134 + 8));
      if ( !v135 )
        goto LABEL_166;
      v136 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v135 + 300LL) < (unsigned int)v136
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v135 + 200LL) + 8 * v136 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      v137 = v135[4];
      if ( v137 )
      {
        v138 = *(_OWORD *)(v137 + 40);
        *(_OWORD *)&v206.fields.currentCryptoKey = *(_OWORD *)(v137 + 24);
        *(_OWORD *)&v206.fields.fakeValue = v138;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v202 = v206;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v202, 0LL) == v114 )
        {
          this->fields.isUseSupportEquip = 1;
LABEL_88:
          v207 = 731;
          v208 = 1;
          v139 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v140 = 0LL;
            v141 = &v139->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v141 - 1) != System_IDisposable_TypeInfo )
            {
              ++v140;
              v141 += 4;
              if ( v140 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_93;
            }
            v142 = (__int64)&v139->vtable[*v141].method;
          }
          else
          {
LABEL_93:
            v142 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v142)(
            Enumerator,
            *(_QWORD *)(v142 + 8));
          if ( v207 == 731 )
            v208 = 0;
          if ( *p_userServantEntity )
          {
            EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(*p_userServantEntity, 0LL);
            p_equipCategoryIdList = &this->fields.equipCategoryIdList;
            this->fields.equipCategoryIdList = EquipCategoryIdList;
            goto LABEL_142;
          }
          goto LABEL_162;
        }
      }
    }
    IsKeepServantEquip = sub_B173C8(v135);
LABEL_164:
    sub_B17100(IsKeepServantEquip, v117, v118);
    sub_B170A0();
  }
  if ( !partyUserServantList )
    goto LABEL_162;
  v121 = partyUserServantList->max_length;
  if ( v121 >= 1 )
  {
    v122 = 0;
    while ( 1 )
    {
      if ( v122 >= v121 )
        goto LABEL_164;
      if ( v114 == partyUserServantList->m_Items[v122] )
        break;
      if ( (int)++v122 >= v121 )
        goto LABEL_95;
    }
    this->fields.partyIndex = v122;
  }
LABEL_95:
  v143 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v143 )
    goto LABEL_162;
  v144 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v143,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !v144 )
    goto LABEL_162;
  v145 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v144->fields.list;
  if ( !v145 )
    goto LABEL_162;
  v146 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           v145,
           (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v146 )
    sub_B170D4();
  while ( 1 )
  {
    v147 = v146->klass;
    if ( *(_WORD *)&v146->klass->_2.bitflags1 )
    {
      v148 = 0LL;
      v149 = &v147->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v149 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v148;
        v149 += 4;
        if ( v148 >= *(unsigned __int16 *)&v146->klass->_2.bitflags1 )
          goto LABEL_103;
      }
      v150 = (__int64)&v147->vtable[*v149].method;
    }
    else
    {
LABEL_103:
      v150 = sub_AAFEF8(v146, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v150)(
            v146,
            *(_QWORD *)(v150 + 8)) & 1) == 0 )
      break;
    v151 = v146->klass;
    if ( *(_WORD *)&v146->klass->_2.bitflags1 )
    {
      v152 = 0LL;
      v153 = &v151->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v153 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v152;
        v153 += 4;
        if ( v152 >= *(unsigned __int16 *)&v146->klass->_2.bitflags1 )
          goto LABEL_110;
      }
      v154 = (__int64)&v151->vtable[*v153].method;
    }
    else
    {
LABEL_110:
      v154 = sub_AAFEF8(v146, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v155 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v154)(
                       v146,
                       *(_QWORD *)(v154 + 8));
    if ( !v155 )
      sub_B170D4();
    v156 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v155 + 300LL) < (unsigned int)v156
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v155 + 200LL) + 8 * v156 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      sub_B173C8(v155);
LABEL_166:
      sub_B170D4();
    }
    if ( v155[7] == v114 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v207 = 866;
  v208 = 1;
  v157 = v146->klass;
  if ( *(_WORD *)&v146->klass->_2.bitflags1 )
  {
    v158 = 0LL;
    v159 = &v157->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v159 - 1) != System_IDisposable_TypeInfo )
    {
      ++v158;
      v159 += 4;
      if ( v158 >= *(unsigned __int16 *)&v146->klass->_2.bitflags1 )
        goto LABEL_122;
    }
    v160 = (__int64)&v157->vtable[*v159].method;
  }
  else
  {
LABEL_122:
    v160 = sub_AAFEF8(v146, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v160)(v146, *(_QWORD *)(v160 + 8));
  if ( v207 == 866 )
    v208 = 0;
  v161 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  adjustHp = v161->fields.adjustHp;
  v163 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v163 = BalanceConfig_TypeInfo;
    v161 = *p_userServantEntity;
  }
  this->fields.hpReinforceValue = v163->static_fields->StatusUpAdjustHp * adjustHp;
  if ( !v161 )
    goto LABEL_162;
  this->fields.atkReinforceValue = v163->static_fields->StatusUpAdjustAtk * v161->fields.adjustAtk;
  UserServantEntity__getAdjustMaxData(
    v161,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  v164 = this->fields.userServantEntity;
  if ( !v164 )
    goto LABEL_162;
  DispLimitCount = UserServantEntity__getDispLimitCount(v164, 0, 0LL);
  v166 = this->fields.userServantEntity;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v166 )
    goto LABEL_162;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v166, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  v174 = this->fields.userServantEntity;
  if ( !v174 )
    goto LABEL_162;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v174, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_142:
  sub_B16F98(
    (BattleServantConfConponent_o *)p_equipCategoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v183 = recoverySvtList->max_length;
    if ( v183 >= 1 )
    {
      v184 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v184 >= v183 )
          goto LABEL_164;
        if ( recoverySvtList->m_Items[v184] == v114 )
          break;
        if ( (int)++v184 >= v183 )
          goto LABEL_150;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_150:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v117);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  this->fields.amountSortValue = -1LL;
  v186 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v186 )
    goto LABEL_162;
  v187 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v186,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !v187 )
    goto LABEL_162;
  v188 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v187,
           this->fields.classId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !v188 )
    goto LABEL_162;
  bannerId = v188->fields.bannerId;
  v190 = this->fields.servantEntity;
  this->fields.priority = bannerId;
  this->fields.sortValue1B = bannerId;
  if ( !v190 )
    goto LABEL_162;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v191 = (unsigned int)this->fields.rarity;
  collectionNo = v190->fields.collectionNo;
  lv = (*p_userServantEntity)->fields.lv;
  IsServantMaterialTd = ServantEntity__get_IsServantMaterialTd(v190, 0LL);
  v195 = this->fields.userServantEntity;
  this->fields.sortValue2 = (collectionNo << 16) | (v191 << 48) | (2 * lv) | IsServantMaterialTd;
  if ( !v195 )
    goto LABEL_162;
  v197 = *(_QWORD *)&v195->fields.svtId.fields.currentCryptoKey;
  v196 = *(_QWORD *)&v195->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v211.fields.currentCryptoKey = v197;
  *(_QWORD *)&v211.fields.fakeValue = v196;
  v198 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v211, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v198;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), !*p_iconLabelInfo2) )
LABEL_162:
    sub_B170D4();
  IconLabelInfo__Clear(*p_iconLabelInfo2, 0LL);
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
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v7; // x2

  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
    return 1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_B170D4();
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v7);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v7);
}


bool __fastcall WarehouseListViewItem__IsMatchServantEquipFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantEquipTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  ListViewSort_FilterKind_array *v14; // x0
  __int64 v15; // x2

  if ( (byte_40FA997 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FA997 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v7->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_25;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          RarityFilterKindList,
                                          (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_25;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  ServantEquipTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v10->static_fields->ServantEquipTypeFilterKindList;
  if ( !ServantEquipTypeFilterKindList )
LABEL_25:
    sub_B170D4();
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantEquipTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v14 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v13);
  if ( !v14 )
    goto LABEL_25;
  if ( !v14->max_length )
  {
    sub_B17100(v14, v14, v15);
    sub_B170A0();
  }
  v14->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


bool __fastcall WarehouseListViewItem__IsMatchServantFilter(
        WarehouseListViewItem_o *this,
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
  FilterKindList_c *v20; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *ServantTypeFilterKindList; // x0
  ListViewSort_FilterKind_array *v22; // x0
  UserServantEntity_o *userServantEntity; // x21
  __int64 v24; // x2
  ListViewSort_FilterKind_array *v25; // x0
  __int64 v26; // x2
  ListViewSort_FilterKind_array *v27; // x1
  FilterKindList_c *v28; // x0
  System_Collections_Generic_List_Voice_BATTLE__o *RarityFilterKindList; // x0
  ListViewSort_FilterKind_array *v30; // x21
  UserServantEntity_o *v32; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v34; // x0
  int32_t v35; // w0
  UserServantEntity_o *v36; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UserServantEntity_o *v44; // x0
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  __int64 v53; // x2
  _BOOL4 v54; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v56; // w0

  if ( (byte_40FA996 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_B16FFC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_40FA996 = 1;
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
    goto LABEL_72;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
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
      goto LABEL_72;
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
    goto LABEL_72;
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
    goto LABEL_72;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           NpEffectFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v20 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  ServantTypeFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v20->static_fields->ServantTypeFilterKindList;
  if ( !ServantTypeFilterKindList )
LABEL_72:
    sub_B170D4();
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           ServantTypeFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0LL) )
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
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v32 = this->fields.userServantEntity;
    if ( v32 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v32, 0, 0LL) )
      {
        v34 = this->fields.userServantEntity;
        if ( !v34 )
          goto LABEL_72;
        v35 = UserServantEntity__getDispLimitCount(v34, 0, 0LL);
        v36 = this->fields.userServantEntity;
        this->fields.dispLimitCount = v35;
        if ( !v36 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v36, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        v44 = this->fields.userServantEntity;
        if ( !v44 )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(v44, 0, 0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
    }
    v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v24);
    if ( !v25 )
      goto LABEL_72;
    v27 = v25;
    if ( !v25->max_length )
      goto LABEL_73;
    v25->m_Items[1] = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL);
    v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v53);
    if ( !v25 )
      goto LABEL_72;
    v27 = v25;
    if ( !v25->max_length )
    {
LABEL_73:
      sub_B17100(v25, v27, v26);
      sub_B170A0();
    }
    v25->m_Items[1] = 51;
    v54 = ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v56 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v54) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v56 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v56 )
    {
      return 0;
    }
  }
  v25 = (ListViewSort_FilterKind_array *)sub_B17014(ListViewSort_FilterKind___TypeInfo, 1LL, v24);
  if ( !v25 )
    goto LABEL_72;
  v27 = v25;
  if ( !v25->max_length )
    goto LABEL_73;
  v25->m_Items[1] = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v28 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v28 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)v28->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_72;
  v30 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v30, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v30, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


void __fastcall WarehouseListViewItem__Modify(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x20
  UserServantEntity_o *v10; // x0
  bool IsLock; // w0
  UserServantEntity_o *v12; // x8
  bool IsChoice; // w0

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
  v10 = *p_userServantEntity;
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = 0LL;
  if ( !v10
    || (IsLock = UserServantEntity__IsLock(v10, 0LL),
        v12 = this->fields.userServantEntity,
        this->fields.isLock = IsLock,
        !v12) )
  {
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x19

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
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = 0LL;
}


void __fastcall WarehouseListViewItem__Modify_26443496(
        WarehouseListViewItem_o *this,
        bool isFavorite,
        bool isPush,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  bool IsLock; // w0
  UserServantEntity_o *v7; // x8
  bool IsChoice; // w0

  userServantEntity = this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.isPush = isPush;
  if ( !userServantEntity
    || (IsLock = UserServantEntity__IsLock(userServantEntity, 0LL),
        v7 = this->fields.userServantEntity,
        this->fields.isLock = IsLock,
        !v7) )
  {
    sub_B170D4();
  }
  IsChoice = UserServantEntity__IsChoice(v7, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


bool __fastcall WarehouseListViewItem__SetSortValue(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
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
  int64_t *p_sortValue0; // x23
  int64_t priority; // x8
  struct EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t v23; // w5
  int32_t bonusKind2; // w8
  int32_t *v25; // x8
  int32_t bonusKindId; // w9
  int32_t *p_bonusKindId; // x8
  int32_t bonusKind2Id; // w10
  int32_t *v29; // x9
  int32_t *p_bonusKind2Id; // x8
  System_Int32_array *v31; // x21
  WebViewManager_o *v32; // x0
  EventBonusFilterMaster_o *v33; // x0
  System_Int32_array *OtherEventEquipIdList; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Func_int__bool__o *v39; // x0
  __int64 *v40; // x8
  WebViewManager_o *v41; // x0
  WarQuestSelectionMaster_o *v42; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v44; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // kr00_16
  bool IsEnableServant; // w0
  System_Int32_array *eventIdList; // x21
  WebViewManager_o *Instance; // x0
  EventBonusFilterMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Func_T__bool__o *v54; // x22
  UserServantEntity_o *userServantEntity; // x0
  IconLabelInfo_o *iconLabelInfo2; // x0
  int v57; // w21
  const MethodInfo *v58; // x2
  ServantEntity_o *servantEntity; // x0
  bool result; // w0
  __int64 v61; // x8
  struct UserServantEntity_o *v62; // x8
  __int128 v63; // q1
  int64_t v64; // x0
  struct UserServantEntity_o *v65; // x8
  IconLabelInfo_o *iconLabelInfo1; // x0
  struct UserServantEntity_o *v67; // x0
  IconLabelInfo_o *v68; // x20
  int32_t lv; // w21
  int32_t LevelMax; // w0
  UserServantEntity_o *v71; // x0
  bool IsMaterialTd; // w8
  int64_t friendship; // x2
  IconLabelInfo_o *v74; // x0
  int32_t friendshipMax; // w3
  int32_t v76; // w1
  struct UserServantEntity_o *v77; // x8
  IconLabelInfo_o *v78; // x0
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v81; // w1
  __int64 v82; // x20
  __int64 v83; // x20
  DataManager_o *v84; // x0
  EventBonusFilterMaster_o *v85; // x0
  System_Int32_array *EventIdListBySvtId; // x0
  System_Int32_array *v87; // x20
  __int64 v88; // x21
  __int64 v89; // x21
  DataManager_o *v90; // x0
  EventGroupMaster_o *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  int32_t FirstOpenEventId; // w20
  __int64 v95; // x21
  __int64 v96; // x21
  DataManager_o *v97; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v98; // x0
  int64_t targetId; // x8
  struct UserServantEntity_o *v100; // x8
  struct UserServantEntity_o *v101; // x0
  IconLabelInfo_o *v102; // x19
  UserServantEntity_o *v103; // x0
  int64_t rarity; // x8
  struct ServantEntity_o *v105; // x8
  IconLabelInfo_o *v106; // x0
  int64_t amountSortValue; // x0
  struct ListViewManager_o *manager; // x0
  __int64 v109; // x10
  struct ServantEntity_o *v110; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v112; // x8
  int32_t v113; // w20
  struct UserServantEntity_o *v114; // x0
  IconLabelInfo_o *v115; // x20
  int32_t v116; // w21
  int32_t v117; // w0
  ServantEntity_o *v118; // x0
  ServantEntity_o *v119; // x0
  ServantEntity_o *v120; // x0
  IconLabelInfo_o *v121; // x0
  IconLabelInfo_o *v122; // x0
  int32_t v123; // w0
  UserServantEntity_o *v124; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+58h] [xbp-38h] BYREF
  int32_t tdMaxLv[2]; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_40FA995 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, sort);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventGroupMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFilterMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_WarehouseListViewItem__SetSortValue_b__61_0__, v16);
    sub_B16FFC(&Method_WarehouseListViewItem__SetSortValue_b__61_1__, v17);
    sub_B16FFC(&WarehouseListViewManager_TypeInfo, v18);
    byte_40FA995 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  entity = 0LL;
  this->fields.sortValue0 = 0LL;
  p_sortValue0 = &this->fields.sortValue0;
  priority = this->fields.priority;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1LL;
  this->fields.sortValue1B = priority;
  this->fields.isNeedAdjustIconLabelScale = 0;
  if ( !sort )
    goto LABEL_172;
  if ( !sort->fields.isBonusKind )
    goto LABEL_53;
  setupInfo = this->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_172;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = sort->fields.bonusKind2;
    if ( bonusKind2 == 4 )
    {
      if ( this->fields.bonusKind == 4 )
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        p_bonusKind2Id = &sort->fields.bonusKind2Id;
      }
      this->fields.bonusKind = 4;
      this->fields.bonusKindId = *p_bonusKind2Id;
      eventIdList = setupInfo->fields.eventIdList;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      MasterData_WarQuestSelectionMaster = (EventBonusFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                MasterData_WarQuestSelectionMaster,
                                eventIdList,
                                0LL);
      v39 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v50, v51, v52, v53);
      v40 = &Method_WarehouseListViewItem__SetSortValue_b__61_1__;
      goto LABEL_47;
    }
    if ( bonusKind2 != 2 )
    {
      if ( bonusKind2 != 1 )
        goto LABEL_53;
      if ( this->fields.bonusKind == 1 )
      {
        v25 = &sort->fields.bonusKind2Id;
        if ( this->fields.bonusKindId == sort->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        v25 = &sort->fields.bonusKind2Id;
      }
      this->fields.bonusKind = 1;
      v23 = *v25;
      goto LABEL_50;
    }
    if ( this->fields.bonusKind == 2 )
    {
      bonusKindId = this->fields.bonusKindId;
      p_bonusKindId = &sort->fields.bonusKind2Id;
      bonusKind2Id = sort->fields.bonusKind2Id;
LABEL_26:
      if ( bonusKindId == bonusKind2Id )
        goto LABEL_30;
      goto LABEL_37;
    }
    p_bonusKindId = &sort->fields.bonusKind2Id;
LABEL_37:
    this->fields.bonusKind = 2;
    this->fields.bonusKindId = *p_bonusKindId;
    v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v41 )
    {
      v42 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v41,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = this->fields.svtId;
      v44 = (ServantFilterMaster_o *)v42;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      if ( v44 )
      {
        IsEnableServant = ServantFilterMaster__IsEnableServant(v44, v45, this->fields.bonusKindId, 0LL);
        goto LABEL_52;
      }
    }
LABEL_172:
    sub_B170D4();
  }
  bonusKind = sort->fields.bonusKind;
  if ( bonusKind == 2 )
  {
    if ( this->fields.bonusKind == 2 )
    {
      bonusKindId = this->fields.bonusKindId;
      p_bonusKindId = &sort->fields.bonusKindId;
      bonusKind2Id = sort->fields.bonusKindId;
      goto LABEL_26;
    }
    p_bonusKindId = &sort->fields.bonusKindId;
    goto LABEL_37;
  }
  if ( bonusKind != 1 )
  {
    if ( sort->fields.bonusKind2 != 4 )
      goto LABEL_53;
    if ( this->fields.bonusKind != bonusKind )
    {
      v29 = &sort->fields.bonusKindId;
      goto LABEL_33;
    }
    v29 = &sort->fields.bonusKindId;
    if ( this->fields.bonusKindId != sort->fields.bonusKindId )
    {
LABEL_33:
      this->fields.bonusKind = bonusKind;
      this->fields.bonusKindId = *v29;
      v31 = setupInfo->fields.eventIdList;
      v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v32 )
        goto LABEL_172;
      v33 = (EventBonusFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v32,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !v33 )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(v33, v31, 0LL);
      v39 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v35, v36, v37, v38);
      v40 = &Method_WarehouseListViewItem__SetSortValue_b__61_0__;
LABEL_47:
      v54 = (System_Func_T__bool__o *)v39;
      System_Func_int__bool____ctor(
        v39,
        (Il2CppObject *)this,
        *v40,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      IsEnableServant = BasicHelper__Any_int__25910576(
                          OtherEventEquipIdList,
                          v54,
                          (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
      goto LABEL_52;
    }
LABEL_30:
    if ( !this->fields.isEventUpVal )
      return 0;
    goto LABEL_53;
  }
  if ( this->fields.bonusKind == 1 )
    goto LABEL_30;
  this->fields.bonusKind = 1;
  v23 = sort->fields.bonusKindId;
LABEL_50:
  userServantEntity = this->fields.userServantEntity;
  this->fields.bonusKindId = v23;
  if ( !userServantEntity )
    goto LABEL_172;
  IsEnableServant = UserServantEntity__getEventUpVal_21445868(userServantEntity, -1, 0, 0, setupInfo, v23, 0, 0LL);
LABEL_52:
  this->fields.isEventUpVal = IsEnableServant;
  if ( !IsEnableServant )
    return 0;
LABEL_53:
  if ( (((__int64 (__fastcall *)(WarehouseListViewItem_o *, ListViewSort_o *, void *))this->klass->vtable._5_IsMatchFilter.method)(
          this,
          sort,
          this->klass[1]._1.image) & 1) == 0 )
    return 0;
  iconLabelInfo2 = this->fields.iconLabelInfo2;
  if ( !iconLabelInfo2 )
    goto LABEL_172;
  v57 = this->fields.isSwapChoice ^ this->fields.isChoice;
  IconLabelInfo__Clear(iconLabelInfo2, 0LL);
  *p_sortValue0 = 0LL;
  this->fields.sortValue0B = 0LL;
  if ( !sort->fields.isSmartSort )
  {
    if ( !((v57 ^ 1) & 1 | !sort->fields.isChoiceSort) )
      *p_sortValue0 = -10LL;
    goto LABEL_71;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_172;
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
  {
    if ( !this->fields.isPartyEquip )
    {
      if ( !this->fields.isUseSupportEquip )
        goto LABEL_69;
      goto LABEL_67;
    }
LABEL_65:
    v61 = -20LL;
LABEL_68:
    *p_sortValue0 = v61;
    goto LABEL_69;
  }
  if ( (this->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_65;
  if ( this->fields.isUseSupport )
  {
LABEL_67:
    v61 = -30LL;
    goto LABEL_68;
  }
  if ( this->fields.attribute )
  {
    v61 = -40LL;
    goto LABEL_68;
  }
  if ( this->fields.isFavorite )
  {
    v61 = -50LL;
    goto LABEL_68;
  }
  if ( this->fields.isPush )
  {
    v61 = -55LL;
    goto LABEL_68;
  }
  v124 = this->fields.userServantEntity;
  if ( v124 && UserServantEntity__IsProtectedEventServant(v124, 0LL) || this->fields.isFortification )
  {
    v61 = -10LL;
    goto LABEL_68;
  }
LABEL_69:
  if ( !((v57 ^ 1) & 1 | !sort->fields.isChoiceSort) )
    *(_OWORD *)p_sortValue0 = xmmword_3136A00;
LABEL_71:
  result = 1;
  switch ( sort->fields.sortKind )
  {
    case 1:
      v62 = this->fields.userServantEntity;
      if ( !v62 )
        goto LABEL_172;
      v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
      *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v126.fields.fakeValue = v63;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v125 = v126;
      v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v125, 0LL);
      v65 = this->fields.userServantEntity;
      this->fields.sortValue1 = v64;
      if ( !v65 )
        goto LABEL_172;
      iconLabelInfo1 = this->fields.iconLabelInfo1;
      if ( !iconLabelInfo1 )
        goto LABEL_172;
      IconLabelInfo__SetTime(iconLabelInfo1, 49, v65->fields.createdAt, 0, 0, 0, 0LL);
      v67 = this->fields.userServantEntity;
      if ( !v67 )
        goto LABEL_172;
      v68 = this->fields.iconLabelInfo2;
      lv = v67->fields.lv;
      LevelMax = UserServantEntity__getLevelMax(v67, 0LL);
      if ( !v68 )
        goto LABEL_172;
      IconLabelInfo__Set_28888132(v68, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
      v71 = this->fields.userServantEntity;
      if ( !v71 )
        goto LABEL_172;
      IsMaterialTd = UserServantEntity__IsMaterialTd(v71, 0LL);
      result = 1;
      if ( IsMaterialTd )
        this->fields.isNeedAdjustIconLabelScale = 1;
      return result;
    case 2:
      rarity = this->fields.rarity;
      v101 = this->fields.userServantEntity;
      goto LABEL_129;
    case 3:
      v101 = this->fields.userServantEntity;
      if ( !v101 )
        goto LABEL_172;
      this->fields.sortValue1 = v101->fields.lv;
      goto LABEL_158;
    case 4:
      v103 = this->fields.userServantEntity;
      if ( !v103 )
        goto LABEL_172;
      UserServantEntity__getTreasureDeviceInfo_21453148(v103, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      v74 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = tdMaxLv[1];
      if ( !v74 )
        goto LABEL_172;
      friendshipMax = tdMaxLv[0];
      v76 = 33;
      goto LABEL_141;
    case 5:
      v77 = this->fields.userServantEntity;
      if ( !v77 )
        goto LABEL_172;
      v78 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v77->fields.hp;
      if ( !v78 )
        goto LABEL_172;
      adjustHp = v77->fields.adjustHp;
      hp = v77->fields.hp;
      v81 = 3;
      goto LABEL_115;
    case 6:
      v100 = this->fields.userServantEntity;
      if ( !v100 )
        goto LABEL_172;
      v78 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v100->fields.atk;
      if ( !v78 )
        goto LABEL_172;
      adjustHp = v100->fields.adjustAtk;
      hp = v100->fields.atk;
      v81 = 5;
LABEL_115:
      IconLabelInfo__Set_28888132(v78, v81, hp, adjustHp, 0, 0, 0, 0, 0LL);
      v101 = this->fields.userServantEntity;
      if ( !v101 )
        goto LABEL_172;
      v102 = this->fields.iconLabelInfo2;
      goto LABEL_159;
    case 7:
      v105 = this->fields.servantEntity;
      if ( !v105 )
        goto LABEL_172;
      v106 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = v105->fields.cost;
      if ( !v106 )
        goto LABEL_172;
      IconLabelInfo__Set_28888132(v106, 7, v105->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_142;
    case 8:
      v101 = this->fields.userServantEntity;
      rarity = -this->fields.priority;
LABEL_129:
      this->fields.sortValue1 = rarity;
      if ( !v101 )
        goto LABEL_172;
      goto LABEL_158;
    case 0xA:
      friendship = this->fields.friendship;
      v74 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v74 )
        goto LABEL_172;
      friendshipMax = this->fields.friendshipMax;
      v76 = 32;
      goto LABEL_141;
    case 0xE:
      amountSortValue = this->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_136;
      manager = sort->fields.manager;
      if ( !manager )
        goto LABEL_172;
      v109 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v109
        || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v109 - 1] != WarehouseListViewManager_TypeInfo )
      {
        goto LABEL_172;
      }
      amountSortValue = WarehouseListViewManager__GetAmountSortValue(
                          (WarehouseListViewManager_o *)manager,
                          this->fields.svtId,
                          v58);
      this->fields.amountSortValue = amountSortValue;
LABEL_136:
      v110 = this->fields.servantEntity;
      if ( !v110 )
        goto LABEL_172;
      collectionNo = v110->fields.collectionNo;
      v112 = this->fields.userServantEntity;
      this->fields.sortValue1 = (((unsigned __int64)(unsigned int)this->fields.rarity << 32) + (amountSortValue << 48)) | collectionNo;
      if ( !v112 )
        goto LABEL_172;
      v102 = this->fields.iconLabelInfo1;
      v113 = v112->fields.lv;
      v101 = v112;
      goto LABEL_160;
    case 0xF:
      friendship = this->fields.hpReinforceValue;
      v74 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v74 )
        goto LABEL_172;
      friendshipMax = this->fields.nowMaxHpReinforceValue;
      v76 = 44;
      goto LABEL_141;
    case 0x10:
      friendship = this->fields.atkReinforceValue;
      v74 = this->fields.iconLabelInfo1;
      this->fields.sortValue1 = friendship;
      if ( !v74 )
        goto LABEL_172;
      friendshipMax = this->fields.nowMaxAtkReinforceValue;
      v76 = 45;
LABEL_141:
      IconLabelInfo__Set_28888132(v74, v76, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_142:
      v114 = this->fields.userServantEntity;
      if ( !v114 )
        goto LABEL_172;
      v115 = this->fields.iconLabelInfo2;
      v116 = v114->fields.lv;
      v117 = UserServantEntity__getLevelMax(v114, 0LL);
      if ( !v115 )
        goto LABEL_172;
      IconLabelInfo__Set_28888132(v115, 2, v116, v117, 0, 0, 0, 0, 0LL);
      v118 = this->fields.servantEntity;
      if ( !v118 )
        goto LABEL_172;
      if ( ServantEntity__get_IsExpUp(v118, 0LL) )
        goto LABEL_150;
      v119 = this->fields.servantEntity;
      if ( !v119 )
        goto LABEL_172;
      if ( ServantEntity__get_IsStatusUp(v119, 0LL) )
        goto LABEL_150;
      v120 = this->fields.servantEntity;
      if ( !v120 )
        goto LABEL_172;
      if ( !ServantEntity__get_IsServantMaterialTd(v120, 0LL) )
        return 1;
LABEL_150:
      v121 = this->fields.iconLabelInfo1;
      if ( !v121 )
        goto LABEL_172;
      IconLabelInfo__Clear(v121, 0LL);
      v122 = this->fields.iconLabelInfo2;
      if ( !v122 )
        goto LABEL_172;
      IconLabelInfo__Clear(v122, 0LL);
      return 1;
    case 0x18:
      v82 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v82 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v83 = **(_QWORD **)(v82 + 192);
      if ( (*(_BYTE *)(v83 + 306) & 1) == 0 )
        sub_AAFCFC(v83);
      v84 = **(DataManager_o ***)(v83 + 184);
      if ( !v84 )
        goto LABEL_172;
      v85 = (EventBonusFilterMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          v84,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !v85 )
        goto LABEL_172;
      EventIdListBySvtId = EventBonusFilterMaster__GetEventIdListBySvtId(v85, this->fields.svtId, 0LL);
      if ( !EventIdListBySvtId )
        goto LABEL_172;
      v87 = EventIdListBySvtId;
      if ( !*(_QWORD *)&EventIdListBySvtId->max_length )
      {
        targetId = 0x7FFFFFFFFFFFFFFFLL;
LABEL_156:
        this->fields.sortValue1 = targetId;
        goto LABEL_157;
      }
      v88 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v89 = **(_QWORD **)(v88 + 192);
      if ( (*(_BYTE *)(v89 + 306) & 1) == 0 )
        sub_AAFCFC(v89);
      v90 = **(DataManager_o ***)(v89 + 184);
      if ( !v90 )
        goto LABEL_172;
      v91 = (EventGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    v90,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v87->max_length )
      {
        sub_B17100(v91, v92, v93);
        sub_B170A0();
      }
      if ( !v91 )
        goto LABEL_172;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId(v91, v87->m_Items[1], 0LL);
      v95 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v95 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v96 = **(_QWORD **)(v95 + 192);
      if ( (*(_BYTE *)(v96 + 306) & 1) == 0 )
        sub_AAFCFC(v96);
      v97 = **(DataManager_o ***)(v96 + 184);
      if ( !v97 )
        goto LABEL_172;
      v98 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v97,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !v98 )
        goto LABEL_172;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v98,
             &entity,
             FirstOpenEventId,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          goto LABEL_172;
        targetId = entity->fields.targetId;
        goto LABEL_156;
      }
LABEL_157:
      v101 = this->fields.userServantEntity;
      this->fields.sortValue1B = this->fields.svtId;
      if ( !v101 )
        goto LABEL_172;
LABEL_158:
      v102 = this->fields.iconLabelInfo1;
LABEL_159:
      v113 = v101->fields.lv;
LABEL_160:
      v123 = UserServantEntity__getLevelMax(v101, 0LL);
      if ( !v102 )
        goto LABEL_172;
      IconLabelInfo__Set_28888132(v102, 2, v113, v123, 0, 0, 0, 0, 0LL);
      return 1;
    default:
      return result;
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


bool __fastcall WarehouseListViewItem___SetSortValue_b__61_0(
        WarehouseListViewItem_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__61_1(
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
  if ( (byte_40FA99A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FA99A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall WarehouseListViewItem__get_IsCanNotSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  if ( this->fields.isFavorite
    || (this->fields.partyIndex & 0x80000000) == 0
    || this->fields.isPartyEquip
    || this->fields.attribute
    || this->fields.isUseSupport
    || this->fields.isUseSupportEquip
    || this->fields.isFatigueRecovery
    || this->fields.isFortification
    || this->fields.isPush )
  {
    LOBYTE(userServantEntity) = 1;
  }
  else
  {
    userServantEntity = this->fields.userServantEntity;
    if ( userServantEntity )
      LOBYTE(userServantEntity) = UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL);
  }
  return (char)userServantEntity;
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
  return this->fields.isSwapChoice ^ this->fields.isChoice;
}


bool __fastcall WarehouseListViewItem__get_IsDispLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock ^ this->fields.isLock;
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
    sub_B170D4();
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
  if ( userServantEntity )
    LOBYTE(userServantEntity) = UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL);
  return (char)userServantEntity;
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
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40FA999 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18326/*"error"*/, v3);
    byte_40FA999 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18326/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40FA998 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FA998 = 1;
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


void __fastcall WarehouseListViewItem__set_DragSelectNum(
        WarehouseListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void __fastcall WarehouseListViewItem__set_IsDragSelect(
        WarehouseListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  if ( !this )
    sub_B170D4();
  this->fields.dragSelectNum = ~value << 31 >> 31;
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