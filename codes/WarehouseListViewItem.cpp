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
  IconLabelInfo_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  IconLabelInfo_o *v23; // x28
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int64_t Instance; // x0
  __int64 v44; // x1
  struct UserServantEntity_o *v45; // x8
  __int64 v46; // x26
  __int64 v47; // x27
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UserServantEntity_o *v56; // x8
  ServantLimitMaster_o *v57; // x27
  int32_t svtId; // w28
  int32_t v59; // w8
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q1
  __int64 v62; // x23
  struct ServantEntity_o *servantEntity; // x8
  int32_t v64; // w8
  UserServantEntity_o *v65; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v67; // x8
  UserServantEntity_o *v68; // x8
  struct UserServantEntity_o *v69; // x8
  __int128 v70; // q0
  UserServantCollectionMaster_o *v71; // x23
  struct UserServantEntity_o *v72; // x8
  int64_t v73; // x26
  __int64 v74; // x27
  __int64 v75; // x28
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q0
  int64_t v78; // x23
  signed int max_length; // w8
  unsigned int v80; // w9
  signed int v81; // w8
  unsigned int v82; // w9
  __int64 v83; // x1
  __int64 v84; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v87; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v90; // x8
  unsigned __int64 v91; // x10
  int32_t *v92; // x11
  __int64 v93; // x0
  _QWORD *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x9
  __int64 v97; // x8
  __int128 v98; // q0
  System_Collections_Generic_IEnumerator_T__c *v99; // x8
  unsigned __int64 v100; // x10
  int32_t *v101; // x11
  __int64 v102; // x0
  __int64 v103; // x1
  __int64 v104; // x3
  System_Collections_Generic_IEnumerator_T__o *v105; // x24
  System_Collections_Generic_IEnumerator_T__c *v106; // x8
  unsigned __int64 v107; // x10
  int32_t *v108; // x11
  __int64 v109; // x0
  System_Collections_Generic_IEnumerator_T__c *v110; // x8
  unsigned __int64 v111; // x10
  int32_t *v112; // x11
  __int64 v113; // x0
  _QWORD *v114; // x0
  __int64 v115; // x1
  __int64 v116; // x9
  System_Collections_Generic_IEnumerator_T__c *v117; // x8
  unsigned __int64 v118; // x10
  int32_t *v119; // x11
  __int64 v120; // x0
  int v121; // w24
  BalanceConfig_c *v122; // x8
  UserServantEntity_o *v123; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  struct System_Int32_array *EquipCategoryIdList; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct System_Int32_array **p_equipCategoryIdList; // x0
  __int64 v139; // x8
  int64_t v140; // x24
  unsigned __int64 v141; // x25
  __int64 v142; // x8
  __int128 v143; // q0
  const MethodInfo *v144; // x1
  signed int v145; // w8
  __int64 v146; // x9
  int64_t UserSvtId; // x0
  int64_t v148; // x8
  __int64 rarity; // x20
  __int64 v150; // x21
  __int64 lv; // x22
  struct UserServantEntity_o *v152; // x8
  __int64 v153; // x21
  __int64 v154; // x22
  IconLabelInfo_o *iconLabelInfo1; // x8
  __int64 v156; // x0
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+8h] [xbp-138h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+10h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+90h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+B0h] [xbp-90h]
  int v165; // [xsp+D0h] [xbp-70h]
  int v166; // [xsp+E0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16

  if ( (byte_42B0C6F & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantLeaderEntity_TypeInfo);
    byte_42B0C6F = 1;
  }
  v166 = 0;
  v16 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo1 = v16;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.setupInfo = setupinfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupinfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = this->fields.userServantEntity;
  if ( !v45 )
    goto LABEL_178;
  v47 = *(_QWORD *)&v45->fields.svtId.fields.currentCryptoKey;
  v46 = *(_QWORD *)&v45->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v167.fields.currentCryptoKey = v47;
  *(_QWORD *)&v167.fields.fakeValue = v46;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v167, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_178;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       this->fields.svtId,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  this->fields.servantEntity = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v56 = this->fields.userServantEntity;
  if ( !v56 )
    goto LABEL_178;
  v57 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v56->fields.limitCount, 0LL);
  if ( !v57 )
    goto LABEL_178;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v57, svtId, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_178;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_178;
  v59 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.rarity = v59;
  if ( !Instance )
    goto LABEL_178;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_178;
  v60 = *p_userServantEntity;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
  v62 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v164.fields.fakeValue = v61;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v163 = v164;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v163, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isPush = v62 == Instance;
  this->fields.isEnabled = 1;
  if ( !servantEntity )
    goto LABEL_178;
  if ( servantEntity->fields.type == 2 )
  {
    v64 = 1;
LABEL_26:
    this->fields.attribute = v64;
    goto LABEL_28;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL) )
  {
    v64 = 2;
    goto LABEL_26;
  }
  this->fields.attribute = 0;
