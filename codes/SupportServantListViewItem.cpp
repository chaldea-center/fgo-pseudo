void SupportServantListViewItem___ctor(
        SupportServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        SupportServantData_array *supportServantData,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        bool isFixMainDeck,
        bool isFixEventDeck,
        const MethodInfo *method)
{
  IconLabelInfo_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  IconLabelInfo_o *v24; // x28
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UserServantEntity_o **p_userServantEntity; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int64_t Instance; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct SupportServantData_o *v33; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UserServantEntity_o *v37; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v39; // x28
  __int64 v40; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x27
  Il2CppObject *Entity; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x26
  struct UserServantEntity_o *v48; // x8
  int32_t v49; // w27
  const MethodInfo *v50; // x2
  struct ServantEntity_o *servantEntity; // x8
  UserServantEntity_o *v52; // x8
  __int128 v53; // q1
  UserServantCollectionMaster_o *v54; // x25
  int64_t v55; // x26
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct UserServantEntity_o *v62; // x8
  __int128 v63; // q0
  SupportServantData_o *v64; // x8
  int64_t v65; // x24
  UserServantEntity_o *v66; // x8
  UserServantEntity_o *v67; // x8
  UserServantEntity_o *v68; // x8
  ServantEntity_o *v69; // x8
  bool v70; // w8
  int64_t Equip; // x0
  const MethodInfo *v72; // x5
  int64_t v73; // x23
  Il2CppObject *v74; // x24
  UserServantEntity_o *v75; // x8
  PartyOrganizationUtility_o *v76; // x23
  __int64 v77; // x25
  __int64 v78; // x26
  int32_t v79; // w25
  int32_t v80; // w26
  bool v81; // w0
  UserServantEntity_o *v82; // x8
  __int128 v83; // q0
  __int64 v84; // x22
  bool v85; // zf
  bool v86; // w8
  UserServantEntity_o *v87; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int v94; // w22
  BalanceConfig_c *v95; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v97; // x8
  struct ServantEntity_o *v98; // x9
  UserServantEntity_o *v99; // x8
  __int64 v100; // x21
  __int64 v101; // x22
  struct UserServantEntity_o *v102; // x8
  __int128 v103; // q0
  int64_t v104; // x8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-130h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+20h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+60h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+A0h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+CCh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+D0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+DCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_4C3F747 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3F747 = 1;
  }
  friendshipRank = 0;
  skillName = 0;
  actMaxRarity = 0;
  v21 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0);
  this->fields.iconLabelInfo1 = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v25, v26);
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v28, v29);
  if ( !supportServantData )
    goto LABEL_66;
  if ( LODWORD(supportServantData->max_length) <= nowDeckNum )
    sub_1C372BC(Instance);
  v33 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v33;
  p_supportServantData = &this->fields.supportServantData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.supportServantData, (int32_t)v33, v31, v32);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v35, v36);
  v37 = this->fields.userServantEntity;
  if ( !v37 )
    goto LABEL_66;
  this->fields.svtId = v37->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v115.fields.currentCryptoKey = v40;
  *(_QWORD *)&v115.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v115, 0);
  if ( !v41 )
    goto LABEL_66;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v41,
             Instance,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v43, v44);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v45,
    v46);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v47 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(this->fields.svtId, 0);
  v48 = this->fields.userServantEntity;
  if ( !v48 )
    goto LABEL_66;
  v49 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v48->fields.limitCount, 0);
  if ( !v47 )
    goto LABEL_66;
  ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v47, v49, Instance, 0);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v50);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_66;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v52 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v53 = *(_OWORD *)&v52->fields.userId.fields.fakeValue;
  v54 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v52->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v53;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v110 = v111;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v110, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(this->fields.svtId, 0);
  if ( !v54 )
    goto LABEL_66;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v54, v55, Instance, 0);
  if ( !Instance )
    goto LABEL_66;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0);
  this->fields.isSame = 0;
  this->fields.equipUserServantEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v56, v57);
  this->fields.equipServantEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v58, v59);
  this->fields.equipIdList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v60, v61);
  v62 = this->fields.userServantEntity;
  if ( !v62 )
    goto LABEL_66;
  v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v63;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v109, 0);
  v64 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_66;
  v65 = Instance;
  Instance = SupportServantData__getMember(v64, classPos, 0);
  v66 = this->fields.userServantEntity;
  this->fields.isBase = v65 == Instance;
  if ( !v66 )
    goto LABEL_66;
  Instance = UserServantEntity__IsLock(v66, 0);
  v67 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v67 )
    goto LABEL_66;
  Instance = UserServantEntity__IsChoice(v67, 0);
  v68 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v68 )
    goto LABEL_66;
  Instance = UserServantEntity__IsEventJoin(v68, 0);
  v69 = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v69 )
    goto LABEL_66;
  v70 = ServantEntity__checkIsHeroineSvt(v69, 0);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v70;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_66;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, 0);
  if ( Equip < 1 )
    goto LABEL_37;
  v73 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_66;
  v74 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v73,
          (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v75 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v76 = (PartyOrganizationUtility_o *)Instance;
  v78 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
  v77 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v116.fields.currentCryptoKey = v78;
  *(_QWORD *)&v116.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v116, 0);
  if ( !*p_userServantEntity
    || (v79 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0), !v74)
    || (v80 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v74[5],
                     0),
        !v76) )
  {
LABEL_66:
    sub_1C372B4(Instance);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v76,
                                   &skillName,
                                   &actMaxRarity,
                                   v79,
                                   v80,
                                   Instance,
                                   -1,
                                   0);
