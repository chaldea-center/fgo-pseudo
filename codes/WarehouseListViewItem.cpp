void WarehouseListViewItem___ctor(
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
  IconLabelInfo_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  IconLabelInfo_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct UserServantEntity_o **p_userServantEntity; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int64_t Instance; // x0
  __int64 v44; // x1
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct ServantEntity_o *v53; // x8
  __int64 v54; // x21
  __int64 v55; // x28
  struct UserServantEntity_o *v56; // x8
  ServantLimitMaster_o *v57; // x28
  int32_t svtId; // w29
  const MethodInfo *v59; // x2
  struct ServantEntity_o *v60; // x8
  int32_t classId; // w8
  struct UserServantEntity_o *v62; // x8
  __int128 v63; // q1
  __int64 v64; // x21
  struct ServantEntity_o *v65; // x8
  int32_t v66; // w8
  UserServantEntity_o *v67; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v69; // x8
  UserServantEntity_o *v70; // x8
  struct UserServantEntity_o *v71; // x8
  __int128 v72; // q0
  UserServantCollectionMaster_o *v73; // x24
  struct UserServantEntity_o *v74; // x8
  int64_t v75; // x28
  __int64 v76; // x21
  __int64 v77; // x29
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  int64_t v80; // x24
  int max_length; // w8
  int32_t v82; // w9
  int v83; // w8
  int32_t v84; // w9
  __int64 v85; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v88; // x9
  int32_t *p_offset; // x10
  __int64 v90; // x0
  System_Collections_Generic_IEnumerator_T__c *v91; // x8
  __int64 v92; // x9
  int32_t *v93; // x10
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x8
  __int128 v98; // q0
  System_Collections_Generic_IEnumerator_T__c *v99; // x8
  __int64 v100; // x9
  int32_t *v101; // x10
  __int64 v102; // x0
  __int64 v103; // x1
  System_Collections_Generic_IEnumerator_T__o *v104; // x26
  System_Collections_Generic_IEnumerator_T__c *v105; // x8
  __int64 v106; // x9
  int32_t *v107; // x10
  __int64 v108; // x0
  System_Collections_Generic_IEnumerator_T__c *v109; // x8
  __int64 v110; // x9
  int32_t *v111; // x10
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x1
  System_Collections_Generic_IEnumerator_T__c *v115; // x8
  __int64 v116; // x9
  int32_t *v117; // x10
  __int64 v118; // x0
  bool IsSettingServant; // w0
  __int64 v120; // x8
  int64_t v121; // x26
  unsigned __int64 v122; // x21
  __int64 v123; // x8
  __int128 v124; // q0
  __int64 v125; // x8
  int64_t v126; // x25
  unsigned __int64 v127; // x21
  __int64 v128; // x8
  __int128 v129; // q0
  int v130; // w26
  BalanceConfig_c *v131; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  bool v133; // w8
  UserServantEntity_o *v134; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  struct System_Int32_array *EquipCategoryIdList; // x1
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  const MethodInfo *v150; // x1
  int v151; // w8
  __int64 v152; // x9
  int64_t UserSvtId; // x0
  int64_t v154; // x8
  __int64 rarity; // x21
  struct UserServantEntity_o *v156; // x9
  ServantEntity_o *v157; // x8
  __int64 v158; // x22
  __int64 lv; // x23
  struct UserServantEntity_o *v160; // x8
  __int64 v161; // x21
  __int64 v162; // x22
  struct UserServantEntity_o *v163; // x8
  __int128 v164; // q0
  IconLabelInfo_o *iconLabelInfo1; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-170h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+20h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+40h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+60h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+80h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+A0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+C0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+E0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+100h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16

  if ( (byte_4E0277D & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E0277D = 1;
  }
  v16 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo1 = v16;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0);
  this->fields.iconLabelInfo2 = v23;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  ListViewItem___ctor_44921328((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  this->fields.index = index;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.setupInfo = setupinfo;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v37, v38, v39, v40, v41, v42);
  if ( !userServantEntity )
    goto LABEL_180;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = this->fields.servantEntity;
  if ( !v53 )
    goto LABEL_180;
  v54 = *(_QWORD *)&v53->fields.id.fields.currentCryptoKey;
  v55 = *(_QWORD *)&v53->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v176.fields.currentCryptoKey = v54;
  *(_QWORD *)&v176.fields.fakeValue = v55;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v176, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_180;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v56 = this->fields.userServantEntity;
  if ( !v56 )
    goto LABEL_180;
  v57 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v56->fields.limitCount, 0);
  if ( !v57 )
    goto LABEL_180;
  ServantLimitMaster__GetEntity(v57, svtId, Instance, 0);
  WarehouseListViewItem__SetOverwriteStatus(this, userServantEntity, v59);
  v60 = this->fields.servantEntity;
  if ( !v60 )
    goto LABEL_180;
  classId = v60->fields.classId;
  this->fields.isFavorite = isFavorite;
  this->fields.classId = classId;
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_180;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_180;
  v62 = *p_userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( !*p_userServantEntity )
    goto LABEL_180;
  v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
  v64 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v175.fields.fakeValue = v63;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v174 = v175;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v174, 0);
  v65 = this->fields.servantEntity;
  this->fields.isPush = v64 == Instance;
  this->fields.isEnabled = 1;
  if ( !v65 )
    goto LABEL_180;
  if ( v65->fields.type == 2 )
  {
    v66 = 1;
LABEL_22:
    this->fields.attribute = v66;
    goto LABEL_24;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_180;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0) )
  {
    v66 = 2;
    goto LABEL_22;
  }
  this->fields.attribute = 0;
