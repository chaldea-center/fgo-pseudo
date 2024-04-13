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
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  IconLabelInfo_o *v70; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  IconLabelInfo_o *v77; // x28
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  int64_t Instance; // x0
  __int64 v98; // x1
  struct UserServantEntity_o *v99; // x8
  __int64 v100; // x26
  __int64 v101; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  struct UserServantEntity_o *v110; // x8
  ServantLimitMaster_o *v111; // x27
  int32_t svtId; // w28
  int32_t v113; // w8
  struct UserServantEntity_o *v114; // x8
  __int128 v115; // q1
  __int64 v116; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t v118; // w8
  UserServantEntity_o *v119; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v121; // x8
  UserServantEntity_o *v122; // x8
  struct UserServantEntity_o *v123; // x8
  __int128 v124; // q0
  UserServantCollectionMaster_o *v125; // x23
  struct UserServantEntity_o *v126; // x8
  int64_t v127; // x26
  __int64 v128; // x27
  __int64 v129; // x28
  struct UserServantEntity_o *v130; // x8
  __int128 v131; // q0
  int64_t v132; // x23
  signed int max_length; // w8
  unsigned int v134; // w9
  signed int v135; // w8
  unsigned int v136; // w9
  __int64 v137; // x1
  __int64 v138; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v141; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v144; // x8
  unsigned __int64 v145; // x10
  int32_t *v146; // x11
  __int64 v147; // x0
  _QWORD *v148; // x0
  __int64 v149; // x1
  __int64 v150; // x9
  __int64 v151; // x8
  __int128 v152; // q0
  System_Collections_Generic_IEnumerator_T__c *v153; // x8
  unsigned __int64 v154; // x10
  int32_t *v155; // x11
  __int64 v156; // x0
  __int64 v157; // x1
  __int64 v158; // x3
  System_Collections_Generic_IEnumerator_T__o *v159; // x24
  System_Collections_Generic_IEnumerator_T__c *v160; // x8
  unsigned __int64 v161; // x10
  int32_t *v162; // x11
  __int64 v163; // x0
  System_Collections_Generic_IEnumerator_T__c *v164; // x8
  unsigned __int64 v165; // x10
  int32_t *v166; // x11
  __int64 v167; // x0
  _QWORD *v168; // x0
  __int64 v169; // x1
  __int64 v170; // x9
  System_Collections_Generic_IEnumerator_T__c *v171; // x8
  unsigned __int64 v172; // x10
  int32_t *v173; // x11
  __int64 v174; // x0
  int v175; // w24
  BalanceConfig_c *v176; // x8
  UserServantEntity_o *v177; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  struct System_Int32_array *EquipCategoryIdList; // x1
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  __int64 v193; // x8
  int64_t v194; // x24
  unsigned __int64 v195; // x25
  __int64 v196; // x8
  __int128 v197; // q0
  const MethodInfo *v198; // x1
  signed int v199; // w8
  __int64 v200; // x9
  int64_t UserSvtId; // x0
  int64_t v202; // x8
  __int64 rarity; // x20
  __int64 v204; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v206; // x8
  __int64 v207; // x21
  __int64 v208; // x22
  IconLabelInfo_o *iconLabelInfo1; // x8
  __int64 v210; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-138h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v213; // [xsp+10h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v214; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v215; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v216; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v217; // [xsp+90h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v218; // [xsp+B0h] [xbp-90h]
  int v219; // [xsp+D0h] [xbp-70h]
  int v220; // [xsp+E0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16

  if ( (byte_42E93DB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, index, (_DWORD)userServantEntity, setupinfo);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantLeaderMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantStorageMaster___, v34, v35, v36);
    sub_B5D5C4(&DataManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v40, v41, v42);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v43, v44, v45);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v49, v50, v51);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v64, v65, v66);
    sub_B5D5C4(&UserServantLeaderEntity_TypeInfo, v67, v68, v69);
    byte_42E93DB = 1;
  }
  v220 = 0;
  v70 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v70, 0LL);
  this->fields.iconLabelInfo1 = v70;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v77, 0LL);
  this->fields.iconLabelInfo2 = v77;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this->fields.setupInfo = setupinfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupinfo,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v99 = this->fields.userServantEntity;
  if ( !v99 )
    goto LABEL_178;
  v101 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
  v100 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v221.fields.currentCryptoKey = v101;
  *(_QWORD *)&v221.fields.fakeValue = v100;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v221, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_178;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.svtId,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v110 = this->fields.userServantEntity;
  if ( !v110 )
    goto LABEL_178;
  v111 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v110->fields.limitCount, 0LL);
  if ( !v111 )
    goto LABEL_178;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v111, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_178;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_178;
  v113 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v113;
  if ( !Instance )
    goto LABEL_178;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_178;
  v114 = *p_userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v115 = *(_OWORD *)&v114->fields.id.fields.fakeValue;
  v116 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v218.fields.currentCryptoKey = *(_OWORD *)&v114->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v218.fields.fakeValue = v115;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v217 = v218;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v217, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isPush = v116 == Instance;
  this->fields.isEnabled = 1;
  if ( !servantEntity )
    goto LABEL_178;
  if ( servantEntity->fields.type == 2 )
  {
    v118 = 1;
LABEL_26:
    this->fields.attribute = v118;
    goto LABEL_28;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL) )
  {
    v118 = 2;
    goto LABEL_26;
  }
  this->fields.attribute = 0;