LABEL_37:
  this->fields.isUseInSet = 0;
  if ( !isFixMainDeck
    || (v81 = SupportServantListViewItem__CheckUseInSet(
                this,
                &this->fields.useSet,
                fixMainDeckIds,
                nowDeckId,
                supportServantData,
                v72),
        !(this->fields.isUseInSet = v81)) )
  {
    if ( isFixEventDeck )
      this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                  this,
                                  &this->fields.useSet,
                                  fixEventDeckIds,
                                  nowDeckId,
                                  supportServantData,
                                  v72);
  }
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_66;
  v82 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v83 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
  v84 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v83;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v108 = v111;
  v85 = v84 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v108, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  v86 = v85;
  this->fields.isPush = v86;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_66;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v87 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v87 )
    goto LABEL_66;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v87, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v89, v90);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tdCategoryIdList, (int32_t)TreasureDeviceCategoryIdList, v92, v93);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  v94 = *(_DWORD *)(Instance + 276);
  v95 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v95 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v95->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v94;
  if ( !Instance )
    goto LABEL_66;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_66;
  v97 = *(int *)(Instance + 52);
  v98 = this->fields.servantEntity;
  this->fields.priority = v97;
  this->fields.sortValue1B = v97;
  if ( !v98 )
    goto LABEL_66;
  v99 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  this->fields.sortValue2 = ((__int64)v98->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v99->fields.lv;
  v101 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
  v100 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v117.fields.currentCryptoKey = v101;
  *(_QWORD *)&v117.fields.fakeValue = v100;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v117, 0);
  v102 = this->fields.userServantEntity;
  this->fields.sortValue2B = (int)Instance;
  if ( !v102 )
    goto LABEL_66;
  v103 = *(_OWORD *)&v102->fields.id.fields.fakeValue;
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v102->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v103;
  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v107, 0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValueLast = v104;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_66;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_66;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


bool SupportServantListViewItem__CheckUseInSet(
        SupportServantListViewItem_o *this,
        int32_t *setNo,
        System_Int32_array *fixDeckIds,
        int32_t nowDeckId,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v9; // x23
  il2cpp_array_size_t max_length; // x8
  bool v11; // w19
  unsigned __int64 v12; // x28
  char *v13; // x22
  int v14; // w8
  int32_t *v15; // x22
  int v16; // t1
  int32_t i; // w24
  unsigned int v18; // w8
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w27
  __int64 v21; // x25
  __int64 v22; // x26
  int32_t *v24; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v9 = this;
  if ( (byte_4C3F748 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3F748 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_1C372B4(this);
  max_length = fixDeckIds->max_length;
  v11 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v24 = setNo;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        goto LABEL_27;
      v13 = (char *)fixDeckIds + 4 * v12;
      v16 = *((_DWORD *)v13 + 8);
      v15 = (int32_t *)(v13 + 32);
      v14 = v16;
      if ( v16 != nowDeckId && v14 >= 1 )
        break;
LABEL_22:
      LODWORD(max_length) = fixDeckIds->max_length;
      v11 = (__int64)++v12 < (int)max_length;
      if ( (__int64)v12 >= (int)max_length )
        return v11;
    }
    for ( i = 0; ; ++i )
    {
      this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&this->fields.atk + 180LL) )
        goto LABEL_22;
      if ( v12 >= LODWORD(fixDeckIds->max_length) )
        goto LABEL_27;
      if ( !supportServantData )
        goto LABEL_28;
      v18 = *v15 - 1;
      if ( v18 >= LODWORD(supportServantData->max_length) )
        goto LABEL_27;
      this = (SupportServantListViewItem_o *)supportServantData->m_Items[v18];
      if ( !this )
        goto LABEL_28;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity((SupportServantData_o *)this, i, 0);
      if ( UserServantLeaderEntity )
      {
        svtId = UserServantLeaderEntity->fields.svtId;
        v22 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = v22;
        *(_QWORD *)&v26.fields.fakeValue = v21;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                 v26,
                                                 0);
        if ( svtId == (_DWORD)this )
          break;
      }
    }
    if ( (unsigned int)v12 >= LODWORD(fixDeckIds->max_length) )
