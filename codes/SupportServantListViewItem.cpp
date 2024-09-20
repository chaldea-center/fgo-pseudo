void __fastcall SupportServantListViewItem___ctor(
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
  int32_t v23; // w3
  IconLabelInfo_o *v24; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  UserServantEntity_o **p_userServantEntity; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  int64_t Instance; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  struct SupportServantData_o *v35; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  struct UserServantEntity_o *v39; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v41; // x27
  __int64 v42; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x26
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x25
  struct UserServantEntity_o *v51; // x8
  int32_t v52; // w27
  UserServantEntity_o *v53; // x8
  __int128 v54; // q1
  UserServantCollectionMaster_o *v55; // x25
  int64_t v56; // x26
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  const MethodInfo *v65; // x2
  SupportServantData_o *v66; // x8
  int64_t v67; // x24
  UserServantEntity_o *v68; // x8
  UserServantEntity_o *v69; // x8
  UserServantEntity_o *v70; // x8
  ServantEntity_o *servantEntity; // x8
  const MethodInfo *v72; // x2
  bool v73; // w8
  int64_t Equip; // x0
  const MethodInfo *v75; // x5
  int64_t v76; // x23
  Il2CppObject *v77; // x24
  UserServantEntity_o *v78; // x8
  PartyOrganizationUtility_o *v79; // x23
  __int64 v80; // x25
  __int64 v81; // x26
  int32_t v82; // w25
  int32_t v83; // w26
  bool v84; // w0
  UserServantEntity_o *v85; // x8
  __int128 v86; // q0
  __int64 v87; // x22
  bool v88; // zf
  bool v89; // w8
  UserServantEntity_o *v90; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  int v97; // w22
  BalanceConfig_c *v98; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v100; // x8
  struct ServantEntity_o *v101; // x9
  UserServantEntity_o *v102; // x8
  __int64 v103; // x21
  __int64 v104; // x22
  int32_t v105; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_4A57BF8 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A57BF8 = 1;
  }
  friendshipRank = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v21 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  this->fields.iconLabelInfo1 = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v26, v27);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v29,
    v30);
  if ( !supportServantData )
    goto LABEL_66;
  if ( supportServantData->max_length <= nowDeckNum )
    sub_1B88814(Instance, v32);
  v35 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v35;
  p_supportServantData = &this->fields.supportServantData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v35, v33, v34);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v37, v38);
  v39 = this->fields.userServantEntity;
  if ( !v39 )
    goto LABEL_66;
  this->fields.svtId = v39->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v42;
  *(_QWORD *)&v114.fields.fakeValue = v41;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v114, 0LL);
  if ( !v43 )
    goto LABEL_66;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v43,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v46, v47);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v48,
    v49);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v50 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  v51 = this->fields.userServantEntity;
  if ( !v51 )
    goto LABEL_66;
  v52 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51->fields.limitCount, 0LL);
  if ( !v50 )
    goto LABEL_66;
  Instance = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v50, v52, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_66;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_66;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v53 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v54 = *(_OWORD *)&v53->fields.userId.fields.fakeValue;
  v55 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v53->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v110.fields.fakeValue = v54;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v109 = v110;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v109, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  if ( !v55 )
    goto LABEL_66;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v55, v56, Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isSame = 0;
  this->fields.equipUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, v57, v58);
  this->fields.equipServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v59, v60);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v61, v62);
  v63 = this->fields.userServantEntity;
  if ( !v63 )
    goto LABEL_66;
  v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
  *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v108.fields.fakeValue = v64;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v108, 0LL);
  v66 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_66;
  v67 = Instance;
  Instance = SupportServantData__getMember(v66, classPos, v65);
  v68 = this->fields.userServantEntity;
  this->fields.isBase = v67 == Instance;
  if ( !v68 )
    goto LABEL_66;
  Instance = UserServantEntity__IsLock(v68, 0LL);
  v69 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v69 )
    goto LABEL_66;
  Instance = UserServantEntity__IsChoice(v69, 0LL);
  v70 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v70 )
    goto LABEL_66;
  Instance = UserServantEntity__IsEventJoin(v70, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !servantEntity )
    goto LABEL_66;
  v73 = ServantEntity__checkIsHeroineSvt(servantEntity, 0LL);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v73;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_66;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, v72);
  if ( Equip < 1 )
    goto LABEL_38;
  v76 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_66;
  v77 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v76,
          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v78 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v79 = (PartyOrganizationUtility_o *)Instance;
  v81 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
  v80 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v115.fields.currentCryptoKey = v81;
  *(_QWORD *)&v115.fields.fakeValue = v80;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v115, 0LL);
  if ( !*p_userServantEntity
    || (v82 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v77)
    || (v83 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v77[5],
                     0LL),
        !v79) )
  {
LABEL_66:
    sub_1B8880C(Instance, v32);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v79,
                                   &skillName,
                                   &actMaxRarity,
                                   v82,
                                   v83,
                                   Instance,
                                   -1,
                                   0LL);