LABEL_28:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v65 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v65 )
    goto LABEL_178;
  IsChoice = UserServantEntity__IsChoice(v65, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.dragSelectNum = -1;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0LL);
  v67 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v67 )
    goto LABEL_178;
  Instance = UserServantEntity__IsChocolateSvtEquip(v67, 0LL);
  v68 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v68 )
    goto LABEL_178;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v68, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v69 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v70 = *(_OWORD *)&v69->fields.userId.fields.fakeValue;
  v71 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v69->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v164.fields.fakeValue = v70;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v162 = v164;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v162, 0LL);
  v72 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v73 = Instance;
  v75 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v168.fields.currentCryptoKey = v75;
  *(_QWORD *)&v168.fields.fakeValue = v74;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v168, 0LL);
  if ( !v71 )
    goto LABEL_178;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v71, v73, Instance, 0LL);
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0LL);
  v76 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  if ( !v76 )
    goto LABEL_178;
  v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
  *(_OWORD *)&v161.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v161.fields.fakeValue = v77;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v161, 0LL);
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
      v80 = 0;
      while ( 1 )
      {
        if ( v80 >= max_length )
          goto LABEL_179;
        if ( v78 == partyUserEquipList->m_Items[v80] )
          break;
        if ( (int)++v80 >= max_length )
          goto LABEL_62;
      }
      this->fields.partyIndex = v80;
      this->fields.isPartyEquip = 1;
      this->fields.isUse = 1;
    }