LABEL_27:
      sub_1C372BC(this);
    *v24 = *v15;
  }
  return v11;
}


void SupportServantListViewItem__Finalize(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_Int64_array *SupportServantListViewItem__GetEquipList(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v4; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v5; // x8
  int64_t v6; // x20
  unsigned __int64 v7; // x21
  int64_t v8; // x23
  __int64 v9; // x24
  unsigned __int64 max_length_low; // x9
  _OWORD *v11; // x8
  __int128 v12; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-60h]

  if ( (byte_4C3F74E & 1) == 0 )
  {
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3F74E = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v4 = sub_1C37100(long___TypeInfo, LODWORD(equipIdList->max_length));
  v5 = this->fields.equipIdList;
  if ( !v5 )
LABEL_13:
    sub_1C372B4(v4);
  v6 = v4;
  v7 = 0;
  v8 = v4 + 32;
  v9 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v5->max_length);
    if ( (__int64)v7 >= (int)max_length_low )
      return (System_Int64_array *)v6;
    if ( v7 >= max_length_low )
      goto LABEL_16;
    v11 = (_OWORD *)((char *)v5 + v9);
    v12 = v11[1];
    *(_OWORD *)&v15.fields.currentCryptoKey = *v11;
    *(_OWORD *)&v15.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v14, 0);
    if ( v6 )
    {
      if ( v7 >= *(unsigned int *)(v6 + 24) )
LABEL_16:
        sub_1C372BC(v4);
      *(_QWORD *)(v8 + 8 * v7) = v4;
      v5 = this->fields.equipIdList;
      ++v7;
      v9 += 32;
      if ( v5 )
        continue;
    }
    goto LABEL_13;
  }
}