LABEL_38:
  this->fields.isUseInSet = 0;
  if ( !isFixMainDeck
    || (v84 = SupportServantListViewItem__CheckUseInSet(
                this,
                &this->fields.useSet,
                fixMainDeckIds,
                nowDeckId,
                supportServantData,
                v75),
        !(this->fields.isUseInSet = v84)) )
  {
    if ( isFixEventDeck )
      this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                  this,
                                  &this->fields.useSet,
                                  fixEventDeckIds,
                                  nowDeckId,
                                  supportServantData,
                                  v75);
  }
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_66;
  v85 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v86 = *(_OWORD *)&v85->fields.id.fields.fakeValue;
  v87 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v85->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v110.fields.fakeValue = v86;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v107 = v110;
  v88 = v87 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v107, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v89 = v88;
  this->fields.isPush = v89;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_66;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v90 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v90 )
    goto LABEL_66;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v90, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v92,
    v93);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v95,
    v96);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  v97 = *(_DWORD *)(Instance + 276);
  v98 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v98 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v98->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v97;
  if ( !Instance )
    goto LABEL_66;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_66;
  v100 = *(int *)(Instance + 48);
  v101 = this->fields.servantEntity;
  this->fields.priority = v100;
  this->fields.sortValue1B = v100;
  if ( !v101 )
    goto LABEL_66;
  v102 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  this->fields.sortValue2 = ((__int64)v101->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v102->fields.lv;
  v104 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
  v103 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v116.fields.currentCryptoKey = v104;
  *(_QWORD *)&v116.fields.fakeValue = v103;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v116, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v105;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_66;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_66;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall SupportServantListViewItem__CheckUseInSet(
        SupportServantListViewItem_o *this,
        int32_t *setNo,
        System_Int32_array *fixDeckIds,
        int32_t nowDeckId,
        SupportServantData_array *supportServantData,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v9; // x23
  __int64 v10; // x8
  bool v11; // w19
  unsigned __int64 v12; // x28
  char *v13; // x22
  int v14; // w8
  int32_t *v15; // x22
  int v16; // t1
  int32_t i; // w24
  il2cpp_array_size_t v18; // w8
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w27
  __int64 v21; // x25
  __int64 v22; // x26
  int32_t *v24; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v9 = this;
  if ( (byte_4A57BF9 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57BF9 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_1B8880C(this, setNo);
  v10 = *(_QWORD *)&fixDeckIds->max_length;
  v11 = (int)v10 > 0;
  if ( (int)v10 >= 1 )
  {
    v24 = setNo;
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v10 )
        goto LABEL_27;
      v13 = (char *)fixDeckIds + 4 * v12;
      v16 = *((_DWORD *)v13 + 8);
      v15 = (int32_t *)(v13 + 32);
      v14 = v16;
      if ( v16 != nowDeckId && v14 >= 1 )
        break;
LABEL_22:
      LODWORD(v10) = fixDeckIds->max_length;
      v11 = (__int64)++v12 < (int)v10;
      if ( (__int64)v12 >= (int)v10 )
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
      if ( i >= *(_DWORD *)(*(_QWORD *)&this->fields.friendshipMax + 164LL) )
        goto LABEL_22;
      if ( v12 >= fixDeckIds->max_length )
        goto LABEL_27;
      if ( !supportServantData )
        goto LABEL_28;
      v18 = *v15 - 1;
      if ( v18 >= supportServantData->max_length )
        goto LABEL_27;
      this = (SupportServantListViewItem_o *)supportServantData->m_Items[v18];
      if ( !this )
        goto LABEL_28;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)this,
                                  i,
                                  (const MethodInfo *)fixDeckIds);
      if ( UserServantLeaderEntity )
      {
        svtId = UserServantLeaderEntity->fields.svtId;
        v22 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = v22;
        *(_QWORD *)&v26.fields.fakeValue = v21;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                 v26,
                                                 0LL);
        if ( svtId == (_DWORD)this )
          break;
      }
    }
    if ( (unsigned int)v12 >= fixDeckIds->max_length )