LABEL_24:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_180;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v67 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v67 )
    goto LABEL_180;
  IsChoice = UserServantEntity__IsChoice(v67, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !Instance )
    goto LABEL_180;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v69 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v69 )
    goto LABEL_180;
  Instance = UserServantEntity__IsChocolateSvtEquip(v69, 0);
  v70 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v70 )
    goto LABEL_180;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v70, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_180;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v71 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_180;
  v72 = *(_OWORD *)&v71->fields.userId.fields.fakeValue;
  v73 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v71->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v175.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v173 = v175;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v173, 0);
  v74 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_180;
  v75 = Instance;
  v76 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
  v77 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v177.fields.currentCryptoKey = v76;
  *(_QWORD *)&v177.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v177, 0);
  if ( !v73 )
    goto LABEL_180;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v73, v75, Instance, 0);
  if ( !Instance )
    goto LABEL_180;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0);
  v78 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  *(_DWORD *)&this->fields.isUseRecommendSupport = 0;
  if ( !v78 )
    goto LABEL_180;
  v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
  *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v172.fields.fakeValue = v79;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v172, 0);
  Instance = (int64_t)this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0;
  if ( !Instance )
    goto LABEL_180;
  Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v82 = 0;
        while ( 1 )
        {
          if ( max_length == v82 )
            goto LABEL_181;
          if ( v80 == partyUserEquipList->m_Items[v82] )
            break;
          if ( max_length == ++v82 )
            goto LABEL_56;
        }
        this->fields.partyIndex = v82;
        this->fields.isPartyEquip = 1;
        this->fields.isUse = 1;
      }