int32_t SupportServantListViewItem__GetFriendPointBonus(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  SupportServantListViewItem_o *v2; // x19
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v4; // w20
  __int64 v5; // x24
  int max_length; // w9
  unsigned int v7; // w25
  __int64 v8; // x8
  System_Int32_array *v9; // x21
  int32_t SvtId; // w0
  __int64 v11; // x9
  __int64 v12; // x10
  _BOOL4 v13; // w10
  int32_t v14; // w21

  v2 = this;
  if ( (byte_4C3F755 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    this = (SupportServantListViewItem_o *)sub_1C37058(&System_Math_TypeInfo);
    byte_4C3F755 = 1;
  }
  eventFriendPoints = v2->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v4 = -1;
  v5 = 4;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      return v4;
    if ( v7 >= max_length )
      goto LABEL_22;
    v8 = *((_QWORD *)&eventFriendPoints->obj.klass + v5);
    if ( v8 )
    {
      v9 = *(System_Int32_array **)(v8 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v2, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v9,
                                               SvtId,
                                               (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v7 >= LODWORD(eventFriendPoints->max_length) )
LABEL_22:
          sub_1C372BC(this);
        v11 = *((_QWORD *)&eventFriendPoints->obj.klass + v5);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 40);
          if ( v12 )
            v13 = *(_DWORD *)(v12 + 24) == 0;
          else
            v13 = 1;
          if ( v13 || (int)this >= 0 )
          {
            v14 = *(_DWORD *)(v11 + 48);
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            this = (SupportServantListViewItem_o *)System_Math__Max_65085088(v4, v14, 0);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v4 = (int)this;
          }
          ++v5;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_1C372B4(this);
  }
}


bool SupportServantListViewItem__GetNpInfo(
        SupportServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3F754 & 1) == 0 )
  {
    sub_1C37058(&TreasureDvcInfo_TypeInfo);
    byte_4C3F754 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C372A4(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


bool SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  ServantClassMaster_o *Master_object; // x0

  if ( (byte_4C3F74B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C3F74B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(Master_object, 0);
      if ( Master_object )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_object,
                 this->fields.classId,
                 (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_11:
    sub_1C372B4(Master_object);
  }
  if ( !Master_object )
    goto LABEL_11;
  return ServantClassMaster__getSupportGroupType(Master_object, this->fields.classId, 0) == classType;
}


bool SupportServantListViewItem__IsMatchServantFilter(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v4; // x20
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  int32_t seed; // w1
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  UserServantEntity_o *userServantEntity; // x21
  _BOOL4 isChoice; // w8
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x21
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x0
  FilterKindList_c *v21; // x0
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x0
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x0
  UserServantEntity_o *v26; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v28; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v36; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v38; // w0

  v4 = this;
  if ( (byte_4C3F74C & 1) == 0 )
  {
    sub_1C37058(&FilterKindList_TypeInfo);
    sub_1C37058(&ListViewSort_FilterKind___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C37058(&ServantEventBonusFilterController_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_1C37058(&SupportServantListViewManager_TypeInfo);
    byte_4C3F74C = 1;
  }
  if ( !sort )
    goto LABEL_84;
  manager = sort->fields.manager;
  if ( !manager )
    goto LABEL_84;
  naturalAligment = SupportServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_84;
  }
  seed = (int32_t)manager[1].fields.seed;
  if ( (unsigned int)(seed - 1) < 7 )
  {
    if ( !SupportServantListViewItem__IsMatchClass(v4, seed, method) )
      return 0;
    goto LABEL_9;
  }
  if ( seed != 8 )
  {
    v22 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v22 = FilterKindList_TypeInfo;
    }
    this = (SupportServantListViewItem_o *)v22->static_fields->ClassGroupFilterKindList;
    if ( !this )
      goto LABEL_84;
    v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)this,
                                             (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0) )
    {
      v24 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v24 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v24->static_fields->ClassFilterKindList;
      if ( !this )
        goto LABEL_84;
      goto LABEL_61;
    }
LABEL_78:
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0) )
      return 0;
    goto LABEL_9;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, 8, method) )
    return 0;
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v17->static_fields->ClassGroupFilterKindList;
  if ( !this )
    goto LABEL_84;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0) )
    goto LABEL_78;
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v19->static_fields->ClassExtra1InShielderFilterKindList;
  if ( !this )
    goto LABEL_84;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0) )
    goto LABEL_62;
  v21 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v21->static_fields->ClassExtra2FilterKindList;
  if ( !this )
    goto LABEL_84;
LABEL_61:
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0) )
  {
LABEL_62:
    if ( !ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0) )
      return 0;
  }
LABEL_9:
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v8->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_84;
  v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v10 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v10 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v10->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_84;
  v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userServantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    userServantEntity = v4->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    v26 = v4->fields.userServantEntity;
    if ( v26 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v26, 0, 0) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_84;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0);
        v28 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v28 )
          goto LABEL_84;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v28, -1, -1, 0);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v30, v31);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_84;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         -1,
                                         0);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v33,
          v34);
      }
    }
    this = (SupportServantListViewItem_o *)sub_1C37100(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !this )
      goto LABEL_84;
    if ( !this->fields.sortIndex )
      goto LABEL_85;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0);
    this = (SupportServantListViewItem_o *)sub_1C37100(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !this )
      goto LABEL_84;
    if ( !this->fields.sortIndex )
LABEL_85:
      sub_1C372BC(this);
    LODWORD(this->fields.sortValue0) = 51;
    v36 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              sort,
                              0);
    v38 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v36) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v38 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v38 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, v4->fields.userServantEntity, v4->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, v4->fields.userServantEntity, v4->fields.servantEntity, 0) )
  {
    return 0;
  }
  this = (SupportServantListViewItem_o *)sub_1C37100(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !this )
LABEL_84:
    sub_1C372B4(this);
  if ( !this->fields.sortIndex )
    goto LABEL_85;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !v4->fields.isChoice;
    if ( !v4->fields.isSwapChoice )
      isChoice = v4->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v14->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_84;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v15, 0)
      || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0);
}


void SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  CGThumbnailListItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_4C3F749 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F749 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (CGThumbnailListItem_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_11;
    byval_arg = klass->_1.byval_arg;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v12 = v13;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v12, 0);
    if ( !v8 )
LABEL_11:
      sub_1C372B4(Instance);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v8,
               (int64_t)Instance,
               (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (CGThumbnailListItem_c *)Entity;
    sub_1C36FFC(p_userServantEntity, (int32_t)Entity, v10, v11);
  }
}


void SupportServantListViewItem__ModifyChoiceItem(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C372B4(0);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
}


void SupportServantListViewItem__ModifyItem(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UserServantEntity_o **p_userServantEntity; // x21
  const MethodInfo *v7; // x2

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  if ( !*p_userServantEntity )
    sub_1C372B4(0);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v7);
}


void SupportServantListViewItem__ModifyLockItem(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C372B4(0);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void SupportServantListViewItem__Modify_35830880(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  SupportServantListViewItem__ModifyItem(this, userServantEntity, method);
  SupportServantListViewItem__ModifyLockItem(this, v4);
  SupportServantListViewItem__ModifyChoiceItem(this, v5);
}


void SupportServantListViewItem__ResetEventCampaign(
        SupportServantListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3);
}


void SupportServantListViewItem__SetEquipStatus(
        SupportServantListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_equipUserServantEntity; // x20
  CGThumbnailListItem_o *p_equipServantEntity; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_equipIdList; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int64_t Instance; // x0
  CGThumbnailListItem_c *klass; // x8
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  __int64 v19; // x1
  BalanceConfig_c *v20; // x0
  Il2CppType this_arg; // q1
  CGThumbnailListItem_c *v22; // x8
  Il2CppType v23; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  Il2CppObject *Entity; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_c *v28; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  CGThumbnailListItem_c *v31; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x20
  Il2CppClass *v33; // x21
  Il2CppClass *v34; // x22
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4C3F74A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F74A = 1;
  }
  p_equipUserServantEntity = (CGThumbnailListItem_o *)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = (CGThumbnailListItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v8, v9);
  this->fields.equipIdList = 0;
  p_equipIdList = (CGThumbnailListItem_o *)&this->fields.equipIdList;
  sub_1C36FFC(p_equipIdList, 0, v11, v12);
  if ( !p_equipIdList->monitor )
    return;
  if ( !equipIdList )
    goto LABEL_9;
  klass = p_equipIdList->klass;
  if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIdList )
    goto LABEL_14;
  v15 = System_Array__Clone((System_Array_o *)equipIdList, 0);
  if ( v15 )
  {
    v18 = v15;
    v19 = sub_1C37194(v15, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v19 )
    {
      sub_1C37574(v18);
LABEL_9:
      v20 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v20 = BalanceConfig_TypeInfo;
      }
      v19 = sub_1C37100(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v20->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v19 = 0;
  }
  p_equipIdList->klass = (CGThumbnailListItem_c *)v19;
  sub_1C36FFC(p_equipIdList, v19, v16, v17);
  klass = p_equipIdList->klass;
LABEL_14:
  if ( !klass )
    goto LABEL_36;
  if ( !LODWORD(klass->_1.namespaze) )
    goto LABEL_37;
  this_arg = klass->_1.this_arg;
  *(Il2CppType *)&v40.fields.currentCryptoKey = klass->_1.byval_arg;
  *(Il2CppType *)&v40.fields.fakeValue = this_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v39 = v40;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v39, 0) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v22 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_36;
  if ( !LODWORD(v22->_1.namespaze) )
LABEL_37:
    sub_1C372BC(Instance);
  v23 = v22->_1.this_arg;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(Il2CppType *)&v40.fields.currentCryptoKey = v22->_1.byval_arg;
  *(Il2CppType *)&v40.fields.fakeValue = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v38 = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v38, 0);
  if ( !v24 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v24,
             Instance,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1C36FFC(p_equipUserServantEntity, (int32_t)Entity, v26, v27);
  v28 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v28->_1.declaringType;
    parent = v28->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v41.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v41, 0) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
        v31 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v34 = v31->_1.declaringType;
          v33 = v31->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v42.fields.currentCryptoKey = v34;
          *(_QWORD *)&v42.fields.fakeValue = v33;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v42, 0);
          if ( v32 )
          {
            v35 = DataMasterBase_object__object__int___GetEntity(
                    v32,
                    Instance,
                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (CGThumbnailListItem_c *)v35;
            sub_1C36FFC(p_equipServantEntity, (int32_t)v35, v36, v37);
            return;
          }
        }
      }