LABEL_27:
      sub_1B88814(this, setNo);
    *v24 = *v15;
  }
  return v11;
}


void __fastcall SupportServantListViewItem__Finalize(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_Int64_array *__fastcall SupportServantListViewItem__GetEquipList(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v4; // x0
  __int64 v5; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v6; // x8
  System_Int64_array *v7; // x20
  unsigned __int64 v8; // x21
  int64_t v9; // x23
  __int64 v10; // x24
  unsigned __int64 max_length; // x9
  _OWORD *v12; // x8
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h]

  if ( (byte_4A57BFF & 1) == 0 )
  {
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A57BFF = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v4 = sub_1B88658(long___TypeInfo, equipIdList->max_length);
  v6 = this->fields.equipIdList;
  if ( !v6 )
LABEL_13:
    sub_1B8880C(v4, v5);
  v7 = (System_Int64_array *)v4;
  v8 = 0LL;
  v9 = v4 + 32;
  v10 = 32LL;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (__int64)v8 >= (int)max_length )
      return v7;
    if ( v8 >= max_length )
      goto LABEL_16;
    v12 = (_OWORD *)((char *)v6 + v10);
    v13 = v12[1];
    *(_OWORD *)&v16.fields.currentCryptoKey = *v12;
    *(_OWORD *)&v16.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v15 = v16;
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v15, 0LL);
    if ( v7 )
    {
      if ( v8 >= v7->max_length )
LABEL_16:
        sub_1B88814(v4, v5);
      *(_QWORD *)(v9 + 8 * v8) = v4;
      v6 = this->fields.equipIdList;
      ++v8;
      v10 += 32LL;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}


int32_t __fastcall SupportServantListViewItem__GetFriendPointBonus(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
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
  if ( (byte_4A57C06 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    this = (SupportServantListViewItem_o *)sub_1B885B0(&System_Math_TypeInfo);
    byte_4A57C06 = 1;
  }
  eventFriendPoints = v2->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v4 = -1;
  v5 = 4LL;
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
                                               (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v7 >= eventFriendPoints->max_length )
LABEL_22:
          sub_1B88814(this, method);
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
            this = (SupportServantListViewItem_o *)System_Math__Max_62525680(v4, v14, 0LL);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v4 = (int)this;
          }
          ++v5;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_1B8880C(this, method);
  }
}


bool __fastcall SupportServantListViewItem__GetNpInfo(
        SupportServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57C05 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A57C05 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


bool __fastcall SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  ServantClassMaster_o *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4A57BFC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A57BFC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(Master_object, 0LL);
      if ( Master_object )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_object,
                 this->fields.classId,
                 (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_11:
    sub_1B8880C(Master_object, v6);
  }
  if ( !Master_object )
    goto LABEL_11;
  return ServantClassMaster__getSupportGroupType(Master_object, this->fields.classId, 0LL) == classType;
}


bool __fastcall SupportServantListViewItem__IsMatchServantFilter(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x19
  SupportServantListViewItem_o *v4; // x20
  unsigned int *manager; // x8
  __int64 methodPtr_low; // x11
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  UserServantEntity_o *userServantEntity; // x21
  SupportServantListViewItem_o *v12; // x1
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
  int32_t v31; // w3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v36; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v38; // w0

  v3 = sort;
  v4 = this;
  if ( (byte_4A57BFD & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    this = (SupportServantListViewItem_o *)sub_1B885B0(&SupportServantListViewManager_TypeInfo);
    byte_4A57BFD = 1;
  }
  if ( !v3 )
    goto LABEL_82;
  manager = (unsigned int *)v3->fields.manager;
  if ( !manager )
    goto LABEL_82;
  methodPtr_low = LOBYTE(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)methodPtr_low
    || *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * methodPtr_low - 8) != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_82;
  }
  sort = (ListViewSort_o *)manager[106];
  if ( (unsigned int)((_DWORD)sort - 1) >= 7 )
  {
    if ( (_DWORD)sort == 8 )
    {
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
LABEL_82:
        sub_1B8880C(this, sort);
      v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)this,
                                               (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v18, 0LL) )
      {
        v19 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v19 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v19->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !this )
          goto LABEL_82;
        v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v20, 0LL) )
        {
LABEL_60:
          if ( !ListViewSort__IsMatchClassFilter(v3, v4->fields.servantEntity, 0LL) )
            return 0;
          goto LABEL_9;
        }
        v21 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v21 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v21->static_fields->ClassExtra2FilterKindList;
        if ( !this )
          goto LABEL_82;