LABEL_56:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
        if ( Instance )
        {
          Instance = *(_QWORD *)(Instance + 40);
          if ( Instance )
          {
            Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                           (System_Collections_ObjectModel_Collection_T__o *)Instance,
                           (const MethodInfo_3481088 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
            if ( !Enumerator )
              sub_1CE6958(0, v85);
            while ( 1 )
            {
              klass = Enumerator->klass;
              v88 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
              if ( *(_WORD *)&Enumerator->klass->_2.rank )
              {
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v88;
                  p_offset += 4;
                  if ( !v88 )
                    goto LABEL_64;
                }
                v90 = (__int64)&klass->vtable[*p_offset];
              }
              else
              {
LABEL_64:
                v90 = sub_1CBCA7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v90)(
                      Enumerator,
                      *(_QWORD *)(v90 + 8))
                  & 1) == 0 )
                break;
              v91 = Enumerator->klass;
              v92 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
              if ( *(_WORD *)&Enumerator->klass->_2.rank )
              {
                v93 = &v91->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v93 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
                {
                  --v92;
                  v93 += 4;
                  if ( !v92 )
                    goto LABEL_71;
                }
                v94 = (__int64)&v91->vtable[*v93];
              }
              else
              {
LABEL_71:
                v94 = sub_1CBCA7C(
                        Enumerator,
                        System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo,
                        0);
              }
              v95 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v94)(
                      Enumerator,
                      *(_QWORD *)(v94 + 8));
              if ( !v95 )
                sub_1CE6958(0, v96);
              v97 = *(_QWORD *)(v95 + 32);
              if ( v97 )
              {
                v98 = *(_OWORD *)(v97 + 40);
                *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)(v97 + 24);
                *(_OWORD *)&v175.fields.fakeValue = v98;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v171 = v175;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v171, 0) == v80 )
                {
                  this->fields.isUseSupportEquip = 1;
                  break;
                }
              }
            }
            v99 = Enumerator->klass;
            v100 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v101 = &v99->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
              {
                --v100;
                v101 += 4;
                if ( !v100 )
                  goto LABEL_83;
              }
              v102 = (__int64)&v99->vtable[*v101];
            }
            else
            {
LABEL_83:
              v102 = sub_1CBCA7C(Enumerator, System_IDisposable_TypeInfo, 0);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v102)(
              Enumerator,
              *(_QWORD *)(v102 + 8));
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
            if ( Instance )
            {
              this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(
                                                          (UserRecommendSupportMaster_o *)Instance,
                                                          v80,
                                                          1,
                                                          0);
              Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
              if ( Instance )
              {
                this->fields.isUseGrandEquip = UserServantGrandMaster__IsSettingEquip(
                                                 (UserServantGrandMaster_o *)Instance,
                                                 v80,
                                                 0);
                Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
                if ( Instance )
                {
                  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
                  if ( Instance )
                  {
                    v125 = *(_QWORD *)(Instance + 24);
                    v126 = Instance;
                    if ( (int)v125 >= 1 )
                    {
                      v127 = 0;
                      while ( 1 )
                      {
                        if ( v127 >= (unsigned int)v125 )
                          goto LABEL_181;
                        v128 = *(_QWORD *)(v126 + 32 + 8 * v127);
                        if ( v128 )
                        {
                          v129 = *(_OWORD *)(v128 + 32);
                          *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)(v128 + 16);
                          *(_OWORD *)&v175.fields.fakeValue = v129;
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                          v170 = v175;
                          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v170, 0);
                          if ( Instance == v80 )
                            break;
                        }
                        LODWORD(v125) = *(_DWORD *)(v126 + 24);
                        if ( (__int64)++v127 >= (int)v125 )
                          goto LABEL_154;
                      }
                      this->fields.isWarehouseServantEquip = 1;
                    }
LABEL_154:
                    Instance = (int64_t)*p_userServantEntity;
                    if ( *p_userServantEntity )
                    {
                      EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(
                                              (UserServantEntity_o *)Instance,
                                              1,
                                              0);
                      p_equipCategoryIdList = &this->fields.equipCategoryIdList;
                      this->fields.equipCategoryIdList = EquipCategoryIdList;
                      goto LABEL_156;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_180:
    sub_1CE6958(Instance, v44);
  }
  if ( !partyUserServantList )
    goto LABEL_180;
  v83 = partyUserServantList->max_length;
  if ( v83 >= 1 )
  {
    v84 = 0;
    while ( 1 )
    {
      if ( v83 == v84 )
LABEL_181:
        sub_1CE6960(Instance);
      if ( v80 == partyUserServantList->m_Items[v84] )
        break;
      if ( v83 == ++v84 )
        goto LABEL_85;
    }
    this->fields.partyIndex = v84;
  }
LABEL_85:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_180;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_180;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_180;
  v104 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_3481088 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v104 )
    sub_1CE6958(0, v103);
  while ( 1 )
  {
    v105 = v104->klass;
    v106 = *(unsigned __int16 *)&v104->klass->_2.rank;
    if ( *(_WORD *)&v104->klass->_2.rank )
    {
      v107 = &v105->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v107 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v106;
        v107 += 4;
        if ( !v106 )
          goto LABEL_93;
      }
      v108 = (__int64)&v105->vtable[*v107];
    }
    else
    {
LABEL_93:
      v108 = sub_1CBCA7C(v104, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v108)(
            v104,
            *(_QWORD *)(v108 + 8))
        & 1) == 0 )
      break;
    v109 = v104->klass;
    v110 = *(unsigned __int16 *)&v104->klass->_2.rank;
    if ( *(_WORD *)&v104->klass->_2.rank )
    {
      v111 = &v109->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v111 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v110;
        v111 += 4;
        if ( !v110 )
          goto LABEL_100;
      }
      v112 = (__int64)&v109->vtable[*v111];
    }
    else
    {
LABEL_100:
      v112 = sub_1CBCA7C(v104, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v113 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v112)(
             v104,
             *(_QWORD *)(v112 + 8));
    if ( !v113 )
      sub_1CE6958(0, v114);
    if ( *(_QWORD *)(v113 + 56) == v80 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v115 = v104->klass;
  v116 = *(unsigned __int16 *)&v104->klass->_2.rank;
  if ( *(_WORD *)&v104->klass->_2.rank )
  {
    v117 = &v115->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
    {
      --v116;
      v117 += 4;
      if ( !v116 )
        goto LABEL_109;
    }
    v118 = (__int64)&v115->vtable[*v117];
  }
  else
  {
LABEL_109:
    v118 = sub_1CBCA7C(v104, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v118)(v104, *(_QWORD *)(v118 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_180;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(
                                         (UserRecommendSupportMaster_o *)Instance,
                                         v80,
                                         0,
                                         0);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Instance )
    goto LABEL_180;
  IsSettingServant = UserServantGrandMaster__IsSettingServant((UserServantGrandMaster_o *)Instance, v80, 0);
  this->fields.isWarehouseServant = 0;
  this->fields.isGrandServant = IsSettingServant;
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_180;
  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_180;
  v120 = *(_QWORD *)(Instance + 24);
  v121 = Instance;
  if ( (int)v120 >= 1 )
  {
    v122 = 0;
    while ( 1 )
    {
      if ( v122 >= (unsigned int)v120 )
        goto LABEL_181;
      v123 = *(_QWORD *)(v121 + 32 + 8 * v122);
      if ( v123 )
      {
        v124 = *(_OWORD *)(v123 + 32);
        *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)(v123 + 16);
        *(_OWORD *)&v175.fields.fakeValue = v124;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v169 = v175;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v169, 0);
        if ( Instance == v80 )
          break;
      }
      LODWORD(v120) = *(_DWORD *)(v121 + 24);
      if ( (__int64)++v122 >= (int)v120 )
        goto LABEL_143;
    }
    this->fields.isWarehouseServant = 1;
  }
LABEL_143:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_180;
  v130 = *(_DWORD *)(Instance + 420);
  v131 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v131 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v131->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v130;
  if ( !Instance )
    goto LABEL_180;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 416);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  v133 = UserServantEntity__get_IsSaveTransformServant(userServantEntity, 0)
      && !UserServantEntity__CheckBaseServant(userServantEntity, -1, 0);
  this->fields.isTransformed = v133;
  Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(userServantEntity, -1, 0, 0);
  v134 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v134 )
    goto LABEL_180;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v134, -1, Instance, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_180;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                          (UserServantEntity_o *)Instance,
                          0,
                          this->fields.dispLimitCount,
                          0);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_156:
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)p_equipCategoryIdList,
    (int32_t)EquipCategoryIdList,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v151 = recoverySvtList->max_length;
    if ( v151 >= 1 )
    {
      v152 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v152 >= v151 )
          goto LABEL_181;
        if ( recoverySvtList->m_Items[v152] == v80 )
          break;
        if ( (int)++v152 >= v151 )
          goto LABEL_164;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_164:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v150);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
  this->fields.amountSortValue = -1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_180;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_180;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_180;
  v154 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.priority = v154;
  this->fields.sortValue1B = v154;
  if ( !Instance )
    goto LABEL_180;
  rarity = (unsigned int)this->fields.rarity;
  Instance = (int64_t)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_180;
  v156 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_180;
  v157 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_180;
  v158 = *(int *)(Instance + 208);
  lv = v156->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd(v157, 0);
  v160 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v158 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v160 )
    goto LABEL_180;
  v162 = *(_QWORD *)&v160->fields.svtId.fields.currentCryptoKey;
  v161 = *(_QWORD *)&v160->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v178.fields.currentCryptoKey = v162;
  *(_QWORD *)&v178.fields.fakeValue = v161;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v178, 0);
  v163 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v163 )
    goto LABEL_180;
  v164 = *(_OWORD *)&v163->fields.id.fields.fakeValue;
  *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v163->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v175.fields.fakeValue = v164;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v168 = v175;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v168, 0);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValueLast = Instance;
  if ( !iconLabelInfo1 )
    goto LABEL_180;
  IconLabelInfo__Clear(iconLabelInfo1, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_180;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void WarehouseListViewItem__Finalize(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool WarehouseListViewItem__IsMatchFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantEntity_o *servantEntity; // x0
  const MethodInfo *v8; // x2

  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0) )
    return 1;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1CE6958(0, v5);
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v8);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v8);
}


