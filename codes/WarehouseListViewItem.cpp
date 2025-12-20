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
  IconLabelInfo_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  IconLabelInfo_o *v24; // x22
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct UserServantEntity_o **p_userServantEntity; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int64_t Instance; // x0
  __int64 v46; // x1
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x27
  __int64 v49; // x28
  Il2CppObject *Entity; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct UserServantEntity_o *v57; // x8
  ServantLimitMaster_o *v58; // x27
  int32_t svtId; // w28
  const MethodInfo *v60; // x2
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w8
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q1
  __int64 v65; // x23
  struct ServantEntity_o *v66; // x8
  int32_t v67; // w8
  UserServantEntity_o *v68; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v70; // x8
  UserServantEntity_o *v71; // x8
  struct UserServantEntity_o *v72; // x8
  __int128 v73; // q0
  UserServantCollectionMaster_o *v74; // x23
  struct UserServantEntity_o *v75; // x8
  int64_t v76; // x26
  __int64 v77; // x27
  __int64 v78; // x28
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q0
  int64_t v81; // x23
  int max_length; // w8
  int32_t v83; // w9
  int v84; // w8
  int32_t v85; // w9
  __int64 v86; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v89; // x9
  int32_t *p_offset; // x10
  __int64 v91; // x0
  System_Collections_Generic_IEnumerator_T__c *v92; // x8
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x8
  __int128 v99; // q0
  System_Collections_Generic_IEnumerator_T__c *v100; // x8
  __int64 v101; // x9
  int32_t *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x1
  System_Collections_Generic_IEnumerator_T__o *v105; // x24
  System_Collections_Generic_IEnumerator_T__c *v106; // x8
  __int64 v107; // x9
  int32_t *v108; // x10
  __int64 v109; // x0
  System_Collections_Generic_IEnumerator_T__c *v110; // x8
  __int64 v111; // x9
  int32_t *v112; // x10
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  System_Collections_Generic_IEnumerator_T__c *v116; // x8
  __int64 v117; // x9
  int32_t *v118; // x10
  __int64 v119; // x0
  bool IsSettingServant; // w0
  __int64 v121; // x8
  int64_t v122; // x24
  unsigned __int64 v123; // x25
  __int64 v124; // x8
  __int128 v125; // q0
  __int64 v126; // x8
  int64_t v127; // x24
  unsigned __int64 v128; // x25
  __int64 v129; // x8
  __int128 v130; // q0
  int v131; // w25
  BalanceConfig_c *v132; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
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
  struct UserServantEntity_o *v155; // x8
  __int64 rarity; // x21
  __int64 v157; // x22
  __int64 lv; // x23
  struct UserServantEntity_o *v159; // x8
  __int64 v160; // x21
  __int64 v161; // x22
  struct UserServantEntity_o *v162; // x8
  __int128 v163; // q0
  IconLabelInfo_o *iconLabelInfo1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+10h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+30h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+50h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+70h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16

  if ( (byte_4D2A5C6 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantLeaderMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2A5C6 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v26, v27, v28, v29, v30, v31);
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  this->fields.index = index;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.setupInfo = setupinfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v39, v40, v41, v42, v43, v44);
  v47 = this->fields.userServantEntity;
  if ( !v47 )
    goto LABEL_177;
  v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v173.fields.currentCryptoKey = v49;
  *(_QWORD *)&v173.fields.fakeValue = v48;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v173, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_177;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.svtId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v51, v52, v53, v54, v55, v56);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v57 = this->fields.userServantEntity;
  if ( !v57 )
    goto LABEL_177;
  v58 = (ServantLimitMaster_o *)Instance;
  svtId = this->fields.svtId;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v57->fields.limitCount, 0);
  if ( !v58 )
    goto LABEL_177;
  ServantLimitMaster__GetEntity(v58, svtId, Instance, 0);
  WarehouseListViewItem__SetOverwriteStatus(this, userServantEntity, v60);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_177;
  classId = servantEntity->fields.classId;
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isFavorite = isFavorite;
  this->fields.classId = classId;
  if ( !Instance )
    goto LABEL_177;
  *(_WORD *)&this->fields.isEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_177;
  v63 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
  v65 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v172.fields.fakeValue = v64;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v171 = v172;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v171, 0);
  v66 = this->fields.servantEntity;
  this->fields.isPush = v65 == Instance;
  this->fields.isEnabled = 1;
  if ( !v66 )
    goto LABEL_177;
  if ( v66->fields.type == 2 )
  {
    v67 = 1;
LABEL_23:
    this->fields.attribute = v67;
    goto LABEL_25;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0) )
  {
    v67 = 2;
    goto LABEL_23;
  }
  this->fields.attribute = 0;