LABEL_62:
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_178;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    if ( !Instance )
      goto LABEL_178;
    Instance = *(_QWORD *)(Instance + 32);
    if ( !Instance )
      goto LABEL_178;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B52A5C(0LL, v83);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v87 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v87;
          p_offset += 4;
          if ( v87 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_70:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v84);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        goto LABEL_88;
      v90 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v91 = 0LL;
        v92 = &v90->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v92 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v91;
          v92 += 4;
          if ( v91 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_77;
        }
        v93 = (__int64)&v90->vtable[*v92].method;
      }
      else
      {
LABEL_77:
        v93 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v84);
      }
      v94 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v93)(
                        Enumerator,
                        *(_QWORD *)(v93 + 8));
      if ( !v94 )
        goto LABEL_182;
      v96 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v94 + 300LL) < (unsigned int)v96
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v94 + 200LL) + 8 * v96 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      v97 = v94[4];
      if ( v97 )
      {
        v98 = *(_OWORD *)(v97 + 40);
        *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)(v97 + 24);
        *(_OWORD *)&v164.fields.fakeValue = v98;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v160 = v164;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v160, 0LL) == v78 )
        {
          this->fields.isUseSupportEquip = 1;
LABEL_88:
          v165 = 731;
          v166 = 1;
          v99 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v100 = 0LL;
            v101 = &v99->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
            {
              ++v100;
              v101 += 4;
              if ( v100 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_93;
            }
            v102 = (__int64)&v99->vtable[*v101].method;
          }
          else
          {
LABEL_93:
            v102 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v84);
          }
          (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v102)(
            Enumerator,
            *(_QWORD *)(v102 + 8));
          if ( v165 == 731 )
            v166 = 0;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
          if ( Instance )
          {
            Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
            if ( Instance )
            {
              v139 = *(_QWORD *)(Instance + 24);
              v140 = Instance;
              if ( (int)v139 >= 1 )
              {
                v141 = 0LL;
                while ( 1 )
                {
                  if ( v141 >= (unsigned int)v139 )
                    goto LABEL_179;
                  v142 = *(_QWORD *)(v140 + 32 + 8 * v141);
                  if ( v142 )
                  {
                    v143 = *(_OWORD *)(v142 + 32);
                    *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)(v142 + 16);
                    *(_OWORD *)&v164.fields.fakeValue = v143;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v159 = v164;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v159, 0LL);
                    if ( Instance == v78 )
                      break;
                  }
                  LODWORD(v139) = *(_DWORD *)(v140 + 24);
                  if ( (__int64)++v141 >= (int)v139 )
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
    v114 = (_QWORD *)sub_B52D50(v94);
LABEL_181:
    v94 = (_QWORD *)sub_B52D50(v114);
LABEL_182:
    sub_B52A5C(v94, v95);
  }
  if ( !partyUserServantList )
    goto LABEL_178;
  v81 = partyUserServantList->max_length;
  if ( v81 >= 1 )
  {
    v82 = 0;
    while ( 1 )
    {
      if ( v82 >= v81 )
      {
LABEL_179:
        v156 = sub_B52A88(Instance);
        sub_B52A28(v156, 0LL);
      }
      if ( v78 == partyUserServantList->m_Items[v82] )
        break;
      if ( (int)++v82 >= v81 )
        goto LABEL_95;
    }
    this->fields.partyIndex = v82;
  }
LABEL_95:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_178;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_178;
  v105 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
           (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !v105 )
    sub_B52A5C(0LL, v103);
  while ( 1 )
  {
    v106 = v105->klass;
    if ( *(_WORD *)&v105->klass->_2.bitflags1 )
    {
      v107 = 0LL;
      v108 = &v106->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v108 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v107;
        v108 += 4;
        if ( v107 >= *(unsigned __int16 *)&v105->klass->_2.bitflags1 )
          goto LABEL_103;
      }
      v109 = (__int64)&v106->vtable[*v108].method;
    }
    else
    {
LABEL_103:
      v109 = sub_AEB880(v105, System_Collections_IEnumerator_TypeInfo, 0LL, v104);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v109)(
            v105,
            *(_QWORD *)(v109 + 8)) & 1) == 0 )
      break;
    v110 = v105->klass;
    if ( *(_WORD *)&v105->klass->_2.bitflags1 )
    {
      v111 = 0LL;
      v112 = &v110->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v112 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v111;
        v112 += 4;
        if ( v111 >= *(unsigned __int16 *)&v105->klass->_2.bitflags1 )
          goto LABEL_110;
      }
      v113 = (__int64)&v110->vtable[*v112].method;
    }
    else
    {
LABEL_110:
      v113 = sub_AEB880(v105, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v104);
    }
    v114 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v113)(
                       v105,
                       *(_QWORD *)(v113 + 8));
    if ( !v114 )
      sub_B52A5C(0LL, v115);
    v116 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v114 + 300LL) < (unsigned int)v116
      || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*v114 + 200LL) + 8 * v116 - 8) != UserServantLeaderEntity_TypeInfo )
    {
      goto LABEL_181;
    }
    if ( v114[7] == v78 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v165 = 933;
  v166 = 1;
  v117 = v105->klass;
  if ( *(_WORD *)&v105->klass->_2.bitflags1 )
  {
    v118 = 0LL;
    v119 = &v117->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v119 - 1) != System_IDisposable_TypeInfo )
    {
      ++v118;
      v119 += 4;
      if ( v118 >= *(unsigned __int16 *)&v105->klass->_2.bitflags1 )
        goto LABEL_122;
    }
    v120 = (__int64)&v117->vtable[*v119].method;
  }
  else
  {
LABEL_122:
    v120 = sub_AEB880(v105, System_IDisposable_TypeInfo, 0LL, v104);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v120)(v105, *(_QWORD *)(v120 + 8));
  if ( v165 == 933 )
    v166 = 0;
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  v121 = *(_DWORD *)(Instance + 276);
  v122 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v122 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v122->static_fields->StatusUpAdjustHp * v121;
  if ( !Instance )
    goto LABEL_178;
  this->fields.atkReinforceValue = v122->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_178;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v123 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v123 )
    goto LABEL_178;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v123, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_178;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, 0LL);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_158:
  sub_B52920(
    (BattleServantConfConponent_o *)p_equipCategoryIdList,
    (System_Int32_array **)EquipCategoryIdList,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  this->fields.isFatigueRecovery = 0;
  if ( recoverySvtList )
  {
    v145 = recoverySvtList->max_length;
    if ( v145 >= 1 )
    {
      v146 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v146 >= v145 )
          goto LABEL_179;
        if ( recoverySvtList->m_Items[v146] == v78 )
          break;
        if ( (int)++v146 >= v145 )
          goto LABEL_166;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_166:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v144);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0LL);
  this->fields.amountSortValue = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_178;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_178;
  v148 = *(int *)(Instance + 48);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v148;
  this->fields.sortValue1B = v148;
  if ( !Instance )
    goto LABEL_178;
  if ( !*p_userServantEntity )
    goto LABEL_178;
  rarity = (unsigned int)this->fields.rarity;
  v150 = *(int *)(Instance + 208);
  lv = (*p_userServantEntity)->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0LL);
  v152 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v150 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v152 )
    goto LABEL_178;
  v154 = *(_QWORD *)&v152->fields.svtId.fields.currentCryptoKey;
  v153 = *(_QWORD *)&v152->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v169.fields.currentCryptoKey = v154;
  *(_QWORD *)&v169.fields.fakeValue = v153;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v169, 0LL);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValue2B = (int)Instance;
  if ( !iconLabelInfo1 || (IconLabelInfo__Clear(iconLabelInfo1, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0) )
LABEL_178:
    sub_B52A5C(Instance, v44);
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
    sub_B52A5C(0LL, v5);
  if ( ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL) )
    return WarehouseListViewItem__IsMatchServantEquipFilter(this, sort, v8);
  return WarehouseListViewItem__IsMatchServantFilter(this, sort, v8);
}