bool WarehouseListViewItem__IsMatchServantEquipFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Int32Enum_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  _BOOL4 v13; // w8

  if ( (byte_4E02781 & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4E02781 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  RarityFilterKindList = System_Collections_Generic_List_Int32Enum___ToArray(
                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_35;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                          (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchServantEquipCombineStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (System_Int32Enum_array *)v11->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_35;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)RarityFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchServantEquipHaveStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0) )
  {
    return 0;
  }
  RarityFilterKindList = (System_Int32Enum_array *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_35:
    sub_1CE6958(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_1CE6960(RarityFilterKindList);
  RarityFilterKindList->m_Items[0] = 39;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0)
    || !ListViewSort__GetFilter(sort, 39, 0) )
  {
    return 1;
  }
  v13 = !this->fields.isChoice;
  if ( !this->fields.isSwapChoice )
    return this->fields.isChoice;
  return v13;
}


bool WarehouseListViewItem__IsMatchServantFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userServantEntity; // x21
  _BOOL4 isChoice; // w8
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  UserServantEntity_o *v20; // x0
  _BOOL4 v21; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v38; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v40; // w0

  if ( (byte_4E02780 & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1CE6700(&ServantEventBonusFilterController_TypeInfo);
    byte_4E02780 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_74;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_74;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_74;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_74;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_74;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v13->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_74;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0)
    && !ListViewSort__IsMatchServantTypeFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userServantEntity = this->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0) )
      return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_35;
  v20 = this->fields.userServantEntity;
  if ( v20 )
  {
    if ( UserServantEntity__get_IsSaveTransformServant(v20, 0) )
    {
      ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_74;
      v21 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
    }
    else
    {
      v21 = 0;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( ClassGroupFilterKindList )
    {
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                                -1,
                                                0,
                                                0);
      if ( v21 != this->fields.isTransformed || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
        this->fields.isTransformed = v21;
        this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !ClassGroupFilterKindList )
          goto LABEL_74;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_74;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         this->fields.dispLimitCount,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      goto LABEL_62;
    }
LABEL_74:
    sub_1CE6958(ClassGroupFilterKindList, sort);
  }
LABEL_62:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_74;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_75;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_74;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_75:
    sub_1CE6960(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v38 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v40 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
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
LABEL_35:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_74;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_75;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_74;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void WarehouseListViewItem__Modify(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserServantEntity_o *IsLock; // x0
  UserServantEntity_o *v6; // x8
  bool IsChoice; // w0

  WarehouseListViewItem__ModifyItem(this, userServantEntity, method);
  IsLock = this->fields.userServantEntity;
  if ( !IsLock
    || (IsLock = (UserServantEntity_o *)UserServantEntity__IsLock(IsLock, 0),
        v6 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)IsLock & 1,
        !v6) )
  {
    sub_1CE6958(IsLock, v4);
  }
  IsChoice = UserServantEntity__IsChoice(v6, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


void WarehouseListViewItem__ModifyItem(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct ServantEntity_o *v21; // x8
  __int64 v22; // x22
  __int64 v23; // x23
  struct ServantEntity_o *v24; // x8
  int64_t lookup_high; // x8
  __int64 rarity; // x22
  ServantEntity_o *v27; // x8
  __int64 lv; // x20
  __int64 masterDataBytes_low; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4E0277E & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E0277E = 1;
  }
  this->fields.userServantEntity = userServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  WarehouseListViewItem__SetOverwriteStatus(this, userServantEntity, v10);
  if ( !userServantEntity )
    goto LABEL_14;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields.servantEntity = ServantEntity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)ServantEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = this->fields.servantEntity;
  if ( !v21 )
    goto LABEL_14;
  v23 = *(_QWORD *)&v21->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v21->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v23;
  *(_QWORD *)&v30.fields.fakeValue = v22;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v30, 0);
  v24 = this->fields.servantEntity;
  this->fields.svtId = (int)Instance;
  if ( !v24 )
    goto LABEL_14;
  this->fields.classId = v24->fields.classId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.classId,
                                      (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (lookup_high = SHIDWORD(Instance->fields.lookup),
        rarity = (unsigned int)this->fields.rarity,
        this->fields.priority = lookup_high,
        this->fields.sortValue1B = lookup_high,
        (Instance = (DataManager_o *)UserServantEntity__get_BaseServantEntity(userServantEntity, 0)) == 0)
    || (v27 = *p_servantEntity) == 0 )
  {
LABEL_14:
    sub_1CE6958(Instance, v12);
  }
  lv = userServantEntity->fields.lv;
  masterDataBytes_low = SLODWORD(Instance[1].fields.masterDataBytes);
  this->fields.sortValue2 = (2 * lv)
                          | (rarity << 48)
                          | (masterDataBytes_low << 16)
                          | ServantEntity__get_IsServantMaterialTd(v27, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewItem__Modify_39502596(
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
    || (userServantEntity = (UserServantEntity_o *)UserServantEntity__IsLock(userServantEntity, 0),
        v6 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)userServantEntity & 1,
        !v6) )
  {
    sub_1CE6958(userServantEntity, isFavorite);
  }
  IsChoice = UserServantEntity__IsChoice(v6, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
}