LABEL_25:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v68 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v68 )
    goto LABEL_177;
  IsChoice = UserServantEntity__IsChoice(v68, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.dragSelectNum = -1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantEntity__IsFriendShipSvtEquip((UserServantEntity_o *)Instance, 0);
  v70 = this->fields.userServantEntity;
  this->fields.isFriendShipSvtEq = Instance & 1;
  if ( !v70 )
    goto LABEL_177;
  Instance = UserServantEntity__IsChocolateSvtEquip(v70, 0);
  v71 = this->fields.userServantEntity;
  this->fields.isChocolateSvtEquip = Instance & 1;
  if ( !v71 )
    goto LABEL_177;
  this->fields.isMaterialTdSvt = UserServantEntity__IsMaterialTd(v71, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v72 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v73 = *(_OWORD *)&v72->fields.userId.fields.fakeValue;
  v74 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&v72->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v172.fields.fakeValue = v73;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v170 = v172;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v170, 0);
  v75 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v76 = Instance;
  v78 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
  v77 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v174.fields.currentCryptoKey = v78;
  *(_QWORD *)&v174.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v174, 0);
  if ( !v74 )
    goto LABEL_177;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v74, v76, Instance, 0);
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantCollectionEntity__getFriendShipRankInfo(
               (UserServantCollectionEntity_o *)Instance,
               &this->fields.friendship,
               &this->fields.friendshipMax,
               0);
  v79 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.partyIndex = 0xFFFFFFFFLL;
  *(_DWORD *)&this->fields.isUseRecommendSupport = 0;
  if ( !v79 )
    goto LABEL_177;
  v80 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
  *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v169.fields.fakeValue = v80;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v169, 0);
  Instance = (int64_t)this->fields.servantEntity;
  *(_QWORD *)&this->fields.hpReinforceValue = 0;
  *(_QWORD *)&this->fields.nowMaxHpReinforceValue = 0;
  if ( !Instance )
    goto LABEL_177;
  Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( partyUserEquipList )
    {
      max_length = partyUserEquipList->max_length;
      if ( max_length >= 1 )
      {
        v83 = 0;
        while ( 1 )
        {
          if ( max_length == v83 )
            goto LABEL_178;
          if ( v81 == partyUserEquipList->m_Items[v83] )
            break;
          if ( max_length == ++v83 )
            goto LABEL_57;
        }
        this->fields.partyIndex = v83;
        this->fields.isPartyEquip = 1;
        this->fields.isUse = 1;
      }
LABEL_57:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
        if ( Instance )
        {
          Instance = *(_QWORD *)(Instance + 40);
          if ( Instance )
          {
            Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                           (System_Collections_ObjectModel_Collection_T__o *)Instance,
                           (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
            if ( !Enumerator )
              sub_1C942F0(0, v86);
            while ( 1 )
            {
              klass = Enumerator->klass;
              v89 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
              if ( *(_WORD *)&Enumerator->klass->_2.rank )
              {
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v89;
                  p_offset += 4;
                  if ( !v89 )
                    goto LABEL_65;
                }
                v91 = (__int64)&klass->vtable[*p_offset];
              }
              else
              {
LABEL_65:
                v91 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v91)(
                      Enumerator,
                      *(_QWORD *)(v91 + 8))
                  & 1) == 0 )
                break;
              v92 = Enumerator->klass;
              v93 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
              if ( *(_WORD *)&Enumerator->klass->_2.rank )
              {
                v94 = &v92->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v94 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
                {
                  --v93;
                  v94 += 4;
                  if ( !v93 )
                    goto LABEL_72;
                }
                v95 = (__int64)&v92->vtable[*v94];
              }
              else
              {
LABEL_72:
                v95 = sub_1C6A420(
                        Enumerator,
                        System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo,
                        0);
              }
              v96 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v95)(
                      Enumerator,
                      *(_QWORD *)(v95 + 8));
              if ( !v96 )
                sub_1C942F0(0, v97);
              v98 = *(_QWORD *)(v96 + 32);
              if ( v98 )
              {
                v99 = *(_OWORD *)(v98 + 40);
                *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)(v98 + 24);
                *(_OWORD *)&v172.fields.fakeValue = v99;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v168 = v172;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v168, 0) == v81 )
                {
                  this->fields.isUseSupportEquip = 1;
                  break;
                }
              }
            }
            v100 = Enumerator->klass;
            v101 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v102 = &v100->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
              {
                --v101;
                v102 += 4;
                if ( !v101 )
                  goto LABEL_84;
              }
              v103 = (__int64)&v100->vtable[*v102];
            }
            else
            {
LABEL_84:
              v103 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v103)(
              Enumerator,
              *(_QWORD *)(v103 + 8));
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
            if ( Instance )
            {
              this->fields.isUseRecommendSupportEquip = UserRecommendSupportMaster__IsSettingServant(
                                                          (UserRecommendSupportMaster_o *)Instance,
                                                          v81,
                                                          1,
                                                          0);
              Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
              if ( Instance )
              {
                this->fields.isUseGrandEquip = UserServantGrandMaster__IsSettingEquip(
                                                 (UserServantGrandMaster_o *)Instance,
                                                 v81,
                                                 0);
                Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
                if ( Instance )
                {
                  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
                  if ( Instance )
                  {
                    v126 = *(_QWORD *)(Instance + 24);
                    v127 = Instance;
                    if ( (int)v126 >= 1 )
                    {
                      v128 = 0;
                      while ( 1 )
                      {
                        if ( v128 >= (unsigned int)v126 )
                          goto LABEL_178;
                        v129 = *(_QWORD *)(v127 + 32 + 8 * v128);
                        if ( v129 )
                        {
                          v130 = *(_OWORD *)(v129 + 32);
                          *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)(v129 + 16);
                          *(_OWORD *)&v172.fields.fakeValue = v130;
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                          v167 = v172;
                          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v167, 0);
                          if ( Instance == v81 )
                            break;
                        }
                        LODWORD(v126) = *(_DWORD *)(v127 + 24);
                        if ( (__int64)++v128 >= (int)v126 )
                          goto LABEL_153;
                      }
                      this->fields.isWarehouseServantEquip = 1;
                    }
LABEL_153:
                    Instance = (int64_t)*p_userServantEntity;
                    if ( *p_userServantEntity )
                    {
                      EquipCategoryIdList = UserServantEntity__GetEquipCategoryIdList(
                                              (UserServantEntity_o *)Instance,
                                              1,
                                              0);
                      p_equipCategoryIdList = &this->fields.equipCategoryIdList;
                      this->fields.equipCategoryIdList = EquipCategoryIdList;
                      goto LABEL_155;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_177:
    sub_1C942F0(Instance, v46);
  }
  if ( !partyUserServantList )
    goto LABEL_177;
  v84 = partyUserServantList->max_length;
  if ( v84 >= 1 )
  {
    v85 = 0;
    while ( 1 )
    {
      if ( v84 == v85 )
LABEL_178:
        sub_1C942F8(Instance);
      if ( v81 == partyUserServantList->m_Items[v85] )
        break;
      if ( v84 == ++v85 )
        goto LABEL_86;
    }
    this->fields.partyIndex = v85;
  }
LABEL_86:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantLeaderMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = *(_QWORD *)(Instance + 40);
  if ( !Instance )
    goto LABEL_177;
  v105 = System_Collections_ObjectModel_Collection_object___GetEnumerator(
           (System_Collections_ObjectModel_Collection_T__o *)Instance,
           (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__GetEnumerator__);
  if ( !v105 )
    sub_1C942F0(0, v104);
  while ( 1 )
  {
    v106 = v105->klass;
    v107 = *(unsigned __int16 *)&v105->klass->_2.rank;
    if ( *(_WORD *)&v105->klass->_2.rank )
    {
      v108 = &v106->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v108 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v107;
        v108 += 4;
        if ( !v107 )
          goto LABEL_94;
      }
      v109 = (__int64)&v106->vtable[*v108];
    }
    else
    {
LABEL_94:
      v109 = sub_1C6A420(v105, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v109)(
            v105,
            *(_QWORD *)(v109 + 8))
        & 1) == 0 )
      break;
    v110 = v105->klass;
    v111 = *(unsigned __int16 *)&v105->klass->_2.rank;
    if ( *(_WORD *)&v105->klass->_2.rank )
    {
      v112 = &v110->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantLeaderEntity__c **)v112 - 1) != System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo )
      {
        --v111;
        v112 += 4;
        if ( !v111 )
          goto LABEL_101;
      }
      v113 = (__int64)&v110->vtable[*v112];
    }
    else
    {
LABEL_101:
      v113 = sub_1C6A420(v105, System_Collections_Generic_IEnumerator_UserServantLeaderEntity__TypeInfo, 0);
    }
    v114 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v113)(
             v105,
             *(_QWORD *)(v113 + 8));
    if ( !v114 )
      sub_1C942F0(0, v115);
    if ( *(_QWORD *)(v114 + 56) == v81 )
    {
      this->fields.isUseSupport = 1;
      break;
    }
  }
  v116 = v105->klass;
  v117 = *(unsigned __int16 *)&v105->klass->_2.rank;
  if ( *(_WORD *)&v105->klass->_2.rank )
  {
    v118 = &v116->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v118 - 1) != System_IDisposable_TypeInfo )
    {
      --v117;
      v118 += 4;
      if ( !v117 )
        goto LABEL_110;
    }
    v119 = (__int64)&v116->vtable[*v118];
  }
  else
  {
LABEL_110:
    v119 = sub_1C6A420(v105, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v119)(v105, *(_QWORD *)(v119 + 8));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  if ( !Instance )
    goto LABEL_177;
  this->fields.isUseRecommendSupport = UserRecommendSupportMaster__IsSettingServant(
                                         (UserRecommendSupportMaster_o *)Instance,
                                         v81,
                                         0,
                                         0);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Instance )
    goto LABEL_177;
  IsSettingServant = UserServantGrandMaster__IsSettingServant((UserServantGrandMaster_o *)Instance, v81, 0);
  this->fields.isWarehouseServant = 0;
  this->fields.isGrandServant = IsSettingServant;
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_177;
  v121 = *(_QWORD *)(Instance + 24);
  v122 = Instance;
  if ( (int)v121 >= 1 )
  {
    v123 = 0;
    while ( 1 )
    {
      if ( v123 >= (unsigned int)v121 )
        goto LABEL_178;
      v124 = *(_QWORD *)(v122 + 32 + 8 * v123);
      if ( v124 )
      {
        v125 = *(_OWORD *)(v124 + 32);
        *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)(v124 + 16);
        *(_OWORD *)&v172.fields.fakeValue = v125;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v166 = v172;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v166, 0);
        if ( Instance == v81 )
          break;
      }
      LODWORD(v121) = *(_DWORD *)(v122 + 24);
      if ( (__int64)++v123 >= (int)v121 )
        goto LABEL_144;
    }
    this->fields.isWarehouseServant = 1;
  }