LABEL_28:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v119 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v119 )
    goto LABEL_178;
  IsChoice = UserServantEntity__IsChoice(v119, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v121 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v121 )
    goto LABEL_178;
  Instance = UserServantEntity__IsChocolateSvtEquip(v121, 0LL);
  v122 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v122 )
    goto LABEL_178;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v122, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v123 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v124 = *(_OWORD *)&v123->fields.userId.fields.fakeValue;
  v125 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v218.fields.currentCryptoKey = *(_OWORD *)&v123->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v218.fields.fakeValue = v124;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v216 = v218;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v216, 0LL);
  v126 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v127 = Instance;
  v129 = *(_QWORD *)&v126->fields.svtId.fields.currentCryptoKey;
  v128 = *(_QWORD *)&v126->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v222.fields.currentCryptoKey = v129;
  *(_QWORD *)&v222.fields.fakeValue = v128;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v222, 0LL);
  if ( !v125 )
    goto LABEL_178;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v125, v127, Instance, 0LL);
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v130 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v130 )
    goto LABEL_178;
  v131 = *(_OWORD *)&v130->fields.id.fields.fakeValue;
  *(_OWORD *)&v215.fields.currentCryptoKey = *(_OWORD *)&v130->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v215.fields.fakeValue = v131;
  v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v215, 0LL);
  Instance = (int64_t)this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0LL;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0LL;
  if ( !Instance )
    goto LABEL_178;
  Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !partyUserEquipList )
      goto LABEL_178;
    max_length = partyUserEquipList->max_length;
    if ( max_length >= 1 )
    {
      v134 = 0;
      while ( 1 )
      {
        if ( v134 >= max_length )
          goto LABEL_179;
        if ( v132 == partyUserEquipList->m_Items[v134] )
          break;
        if ( (int)++v134 >= max_length )
          goto LABEL_62;
      }
      this->fields.partyIndex = v134;
      this->fields.isPartyEquip = 1;
      this->fields.isUse = 1;
    }