LABEL_59:
        v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v25, 0LL) )
          goto LABEL_9;
        goto LABEL_60;
      }
    }
    else
    {
      v22 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v22 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v22->static_fields->ClassGroupFilterKindList;
      if ( !this )
        goto LABEL_82;
      v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)this,
                                               (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v23, 0LL) )
      {
        v24 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v24 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v24->static_fields->ClassFilterKindList;
        if ( !this )
          goto LABEL_82;
        goto LABEL_59;
      }
    }
    if ( !ListViewSort__IsMatchClassGroupFilter(v3, v4->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_9;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, (int32_t)sort, method) )
    return 0;
LABEL_9:
  v7 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v7->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_82;
  v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          (System_Collections_Generic_List_T__o *)this,
                                          (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v8, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(v3, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v9->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_82;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v10, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(v3, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(v3, -1, 0LL) )
  {
    userServantEntity = v4->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, v3, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(v3, 0LL) )
  {
    v26 = v4->fields.userServantEntity;
    if ( v26 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v26, 0, 0LL) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_82;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v28 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v28 )
          goto LABEL_82;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v28, -1, 0LL);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v4->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v30,
          v31);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_82;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         0LL);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v33,
          v34);
      }
    }
    this = (SupportServantListViewItem_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_82;
    v12 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_83;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     v3,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (SupportServantListViewItem_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_82;
    v12 = this;
    if ( !this->fields.sortIndex )
LABEL_83:
      sub_1B88814(this, v12);
    LODWORD(this->fields.sortValue0) = 51;
    v36 = ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              v3,
                              0LL);
    v38 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, v3, 0LL);
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
  this = (SupportServantListViewItem_o *)sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_82;
  v12 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_83;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0LL)
    && ListViewSort__GetFilter(v3, 39, 0LL) )
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
    goto LABEL_82;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v3, v15, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(v3, v15, 0LL)
      || ListViewSort__IsMatchRarityFilter(v3, v4->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  Il2CppObject *Entity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_4A57BFA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57BFA = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_11;
    byval_arg = klass->_1.byval_arg;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v13 = v14;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
    if ( !v9 )
LABEL_11:
      sub_1B8880C(Instance, v6);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v9,
               (int64_t)Instance,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
    sub_1B88554(p_userServantEntity, (int32_t)Entity, v11, v12);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall SupportServantListViewItem__ModifyItem(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UserServantEntity_o **p_userServantEntity; // x20
  __int64 v6; // x1

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  if ( !*p_userServantEntity )
    sub_1B8880C(0LL, v6);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B8880C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_33362128(
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


void __fastcall SupportServantListViewItem__ResetEventCampaign(
        SupportServantListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3);
}


void __fastcall SupportServantListViewItem__SetEquipStatus(
        SupportServantListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_equipUserServantEntity; // x20
  ServantStatusBattleListViewItem_o *p_equipServantEntity; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p_equipIdList; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int64_t Instance; // x0
  __int64 v14; // x1
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x22
  __int64 v20; // x1
  BalanceConfig_c *v21; // x0
  Il2CppType this_arg; // q1
  ServantStatusBattleListViewItem_c *v23; // x8
  Il2CppType v24; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  Il2CppObject *Entity; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  ServantStatusBattleListViewItem_c *v29; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  ServantStatusBattleListViewItem_c *v32; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x20
  Il2CppClass *v34; // x21
  Il2CppClass *v35; // x22
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4A57BFB & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57BFB = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v8, v9);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (ServantStatusBattleListViewItem_o *)&this->fields.equipIdList;
  sub_1B88554(p_equipIdList, 0, v11, v12);
  if ( !p_equipIdList->monitor )
    return;
  if ( !equipIdList )
    goto LABEL_9;
  klass = p_equipIdList->klass;
  if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIdList )
    goto LABEL_14;
  v16 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
  if ( v16 )
  {
    v19 = v16;
    v20 = sub_1B886EC(v16, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v20 )
    {
      sub_1B88ACC(v19);
LABEL_9:
      v21 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      v20 = sub_1B88658(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v21->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v20 = 0LL;
  }
  p_equipIdList->klass = (ServantStatusBattleListViewItem_c *)v20;
  sub_1B88554(p_equipIdList, v20, v17, v18);
  klass = p_equipIdList->klass;
LABEL_14:
  if ( !klass )
    goto LABEL_36;
  if ( !LODWORD(klass->_1.namespaze) )
    goto LABEL_37;
  this_arg = klass->_1.this_arg;
  *(Il2CppType *)&v41.fields.currentCryptoKey = klass->_1.byval_arg;
  *(Il2CppType *)&v41.fields.fakeValue = this_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v41;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v23 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_36;
  if ( !LODWORD(v23->_1.namespaze) )
LABEL_37:
    sub_1B88814(Instance, v14);
  v24 = v23->_1.this_arg;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(Il2CppType *)&v41.fields.currentCryptoKey = v23->_1.byval_arg;
  *(Il2CppType *)&v41.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v39 = v41;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
  if ( !v25 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v25,
             Instance,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B88554(p_equipUserServantEntity, (int32_t)Entity, v27, v28);
  v29 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v29->_1.declaringType;
    parent = v29->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v42.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        v32 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v35 = v32->_1.declaringType;
          v34 = v32->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v43.fields.currentCryptoKey = v35;
          *(_QWORD *)&v43.fields.fakeValue = v34;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
          if ( v33 )
          {
            v36 = DataMasterBase_object__object__int___GetEntity(
                    v33,
                    Instance,
                    (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (ServantStatusBattleListViewItem_c *)v36;
            sub_1B88554(p_equipServantEntity, (int32_t)v36, v37, v38);
            return;
          }
        }
      }
LABEL_36:
      sub_1B8880C(Instance, v14);
    }
  }
}


void __fastcall SupportServantListViewItem__SetEquipUserServantId(
        SupportServantListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int128 v9; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A57C00 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A57C00 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userSvtId, 0LL);
    v9 = *(_OWORD *)&v10.fields.fakeValue;
    if ( !equipIdList->max_length )
      sub_1B88814(v6, v7);
    *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey = *(_OWORD *)&v10.fields.currentCryptoKey;
    *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue = v9;
    SupportServantListViewItem__SetEquipStatus(this, this->fields.equipIdList, v8);
  }
}