void WarehouseListViewItem__SetOverwriteStatus(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  WarehouseListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (WarehouseListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1CE6958(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool WarehouseListViewItem__SetSortValue(WarehouseListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  WarehouseListViewItem_o *v4; // x19
  int64_t *p_sortValue0; // x23
  int64_t priority; // x8
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t v9; // w8
  int32_t bonusKind2; // w8
  int32_t v11; // w5
  int32_t v12; // w9
  int32_t v13; // w8
  int32_t v14; // w9
  int32_t bonusKindId; // w9
  int32_t bonusKind2Id; // w8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v18; // x22
  bool v19; // w0
  int32_t v20; // w8
  bool EventUpVal_44304936; // w0
  System_Collections_Generic_List_EventGroupEntity__o *v22; // x21
  System_Func_object__bool__o *v23; // x22
  System_Int32_array *v24; // x21
  System_Int32_array *OtherEventEquipIdList; // x21
  System_Func_int__bool__o *v26; // x0
  intptr_t *v27; // x8
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v30; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr00_16
  System_Int32_array *eventIdList; // x21
  System_Func_T__bool__o *v33; // x22
  _BOOL4 isChoice; // w21
  long double v35; // q0
  __int64 v36; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v38; // q1
  struct UserServantEntity_o *v39; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t sortStr1; // w21
  bool IsMaterialTd; // w8
  int64_t hp; // x20
  IconLabelInfo_o *v44; // x21
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v47; // w1
  __int64 v48; // x0
  __int64 v49; // x0
  long double v50; // q0
  WarehouseListViewItem_o *v51; // x20
  __int64 v52; // x0
  __int64 v53; // x0
  int32_t FirstOpenEventId; // w20
  long double v55; // q0
  __int64 v56; // x8
  __int64 v57; // x0
  __int64 monitor; // x8
  int64_t rarity; // x8
  int64_t sortStr1_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t atk; // x20
  IconLabelInfo_o *v63; // x21
  IconLabelInfo_o *v64; // x19
  int64_t cost; // x2
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  WarehouseListViewManager_o *v69; // x20
  IconLabelInfo_o *v70; // x20
  int32_t v71; // w21
  struct UserServantEntity_o *v72; // x8
  __int64 v73; // x21
  __int64 v74; // x22
  const MethodInfo *v75; // x2
  __int64 v76; // x20
  __int64 fortificationDetailName_low; // x8
  int32_t v78; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+30h] [xbp-60h]
  Il2CppObject *entity; // [xsp+50h] [xbp-40h] BYREF
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  v3 = sort;
  v4 = this;
  if ( (byte_4E0277F & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1CE6700(&Method_BasicHelper_Any_int____79907888);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventGroupMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_WarehouseListViewItem__SetSortValue_b__71_0__);
    sub_1CE6700(&Method_WarehouseListViewItem__SetSortValue_b__71_1__);
    sub_1CE6700(&Method_WarehouseListViewItem__SetSortValue_b__71_2__);
    sub_1CE6700(&Method_WarehouseListViewItem__SetSortValue_b__71_3__);
    this = (WarehouseListViewItem_o *)sub_1CE6700(&WarehouseListViewManager_TypeInfo);
    byte_4E0277F = 1;
  }
  entity = 0;
  *(_QWORD *)tdMaxLv = 0;
  v4->fields.sortValue0 = 0;
  p_sortValue0 = &v4->fields.sortValue0;
  priority = v4->fields.priority;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  v4->fields.sortValue1B = priority;
  v4->fields.isNeedAdjustIconLabelScale = 0;
  if ( !v3 )
    goto LABEL_215;
  if ( !v3->fields.isBonusKind )
    goto LABEL_83;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_215;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = v3->fields.bonusKind2;
    switch ( bonusKind2 )
    {
      case 0:
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = v3->fields.bonusKind2Id;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_215;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0);
        this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)EntitiesByGroupId,
                                            0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_83;
        if ( !EntitiesByGroupId )
          goto LABEL_215;
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          v18 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v18,
            (Il2CppObject *)v4,
            Method_WarehouseListViewItem__SetSortValue_b__71_2__,
            0);
          v19 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                  (System_Func_T__bool__o *)v18,
                  (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_EventGroupEntity___);
          v4->fields.isEventUpVal = v19;
          if ( !v19 )
            goto LABEL_96;
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
          v11 = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v11 )
            goto LABEL_59;
        }
        else
        {
          v11 = v3->fields.bonusKind2Id;
        }
        this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.bonusKind = bonusKind2;
        goto LABEL_49;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v12 = v4->fields.bonusKindId;
          v13 = v3->fields.bonusKind2Id;
          goto LABEL_42;
        }
        v13 = v3->fields.bonusKind2Id;
        break;
      case 8:
        if ( v4->fields.bonusKind == 8 )
        {
          v20 = v3->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v20 )
            goto LABEL_59;
        }
        else
        {
          v20 = v3->fields.bonusKind2Id;
        }
        v4->fields.bonusKindId = v20;
        v4->fields.bonusKind = 8;
        eventIdList = setupInfo->fields.eventIdList;
        this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_215;
        this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
        if ( !this )
          goto LABEL_215;
        OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                  (EventBonusFilterMaster_o *)this,
                                  eventIdList,
                                  0);
        v26 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
        v27 = &Method_WarehouseListViewItem__SetSortValue_b__71_3__;
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
    v11 = v3->fields.bonusKindId;
    this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