LABEL_62:
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_178;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_178;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_178;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B5D69C(0LL, v137);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v141 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v141;
          p_offset += 4;
          if ( v141 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_70:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v138);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_88;
      v144 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v145 = 0LL;
        v146 = &v144->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v146 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v145;
          v146 += 4;
          if ( v145 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_77;
        }
        v147 = (__int64)&v144->vtable[*v146].method;
      }
      else
      {
LABEL_77:
        v147 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v138);
      }
      v148 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v147)(
                         Enumerator,
                         *(_QWORD *)(v147 + 8));
      if ( !v148 )
        goto LABEL_182;
      v150 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v148 + 300LL) < (unsigned int)v150
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v148 + 200LL) + 8 * v150 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      v151 = v148[4];
      if ( v151 )
      {
        v152 = *(_OWORD *)(v151 + 40);
        *(_OWORD *)&v218.fields.currentCryptoKey = *(_OWORD *)(v151 + 24);
        *(_OWORD *)&v218.fields.fakeValue = v152;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v214 = v218;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v214, 0LL) == v132 )
        {
          this->fields.isUseSupportEquip = 1;
LABEL_88:
          v219 = 731;
          v220 = 1;
          v153 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v154 = 0LL;
            v155 = &v153->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v155 - 1) != System_IDisposable_TypeInfo )
            {
              ++v154;
              v155 += 4;
              if ( v154 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_93;
            }
            v156 = (__int64)&v153->vtable[*v155].method;
          }
          else
          {
LABEL_93:
            v156 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v138);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v156)(
            Enumerator,
            *(_QWORD *)(v156 + 8));
          if ( v219 == 731 )
            v220 = 0;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantStorageMaster___);
          if ( Instance )
          {
            Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
            if ( Instance )
            {
              v193 = *(_QWORD *)(Instance + 24);
              v194 = Instance;
              if ( (int)v193 >= 1 )
              {
                v195 = 0LL;
                while ( 1 )
                {
                  if ( v195 >= (unsigned int)v193 )
                    goto LABEL_179;
                  v196 = *(_QWORD *)(v194 + 32 + 8 * v195);
                  if ( v196 )
                  {
                    v197 = *(_OWORD *)(v196 + 32);
                    *(_OWORD *)&v218.fields.currentCryptoKey = *(_OWORD *)(v196 + 16);
                    *(_OWORD *)&v218.fields.fakeValue = v197;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v213 = v218;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v213, 0LL);
                    if ( Instance == v132 )
                      break;
                  }
                  LODWORD(v193) = *(_DWORD *)(v194 + 24);
                  if ( (__int64)++v195 >= (int)v193 )
                    goto LABEL_156;
                }
                this->fields.isWarehouseServantEquip = 1;
              }
LABEL_156:
              Instance = (int64_t)*p_userServantEntity;
              if ( *p_userServantEntity )
              {
                EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList((UserServantEntity_o *)Instance, 1, 0LL);
                p_equipCategoryIdList = &this->fields.equipCategoryIdList;
                this->fields.equipCategoryIdList = EquipCategoryIdList;
                goto LABEL_158;
              }
            }
          }
          goto LABEL_178;
        }
      }
    }
    v168 = (_QWORD *)sub_B5D990(v148);
LABEL_181:
    v148 = (_QWORD *)sub_B5D990(v168);
LABEL_182:
    sub_B5D69C(v148, v149);
  }
  if ( !partyUserServantList )
    goto LABEL_178;
  v135 = partyUserServantList->max_length;
  if ( v135 >= 1 )
  {
    v136 = 0;
    while ( 1 )
    {
      if ( v136 >= v135 )
      {
LABEL_179:
        v210 = sub_B5D6C8(Instance);
        sub_B5D668(v210, 0LL);
      }
      if ( v132 == partyUserServantList->m_Items[v136] )
        break;
      if ( (int)++v136 >= v135 )
        goto LABEL_95;
    }
    this->fields.partyIndex = v136;
  }