bool __fastcall SupportServantListViewItem__SetSortValue(
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
  int64_t eventFriendPoints_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v31; // w1
  struct UserServantEntity_o *v32; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v36; // w1
  struct UserServantEntity_o *v37; // x8
  struct UserServantEntity_o *v38; // x9
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v41; // x20
  __int64 v42; // x21
  int32_t v43; // w0
  SupportServantListViewItem_o *v44; // x20
  int64_t v45; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v48; // x20
  int32_t eventFriendPoints; // w20
  __int64 v50; // x21
  __int64 v51; // x22
  const MethodInfo *v52; // x2
  struct ServantEntity_o *v53; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v55; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v4 = this;
  if ( (byte_4A57BFE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SupportServantListViewItem__SetSortValue_b__53_0__);
    this = (SupportServantListViewItem_o *)sub_1B885B0(&SupportServantListViewManager_TypeInfo);
    byte_4A57BFE = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_121;
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
        this = (SupportServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_121;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0LL);
        this = (SupportServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_121;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v16 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v16,
              (Il2CppObject *)v4,
              Method_SupportServantListViewItem__SetSortValue_b__53_0__,
              0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        (System_Func_T__bool__o *)v16,
                                        (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v14 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v60.fields.currentCryptoKey = v13;
        *(_QWORD *)&v60.fields.fakeValue = v12;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                 v60,
                                                 0LL);
        if ( !v14 )
          goto LABEL_121;
        IsEnableServant = EventCampaignMaster__IsEnableServant(v14, (int32_t)this, v4->fields.bonusKindId, 0LL);
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
          goto LABEL_121;
        IsEnableServant = UserServantEntity__getEventUpVal_40205120(
                            (UserServantEntity_o *)this,
                            v4->fields.eventSetupInfo,
                            v6,
                            0LL,
                            0LL);
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
        this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_121;
        this = (SupportServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        if ( !this )
          goto LABEL_121;
        IsEnableServant = ServantFilterMaster__IsEnableServant(
                            (ServantFilterMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0LL);
        goto LABEL_32;
      default:
        break;
    }
  }
  if ( !v4->fields.isBase )
  {
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_121;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
      goto LABEL_65;
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_121;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v25) )
    {
LABEL_65:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0LL;
  v19 = !isChoice;
  v20 = !isChoice;
  v21 = !v19;
  if ( !isSwapChoice )
    v20 = v21;
  if ( v20 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10LL;
  this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
LABEL_121:
    sub_1B8880C(this, sort);
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (SupportServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_121;
      v23 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v58.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v57 = v58;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                               &v57,
                                               0LL);
      v24 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v24 )
        goto LABEL_121;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_121;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v24->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_105;
    case 2:
      rarity = v4->fields.rarity;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_86;
    case 3:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_121;
      eventFriendPoints_low = SLODWORD(this->fields.eventFriendPoints);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = eventFriendPoints_low;
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_121;
      IconLabelInfo__Set_38140136(iconLabelInfo1, 2, eventFriendPoints_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_110;
    case 4:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_121;
      UserServantEntity__getTreasureDeviceInfo_40212352((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_121;
      adjustAtk = tdMaxLv[0];
      v31 = 33;
      goto LABEL_104;
    case 5:
      v32 = v4->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_121;
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v32->fields.hp;
      if ( equipUserServantEntity )
      {
        atk = equipUserServantEntity->fields.hp;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_121;
        adjustHp = v32->fields.adjustHp;
        v36 = 46;
        goto LABEL_81;
      }
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v32->fields.adjustHp;
      v31 = 3;
      goto LABEL_104;
    case 6:
      v37 = v4->fields.userServantEntity;
      if ( !v37 )
        goto LABEL_121;
      v38 = v4->fields.equipUserServantEntity;
      hp = v37->fields.atk;
      if ( v38 )
      {
        atk = v38->fields.atk;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_121;
        adjustHp = v37->fields.adjustAtk;
        v36 = 47;
LABEL_81:
        IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v36, hp, adjustHp, atk, 0, 0, 0, 0LL);
      }
      else
      {
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_121;
        adjustAtk = v37->fields.adjustAtk;
        v31 = 5;
LABEL_104:
        IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v31, hp, adjustAtk, 0, 0, 0, 0, 0LL);
      }
LABEL_105:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_121;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_107:
      eventFriendPoints = (int32_t)this->fields.eventFriendPoints;
LABEL_108:
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_121;
      IconLabelInfo__Set_38140136(iconLabelInfo2, 2, eventFriendPoints, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_110:
      LOBYTE(this) = 1;
      return (char)this;
    case 7:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_121;
      hp = servantEntity->fields.cost;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      v31 = 7;
      adjustAtk = 0;
      goto LABEL_104;
    case 8:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      rarity = -v4->fields.priority;
LABEL_86:
      v4->fields.sortValue1 = rarity;
      if ( !this )
        goto LABEL_121;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_107;
    case 0xA:
      v42 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v42;
      *(_QWORD *)&v61.fields.fakeValue = v41;
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v61, 0LL);
      v44 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v45 = v43;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v45;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                               friendship,
                                               0LL);
      if ( !v44 )
        goto LABEL_121;
      adjustAtk = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v31 = 32;
      this = v44;
      goto LABEL_104;
    case 0xE:
      this = (SupportServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_118;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewManager_TypeInfo )
          v48 = sort->fields.manager;
        else
          v48 = 0LL;
      }
      else
      {
        v48 = 0LL;
      }
      v51 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v50 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v63.fields.currentCryptoKey = v51;
      *(_QWORD *)&v63.fields.fakeValue = v50;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                               v63,
                                               0LL);
      if ( !v48 )
        goto LABEL_121;
      this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                               (SupportServantListViewManager_o *)v48,
                                               (int32_t)this,
                                               v52);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_118:
      v53 = v4->fields.servantEntity;
      if ( !v53 )
        goto LABEL_121;
      collectionNo = v53->fields.collectionNo;
      v55 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v55 )
        goto LABEL_121;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      eventFriendPoints = v55->fields.lv;
      this = (SupportServantListViewItem_o *)v55;
      goto LABEL_108;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v4->fields.nowMaxHpReinforceValue;
      v31 = 44;
      goto LABEL_104;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v4->fields.nowMaxAtkReinforceValue;
      v31 = 45;
      goto LABEL_104;
    default:
      return (char)this;
  }
}