LABEL_49:
    v4->fields.bonusKindId = v11;
    if ( !this )
      goto LABEL_215;
    EventUpVal_44304936 = UserServantEntity__getEventUpVal_44304936(
                            (UserServantEntity_o *)this,
                            -1,
                            0,
                            0,
                            setupInfo,
                            v11,
                            0,
                            0);
    goto LABEL_82;
  }
  if ( bonusKind == 7 )
  {
    if ( v4->fields.bonusKind == 7 )
    {
      v12 = v4->fields.bonusKindId;
      v13 = v3->fields.bonusKindId;
LABEL_42:
      if ( v12 == v13 )
        goto LABEL_59;
    }
    else
    {
      v13 = v3->fields.bonusKindId;
    }
LABEL_67:
    v4->fields.bonusKindId = v13;
    v4->fields.bonusKind = 7;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_215;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    svtId = v4->fields.svtId;
    v30 = (ServantFilterMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
    sort = *(ListViewSort_o **)&v31.fields.fakeValue;
    this = *(WarehouseListViewItem_o **)&v31.fields.currentCryptoKey;
    if ( !v30 )
      goto LABEL_215;
    EventUpVal_44304936 = ServantFilterMaster__IsEnableServant(v30, v31, v4->fields.bonusKindId, 0);
    goto LABEL_82;
  }
  if ( !bonusKind )
  {
    if ( v4->fields.bonusKind )
    {
      v9 = v3->fields.bonusKindId;
      goto LABEL_52;
    }
    v9 = v3->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v9 )
    {
LABEL_52:
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v9;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( this )
      {
        v22 = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
        this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v22, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v22 )
            goto LABEL_215;
          if ( v22->fields._size >= 2 )
          {
            v23 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v23,
              (Il2CppObject *)v4,
              Method_WarehouseListViewItem__SetSortValue_b__71_0__,
              0);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)v22,
                                        (System_Func_T__bool__o *)v23,
                                        (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_59;
      }
LABEL_215:
      sub_1CE6958(this, sort);
    }