LABEL_36:
      sub_1C372B4(Instance);
    }
  }
}


void SupportServantListViewItem__SetEquipUserServantId(
        SupportServantListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v6; // x0
  const MethodInfo *v7; // x2
  __int128 v8; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4C3F74F & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3F74F = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v9, userSvtId, 0);
    v8 = *(_OWORD *)&v9.fields.fakeValue;
    if ( !LODWORD(equipIdList->max_length) )
      sub_1C372BC(v6);
    *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey = *(_OWORD *)&v9.fields.currentCryptoKey;
    *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue = v8;
    SupportServantListViewItem__SetEquipStatus(this, this->fields.equipIdList, v7);
  }
}


void SupportServantListViewItem__SetOverwriteStatus(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (SupportServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0)) == 0) )
  {
    sub_1C372B4(this);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool SupportServantListViewItem__SetSortValue(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v4; // x19
  int32_t bonusKind2; // w8
  int32_t v6; // w2
  int32_t bonusKind2Id; // w8
  int32_t v8; // w8
  int32_t v9; // w8
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  EventCampaignMaster_o *v14; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v16; // x22
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v19; // zf
  _BOOL4 v20; // w8
  int v21; // w10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v23; // q1
  struct UserServantEntity_o *v24; // x8
  const MethodInfo *v25; // x2
  int64_t rarity; // x8
  int64_t equipUserServantEntity_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t cost; // x2
  int32_t friendshipMax; // w3
  int32_t v31; // w1
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int64_t hp; // x20
  IconLabelInfo_o *v34; // x21
  struct UserServantEntity_o *v35; // x8
  int32_t atk; // w4
  int32_t v37; // w3
  int32_t v38; // w1
  struct UserServantEntity_o *v39; // x8
  struct UserServantEntity_o *v40; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v42; // x20
  __int64 v43; // x21
  int32_t v44; // w0
  SupportServantListViewItem_o *v45; // x20
  int64_t v46; // x9
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v49; // x20
  int32_t lv; // w20
  SupportServantListViewItem_o *v51; // x21
  __int64 v52; // x21
  __int64 v53; // x22
  const MethodInfo *v54; // x2
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v57; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v4 = this;
  if ( (byte_4C3F74D & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SupportServantListViewItem__SetSortValue_b__56_0__);
    this = (SupportServantListViewItem_o *)sub_1C37058(&SupportServantListViewManager_TypeInfo);
    byte_4C3F74D = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_125;
  if ( sort->fields.isBonusKind && !v4->fields.isBase )
  {
    bonusKind2 = sort->fields.bonusKind2;
    switch ( bonusKind2 )
    {
      case 0:
        if ( v4->fields.bonusKind )
        {
          bonusKind2Id = sort->fields.bonusKind2Id;
        }
        else
        {
          bonusKind2Id = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == bonusKind2Id )
            goto LABEL_42;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = bonusKind2Id;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (SupportServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_125;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0);
        this = (SupportServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_125;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v16 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v16,
              (Il2CppObject *)v4,
              Method_SupportServantListViewItem__SetSortValue_b__56_0__,
              0);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        (System_Func_T__bool__o *)v16,
                                        (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_42;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          v8 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v8 )
          {
LABEL_42:
            if ( !v4->fields.isEventUpVal )
              goto LABEL_65;
            break;
          }
        }
        else
        {
          v8 = sort->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v8;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v14 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = v13;
        *(_QWORD *)&v62.fields.fakeValue = v12;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                 v62,
                                                 0);
        if ( !v14 )
          goto LABEL_125;
        IsEnableServant = EventCampaignMaster__IsEnableServant(v14, (int32_t)this, v4->fields.bonusKindId, 0);
LABEL_32:
        v4->fields.isEventUpVal = IsEnableServant;
        if ( !IsEnableServant )
          goto LABEL_65;
        break;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind2 )
        {
          v6 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v6 )
            goto LABEL_42;
        }
        else
        {
          v6 = sort->fields.bonusKind2Id;
        }
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.bonusKind = bonusKind2;
        v4->fields.bonusKindId = v6;
        if ( !this )
          goto LABEL_125;
        IsEnableServant = UserServantEntity__getEventUpVal_43170064(
                            (UserServantEntity_o *)this,
                            v4->fields.eventSetupInfo,
                            v6,
                            0,
                            0);
        goto LABEL_32;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v9 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v9 )
            goto LABEL_42;
        }
        else
        {
          v9 = sort->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 7;
        v4->fields.bonusKindId = v9;
        this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_125;
        this = (SupportServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        if ( !this )
          goto LABEL_125;
        IsEnableServant = ServantFilterMaster__IsEnableServant(
                            (ServantFilterMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0);
        goto LABEL_32;
      default:
        break;
    }
  }
  if ( !v4->fields.isBase )
  {
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_125;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
      goto LABEL_65;
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_125;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
      || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v25) )
    {
LABEL_65:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0;
  v19 = !isChoice;
  v20 = !isChoice;
  v21 = !v19;
  if ( !isSwapChoice )
    v20 = v21;
  if ( v20 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10;
  this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
LABEL_125:
    sub_1C372B4(this);
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  this = (SupportServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_125;
      v23 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v60.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v59 = v60;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                               &v59,
                                               0);
      v24 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v24 )
        goto LABEL_125;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_125;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v24->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_102;
    case 2:
      rarity = v4->fields.rarity;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_87;
    case 3:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      equipUserServantEntity_low = SLODWORD(this->fields.equipUserServantEntity);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = equipUserServantEntity_low;
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo1 )
        goto LABEL_125;
      IconLabelInfo__Set_40917868(iconLabelInfo1, 2, equipUserServantEntity_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_107;
    case 4:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      UserServantEntity__getTreasureDeviceInfo_43177324((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(cost) = tdMaxLv[1];
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_125;
      friendshipMax = tdMaxLv[0];
      v31 = 33;
      goto LABEL_101;
    case 5:
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v4->fields.hp;
      if ( equipUserServantEntity )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
        if ( !this )
          goto LABEL_125;
        v34 = v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
        v35 = v4->fields.equipUserServantEntity;
        if ( !v35 || !v34 )
          goto LABEL_125;
        atk = v35->fields.hp;
        v37 = (int)this;
        v38 = 46;
        goto LABEL_83;
      }
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_125;
      v51 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      this = (SupportServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      if ( !v51 )
        goto LABEL_125;
      friendshipMax = (int)this;
      v31 = 3;
      goto LABEL_114;
    case 6:
      v39 = v4->fields.equipUserServantEntity;
      hp = v4->fields.atk;
      if ( v39 )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = v39->fields.atk + (int)hp;
        if ( !this )
          goto LABEL_125;
        v34 = v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
        v40 = v4->fields.equipUserServantEntity;
        if ( !v40 || !v34 )
          goto LABEL_125;
        atk = v40->fields.atk;
        v37 = (int)this;
        v38 = 47;
LABEL_83:
        IconLabelInfo__Set_40917868(v34, v38, hp, v37, atk, 0, 0, 0, 0, 0);
      }
      else
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_125;
        v51 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
        if ( !v51 )
          goto LABEL_125;
        friendshipMax = (int)this;
        v31 = 5;
LABEL_114:
        this = v51;
        LODWORD(cost) = hp;
LABEL_101:
        IconLabelInfo__Set_40917868((IconLabelInfo_o *)this, v31, cost, friendshipMax, 0, 0, 0, 0, 0, 0);
      }
LABEL_102:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_104:
      lv = (int32_t)this->fields.equipUserServantEntity;
LABEL_105:
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_125;
      IconLabelInfo__Set_40917868(iconLabelInfo2, 2, lv, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_107:
      LOBYTE(this) = 1;
      return (char)this;
    case 7:
      cost = v4->fields.cost;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      v31 = 7;
      friendshipMax = 0;
      goto LABEL_101;
    case 8:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_87:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_104;
    case 0xA:
      v42 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v43 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v63.fields.currentCryptoKey = v42;
      *(_QWORD *)&v63.fields.fakeValue = v43;
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v63, 0);
      v45 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v46 = v44;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v46;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                               friendship,
                                               0);
      if ( !v45 )
        goto LABEL_125;
      friendshipMax = v4->fields.friendshipMax;
      LODWORD(cost) = (_DWORD)this;
      v31 = 32;
      this = v45;
      goto LABEL_101;
    case 0xE:
      this = (SupportServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_122;
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = SupportServantListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SupportServantListViewManager_TypeInfo )
          v49 = sort->fields.manager;
        else
          v49 = 0;
      }
      else
      {
        v49 = 0;
      }
      v53 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v52 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v65.fields.currentCryptoKey = v53;
      *(_QWORD *)&v65.fields.fakeValue = v52;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v65, 0);
      if ( !v49 )
        goto LABEL_125;
      this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                               (SupportServantListViewManager_o *)v49,
                                               (int32_t)this,
                                               v54);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_122:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_125;
      collectionNo = servantEntity->fields.collectionNo;
      v57 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v57 )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      lv = v57->fields.lv;
      this = (SupportServantListViewItem_o *)v57;
      goto LABEL_105;
    case 0xF:
      cost = v4->fields.hpReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v31 = 44;
      goto LABEL_101;
    case 0x10:
      cost = v4->fields.atkReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v31 = 45;
      goto LABEL_101;
    default:
      return (char)this;
  }
}