LABEL_95:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_178;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_178;
  v159 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v159 )
    sub_B5D69C(0LL, v157);
  while ( 1 )
  {
    v160 = v159->klass;
    if ( *(_WORD *)&v159->klass->_2.bitflags1 )
    {
      v161 = 0LL;
      v162 = &v160->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v162 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v161;
        v162 += 4;
        if ( v161 >= *(unsigned __int16 *)&v159->klass->_2.bitflags1 )
          goto LABEL_103;
      }
      v163 = (__int64)&v160->vtable[*v162].method;
    }
    else
    {
LABEL_103:
      v163 = sub_AF54C0(v159, System_Collections_IEnumerator_TypeInfo, 0LL, v158);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v163)(
            v159,
            *(_QWORD *)(v163 + 8)) & 1) == 0 )
      break;
    v164 = v159->klass;
    if ( *(_WORD *)&v159->klass->_2.bitflags1 )
    {
      v165 = 0LL;
      v166 = &v164->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v166 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v165;
        v166 += 4;
        if ( v165 >= *(unsigned __int16 *)&v159->klass->_2.bitflags1 )
          goto LABEL_110;
      }
      v167 = (__int64)&v164->vtable[*v166].method;
    }
    else
    {
LABEL_110:
      v167 = sub_AF54C0(v159, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v158);
    }
    v168 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v167)(
                       v159,
                       *(_QWORD *)(v167 + 8));
    if ( !v168 )
      sub_B5D69C(0LL, v169);
    v170 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v168 + 300LL) < (unsigned int)v170
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v168 + 200LL) + 8 * v170 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_181;
    }
    if ( v168[7] == v132 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v219 = 933;
  v220 = 1;
  v171 = v159->klass;
  if ( *(_WORD *)&v159->klass->_2.bitflags1 )
  {
    v172 = 0LL;
    v173 = &v171->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v173 - 1) != System_IDisposable_TypeInfo )
    {
      ++v172;
      v173 += 4;
      if ( v172 >= *(unsigned __int16 *)&v159->klass->_2.bitflags1 )
        goto LABEL_122;
    }
    v174 = (__int64)&v171->vtable[*v173].method;
  }
  else
  {
LABEL_122:
    v174 = sub_AF54C0(v159, System_IDisposable_TypeInfo, 0LL, v158);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v174)(v159, *(_QWORD *)(v174 + 8));
  if ( v219 == 933 )
    v220 = 0;
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v175 = *(_DWORD *)(Instance + 276);
  v176 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v176 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v176->static_fields->StatusUpAdjustHp * v175;
  if ( !Instance )
    goto LABEL_178;
  this->fields.atkReinforceValue = v176->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v177 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v177 )
    goto LABEL_178;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v177, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_178;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_158:
  sub_B5D560(
    (BattleServantConfConponent_o *)p_equipCategoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v199 = recoverySvtList->max_length;
    if ( v199 >= 1 )
    {
      v200 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v200 >= v199 )
          goto LABEL_179;
        if ( recoverySvtList->m_Items[v200] == v132 )
          break;
        if ( (int)++v200 >= v199 )
          goto LABEL_166;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_166:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v198);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  this->fields.amountSortValue = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_178;
  v202 = *(int *)(Instance + 48);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v202;
  this->fields.sortValue1B = v202;
  if ( !Instance )
    goto LABEL_178;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  rarity = (unsigned int)this->fields.rarity;
  v204 = *(int *)(Instance + 208);
  lv = (*p_userServantEntity)->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v206 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v204 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v206 )
    goto LABEL_178;
  v208 = *(_QWORD *)&v206->fields.svtId.fields.currentCryptoKey;
  v207 = *(_QWORD *)&v206->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v223.fields.currentCryptoKey = v208;
  *(_QWORD *)&v223.fields.fakeValue = v207;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v223, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = (int)Instance;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_178:
    sub_B5D69C(Instance, v98);
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
    sub_B5D69C(0LL, v5);
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v8);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v8);
}


bool __fastcall WarehouseListViewItem__IsMatchServantEquipFilter(
        WarehouseListViewItem_o *this,
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
  FilterKindList_c *v12; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x0
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x0
  __int64 v21; // x0

  if ( (byte_42E93DE & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    byte_42E93DE = 1;
  }
  v12 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v12->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_37;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_37;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)v14->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_37;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v16->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_37;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
    && !ListViewSort__IsMatchServantEquipCombineStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
  }
  v18 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v18->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
LABEL_37:
    sub_B5D69C(RarityFilterKindList, sort);
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
    && !ListViewSort__IsMatchServantEquipHaveStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
    goto LABEL_37;
  if ( !RarityFilterKindList->max_length )
  {
    v21 = sub_B5D6C8(RarityFilterKindList);
    sub_B5D668(v21, 0LL);
  }
  RarityFilterKindList->m_Items[1] = 39;
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
      || !ListViewSort__GetFilter(sort, 39, 0LL)
      || !this->fields.isSwapChoice == this->fields.isChoice;
}