LABEL_59:
    if ( !v4->fields.isEventUpVal )
      goto LABEL_96;
    goto LABEL_83;
  }
  if ( v3->fields.bonusKind2 == 8 )
  {
    if ( v4->fields.bonusKind == bonusKind )
    {
      v14 = v3->fields.bonusKindId;
      if ( v4->fields.bonusKindId == v14 )
        goto LABEL_59;
    }
    else
    {
      v14 = v3->fields.bonusKindId;
    }
    v4->fields.bonusKind = bonusKind;
    v4->fields.bonusKindId = v14;
    v24 = setupInfo->fields.eventIdList;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_215;
    this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    if ( !this )
      goto LABEL_215;
    OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList((EventBonusFilterMaster_o *)this, v24, 0);
    v26 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
    v27 = &Method_WarehouseListViewItem__SetSortValue_b__71_1__;
LABEL_76:
    v33 = (System_Func_T__bool__o *)v26;
    System_Func_int__bool____ctor(v26, (Il2CppObject *)v4, *v27, 0);
    EventUpVal_44304936 = BasicHelper__Any_int__52351580(
                            OtherEventEquipIdList,
                            v33,
                            (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888);
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
    v4->fields.bonusKindId = bonusKind2Id;
    v4->fields.bonusKind = 3;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !this )
      goto LABEL_215;
    EventUpVal_44304936 = EventCampaignMaster__IsEnableServant(
                            (EventCampaignMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0);
  }
LABEL_82:
  v4->fields.isEventUpVal = EventUpVal_44304936;
  if ( !EventUpVal_44304936 )
  {
LABEL_96:
    LOBYTE(this) = 0;
    return (char)this;
  }
LABEL_83:
  if ( (((__int64 (__fastcall *)(WarehouseListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
          v4,
          v3,
          v4->klass->vtable._5_IsMatchFilter.method)
      & 1) == 0 )
    goto LABEL_96;
  this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !this )
    goto LABEL_215;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  *p_sortValue0 = 0;
  v4->fields.sortValue0B = 0;
  if ( !v3->fields.isSmartSort )
  {
    if ( isChoice && v3->fields.isChoiceSort )
      *p_sortValue0 = -10;
    goto LABEL_112;
  }
  this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
  if ( !this )
    goto LABEL_215;
  if ( ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0) )
  {
    if ( !v4->fields.isPartyEquip )
    {
      if ( !v4->fields.isUseGrandEquip )
      {
        if ( !v4->fields.isUseSupportEquip )
        {
          if ( !v4->fields.isUseRecommendSupportEquip )
            goto LABEL_110;
          goto LABEL_108;
        }
        goto LABEL_104;
      }
      goto LABEL_102;
    }
LABEL_100:
    v36 = -20;
LABEL_109:
    *p_sortValue0 = v36;
    goto LABEL_110;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_100;
  if ( v4->fields.isGrandServant )
  {
LABEL_102:
    v36 = -30;
    goto LABEL_109;
  }
  if ( v4->fields.isUseSupport )
  {
LABEL_104:
    v36 = -40;
    goto LABEL_109;
  }
  if ( v4->fields.isUseRecommendSupport )
  {
    v36 = -45;
    goto LABEL_109;
  }
  if ( v4->fields.attribute )
  {
LABEL_108:
    v36 = -50;
    goto LABEL_109;
  }
  if ( v4->fields.isFavorite )
  {
    v36 = -60;
    goto LABEL_109;
  }
  if ( v4->fields.isPush )
  {
    v36 = -65;
    goto LABEL_109;
  }
  if ( WarehouseListViewItem__get_IsProtected(v4, (const MethodInfo *)sort) || v4->fields.isFortification )
  {
    v36 = -10;
    goto LABEL_109;
  }
LABEL_110:
  if ( isChoice && v3->fields.isChoiceSort )
  {
    v35 = *(long double *)&xmmword_D24770;
    *(_OWORD *)p_sortValue0 = xmmword_D24770;
  }
LABEL_112:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_215;
      v38 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v81.fields.fakeValue = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v80 = v81;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v80, 0);
      v39 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v39 )
        goto LABEL_215;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_215;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v39->fields.createdAt, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_215;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      sortStr1 = (int32_t)this[1].fields.sortStr1;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_215;
      IconLabelInfo__Set_42060700(iconLabelInfo2, 2, sortStr1, (int32_t)this, 0, 0, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_215;
      IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0);
      LOBYTE(this) = 1;
      if ( IsMaterialTd )
        v4->fields.isNeedAdjustIconLabelScale = 1;
      return (char)this;
    case 2:
      rarity = v4->fields.rarity;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_202;
    case 3:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_215;
      sortStr1_low = SLODWORD(this[1].fields.sortStr1);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = sortStr1_low;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_215;
      IconLabelInfo__Set_42060700(iconLabelInfo1, 2, sortStr1_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_206;
    case 4:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_215;
      UserServantEntity__getTreasureDeviceInfo_44310656((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(friendship) = tdMaxLv[1];
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_215;
      friendshipMax = tdMaxLv[0];
      v47 = 33;
      goto LABEL_175;
    case 5:
      hp = v4->fields.hp;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_215;
      v44 = v4->fields.iconLabelInfo1;
      this = (WarehouseListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v44 )
        goto LABEL_215;
      IconLabelInfo__Set_42060700(v44, 3, hp, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_162;
    case 6:
      atk = v4->fields.atk;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = atk;
      if ( !this )
        goto LABEL_215;
      v63 = v4->fields.iconLabelInfo1;
      this = (WarehouseListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      if ( !v63 )
        goto LABEL_215;
      IconLabelInfo__Set_42060700(v63, 5, atk, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_162:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_215;
      v64 = v4->fields.iconLabelInfo2;
      goto LABEL_204;
    case 7:
      cost = v4->fields.cost;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_215;
      IconLabelInfo__Set_42060700((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_176;
    case 8:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
      goto LABEL_202;
    case 0xA:
      friendship = v4->fields.friendship;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_215;
      friendshipMax = v4->fields.friendshipMax;
      v47 = 32;
      goto LABEL_175;
    case 0xE:
      amountSortValue = v4->fields.amountSortValue;
      if ( (amountSortValue & 0x8000000000000000LL) == 0 )
        goto LABEL_199;
      manager = v3->fields.manager;
      if ( manager
        && (naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == WarehouseListViewManager_TypeInfo )
          v69 = (WarehouseListViewManager_o *)v3->fields.manager;
        else
          v69 = 0;
      }
      else
      {
        v69 = 0;
      }
      v72 = v4->fields.userServantEntity;
      if ( v72 )
      {
        v74 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
        v73 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v84.fields.currentCryptoKey = v74;
        *(_QWORD *)&v84.fields.fakeValue = v73;
        this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v84, 0);
        if ( v69 )
        {
          amountSortValue = WarehouseListViewManager__GetAmountSortValue(v69, (int32_t)this, v75);
          v4->fields.amountSortValue = amountSortValue;
LABEL_199:
          this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
          if ( this )
          {
            v76 = (unsigned int)v4->fields.rarity;
            this = (WarehouseListViewItem_o *)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)this, 0);
            if ( this )
            {
              fortificationDetailName_low = SLODWORD(this->fields.fortificationDetailName);
              this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
              rarity = ((v76 << 32) + (amountSortValue << 48)) | fortificationDetailName_low;
LABEL_202:
              v4->fields.sortValue1 = rarity;
              if ( this )
                goto LABEL_203;
            }
          }
        }
      }
      goto LABEL_215;
    case 0xF:
      friendship = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_215;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v47 = 44;
      goto LABEL_175;
    case 0x10:
      friendship = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_215;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v47 = 45;
LABEL_175:
      IconLabelInfo__Set_42060700((IconLabelInfo_o *)this, v47, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
LABEL_176:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_215;
      v70 = v4->fields.iconLabelInfo2;
      v71 = (int32_t)this[1].fields.sortStr1;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v70 )
        goto LABEL_215;
      IconLabelInfo__Set_42060700(v70, 2, v71, (int32_t)this, 0, 0, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_215;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
        goto LABEL_184;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_215;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0) )
        goto LABEL_184;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_215;
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0) )
        goto LABEL_206;
LABEL_184:
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_215;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_215;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      goto LABEL_206;
    case 0x18:
      v48 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
        v48 = sub_1CBC788(v35);
      v49 = *(_QWORD *)(*(_QWORD *)(v48 + 192) + 16LL);
      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
        v49 = sub_1CBC788(v35);
      this = **(WarehouseListViewItem_o ***)(v49 + 184);
      if ( !this )
        goto LABEL_215;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_215;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0);
      if ( !this )
        goto LABEL_215;
      v51 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        monitor = 0x7FFFFFFFFFFFFFFFLL;
LABEL_188:
        v4->fields.sortValue1 = monitor;
        goto LABEL_189;
      }
      v52 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
        v52 = sub_1CBC788(v50);
      v53 = *(_QWORD *)(*(_QWORD *)(v52 + 192) + 16LL);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1CBC788(v50);
      this = **(WarehouseListViewItem_o ***)(v53 + 184);
      if ( !this )
        goto LABEL_215;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v51->fields.sortIndex )
        sub_1CE6960(this);
      if ( !this )
        goto LABEL_215;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v51->fields.sortValue0, 0);
      v56 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1CBC788(v55);
      v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
        v57 = sub_1CBC788(v55);
      this = **(WarehouseListViewItem_o ***)(v57 + 184);
      if ( !this )
        goto LABEL_215;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_215;
      this = (WarehouseListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_34E92A8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_215;
        monitor = (__int64)entity[5].monitor;
        goto LABEL_188;
      }
LABEL_189:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1B = v4->fields.svtId;
      if ( !this )
        goto LABEL_215;
LABEL_203:
      v64 = v4->fields.iconLabelInfo1;
LABEL_204:
      v78 = (int32_t)this[1].fields.sortStr1;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v64 )
        goto LABEL_215;
      IconLabelInfo__Set_42060700(v64, 2, v78, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_206:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
}