LABEL_144:
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  v131 = *(_DWORD *)(Instance + 276);
  v132 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v132 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v132->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v131;
  if ( !Instance )
    goto LABEL_177;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_177;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v134 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v134 )
    goto LABEL_177;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v134, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C9403C(
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
    goto LABEL_177;
  EquipCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList((UserServantEntity_o *)Instance, 0, -1, 0);
  p_equipCategoryIdList = &this->fields.tdCategoryIdList;
  this->fields.tdCategoryIdList = EquipCategoryIdList;
LABEL_155:
  sub_1C9403C(
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
          goto LABEL_178;
        if ( recoverySvtList->m_Items[v152] == v81 )
          break;
        if ( (int)++v152 >= v151 )
          goto LABEL_163;
      }
      this->fields.isFatigueRecovery = 1;
    }
  }
LABEL_163:
  UserSvtId = WarehouseListViewItem__get_UserSvtId(this, v150);
  EventFortificationDataLogic__SetFortification(
    &this->fields.isFortification,
    &this->fields.fortificationName,
    &this->fields.fortificationDetailName,
    UserSvtId,
    0);
  this->fields.amountSortValue = -1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_177;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_177;
  v154 = *(int *)(Instance + 52);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields.priority = v154;
  this->fields.sortValue1B = v154;
  if ( !Instance )
    goto LABEL_177;
  v155 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_177;
  rarity = (unsigned int)this->fields.rarity;
  v157 = *(int *)(Instance + 208);
  lv = v155->fields.lv;
  Instance = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Instance, 0);
  v159 = this->fields.userServantEntity;
  this->fields.sortValue2 = (v157 << 16) | (rarity << 48) | (2 * lv) | Instance & 1;
  if ( !v159 )
    goto LABEL_177;
  v161 = *(_QWORD *)&v159->fields.svtId.fields.currentCryptoKey;
  v160 = *(_QWORD *)&v159->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v175.fields.currentCryptoKey = v161;
  *(_QWORD *)&v175.fields.fakeValue = v160;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v175, 0);
  v162 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v162 )
    goto LABEL_177;
  v163 = *(_OWORD *)&v162->fields.id.fields.fakeValue;
  *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&v162->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v172.fields.fakeValue = v163;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v165 = v172;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v165, 0);
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields.sortValueLast = Instance;
  if ( !iconLabelInfo1 )
    goto LABEL_177;
  IconLabelInfo__Clear(iconLabelInfo1, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_177;
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
    sub_1C942F0(0, v5);
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

  if ( (byte_4D2A5C9 & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&ListViewSort_FilterKind___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D2A5C9 = 1;
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
                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                          (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  RarityFilterKindList = (System_Int32Enum_array *)sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !RarityFilterKindList )
LABEL_35:
    sub_1C942F0(RarityFilterKindList, sort);
  if ( !LODWORD(RarityFilterKindList->max_length) )
    sub_1C942F8(RarityFilterKindList);
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
  _BOOL4 isChoice; // w8
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  UserServantEntity_o *v20; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v22; // x8
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

  if ( (byte_4D2A5C8 & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&ListViewSort_FilterKind___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&ServantEventBonusFilterController_TypeInfo);
    byte_4D2A5C8 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_69;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (__int64)v13->static_fields->ServantTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    v20 = this->fields.userServantEntity;
    if ( v20 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v20, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v22 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v22 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
    }
    ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_70:
      sub_1C942F8(ClassGroupFilterKindList);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
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
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_1C942F0(ClassGroupFilterKindList, sort);
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_70;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
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
  ClassGroupFilterKindList = (__int64)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


void WarehouseListViewItem__Modify(
        WarehouseListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x21
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  UserServantEntity_o *IsLock; // x0
  UserServantEntity_o *v14; // x8
  bool IsChoice; // w0

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C9403C(
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
  WarehouseListViewItem__SetOverwriteStatus(this, userServantEntity, v11);
  IsLock = *p_userServantEntity;
  if ( !*p_userServantEntity
    || (IsLock = (UserServantEntity_o *)UserServantEntity__IsLock(IsLock, 0),
        v14 = this->fields.userServantEntity,
        this->fields.isLock = (unsigned __int8)IsLock & 1,
        !v14) )
  {
    sub_1C942F0(IsLock, v12);
  }
  IsChoice = UserServantEntity__IsChoice(v14, 0);
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

  this->fields.userServantEntity = userServantEntity;
  sub_1C9403C(
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
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListViewItem__Modify_39128748(
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
    sub_1C942F0(userServantEntity, isFavorite);
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
    sub_1C942F0(this, userServantEntity);
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
  bool EventUpVal_43954668; // w0
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
  const MethodInfo *v35; // x2
  long double v36; // q0
  __int64 v37; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v39; // q1
  struct UserServantEntity_o *v40; // x8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t v42; // w21
  bool IsMaterialTd; // w8
  int64_t hp; // x20
  IconLabelInfo_o *v45; // x21
  int64_t friendship; // x2
  int32_t friendshipMax; // w3
  int32_t v48; // w1
  __int64 v49; // x0
  __int64 v50; // x0
  long double v51; // q0
  WarehouseListViewItem_o *v52; // x20
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t FirstOpenEventId; // w20
  long double v56; // q0
  __int64 v57; // x8
  __int64 v58; // x0
  __int64 monitor; // x8
  int64_t rarity; // x8
  int64_t v61; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t atk; // x20
  IconLabelInfo_o *v64; // x21
  IconLabelInfo_o *v65; // x19
  int64_t cost; // x2
  __int64 naturalAligment; // x10
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v70; // x8
  int32_t lv; // w20
  IconLabelInfo_o *v72; // x20
  int32_t v73; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-60h]
  Il2CppObject *entity; // [xsp+50h] [xbp-40h] BYREF
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF

  v3 = sort;
  v4 = this;
  if ( (byte_4D2A5C7 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C94098(&Method_BasicHelper_Any_int____79047624);
    sub_1C94098(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_WarehouseListViewItem__SetSortValue_b__70_0__);
    sub_1C94098(&Method_WarehouseListViewItem__SetSortValue_b__70_1__);
    sub_1C94098(&Method_WarehouseListViewItem__SetSortValue_b__70_2__);
    sub_1C94098(&Method_WarehouseListViewItem__SetSortValue_b__70_3__);
    this = (WarehouseListViewItem_o *)sub_1C94098(&WarehouseListViewManager_TypeInfo);
    byte_4D2A5C7 = 1;
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_209;
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
          goto LABEL_209;
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          v18 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v18,
            (Il2CppObject *)v4,
            Method_WarehouseListViewItem__SetSortValue_b__70_2__,
            0);
          v19 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                  (System_Func_T__bool__o *)v18,
                  (const MethodInfo_3185468 *)Method_BasicHelper_Any_EventGroupEntity___);
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
        this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_209;
        this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
        if ( !this )
          goto LABEL_209;
        OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList(
                                  (EventBonusFilterMaster_o *)this,
                                  eventIdList,
                                  0);
        v26 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
        v27 = &Method_WarehouseListViewItem__SetSortValue_b__70_3__;
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
      goto LABEL_209;
    EventUpVal_43954668 = UserServantEntity__getEventUpVal_43954668(
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
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_209;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    svtId = v4->fields.svtId;
    v30 = (ServantFilterMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
    sort = *(ListViewSort_o **)&v31.fields.fakeValue;
    this = *(WarehouseListViewItem_o **)&v31.fields.currentCryptoKey;
    if ( !v30 )
      goto LABEL_209;
    EventUpVal_43954668 = ServantFilterMaster__IsEnableServant(v30, v31, v4->fields.bonusKindId, 0);
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
      this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( this )
      {
        v22 = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
        this = (WarehouseListViewItem_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v22, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v22 )
            goto LABEL_209;
          if ( v22->fields._size >= 2 )
          {
            v23 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v23,
              (Il2CppObject *)v4,
              Method_WarehouseListViewItem__SetSortValue_b__70_0__,
              0);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)v22,
                                        (System_Func_T__bool__o *)v23,
                                        (const MethodInfo_3185468 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_59;
      }
LABEL_209:
      sub_1C942F0(this, sort);
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
    this = (WarehouseListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_209;
    this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    if ( !this )
      goto LABEL_209;
    OtherEventEquipIdList = EventBonusFilterMaster__GetOtherEventEquipIdList((EventBonusFilterMaster_o *)this, v24, 0);
    v26 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    v27 = &Method_WarehouseListViewItem__SetSortValue_b__70_1__;
LABEL_76:
    v33 = (System_Func_T__bool__o *)v26;
    System_Func_int__bool____ctor(v26, (Il2CppObject *)v4, *v27, 0);
    EventUpVal_43954668 = BasicHelper__Any_int__51925480(
                            OtherEventEquipIdList,
                            v33,
                            (const MethodInfo_31851E8 *)Method_BasicHelper_Any_int____79047624);
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
    this = (WarehouseListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
    if ( !this )
      goto LABEL_209;
    EventUpVal_43954668 = EventCampaignMaster__IsEnableServant(
                            (EventCampaignMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0);
  }
LABEL_82:
  v4->fields.isEventUpVal = EventUpVal_43954668;
  if ( !EventUpVal_43954668 )
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
    goto LABEL_209;
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
    goto LABEL_209;
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
    v37 = -20;
LABEL_109:
    *p_sortValue0 = v37;
    goto LABEL_110;
  }
  if ( (v4->fields.partyIndex & 0x80000000) == 0 )
    goto LABEL_100;
  if ( v4->fields.isGrandServant )
  {
LABEL_102:
    v37 = -30;
    goto LABEL_109;
  }
  if ( v4->fields.isUseSupport )
  {
LABEL_104:
    v37 = -40;
    goto LABEL_109;
  }
  if ( v4->fields.isUseRecommendSupport )
  {
    v37 = -45;
    goto LABEL_109;
  }
  if ( v4->fields.attribute )
  {
LABEL_108:
    v37 = -50;
    goto LABEL_109;
  }
  if ( v4->fields.isFavorite )
  {
    v37 = -60;
    goto LABEL_109;
  }
  if ( v4->fields.isPush )
  {
    v37 = -65;
    goto LABEL_109;
  }
  if ( WarehouseListViewItem__get_IsProtected(v4, (const MethodInfo *)sort) || v4->fields.isFortification )
  {
    v37 = -10;
    goto LABEL_109;
  }
LABEL_110:
  if ( isChoice && v3->fields.isChoiceSort )
  {
    v36 = *(long double *)&xmmword_CFE6B0;
    *(_OWORD *)p_sortValue0 = xmmword_CFE6B0;
  }
LABEL_112:
  this = (WarehouseListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_209;
      v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v76.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v75 = v76;
      this = (WarehouseListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v75, 0);
      v40 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v40 )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v40->fields.createdAt, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      v42 = *(_DWORD *)&this->fields.isSwapLock;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_209;
      IconLabelInfo__Set_41670428(iconLabelInfo2, 2, v42, (int32_t)this, 0, 0, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)this, 0);
      LOBYTE(this) = 1;
      if ( IsMaterialTd )
        v4->fields.isNeedAdjustIconLabelScale = 1;
      return (char)this;
    case 2:
      rarity = v4->fields.rarity;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_167;
    case 3:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v61 = *(int *)&this->fields.isSwapLock;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v61;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_209;
      IconLabelInfo__Set_41670428(iconLabelInfo1, 2, v61, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_200;
    case 4:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      UserServantEntity__getTreasureDeviceInfo_43961964((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(friendship) = tdMaxLv[1];
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_209;
      friendshipMax = tdMaxLv[0];
      v48 = 33;
      goto LABEL_181;
    case 5:
      hp = v4->fields.hp;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_209;
      v45 = v4->fields.iconLabelInfo1;
      this = (WarehouseListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v45 )
        goto LABEL_209;
      IconLabelInfo__Set_41670428(v45, 3, hp, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_162;
    case 6:
      atk = v4->fields.atk;
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = atk;
      if ( !this )
        goto LABEL_209;
      v64 = v4->fields.iconLabelInfo1;
      this = (WarehouseListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      if ( !v64 )
        goto LABEL_209;
      IconLabelInfo__Set_41670428(v64, 5, atk, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_162:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v65 = v4->fields.iconLabelInfo2;
      goto LABEL_197;
    case 7:
      cost = v4->fields.cost;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Set_41670428((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
      goto LABEL_182;
    case 8:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_167:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_209;
      goto LABEL_196;
    case 0xA:
      friendship = v4->fields.friendship;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.friendshipMax;
      v48 = 32;
      goto LABEL_181;
    case 0xE:
      this = (WarehouseListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_176;
      this = (WarehouseListViewItem_o *)v3->fields.manager;
      if ( !this )
        goto LABEL_209;
      naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (WarehouseListViewManager_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
      {
        goto LABEL_209;
      }
      this = (WarehouseListViewItem_o *)WarehouseListViewManager__GetAmountSortValue(
                                          (WarehouseListViewManager_o *)this,
                                          v4->fields.svtId,
                                          v35);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_176:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_209;
      collectionNo = servantEntity->fields.collectionNo;
      v70 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v70 )
        goto LABEL_209;
      v65 = v4->fields.iconLabelInfo1;
      lv = v70->fields.lv;
      this = (WarehouseListViewItem_o *)v70;
      goto LABEL_198;
    case 0xF:
      friendship = v4->fields.hpReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v48 = 44;
      goto LABEL_181;
    case 0x10:
      friendship = v4->fields.atkReinforceValue;
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = friendship;
      if ( !this )
        goto LABEL_209;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v48 = 45;
LABEL_181:
      IconLabelInfo__Set_41670428((IconLabelInfo_o *)this, v48, friendship, friendshipMax, 0, 0, 0, 0, 0, 0);
LABEL_182:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_209;
      v72 = v4->fields.iconLabelInfo2;
      v73 = *(_DWORD *)&this->fields.isSwapLock;
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v72 )
        goto LABEL_209;
      IconLabelInfo__Set_41670428(v72, 2, v73, (int32_t)this, 0, 0, 0, 0, 0, 0);
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
        goto LABEL_190;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0) )
        goto LABEL_190;
      this = (WarehouseListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_209;
      if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0) )
        goto LABEL_200;
LABEL_190:
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      this = (WarehouseListViewItem_o *)v4->fields.iconLabelInfo2;
      if ( !this )
        goto LABEL_209;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      goto LABEL_200;
    case 0x18:
      v49 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
        v49 = sub_1C6A12C(v36);
      v50 = *(_QWORD *)(*(_QWORD *)(v49 + 192) + 16LL);
      if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
        v50 = sub_1C6A12C(v36);
      this = **(WarehouseListViewItem_o ***)(v50 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)EventBonusFilterMaster__GetEventIdListBySvtId(
                                          (EventBonusFilterMaster_o *)this,
                                          v4->fields.svtId,
                                          0);
      if ( !this )
        goto LABEL_209;
      v52 = this;
      if ( !*(_QWORD *)&this->fields.sortIndex )
      {
        monitor = 0x7FFFFFFFFFFFFFFFLL;
LABEL_194:
        v4->fields.sortValue1 = monitor;
        goto LABEL_195;
      }
      v53 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
        v53 = sub_1C6A12C(v51);
      v54 = *(_QWORD *)(*(_QWORD *)(v53 + 192) + 16LL);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1C6A12C(v51);
      this = **(WarehouseListViewItem_o ***)(v54 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventGroupMaster___);
      if ( !v52->fields.sortIndex )
        sub_1C942F8(this);
      if ( !this )
        goto LABEL_209;
      FirstOpenEventId = EventGroupMaster__GetFirstOpenEventId((EventGroupMaster_o *)this, v52->fields.sortValue0, 0);
      v57 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
        v57 = sub_1C6A12C(v56);
      v58 = *(_QWORD *)(*(_QWORD *)(v57 + 192) + 16LL);
      if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
        v58 = sub_1C6A12C(v56);
      this = **(WarehouseListViewItem_o ***)(v58 + 184);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_209;
      this = (WarehouseListViewItem_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          FirstOpenEventId,
                                          (const MethodInfo_345B50C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_209;
        monitor = (__int64)entity[5].monitor;
        goto LABEL_194;
      }
LABEL_195:
      this = (WarehouseListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1B = v4->fields.svtId;
      if ( !this )
        goto LABEL_209;
LABEL_196:
      v65 = v4->fields.iconLabelInfo1;
LABEL_197:
      lv = *(_DWORD *)&this->fields.isSwapLock;
LABEL_198:
      this = (WarehouseListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v65 )
        goto LABEL_209;
      IconLabelInfo__Set_41670428(v65, 2, lv, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_200:
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


bool WarehouseListViewItem___SetSortValue_b__70_0(
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

  if ( (byte_4D2A5CD & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A5CD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_1C942F0(Master_object, v6);
  return UserServantEntity__getEventUpVal_43954668(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


bool WarehouseListViewItem___SetSortValue_b__70_1(WarehouseListViewItem_o *this, int32_t x, const MethodInfo *method)
{
  return this->fields.svtId == x;
}


bool WarehouseListViewItem___SetSortValue_b__70_2(
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

  if ( (byte_4D2A5CE & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A5CE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCampaignMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !entity || !Master_object )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(Master_object, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_1C942F0(Master_object, v6);
  return UserServantEntity__getEventUpVal_43954668(
           (UserServantEntity_o *)Master_object,
           -1,
           0,
           0,
           this->fields.setupInfo,
           entity->fields.eventId,
           0,
           0);
}


bool WarehouseListViewItem___SetSortValue_b__70_3(WarehouseListViewItem_o *this, int32_t x, const MethodInfo *method)
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


System_String_o *WarehouseListViewItem__get_ImageName(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A5CC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A5CC = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(0, v5);
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


System_String_o *WarehouseListViewItem__get_NameText(WarehouseListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4D2A5CB & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&StringLiteral_19212/*"error"*/);
    byte_4D2A5CB = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19212/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v9, 0);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0, 0);
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
  if ( (byte_4D2A5CA & 1) == 0 )
  {
    this = (WarehouseListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2A5CA = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C942F0(this, method);
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v6, 0);
}


void WarehouseListViewItem__set_DragSelectNum(WarehouseListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.dragSelectNum = value;
}


void WarehouseListViewItem__set_IsDragSelect(WarehouseListViewItem_o *this, bool value, const MethodInfo *method)
{
  if ( !this )
    sub_1C942F0(0, value);
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