bool __fastcall SupportServantListViewItem__SwapChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool __fastcall SupportServantListViewItem__SwapLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
}


bool __fastcall SupportServantListViewItem___SetSortValue_b__53_0(
        SupportServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  EventCampaignMaster_o *v8; // x21
  ServantFilterMaster_o *userServantEntity; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A57C07 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57C07 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  userServantEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                 v12,
                                                 0LL);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)userServantEntity, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userServantEntity, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  userServantEntity = (ServantFilterMaster_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_17:
    sub_1B8880C(userServantEntity, v10);
  return UserServantEntity__getEventUpVal_40205120(
           (UserServantEntity_o *)userServantEntity,
           this->fields.eventSetupInfo,
           entity->fields.eventId,
           0LL,
           0LL);
}


int32_t __fastcall SupportServantListViewItem__get_ClassId(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.classId;
}


int32_t __fastcall SupportServantListViewItem__get_Cost(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    sub_1B8880C(this, method);
  return servantEntity->fields.cost;
}


int32_t __fastcall SupportServantListViewItem__get_EquipCost(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


IconLabelInfo_o *__fastcall SupportServantListViewItem__get_IconInfo1(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *__fastcall SupportServantListViewItem__get_IconInfo2(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


bool __fastcall SupportServantListViewItem__get_IsBase(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool __fastcall SupportServantListViewItem__get_IsCanNotSelectHeroine(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57C03 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A57C03 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37688364(126, 0LL);
}


bool __fastcall SupportServantListViewItem__get_IsChoice(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall SupportServantListViewItem__get_IsDispChoice(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall SupportServantListViewItem__get_IsDispLock(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool __fastcall SupportServantListViewItem__get_IsEnabled(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool __fastcall SupportServantListViewItem__get_IsEquip(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipServantEntity != 0LL;
}


bool __fastcall SupportServantListViewItem__get_IsEventJoin(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool __fastcall SupportServantListViewItem__get_IsInvalidRarity(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool __fastcall SupportServantListViewItem__get_IsLock(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall SupportServantListViewItem__get_IsPush(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool __fastcall SupportServantListViewItem__get_IsPushMode(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool __fastcall SupportServantListViewItem__get_IsSame(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSame;
}


bool __fastcall SupportServantListViewItem__get_IsSwapChoice(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool __fastcall SupportServantListViewItem__get_IsSwapLock(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool __fastcall SupportServantListViewItem__get_IsUseInSet(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUseInSet;
}


bool __fastcall SupportServantListViewItem__get_IsUseServant(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  SupportServantData_o *supportServantData; // x19
  const MethodInfo *v6; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A57C04 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A57C04 = 1;
  }
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_8;
  v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  supportServantData = v2->fields.supportServantData;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v8, 0LL);
  if ( !supportServantData )
LABEL_8:
    sub_1B8880C(this, method);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, v6);
}


System_String_o *__fastcall SupportServantListViewItem__get_NameText(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A57C02 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A57C02 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
}


int32_t __fastcall SupportServantListViewItem__get_Rarity(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarity;
}


ServantEntity_o *__fastcall SupportServantListViewItem__get_Servant(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t __fastcall SupportServantListViewItem__get_SvtId(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A57C01 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57C01 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


int32_t __fastcall SupportServantListViewItem__get_UseSet(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.useSet;
}


UserServantEntity_o *__fastcall SupportServantListViewItem__get_UserServant(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


void __fastcall SupportServantListViewItem__set_IsEnabled(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void __fastcall SupportServantListViewItem__set_IsPush(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPush = value;
}


void __fastcall SupportServantListViewItem__set_IsPushMode(
        SupportServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isPushMode = value;
}