bool __fastcall WarehouseListViewItem__IsMatchServantEquipFilter(
        WarehouseListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  Voice_BATTLE_array *RarityFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v14; // x0

  if ( (byte_42B0C72 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_42B0C72 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v5->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_37;
  RarityFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_37;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)RarityFilterKindList, 0LL)
    && !ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL)
    || !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL)
    && !ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.equipCategoryIdList, sort, 0LL) )
  {
    return 0;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)v7->static_fields->ServantEquipTypeFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_37;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                          (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                          (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
    && !ListViewSort__IsMatchServantEquipTypeFilter(sort, this->fields.servantEntity, 0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)v9->static_fields->ServantEquipCombineStatusFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_37;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchServantEquipCombineStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
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
  RarityFilterKindList = (Voice_BATTLE_array *)v11->static_fields->ServantEquipHaveStatusFilterKindList;
  if ( !RarityFilterKindList )
LABEL_37:
    sub_B52A5C(RarityFilterKindList, sort);
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)RarityFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchServantEquipHaveStatusFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          this->fields.isWarehouseServantEquip,
          0LL) )
  {
    return 0;
  }
  RarityFilterKindList = (Voice_BATTLE_array *)sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !RarityFilterKindList )
    goto LABEL_37;
  if ( !RarityFilterKindList->max_length )
  {
    v14 = sub_B52A88(RarityFilterKindList);
    sub_B52A28(v14, 0LL);
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
  FilterKindList_c *v5; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userServantEntity; // x21
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *v19; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v37; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v39; // w0
  __int64 v40; // x0

  if ( (byte_42B0C71 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B52984(&ServantEventBonusFilterController_TypeInfo);
    byte_42B0C71 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_72;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v13->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_72:
    sub_B52A5C(ClassGroupFilterKindList, sort);
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
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
    v19 = this->fields.userServantEntity;
    if ( v19 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v19, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v21 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v21 )
          goto LABEL_72;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v21, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_72;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
    }
    ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_73;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_72;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_73:
      v40 = sub_B52A88(ClassGroupFilterKindList);
      sub_B52A28(v40, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v37 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v39 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v37) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v39 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v39 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_72;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
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
  sub_B52920(
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
    sub_B52A5C(IsLock, v10);
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
  sub_B52920(
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
void __fastcall WarehouseListViewItem__Modify_26449828(
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
    sub_B52A5C(userServantEntity, isFavorite);
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
  int64_t *p_sortValue0; // x23
  int64_t priority; // x8
  EventUpValSetupInfo_o *setupInfo; // x4
  int32_t bonusKind; // w8
  int32_t v9; // w5
  int32_t bonusKind2; // w8
  int32_t *v11; // x8
  int32_t bonusKindId; // w9
  int32_t *p_bonusKindId; // x8
  int32_t bonusKind2Id; // w10
  int32_t *v15; // x9
  int32_t *p_bonusKind2Id; // x8
  System_Int32_array *v17; // x21
  System_Int32_array *OtherEventEquipIdList; // x21
  System_Func_int__bool__o *v19; // x0
  __int64 *v20; // x8
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t svtId; // w22
  ServantFilterMaster_o *v23; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // kr00_16
  bool IsEnableServant; // w0
  System_Int32_array *eventIdList; // x21
  System_Func_T__bool__o *v27; // x22
  int v28; // w21
  const MethodInfo *v29; // x2
  __int64 v30; // x8
  struct UserServantEntity_o *v31; // x8
  __int128 v32; // q1
  struct UserServantEntity_o *v33; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v35; // w21
  bool IsMaterialTd; // w8
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v39; // w1
  struct UserServantEntity_o *v40; // x8
  int32_t adjustHp; // w3
  int32_t hp; // w2
  int32_t v43; // w1
  __int64 v44; // x20
  __int64 v45; // x20
  WarehouseListViewItem_o *v46; // x20
  __int64 v47; // x21
  __int64 v48; // x21
  int32_t FirstOpenEventId; // w20
  __int64 v50; // x21
  __int64 v51; // x21
  int64_t targetId; // x8
  struct UserServantEntity_o *v53; // x8
  IconLabelInfo_o *iconLabelInfo1; // x19
  int64_t rarity; // x8
  struct ServantEntity_o *servantEntity; // x8
  __int64 v57; // x10
  struct ServantEntity_o *v58; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v60; // x8
  int32_t lv; // w20
  IconLabelInfo_o *v62; // x20
  int32_t v63; // w21
  UserServantEntity_o *userServantEntity; // x0
  __int64 v65; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+58h] [xbp-38h] BYREF
  int32_t tdMaxLv[2]; // [xsp+68h] [xbp-28h] BYREF

  v3 = sort;
  v4 = this;
  if ( (byte_42B0C70 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int____68582832);
    sub_B52984(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_WarehouseListViewItem__SetSortValue_b__62_0__);
    sub_B52984(&Method_WarehouseListViewItem__SetSortValue_b__62_1__);
    this = (WarehouseListViewItem_o *)sub_B52984(&WarehouseListViewManager_TypeInfo);
    byte_42B0C70 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  entity = 0LL;
  v4->fields.sortValue0 = 0LL;
  p_sortValue0 = &v4->fields.sortValue0;
  priority = v4->fields.priority;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  v4->fields.sortValue1B = priority;
  v4->fields.isNeedAdjustIconLabelScale = 0;
  if ( !v3 )
    goto LABEL_172;
  if ( !v3->fields.isBonusKind )
    goto LABEL_53;
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_172;
  if ( !setupInfo->fields.isQuestStart )
  {
    bonusKind2 = v3->fields.bonusKind2;
    if ( bonusKind2 == 4 )
    {
      if ( v4->fields.bonusKind == 4 )
      {
        p_bonusKind2Id = &v3->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v3->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        p_bonusKind2Id = &v3->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 4;
      v4->fields.bonusKindId = *p_bonusKind2Id;
      eventIdList = setupInfo->fields.eventIdList;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                (EventBonusFilterMaster_o *)this,
                                eventIdList,
                                0LL);
      v19 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
      v20 = &Method_WarehouseListViewItem__SetSortValue_b__62_1__;
      goto LABEL_47;
    }
    if ( bonusKind2 != 2 )
    {
      if ( bonusKind2 != 1 )
        goto LABEL_53;
      if ( v4->fields.bonusKind == 1 )
      {
        v11 = &v3->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v3->fields.bonusKind2Id )
          goto LABEL_30;
      }
      else
      {
        v11 = &v3->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 1;
      v9 = *v11;
      goto LABEL_50;
    }
    if ( v4->fields.bonusKind == 2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      p_bonusKindId = &v3->fields.bonusKind2Id;
      bonusKind2Id = v3->fields.bonusKind2Id;
LABEL_26:
      if ( bonusKindId == bonusKind2Id )
        goto LABEL_30;
      goto LABEL_37;
    }
    p_bonusKindId = &v3->fields.bonusKind2Id;
LABEL_37:
    v4->fields.bonusKind = 2;
    v4->fields.bonusKindId = *p_bonusKindId;
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
      svtId = v4->fields.svtId;
      v23 = (ServantFilterMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
      sort = *(ListViewSort_o **)&v24.fields.fakeValue;
      this = *(WarehouseListViewItem_o **)&v24.fields.currentCryptoKey;
      if ( v23 )
      {
        IsEnableServant = ServantFilterMaster__IsEnableServant(v23, v24, v4->fields.bonusKindId, 0LL);
        goto LABEL_52;
      }
    }
LABEL_172:
    sub_B52A5C(this, sort);
  }
  bonusKind = v3->fields.bonusKind;
  if ( bonusKind == 2 )
  {
    if ( v4->fields.bonusKind == 2 )
    {
      bonusKindId = v4->fields.bonusKindId;
      p_bonusKindId = &v3->fields.bonusKindId;
      bonusKind2Id = v3->fields.bonusKindId;
      goto LABEL_26;
    }
    p_bonusKindId = &v3->fields.bonusKindId;
    goto LABEL_37;
  }
  if ( bonusKind != 1 )
  {
    if ( v3->fields.bonusKind2 != 4 )
      goto LABEL_53;
    if ( v4->fields.bonusKind != bonusKind )
    {
      v15 = &v3->fields.bonusKindId;
      goto LABEL_33;
    }
    v15 = &v3->fields.bonusKindId;
    if ( v4->fields.bonusKindId != v3->fields.bonusKindId )
    {
LABEL_33:
      v4->fields.bonusKind = bonusKind;
      v4->fields.bonusKindId = *v15;
      v17 = setupInfo->fields.eventIdList;
      this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                (EventBonusFilterMaster_o *)this,
                                v17,
                                0LL);
      v19 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
      v20 = &Method_WarehouseListViewItem__SetSortValue_b__62_0__;
LABEL_47:
      v27 = (System_Func_T__bool__o *)v19;
      System_Func_int__bool____ctor(
        v19,
        (Il2CppObject *)v4,
        *v20,
        (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
      IsEnableServant = BasicHelper__Any_int__27531732(
                          OtherEventEquipIdList,
                          v27,
                          (const MethodInfo_1A419D4 *)Method_BasicHelper_Any_int____68582832);
      goto LABEL_52;
    }
LABEL_30:
    if ( !v4->fields.isEventUpVal )
      goto LABEL_61;
    goto LABEL_53;
  }
  if ( v4->fields.bonusKind == 1 )
    goto LABEL_30;
  v4->fields.bonusKind = 1;
  v9 = v3->fields.bonusKindId;
LABEL_50:
  this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
  v4->fields.bonusKindId = v9;
  if ( !this )
    goto LABEL_172;
  IsEnableServant = UserServantEntity__getEventUpVal_21509172(
                      (UserServantEntity_o *)this,
                      -1,
                      0,
                      0,
                      setupInfo,
                      v9,
                      0,
                      0LL);
LABEL_52:
  v4->fields.isEventUpVal = IsEnableServant;
  if ( !IsEnableServant )
  {
LABEL_61:
    LOBYTE(this) = 0;
    return (char)this;
  }
LABEL_53:
  if ( (((__int64 (__fastcall *)(WarehouseListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
          v4,
          v3,
          v4->klass[1]._1.image) & 1) == 0 )
    goto LABEL_61;
  this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_172;
  v28 = v4->fields.isSwapChoice ^ v4->fields.isChoice;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  *p_sortValue0 = 0LL;
  v4->fields.sortValue0B = 0LL;
  if ( !v3->fields.isSmartSort )
  {
    if ( !((v28 ^ 1) & 1 | !v3->fields.isChoiceSort) )
      *p_sortValue0 = -10LL;
    goto LABEL_71;
  }
  this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
  if ( !this )
    goto LABEL_172;
  if ( ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)this, 0LL) )
  {
    if ( !v4->fields.isPartyEquip )
    {
      if ( !v4->fields.isUseSupportEquip )
        goto LABEL_69;
      goto LABEL_67;
    }
LABEL_65:
    v30 = -20LL;
LABEL_68:
    *p_sortValue0 = v30;
    goto LABEL_69;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_65;
  if ( v4->fields.isUseSupport )
  {
LABEL_67:
    v30 = -30LL;
    goto LABEL_68;
  }
  if ( v4->fields.attribute )
  {
    v30 = -40LL;
    goto LABEL_68;
  }
  if ( v4->fields.isFavorite )
  {
    v30 = -50LL;
    goto LABEL_68;
  }
  if ( v4->fields.isPush )
  {
    v30 = -55LL;
    goto LABEL_68;
  }
  userServantEntity = v4->fields.userServantEntity;
  if ( userServantEntity && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL)
    || v4->fields.isFortification )
  {
    v30 = -10LL;
    goto LABEL_68;
  }
LABEL_69:
  if ( !((v28 ^ 1) & 1 | !v3->fields.isChoiceSort) )
    *(_OWORD *)p_sortValue0 = xmmword_327CEA0;
LABEL_71:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      v31 = v4->fields.userServantEntity;
      if ( !v31 )
        goto LABEL_172;
      v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
      *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v68.fields.fakeValue = v32;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v67 = v68;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v67, 0LL);
      v33 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v33 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v33->fields.createdAt, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      v35 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_172;
      IconLabelInfo__Set_28274368(iconLabelInfo2, 2, v35, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0LL);
      LOBYTE(this) = 1;
      if ( IsMaterialTd )
        v4->fields.isNeedAdjustIconLabelScale = 1;
      return (char)this;
    case 2:
      rarity = v4->fields.rarity;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_129;
    case 3:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      v4->fields.sortValue1 = *(int *)&this->fields.isEventUpVal;
      goto LABEL_158;
    case 4:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      UserServantEntity__getTreasureDeviceInfo_21516452((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(friendship) = tdMaxLv[1];
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_172;
      friendshipMax = tdMaxLv[0];
      v39 = 33;
      goto LABEL_141;
    case 5:
      v40 = v4->fields.userServantEntity;
      if ( !v40 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v40->fields.hp;
      if ( !this )
        goto LABEL_172;
      adjustHp = v40->fields.adjustHp;
      hp = v40->fields.hp;
      v43 = 3;
      goto LABEL_115;
    case 6:
      v53 = v4->fields.userServantEntity;
      if ( !v53 )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v53->fields.atk;
      if ( !this )
        goto LABEL_172;
      adjustHp = v53->fields.adjustAtk;
      hp = v53->fields.atk;
      v43 = 5;
LABEL_115:
      IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v43, hp, adjustHp, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      iconLabelInfo1 = v4->fields.iconLabelInfo2;
      goto LABEL_159;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = servantEntity->fields.cost;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_142;
    case 8:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_129:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_172;
      goto LABEL_158;
    case 0xA:
      friendship = v4->fields.friendship;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v4->fields.friendshipMax;
      v39 = 32;
      goto LABEL_141;
    case 0xE:
      this = (WarehouseListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_136;
      this = (WarehouseListViewItem_o *)v3->fields.manager;
      if ( !this )
        goto LABEL_172;
      v57 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v57
        || (WarehouseListViewManager_c *)this->klass->_2.typeHierarchy[v57 - 1] != WarehouseListViewManager_TypeInfo )
      {
        goto LABEL_172;
      }
      this = (WarehouseListViewItem_o *)WarehouseListViewManager__GetAmountSortValue(
                                          (WarehouseListViewManager_o *)this,
                                          v4->fields.svtId,
                                          v29);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_136:
      v58 = v4->fields.servantEntity;
      if ( !v58 )
        goto LABEL_172;
      collectionNo = v58->fields.collectionNo;
      v60 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v60 )
        goto LABEL_172;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      lv = v60->fields.lv;
      this = (WarehouseListViewItem_o *)v60;
      goto LABEL_160;
    case 0xF:
      friendship = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v39 = 44;
      goto LABEL_141;
    case 0x10:
      friendship = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_172;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v39 = 45;
LABEL_141:
      IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v39, friendship, friendshipMax, 0, 0, 0, 0, 0LL);
LABEL_142:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_172;
      v62 = v4->fields.iconLabelInfo2;
      v63 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v62 )
        goto LABEL_172;
      IconLabelInfo__Set_28274368(v62, 2, v63, (int32_t)this, 0, 0, 0, 0, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_150;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL) )
        goto LABEL_150;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_172;
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL) )
        goto LABEL_162;
LABEL_150:
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_172;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      goto LABEL_162;
    case 0x18:
      v44 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
        sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v45 = **(_QWORD **)(v44 + 192);
      if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
        sub_AEB684(v45);
      this = **(WarehouseListViewItem_o ***)(v45 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0LL);
      if ( !this )
        goto LABEL_172;
      v46 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        targetId = 0x7FFFFFFFFFFFFFFFLL;
LABEL_156:
        v4->fields.sortValue1 = targetId;
        goto LABEL_157;
      }
      v47 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
        sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v48 = **(_QWORD **)(v47 + 192);
      if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
        sub_AEB684(v48);
      this = **(WarehouseListViewItem_o ***)(v48 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v46->fields.sortIndex )
      {
        v65 = sub_B52A88(this);
        sub_B52A28(v65, 0LL);
      }
      if ( !this )
        goto LABEL_172;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v46->fields.sortValue0, 0LL);
      v50 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
        sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v51 = **(_QWORD **)(v50 + 192);
      if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
        sub_AEB684(v51);
      this = **(WarehouseListViewItem_o ***)(v51 + 184);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_172;
      this = (WarehouseListViewItem_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_172;
        targetId = entity->fields.targetId;
        goto LABEL_156;
      }
LABEL_157:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1B = v4->fields.svtId;
      if ( !this )
        goto LABEL_172;
LABEL_158:
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
LABEL_159:
      lv = *(_DWORD *)&this->fields.isEventUpVal;
LABEL_160:
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_172;
      IconLabelInfo__Set_28274368(iconLabelInfo1, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
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
  if ( (byte_42B0C75 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0C75 = 1;
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
    sub_B52A5C(0LL, method);
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
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42B0C74 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B0C74 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18529/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
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
  WarehouseListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_42B0C73 & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B0C73 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_B52A5C(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v6, 0LL);
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
    sub_B52A5C(0LL, value);
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