bool __fastcall WarehouseListViewItem__IsMatchServantFilter(
        WarehouseListViewItem_o *this,
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
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v26; // x0
  ListViewSort_FilterKind_array *v27; // x21
  UserServantEntity_o *v29; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v31; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v47; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v49; // w0
  __int64 v50; // x0

  if ( (byte_42E93DD & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&ListViewSort_FilterKind___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9, v10, v11);
    sub_B5D5C4(&ServantEventBonusFilterController_TypeInfo, v12, v13, v14);
    byte_42E93DD = 1;
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
    goto LABEL_72;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
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
      goto LABEL_72;
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
    goto LABEL_72;
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
    goto LABEL_72;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v23 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v23 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v23->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_72:
    sub_B5D69C(ClassGroupFilterKindList, sort);
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0LL)
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
    v29 = this->fields.userServantEntity;
    if ( v29 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v29, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v31 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v31 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v31, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
    }
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v50 = sub_B5D6C8(ClassGroupFilterKindList);
      sub_B5D668(v50, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v47 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v49 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v47) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v49 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v49 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B5D5DC(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_73;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields.isSwapChoice == this->fields.isChoice )
  {
    return 0;
  }
  v26 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v26 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v26->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v27 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v27, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v27, 0LL)
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
  __int64 v10; // x1
  UserServantEntity_o *IsLock; // x0
  UserServantEntity_o *v12; // x8
  bool IsChoice; // w0

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  IsLock = *p_userServantEntity;
  *((_BYTE *)p_userServantEntity + 144) = 0;
  p_userServantEntity[17] = 0LL;
  if ( !IsLock
    || (IsLock = (UserServantEntity_o *)UserServantEntity__IsLock(IsLock, 0LL),
        v12 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)IsLock & 1,
        !v12) )
  {
    sub_B5D69C(IsLock, v10);
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
  sub_B5D560(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItem__Modify_26324576(
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
    sub_B5D69C(userServantEntity, isFavorite);
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
  __int64 v3; // x3
  ListViewSort_o *v4; // x20
  WarehouseListViewItem_o *v5; // x19
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
  int64_t *p_sortValue0; // x23
  int64_t priority; // x8
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t v52; // w5
  int32_t bonusKind2; // w8
  int32_t *v54; // x8
  int32_t bonusKindId; // w9
  int32_t *p_bonusKindId; // x8
  int32_t bonusKind2Id; // w10
  int32_t *v58; // x9
  int32_t *p_bonusKind2Id; // x8
  System_Int32_array *v60; // x21
  System_Int32_array *OtherEventEquipIdList; // x21
  System_Func_int__bool__o *v62; // x0
  __int64 *v63; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v66; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // kr00_16
  bool IsEnableServant; // w0
  System_Int32_array *eventIdList; // x21
  System_Func_T__bool__o *v70; // x22
  int v71; // w21
  const MethodInfo *v72; // x2
  __int64 v73; // x8
  struct UserServantEntity_o *v74; // x8
  __int128 v75; // q1
  struct UserServantEntity_o *v76; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v78; // w21
  bool IsMaterialTd; // w8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v82; // w1
  struct UserServantEntity_o *v83; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v86; // w1
  __int64 v87; // x20
  __int64 v88; // x20
  WarehouseListViewItem_o *v89; // x20
  __int64 v90; // x21
  __int64 v91; // x21
  int32_t FirstOpenEventId; // w20
  __int64 v93; // x21
  __int64 v94; // x21
  int64_t targetId; // x8
  struct UserServantEntity_o *v96; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t rarity; // x8
  struct ServantEntity_o *servantEntity; // x8
  __int64 v100; // x10
  struct ServantEntity_o *v101; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v103; // x8
  int32_t lv; // w20
  IconLabelInfo_o *v105; // x20
  int32_t v106; // w21
  UserServantEntity_o *userServantEntity; // x0
  __int64 v108; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+58h] [xbp-38h] BYREF
  int32_t tdMaxLv[2]; // [xsp+68h] [xbp-28h] BYREF

  v4 = sort;
  v5 = this;
  if ( (byte_42E93DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventGroupMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFilterMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&Method_WarehouseListViewItem__SetSortValue_b__62_0__, v39, v40, v41);
    sub_B5D5C4(&Method_WarehouseListViewItem__SetSortValue_b__62_1__, v42, v43, v44);
    this = (WarehouseListViewItem_o *)sub_B5D5C4(&WarehouseListViewManager_TypeInfo, v45, v46, v47);
    byte_42E93DC = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  entity = 0LL;
  v5->fields.sortValue0 = 0LL;
  p_sortValue0 = &v5->fields.sortValue0;
  priority = v5->fields.priority;
  *(_WORD *)&v5->fields.isTermination = 0;
  v5->fields.sortValue1 = -1LL;
  v5->fields.sortValue1B = priority;
  v5->fields.isNeedAdjustIconLabelScale = 0;
  if ( !v4 )
    goto LABEL_172;
  if ( !v4->fields.isBonusKind )
    goto LABEL_53;
  setupInfo = v5->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_172;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = v4->fields.bonusKind2;
    if ( bonusKind2 == 4 )
    {
      if ( v5->fields.bonusKind == 4 )
      {
        p_bonusKind2Id = &v4->fields.bonusKind2Id;
        if ( v5->fields.bonusKindId == v4->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        p_bonusKind2Id = &v4->fields.bonusKind2Id;
      }
      v5->fields.bonusKind = 4;
      v5->fields.bonusKindId = *p_bonusKind2Id;
      eventIdList = setupInfo->fields.eventIdList;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                (EventBonusFilterMaster_o *)this,
                                eventIdList,
                                0LL);
      v62 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      v63 = &Method_WarehouseListViewItem__SetSortValue_b__62_1__;
      goto LABEL_47;
    }
    if ( bonusKind2 != 2 )
    {
      if ( bonusKind2 != 1 )
        goto LABEL_53;
      if ( v5->fields.bonusKind == 1 )
      {
        v54 = &v4->fields.bonusKind2Id;
        if ( v5->fields.bonusKindId == v4->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        v54 = &v4->fields.bonusKind2Id;
      }
      v5->fields.bonusKind = 1;
      v52 = *v54;
      goto LABEL_50;
    }
    if ( v5->fields.bonusKind == 2 )
    {
      bonusKindId = v5->fields.bonusKindId;
      p_bonusKindId = &v4->fields.bonusKind2Id;
      bonusKind2Id = v4->fields.bonusKind2Id;
LABEL_26:
      if ( bonusKindId == bonusKind2Id )
        goto LABEL_30;
      goto LABEL_37;
    }
    p_bonusKindId = &v4->fields.bonusKind2Id;
LABEL_37:
    v5->fields.bonusKind = 2;
    v5->fields.bonusKindId = *p_bonusKindId;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v5->fields.svtId;
      v66 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      sort = *(ListViewSort_o **)&v67.fields.fakeValue;
      this = *(WarehouseListViewItem_o **)&v67.fields.currentCryptoKey;
      if ( v66 )
      {
        IsEnableServant = ServantFilterMaster__IsEnableServant(v66, v67, v5->fields.bonusKindId, 0LL);
        goto LABEL_52;
      }
    }
LABEL_172:
    sub_B5D69C(this, sort);
  }
  bonusKind = v4->fields.bonusKind;
  if ( bonusKind == 2 )
  {
    if ( v5->fields.bonusKind == 2 )
    {
      bonusKindId = v5->fields.bonusKindId;
      p_bonusKindId = &v4->fields.bonusKindId;
      bonusKind2Id = v4->fields.bonusKindId;
      goto LABEL_26;
    }
    p_bonusKindId = &v4->fields.bonusKindId;
    goto LABEL_37;
  }
  if ( bonusKind != 1 )
  {
    if ( v4->fields.bonusKind2 != 4 )
      goto LABEL_53;
    if ( v5->fields.bonusKind != bonusKind )
    {
      v58 = &v4->fields.bonusKindId;
      goto LABEL_33;
    }
    v58 = &v4->fields.bonusKindId;
    if ( v5->fields.bonusKindId != v4->fields.bonusKindId )
    {
LABEL_33:
      v5->fields.bonusKind = bonusKind;
      v5->fields.bonusKindId = *v58;
      v60 = setupInfo->fields.eventIdList;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                (EventBonusFilterMaster_o *)this,
                                v60,
                                0LL);
      v62 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      v63 = &Method_WarehouseListViewItem__SetSortValue_b__62_0__;
LABEL_47:
      v70 = (System_Func_T__bool__o *)v62;
      System_Func_int__bool____ctor(
        v62,
        (Il2CppObject *)v5,
        *v63,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      IsEnableServant = BasicHelper__Any_int__28142236(
                          OtherEventEquipIdList,
                          v70,
                          (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
      goto LABEL_52;
    }
LABEL_30:
    if ( !v5->fields.isEventUpVal )
      goto LABEL_61;
    goto LABEL_53;
  }
  if ( v5->fields.bonusKind == 1 )
    goto LABEL_30;
  v5->fields.bonusKind = 1;
  v52 = v4->fields.bonusKindId;
LABEL_50:
  this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
  v5->fields.bonusKindId = v52;
  if ( !this )
    goto LABEL_172;
  IsEnableServant = UserServantEntity__getEventUpVal_21840756(
                      (UserServantEntity_o *)this,
                      -1,
                      0,
                      0,
                      setupInfo,
                      v52,
                      0,
                      0LL);
LABEL_52:
  v5->fields.isEventUpVal = IsEnableServant;
  if ( !IsEnableServant )
  {
LABEL_61:
    LOBYTE(this) = 0;
    return (char)this;
  }
LABEL_53:
  if ( (((__int64 (__fastcall *)(WarehouseListViewItem_o *, ListViewSort_o *, void *))v5->klass->vtable._5_IsMatchFilter.method)(
          v5,
          v4,
          v5->klass[1]._1.image) & 1) == 0 )
    goto LABEL_61;
  this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_172;
  v71 = v5->fields.isSwapChoice ^ v5->fields.isChoice;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  *p_sortValue0 = 0LL;
  v5->fields.sortValue0B = 0LL;
  if ( !v4->fields.isSmartSort )
  {
    if ( !((v71 ^ 1) & 1 | !v4->fields.isChoiceSort) )
      *p_sortValue0 = -10LL;
    goto LABEL_71;
  }
  this = (WarehouseListViewItem_o *)v5->fields.servantEntity;
  if ( !this )
    goto LABEL_172;
  if ( ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL) )
  {
    if ( !v5->fields.isPartyEquip )
    {
      if ( !v5->fields.isUseSupportEquip )
        goto LABEL_69;
      goto LABEL_67;
    }
LABEL_65:
    v73 = -20LL;
LABEL_68:
    *p_sortValue0 = v73;
    goto LABEL_69;
  }
  if ( (v5->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_65;
  if ( v5->fields.isUseSupport )
  {
LABEL_67:
    v73 = -30LL;
    goto LABEL_68;
  }
  if ( v5->fields.attribute )
  {
    v73 = -40LL;
    goto LABEL_68;
  }
  if ( v5->fields.isFavorite )
  {
    v73 = -50LL;
    goto LABEL_68;
  }
  if ( v5->fields.isPush )
  {
    v73 = -55LL;
    goto LABEL_68;
  }
  userServantEntity = v5->fields.userServantEntity;
  if ( userServantEntity && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL)
    || v5->fields.isFortification )
  {
    v73 = -10LL;
    goto LABEL_68;
  }
LABEL_69:
  if ( !((v71 ^ 1) & 1 | !v4->fields.isChoiceSort) )
    *(_OWORD *)p_sortValue0 = xmmword_32A3DB0;
LABEL_71:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v4->fields.sortKind )
  {
    case 1:
      v74 = v5->fields.userServantEntity;
      if ( !v74 )
        goto LABEL_172;
      v75 = *(_OWORD *)&v74->fields.id.fields.fakeValue;
      *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v74->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v111.fields.fakeValue = v75;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v110 = v111;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v110, 0LL);
      v76 = v5->fields.userServantEntity;
      v5->fields.sortValue1 = (int64_t)this;
      if ( !v76 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v76->fields.createdAt, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      iconLabelInfo2 = v5->fields.iconLabelInfo2;
      v78 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_172;
      IconLabelInfo__Set_28463004(iconLabelInfo2, 2, v78, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0LL);
      LOBYTE(this) = 1;
      if ( IsMaterialTd )
        v5->fields.isNeedAdjustIconLabelScale = 1;
      return (char)this;
    case 2:
      rarity = v5->fields.rarity;
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      goto LABEL_129;
    case 3:
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      v5->fields.sortValue1 = *(int *)&this->fields.isEventUpVal;
      goto LABEL_158;
    case 4:
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      UserServantEntity__getTreasureDeviceInfo_21848072((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_172;
      friendshipMax = tdMaxLv[0];
      v82 = 33;
      goto LABEL_141;
    case 5:
      v83 = v5->fields.userServantEntity;
      if ( !v83 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = v83->fields.hp;
      if ( !this )
        goto LABEL_172;
      adjustHp = v83->fields.adjustHp;
      hp = v83->fields.hp;
      v86 = 3;
      goto LABEL_115;
    case 6:
      v96 = v5->fields.userServantEntity;
      if ( !v96 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = v96->fields.atk;
      if ( !this )
        goto LABEL_172;
      adjustHp = v96->fields.adjustAtk;
      hp = v96->fields.atk;
      v86 = 5;
LABEL_115:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v86, hp, adjustHp, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      iconLabelInfo1 = v5->fields.iconLabelInfo2;
      goto LABEL_159;
    case 7:
      servantEntity = v5->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = servantEntity->fields.cost;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_142;
    case 8:
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      rarity = -v5->fields.priority;
LABEL_129:
      v5->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_172;
      goto LABEL_158;
    case 0xA:
      friendship = v5->fields.friendship;
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v5->fields.friendshipMax;
      v82 = 32;
      goto LABEL_141;
    case 0xE:
      this = (WarehouseListViewItem_o *)v5->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_136;
      this = (WarehouseListViewItem_o *)v4->fields.manager;
      if ( !this )
        goto LABEL_172;
      v100 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v100
        || (WarehouseListViewManager_c *)this->klass->_2.typeHierarchy[v100 - 1] != WarehouseListViewManager_TypeInfo )
      {
        goto LABEL_172;
      }
      this = (WarehouseListViewItem_o *)WarehouseListViewManager__GetAmountSortValue(
                                          (WarehouseListViewManager_o *)this,
                                          v5->fields.svtId,
                                          v72);
      v5->fields.amountSortValue = (int64_t)this;
LABEL_136:
      v101 = v5->fields.servantEntity;
      if ( !v101 )
        goto LABEL_172;
      collectionNo = v101->fields.collectionNo;
      v103 = v5->fields.userServantEntity;
      v5->fields.sortValue1 = (((unsigned __int64)(unsigned int)v5->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v103 )
        goto LABEL_172;
      iconLabelInfo1 = v5->fields.iconLabelInfo1;
      lv = v103->fields.lv;
      this = (WarehouseListViewItem_o *)v103;
      goto LABEL_160;
    case 0xF:
      friendship = v5->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v5->fields.nowMaxHpReinforceValue;
      v82 = 44;
      goto LABEL_141;
    case 0x10:
      friendship = v5->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      v5->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v5->fields.nowMaxAtkReinforceValue;
      v82 = 45;
LABEL_141:
      IconLabelInfo__Set_28463004((IconLabelInfo_o *)this, v82, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_142:
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      v105 = v5->fields.iconLabelInfo2;
      v106 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v105 )
        goto LABEL_172;
      IconLabelInfo__Set_28463004(v105, 2, v106, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v5->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_150;
      this = (WarehouseListViewItem_o *)v5->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_150;
      this = (WarehouseListViewItem_o *)v5->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL) )
        goto LABEL_162;
LABEL_150:
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (WarehouseListViewItem_o *)v5->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      goto LABEL_162;
    case 0x18:
      v87 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v87 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v88 = **(_QWORD **)(v87 + 192);
      if ( (*(_BYTE *)(v88 + 306) & 1) == 0 )
        sub_AF52C4(v88);
      this = **(WarehouseListViewItem_o ***)(v88 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v5->fields.svtId,
                                          0LL);
      if ( !this )
        goto LABEL_172;
      v89 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        targetId = 0x7FFFFFFFFFFFFFFFLL;
LABEL_156:
        v5->fields.sortValue1 = targetId;
        goto LABEL_157;
      }
      v90 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v90 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v91 = **(_QWORD **)(v90 + 192);
      if ( (*(_BYTE *)(v91 + 306) & 1) == 0 )
        sub_AF52C4(v91);
      this = **(WarehouseListViewItem_o ***)(v91 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v89->fields.sortIndex )
      {
        v108 = sub_B5D6C8(this);
        sub_B5D668(v108, 0LL);
      }
      if ( !this )
        goto LABEL_172;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v89->fields.sortValue0, 0LL);
      v93 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v93 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v94 = **(_QWORD **)(v93 + 192);
      if ( (*(_BYTE *)(v94 + 306) & 1) == 0 )
        sub_AF52C4(v94);
      this = **(WarehouseListViewItem_o ***)(v94 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_172;
        targetId = entity->fields.targetId;
        goto LABEL_156;
      }
LABEL_157:
      this = (WarehouseListViewItem_o *)v5->fields.userServantEntity;
      v5->fields.sortValue1B = v5->fields.svtId;
      if ( !this )
        goto LABEL_172;
LABEL_158:
      iconLabelInfo1 = v5->fields.iconLabelInfo1;
LABEL_159:
      lv = *(_DWORD *)&this->fields.isEventUpVal;
LABEL_160:
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_172;
      IconLabelInfo__Set_28463004(iconLabelInfo1, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_162:
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


bool __fastcall WarehouseListViewItem___SetSortValue_b__62_0(
        WarehouseListViewItem_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool __fastcall WarehouseListViewItem___SetSortValue_b__62_1(
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E93E1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E93E1 = 1;
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42E93E0 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v5, v6, v7);
    byte_42E93E0 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  }
  else
  {
    v12 = -1;
  }
  return ServantEntity__getName(servantEntity, v12, -1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  WarehouseListViewItem_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42E93DF & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_B5D5C4(
                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                        (_DWORD)method,
                                        v2,
                                        v3);
    byte_42E93DF = 1;
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
    sub_B5D69C(0LL, value);
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