bool SupportServantListViewItem__SwapChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool SupportServantListViewItem__SwapLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool SupportServantListViewItem___SetSortValue_b__56_0(
        SupportServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  EventCampaignMaster_o *v8; // x21
  ServantFilterMaster_o *userServantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4C3F756 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3F756 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  userServantEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                 v11,
                                                 0);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)userServantEntity, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userServantEntity, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  userServantEntity = (ServantFilterMaster_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_17:
    sub_1C372B4(userServantEntity);
  return UserServantEntity__getEventUpVal_43170064(
           (UserServantEntity_o *)userServantEntity,
           this->fields.eventSetupInfo,
           entity->fields.eventId,
           0,
           0);
}


int32_t SupportServantListViewItem__get_ClassId(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.classId;
}


int32_t SupportServantListViewItem__get_Cost(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cost;
}


int32_t SupportServantListViewItem__get_EquipCost(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


IconLabelInfo_o *SupportServantListViewItem__get_IconInfo1(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *SupportServantListViewItem__get_IconInfo2(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool SupportServantListViewItem__get_IsBase(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool SupportServantListViewItem__get_IsCanNotSelectHeroine(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3F752 & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C3F752 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40427704(126, 0);
}


bool SupportServantListViewItem__get_IsChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool SupportServantListViewItem__get_IsDispChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool SupportServantListViewItem__get_IsDispLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool SupportServantListViewItem__get_IsEnabled(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool SupportServantListViewItem__get_IsEquip(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipServantEntity != 0;
}


bool SupportServantListViewItem__get_IsEventJoin(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool SupportServantListViewItem__get_IsInvalidRarity(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool SupportServantListViewItem__get_IsLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool SupportServantListViewItem__get_IsPush(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool SupportServantListViewItem__get_IsPushMode(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool SupportServantListViewItem__get_IsSame(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSame;
}


bool SupportServantListViewItem__get_IsSwapChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool SupportServantListViewItem__get_IsSwapLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool SupportServantListViewItem__get_IsUseInSet(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUseInSet;
}


bool SupportServantListViewItem__get_IsUseServant(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  SupportServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  SupportServantData_o *supportServantData; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C3F753 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3F753 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_8;
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = v2->fields.supportServantData;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v7, 0);
  if ( !supportServantData )
LABEL_8:
    sub_1C372B4(this);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, 0);
}


System_String_o *SupportServantListViewItem__get_NameText(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C3F751 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_19069/*"error"*/);
    byte_4C3F751 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19069/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v9, 0);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0, 0);
}


int32_t SupportServantListViewItem__get_Rarity(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *SupportServantListViewItem__get_Servant(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t SupportServantListViewItem__get_SvtId(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4C3F750 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3F750 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v6, 0);
}


int32_t SupportServantListViewItem__get_UseSet(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.useSet;
}


UserServantEntity_o *SupportServantListViewItem__get_UserServant(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


void SupportServantListViewItem__set_IsEnabled(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void SupportServantListViewItem__set_IsPush(SupportServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}


void SupportServantListViewItem__set_IsPushMode(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}