bool WarehouseListViewItem__SwapChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool WarehouseListViewItem__SwapLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool WarehouseListViewItem___SetSortValue_b__71_0(
        WarehouseListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // kr00_16

  if ( (byte_4E02783 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E02783 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  v9 = (ServantFilterMaster_o *)v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  v6 = *(_QWORD *)&v10.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v10.fields.currentCryptoKey;
  if ( !v9 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(v9, v10, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_1CE6958(Master_object, v6);
  return UserServantEntity__getEventUpVal_44304936(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


bool WarehouseListViewItem___SetSortValue_b__71_1(WarehouseListViewItem_o *this, int32_t x, const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool WarehouseListViewItem___SetSortValue_b__71_2(
        WarehouseListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // kr00_16

  if ( (byte_4E02784 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E02784 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  svtId = this->fields.svtId;
  v9 = (ServantFilterMaster_o *)v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  v6 = *(_QWORD *)&v10.fields.fakeValue;
  Master_object = *(EventCampaignMaster_o **)&v10.fields.currentCryptoKey;
  if ( !v9 )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(v9, v10, entity->fields.eventId, 0) )
    return 1;
  Master_object = (EventCampaignMaster_o *)this->fields.userServantEntity;
  if ( !Master_object )
LABEL_17:
    sub_1CE6958(Master_object, v6);
  return UserServantEntity__getEventUpVal_44304936(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


bool WarehouseListViewItem___SetSortValue_b__71_3(WarehouseListViewItem_o *this, int32_t x, const MethodInfo *method)
{
  return this->fields.svtId == x;
}


int32_t WarehouseListViewItem__get_Attribute(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.attribute;
}


int32_t WarehouseListViewItem__get_DragSelectNum(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum;
}


System_String_o *WarehouseListViewItem__get_FortificationDetailName(
        WarehouseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fortificationDetailName;
}


System_String_o *WarehouseListViewItem__get_FortificationName(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.fortificationName;
}


IconLabelInfo_o *WarehouseListViewItem__get_IconInfo1(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *WarehouseListViewItem__get_IconInfo2(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool WarehouseListViewItem__get_IsCanNotSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite
      || (this->fields.partyIndex & 0x80000000) == 0
      || this->fields.isPartyEquip
      || this->fields.attribute
      || this->fields.isUseSupport
      || this->fields.isUseSupportEquip
      || this->fields.isUseRecommendSupport
      || this->fields.isUseRecommendSupportEquip
      || this->fields.isFatigueRecovery
      || this->fields.isFortification
      || this->fields.isPush
      || WarehouseListViewItem__get_IsProtected(this, method)
      || this->fields.isGrandServant
      || this->fields.isUseGrandEquip;
}


bool WarehouseListViewItem__get_IsChocolateSvtEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChocolateSvtEquip;
}


bool WarehouseListViewItem__get_IsChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool WarehouseListViewItem__get_IsDispChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool WarehouseListViewItem__get_IsDispLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool WarehouseListViewItem__get_IsDragSelect(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dragSelectNum >= 0;
}


bool WarehouseListViewItem__get_IsEnabled(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool WarehouseListViewItem__get_IsEventJoin(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool WarehouseListViewItem__get_IsFatigueRecovery(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFatigueRecovery;
}


bool WarehouseListViewItem__get_IsFavorite(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFavorite;
}


bool WarehouseListViewItem__get_IsFortification(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFortification;
}


bool WarehouseListViewItem__get_IsFriendShipSvtEq(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFriendShipSvtEq;
}


bool WarehouseListViewItem__get_IsGrandServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGrandServant;
}


bool WarehouseListViewItem__get_IsLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool WarehouseListViewItem__get_IsMaterialTdSvt(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMaterialTdSvt;
}


bool WarehouseListViewItem__get_IsNeedAdjustIconLabelScale(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNeedAdjustIconLabelScale;
}


bool WarehouseListViewItem__get_IsOrganization(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x0

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1CE6958(0, method);
  return ServantEntity__get_IsOrganization(servantEntity, 0);
}


bool WarehouseListViewItem__get_IsParty(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool WarehouseListViewItem__get_IsPartyEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPartyEquip;
}


bool WarehouseListViewItem__get_IsProtected(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  __int64 v5; // x1
  UserServantEntity_o *v6; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity || this->fields.isWarehouseServant )
    return 0;
  if ( UserServantEntity__IsProtectedEventServant(userServantEntity, 0) )
    return 1;
  v6 = this->fields.userServantEntity;
  if ( !v6 )
    sub_1CE6958(0, v5);
  return UserServantEntity__IsNotSendStorageServant(v6, 0);
}


bool WarehouseListViewItem__get_IsPush(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool WarehouseListViewItem__get_IsPushMode(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool WarehouseListViewItem__get_IsSellEnableServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.attribute == 0;
}


bool WarehouseListViewItem__get_IsSwapChoice(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool WarehouseListViewItem__get_IsSwapLock(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool WarehouseListViewItem__get_IsUse(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


bool WarehouseListViewItem__get_IsUseGrandEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseGrandEquip;
}


bool WarehouseListViewItem__get_IsUseRecommendSupportEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseRecommendSupportEquip;
}


bool WarehouseListViewItem__get_IsUseRecommendSupportServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseRecommendSupport;
}


bool WarehouseListViewItem__get_IsUseSupportEquip(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupportEquip;
}


bool WarehouseListViewItem__get_IsUseSupportServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseSupport;
}


ServantEntity_o *WarehouseListViewItem__get_Servant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t WarehouseListViewItem__get_SvtId(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


UserServantEntity_o *WarehouseListViewItem__get_UserServant(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int64_t WarehouseListViewItem__get_UserSvtId(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  WarehouseListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4E02782 & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E02782 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1CE6958(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v6, 0);
}


void WarehouseListViewItem__set_DragSelectNum(WarehouseListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void WarehouseListViewItem__set_IsDragSelect(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  if ( !this )
    sub_1CE6958(0, value);
  this->fields.dragSelectNum = value - 1;
}


void WarehouseListViewItem__set_IsEnabled(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void WarehouseListViewItem__set_IsPush(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}


void WarehouseListViewItem__set_IsPushMode(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPushMode = value;
}