// local variable allocation has failed, the output may be wrong!
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
  __int64 v32; // x1
  __int64 v33; // x1
  IconLabelInfo_o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  IconLabelInfo_o *v37; // x28
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UserServantEntity_o **p_userServantEntity; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int64_t Instance; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  const MethodInfo *v46; // x3
  struct SupportServantData_o *v47; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct UserServantEntity_o *v51; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v53; // x28
  __int64 v54; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x27
  Il2CppObject *Entity; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x26
  struct UserServantEntity_o *v62; // x8
  int32_t v63; // w27
  const MethodInfo *v64; // x2
  struct ServantEntity_o *servantEntity; // x8
  UserServantEntity_o *v66; // x8
  __int128 v67; // q1
  UserServantCollectionMaster_o *v68; // x25
  int64_t v69; // x26
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q0
  SupportServantData_o *v78; // x8
  int64_t v79; // x24
  UserServantEntity_o *v80; // x8
  UserServantEntity_o *v81; // x8
  UserServantEntity_o *v82; // x8
  ServantEntity_o *v83; // x8
  bool v84; // w8
  int64_t Equip; // x0
  const MethodInfo *v86; // x5
  int64_t v87; // x23
  Il2CppObject *v88; // x24
  UserServantEntity_o *v89; // x8
  PartyOrganizationUtility_o *v90; // x23
  __int64 v91; // x25
  __int64 v92; // x26
  int32_t v93; // w25
  int32_t v94; // w26
  bool v95; // w0
  UserServantEntity_o *v96; // x8
  __int128 v97; // q0
  __int64 v98; // x22
  bool v99; // zf
  bool v100; // w8
  UserServantEntity_o *v101; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int v108; // w22
  BalanceConfig_c *v109; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v111; // x8
  struct ServantEntity_o *v112; // x9
  UserServantEntity_o *v113; // x8
  __int64 v114; // x21
  __int64 v115; // x22
  int32_t v116; // w8
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+80h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+ACh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+B0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16

  if ( (byte_4B41241 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantClassMaster___, v21);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v22);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v23);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v25);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_1BDB878(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v27);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v28);
    sub_1BDB878(&IconLabelInfo_TypeInfo, v29);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33);
    byte_4B41241 = 1;
  }
  friendshipRank = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v34 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo1 = v34;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v34, v35, v36);
  v37 = (IconLabelInfo_o *)sub_1BDBAC4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v37, v38, v39);
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v41, v42);
  if ( !supportServantData )
    goto LABEL_65;
  if ( supportServantData->max_length <= nowDeckNum )
    sub_1BDBADC(Instance, v44, v45);
  v47 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v47;
  p_supportServantData = &this->fields.supportServantData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.supportServantData, (int32_t)v47, v45, v46);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v49, v50);
  v51 = this->fields.userServantEntity;
  if ( !v51 )
    goto LABEL_65;
  this->fields.svtId = v51->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v54 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v126.fields.currentCryptoKey = v54;
  *(_QWORD *)&v126.fields.fakeValue = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v126, 0LL);
  if ( !v55 )
    goto LABEL_65;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v55,
             Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v57, v58);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v59,
    v60);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v61 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(this->fields.svtId, 0LL);
  v62 = this->fields.userServantEntity;
  if ( !v62 )
    goto LABEL_65;
  v63 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v62->fields.limitCount, 0LL);
  if ( !v61 )
    goto LABEL_65;
  ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v61, v63, Instance, 0LL);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v64);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_65;
  this->fields.classId = servantEntity->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v66 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_65;
  v67 = *(_OWORD *)&v66->fields.userId.fields.fakeValue;
  v68 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v66->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v67;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v121 = v122;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v121, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(this->fields.svtId, 0LL);
  if ( !v68 )
    goto LABEL_65;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v68, v69, Instance, 0LL);
  if ( !Instance )
    goto LABEL_65;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isSame = 0;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v70, v71);
  this->fields.equipServantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v72, v73);
  this->fields.equipIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v74, v75);
  v76 = this->fields.userServantEntity;
  if ( !v76 )
    goto LABEL_65;
  v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v120.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v120, 0LL);
  v78 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_65;
  v79 = Instance;
  Instance = SupportServantData__getMember(v78, classPos, 0LL);
  v80 = this->fields.userServantEntity;
  this->fields.isBase = v79 == Instance;
  if ( !v80 )
    goto LABEL_65;
  Instance = UserServantEntity__IsLock(v80, 0LL);
  v81 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v81 )
    goto LABEL_65;
  Instance = UserServantEntity__IsChoice(v81, 0LL);
  v82 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v82 )
    goto LABEL_65;
  Instance = UserServantEntity__IsEventJoin(v82, 0LL);
  v83 = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v83 )
    goto LABEL_65;
  v84 = ServantEntity__checkIsHeroineSvt(v83, 0LL);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v84;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_65;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, 0LL);
  if ( Equip < 1 )
    goto LABEL_37;
  v87 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_65;
  v88 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v87,
          (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v89 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_65;
  v90 = (PartyOrganizationUtility_o *)Instance;
  v92 = *(_QWORD *)&v89->fields.svtId.fields.currentCryptoKey;
  v91 = *(_QWORD *)&v89->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v127.fields.currentCryptoKey = v92;
  *(_QWORD *)&v127.fields.fakeValue = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v127, 0LL);
  if ( !*p_userServantEntity
    || (v93 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v88)
    || (v94 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v88[5],
                     0LL),
        !v90) )
  {
LABEL_65:
    sub_1BDBAD4(Instance, v44);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v90,
                                   &skillName,
                                   &actMaxRarity,
                                   v93,
                                   v94,
                                   Instance,
                                   -1,
                                   0LL);
LABEL_37:
  this->fields.isUseInSet = 0;
  if ( !isFixMainDeck
    || (v95 = SupportServantListViewItem__CheckUseInSet(
                this,
                &this->fields.useSet,
                fixMainDeckIds,
                nowDeckId,
                supportServantData,
                v86),
        !(this->fields.isUseInSet = v95)) )
  {
    if ( isFixEventDeck )
      this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                  this,
                                  &this->fields.useSet,
                                  fixEventDeckIds,
                                  nowDeckId,
                                  supportServantData,
                                  v86);
  }
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_65;
  v96 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_65;
  v97 = *(_OWORD *)&v96->fields.id.fields.fakeValue;
  v98 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v96->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v122.fields.fakeValue = v97;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v119 = v122;
  v99 = v98 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v119, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v100 = v99;
  this->fields.isPush = v100;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_65;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v101 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v101 )
    goto LABEL_65;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v101, -1, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v103, v104);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_65;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   -1,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v106,
    v107);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_65;
  v108 = *(_DWORD *)(Instance + 276);
  v109 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v109 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v109->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v108;
  if ( !Instance )
    goto LABEL_65;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_65;
  v111 = *(int *)(Instance + 52);
  v112 = this->fields.servantEntity;
  this->fields.priority = v111;
  this->fields.sortValue1B = v111;
  if ( !v112 )
    goto LABEL_65;
  v113 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_65;
  this->fields.sortValue2 = ((__int64)v112->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v113->fields.lv;
  v115 = *(_QWORD *)&v113->fields.svtId.fields.currentCryptoKey;
  v114 = *(_QWORD *)&v113->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v128.fields.currentCryptoKey = v115;
  *(_QWORD *)&v128.fields.fakeValue = v114;
  v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v128, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v116;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_65;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_65;
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
  __int64 v10; // x1
  __int64 v11; // x8
  bool v12; // w19
  unsigned __int64 v13; // x28
  char *v14; // x22
  int v15; // w8
  int32_t *v16; // x22
  int v17; // t1
  int32_t i; // w24
  il2cpp_array_size_t v19; // w8
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x0
  int32_t svtId; // w27
  __int64 v22; // x25
  __int64 v23; // x26
  int32_t *v25; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v9 = this;
  if ( (byte_4B41242 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, setNo);
    this = (SupportServantListViewItem_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4B41242 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_1BDBAD4(this, setNo);
  v11 = *(_QWORD *)&fixDeckIds->max_length;
  v12 = (int)v11 > 0;
  if ( (int)v11 >= 1 )
  {
    v25 = setNo;
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
        goto LABEL_27;
      v14 = (char *)fixDeckIds + 4 * v13;
      v17 = *((_DWORD *)v14 + 8);
      v16 = (int32_t *)(v14 + 32);
      v15 = v17;
      if ( v17 != nowDeckId && v15 >= 1 )
        break;
LABEL_22:
      LODWORD(v11) = fixDeckIds->max_length;
      v12 = (__int64)++v13 < (int)v11;
      if ( (__int64)v13 >= (int)v11 )
        return v12;
    }
    for ( i = 0; ; ++i )
    {
      this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (SupportServantListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&this->fields.friendship.fields.hiddenValue + 180LL) )
        goto LABEL_22;
      if ( v13 >= fixDeckIds->max_length )
        goto LABEL_27;
      if ( !supportServantData )
        goto LABEL_28;
      v19 = *v16 - 1;
      if ( v19 >= supportServantData->max_length )
        goto LABEL_27;
      this = (SupportServantListViewItem_o *)supportServantData->m_Items[v19];
      if ( !this )
        goto LABEL_28;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity((SupportServantData_o *)this, i, 0LL);
      if ( UserServantLeaderEntity )
      {
        svtId = UserServantLeaderEntity->fields.svtId;
        v23 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v27.fields.currentCryptoKey = v23;
        *(_QWORD *)&v27.fields.fakeValue = v22;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                 v27,
                                                 0LL);
        if ( svtId == (_DWORD)this )
          break;
      }
    }
    if ( (unsigned int)v13 >= fixDeckIds->max_length )
LABEL_27:
      sub_1BDBADC(this, setNo, fixDeckIds);
    *v25 = *v16;
  }
  return v12;
}


void __fastcall SupportServantListViewItem__Finalize(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_Int64_array *__fastcall SupportServantListViewItem__GetEquipList(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v8; // x8
  System_Int64_array *v9; // x20
  unsigned __int64 v10; // x21
  int64_t v11; // x23
  __int64 v12; // x24
  unsigned __int64 max_length; // x9
  _OWORD *v14; // x8
  __int128 v15; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]

  if ( (byte_4B41248 & 1) == 0 )
  {
    sub_1BDB878(&long___TypeInfo, method);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_4B41248 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v5 = sub_1BDB920(long___TypeInfo, equipIdList->max_length);
  v8 = this->fields.equipIdList;
  if ( !v8 )
LABEL_13:
    sub_1BDBAD4(v5, v6);
  v9 = (System_Int64_array *)v5;
  v10 = 0LL;
  v11 = v5 + 32;
  v12 = 32LL;
  while ( 1 )
  {
    max_length = v8->max_length;
    if ( (__int64)v10 >= (int)max_length )
      return v9;
    if ( v10 >= max_length )
      goto LABEL_16;
    v14 = (_OWORD *)((char *)v8 + v12);
    v15 = v14[1];
    *(_OWORD *)&v18.fields.currentCryptoKey = *v14;
    *(_OWORD *)&v18.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v17 = v18;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v17, 0LL);
    if ( v9 )
    {
      if ( v10 >= v9->max_length )
LABEL_16:
        sub_1BDBADC(v5, v6, v7);
      *(_QWORD *)(v11 + 8 * v10) = v5;
      v8 = this->fields.equipIdList;
      ++v10;
      v12 += 32LL;
      if ( v8 )
        continue;
    }
    goto LABEL_13;
  }
}


int32_t __fastcall SupportServantListViewItem__GetFriendPointBonus(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SupportServantListViewItem_o *v3; // x19
  __int64 v4; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v6; // w20
  __int64 v7; // x24
  int max_length; // w9
  unsigned int v9; // w25
  __int64 v10; // x8
  System_Int32_array *v11; // x21
  int32_t SvtId; // w0
  __int64 v13; // x9
  __int64 v14; // x10
  _BOOL4 v15; // w10
  int32_t v16; // w21

  v3 = this;
  if ( (byte_4B4124F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, method);
    this = (SupportServantListViewItem_o *)sub_1BDB878(&System_Math_TypeInfo, v4);
    byte_4B4124F = 1;
  }
  eventFriendPoints = v3->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v6 = -1;
  v7 = 4LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= max_length )
      return v6;
    if ( v9 >= max_length )
      goto LABEL_22;
    v10 = *((_QWORD *)&eventFriendPoints->obj.klass + v7);
    if ( v10 )
    {
      v11 = *(System_Int32_array **)(v10 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v3, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v11,
                                               SvtId,
                                               (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v3->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v9 >= eventFriendPoints->max_length )
LABEL_22:
          sub_1BDBADC(this, method, v2);
        v13 = *((_QWORD *)&eventFriendPoints->obj.klass + v7);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 40);
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 24) == 0;
          else
            v15 = 1;
          if ( v15 || (int)this >= 0 )
          {
            v16 = *(_DWORD *)(v13 + 48);
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            this = (SupportServantListViewItem_o *)System_Math__Max_64100580(v6, v16, 0LL);
            eventFriendPoints = v3->fields.eventFriendPoints;
            v6 = (int)this;
          }
          ++v7;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_1BDBAD4(this, method);
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
  const MethodInfo *v9; // x3

  if ( (byte_4B4124E & 1) == 0 )
  {
    sub_1BDB878(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4B4124E = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BDBAC4(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportServantListViewItem__IsMatchClass(
        SupportServantListViewItem_o *this,
        int32_t classType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ServantClassMaster_o *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4B41245 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&classType);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_4B41245 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(Master_object, 0LL);
      if ( Master_object )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_object,
                 this->fields.classId,
                 (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_11:
    sub_1BDBAD4(Master_object, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int *manager; // x8
  __int64 methodPtr_low; // x11
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  UserServantEntity_o *userServantEntity; // x21
  __int64 v16; // x2
  SupportServantListViewItem_o *v17; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x0
  FilterKindList_c *v24; // x0
  ListViewSort_FilterKind_array *v25; // x0
  FilterKindList_c *v26; // x0
  FilterKindList_c *v27; // x0
  ListViewSort_FilterKind_array *v28; // x0
  FilterKindList_c *v29; // x0
  ListViewSort_FilterKind_array *v30; // x0
  UserServantEntity_o *v31; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v33; // x8
  System_Int32_array *SkillCategoryIdList; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v41; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v43; // w0

  v3 = sort;
  v4 = this;
  if ( (byte_4B41246 & 1) == 0 )
  {
    sub_1BDB878(&FilterKindList_TypeInfo, sort);
    sub_1BDB878(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BDB878(&ServantEventBonusFilterController_TypeInfo, v7);
    this = (SupportServantListViewItem_o *)sub_1BDB878(&SupportServantListViewManager_TypeInfo, v8);
    byte_4B41246 = 1;
  }
  if ( !v3 )
    goto LABEL_84;
  manager = (unsigned int *)v3->fields.manager;
  if ( !manager )
    goto LABEL_84;
  methodPtr_low = LOBYTE(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)methodPtr_low
    || *(SupportServantListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * methodPtr_low - 8) != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_84;
  }
  sort = (ListViewSort_o *)manager[106];
  if ( (unsigned int)((_DWORD)sort - 1) < 7 )
  {
    if ( !SupportServantListViewItem__IsMatchClass(v4, (int32_t)sort, method) )
      return 0;
    goto LABEL_9;
  }
  if ( (_DWORD)sort != 8 )
  {
    v27 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v27 = FilterKindList_TypeInfo;
    }
    this = (SupportServantListViewItem_o *)v27->static_fields->ClassGroupFilterKindList;
    if ( !this )
      goto LABEL_84;
    v28 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)this,
                                             (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( ListViewSort__IsUnSelectedAllTargetFilters(v3, v28, 0LL) )
    {
      v29 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v29 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v29->static_fields->ClassFilterKindList;
      if ( !this )
        goto LABEL_84;
      goto LABEL_61;
    }
LABEL_78:
    if ( !ListViewSort__IsMatchClassGroupFilter(v3, v4->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_9;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, 8, method) )
    return 0;
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
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v23, 0LL) )
    goto LABEL_78;
  v24 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v24 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v24->static_fields->ClassExtra1InShielderFilterKindList;
  if ( !this )
    goto LABEL_84;
  v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v25, 0LL) )
    goto LABEL_62;
  v26 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v26 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v26->static_fields->ClassExtra2FilterKindList;
  if ( !this )
    goto LABEL_84;
LABEL_61:
  v30 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v30, 0LL) )
  {
LABEL_62:
    if ( !ListViewSort__IsMatchClassFilter(v3, v4->fields.servantEntity, 0LL) )
      return 0;
  }
LABEL_9:
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v11->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_84;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v12, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(v3, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v13 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v13 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v13->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_84;
  v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(v3, v14, 0LL)
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
    v31 = v4->fields.userServantEntity;
    if ( v31 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v31, 0, 0LL) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_84;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v33 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v33 )
          goto LABEL_84;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v33, -1, -1, 0LL);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v35, v36);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_84;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         -1,
                                         0LL);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v38,
          v39);
      }
    }
    this = (SupportServantListViewItem_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_84;
    v17 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_85;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     v3,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (SupportServantListViewItem_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_84;
    v17 = this;
    if ( !this->fields.sortIndex )
LABEL_85:
      sub_1BDBADC(this, v17, v16);
    LODWORD(this->fields.sortValue0) = 51;
    v41 = ListViewSort__IsUnSelectedAllTargetFilters(v3, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              v3,
                              0LL);
    v43 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, v3, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v41) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v43 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v43 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(v3, v4->fields.userServantEntity, v4->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(v3, v4->fields.userServantEntity, v4->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  this = (SupportServantListViewItem_o *)sub_1BDB920(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
LABEL_84:
    sub_1BDBAD4(this, sort);
  v17 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_85;
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
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v19->static_fields->RarityFilterKindList;
  if ( !this )
    goto LABEL_84;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(v3, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(v3, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(v3, v4->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CGThumbnailListItem_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  CGThumbnailListItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  Il2CppObject *Entity; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  if ( (byte_4B41243 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B41243 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (CGThumbnailListItem_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_11;
    byval_arg = klass->_1.byval_arg;
    v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v17.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v16 = v17;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v16, 0LL);
    if ( !v12 )
LABEL_11:
      sub_1BDBAD4(Instance, v9);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v12,
               (int64_t)Instance,
               (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (CGThumbnailListItem_c *)Entity;
    sub_1BDB81C(p_userServantEntity, (int32_t)Entity, v14, v15);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BDBAD4(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall SupportServantListViewItem__ModifyItem(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UserServantEntity_o **p_userServantEntity; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  if ( !*p_userServantEntity )
    sub_1BDBAD4(0LL, v7);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
  SupportServantListViewItem__SetOverwriteStatus(this, userServantEntity, v8);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BDBAD4(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_34830348(
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
  const MethodInfo *v3; // x3

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3);
}


void __fastcall SupportServantListViewItem__SetEquipStatus(
        SupportServantListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  CGThumbnailListItem_o *p_equipUserServantEntity; // x20
  CGThumbnailListItem_o *p_equipServantEntity; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  CGThumbnailListItem_o *p_equipIdList; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int64_t Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  CGThumbnailListItem_c *klass; // x8
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x22
  __int64 v29; // x1
  BalanceConfig_c *v30; // x0
  Il2CppType this_arg; // q1
  CGThumbnailListItem_c *v32; // x8
  Il2CppType v33; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  Il2CppObject *Entity; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  CGThumbnailListItem_c *v38; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  CGThumbnailListItem_c *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x20
  Il2CppClass *v43; // x21
  Il2CppClass *v44; // x22
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B41244 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, equipIdList);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B41244 = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (CGThumbnailListItem_o *)&this->fields.equipUserServantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = (CGThumbnailListItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v16, v17);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (CGThumbnailListItem_o *)&this->fields.equipIdList;
  sub_1BDB81C(p_equipIdList, 0, v19, v20);
  if ( !p_equipIdList->monitor )
    return;
  if ( !equipIdList )
    goto LABEL_9;
  klass = p_equipIdList->klass;
  if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIdList )
    goto LABEL_14;
  v25 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
  if ( v25 )
  {
    v28 = v25;
    v29 = sub_1BDB9B4(v25, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v29 )
    {
      sub_1BDBD94(v28);
LABEL_9:
      v30 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v30 = BalanceConfig_TypeInfo;
      }
      v29 = sub_1BDB920(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v30->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v29 = 0LL;
  }
  p_equipIdList->klass = (CGThumbnailListItem_c *)v29;
  sub_1BDB81C(p_equipIdList, v29, v26, v27);
  klass = p_equipIdList->klass;
LABEL_14:
  if ( !klass )
    goto LABEL_36;
  if ( !LODWORD(klass->_1.namespaze) )
    goto LABEL_37;
  this_arg = klass->_1.this_arg;
  *(Il2CppType *)&v50.fields.currentCryptoKey = klass->_1.byval_arg;
  *(Il2CppType *)&v50.fields.fakeValue = this_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v49 = v50;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v49, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v32 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_36;
  if ( !LODWORD(v32->_1.namespaze) )
LABEL_37:
    sub_1BDBADC(Instance, v22, v23);
  v33 = v32->_1.this_arg;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(Il2CppType *)&v50.fields.currentCryptoKey = v32->_1.byval_arg;
  *(Il2CppType *)&v50.fields.fakeValue = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v48 = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v48, 0LL);
  if ( !v34 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v34,
             Instance,
             (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1BDB81C(p_equipUserServantEntity, (int32_t)Entity, v36, v37);
  v38 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v38->_1.declaringType;
    parent = v38->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v51.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v51, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
        v41 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v44 = v41->_1.declaringType;
          v43 = v41->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v52.fields.currentCryptoKey = v44;
          *(_QWORD *)&v52.fields.fakeValue = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v52, 0LL);
          if ( v42 )
          {
            v45 = DataMasterBase_object__object__int___GetEntity(
                    v42,
                    Instance,
                    (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (CGThumbnailListItem_c *)v45;
            sub_1BDB81C(p_equipServantEntity, (int32_t)v45, v46, v47);
            return;
          }
        }
      }
LABEL_36:
      sub_1BDBAD4(Instance, v22);
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

  if ( (byte_4B41249 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    byte_4B41249 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userSvtId, 0LL);
    v9 = *(_OWORD *)&v10.fields.fakeValue;
    if ( !equipIdList->max_length )
      sub_1BDBADC(v6, v7, v8);
    *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey = *(_OWORD *)&v10.fields.currentCryptoKey;
    *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue = v9;
    SupportServantListViewItem__SetEquipStatus(this, this->fields.equipIdList, v8);
  }
}


void __fastcall SupportServantListViewItem__SetOverwriteStatus(
        SupportServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (SupportServantListViewItem_o *)UserServantEntity__GetOverwriteStatus(userServantEntity, 0LL, 0LL)) == 0LL) )
  {
    sub_1BDBAD4(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8uLL);
}


bool __fastcall SupportServantListViewItem__SetSortValue(
        SupportServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  SupportServantListViewItem_o *v4; // x19
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
  int32_t bonusKind2; // w8
  int32_t v17; // w2
  int32_t bonusKind2Id; // w8
  int32_t v19; // w8
  int32_t v20; // w8
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v23; // x22
  __int64 v24; // x23
  EventCampaignMaster_o *v25; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v27; // x22
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v30; // zf
  _BOOL4 v31; // w8
  int v32; // w10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v34; // q1
  struct UserServantEntity_o *v35; // x8
  const MethodInfo *v36; // x2
  int64_t rarity; // x8
  int64_t equipServantEntity_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t cost; // x2
  int32_t friendshipMax; // w3
  int32_t v42; // w1
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int64_t hp; // x20
  IconLabelInfo_o *v45; // x21
  struct UserServantEntity_o *v46; // x8
  int32_t atk; // w4
  int32_t v48; // w3
  int32_t v49; // w1
  struct UserServantEntity_o *v50; // x8
  struct UserServantEntity_o *v51; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v53; // x20
  __int64 v54; // x21
  int32_t v55; // w0
  SupportServantListViewItem_o *v56; // x20
  int64_t v57; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v60; // x20
  int32_t equipServantEntity; // w20
  SupportServantListViewItem_o *v62; // x21
  __int64 v63; // x21
  __int64 v64; // x22
  const MethodInfo *v65; // x2
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v68; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  v4 = this;
  if ( (byte_4B41247 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&System_Func_EventGroupEntity__bool__TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BDB878(&Method_SupportServantListViewItem__SetSortValue_b__56_0__, v14);
    this = (SupportServantListViewItem_o *)sub_1BDB878(&SupportServantListViewManager_TypeInfo, v15);
    byte_4B41247 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
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
        this = (SupportServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_125;
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
            goto LABEL_125;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v27 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_EventGroupEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v27,
              (Il2CppObject *)v4,
              Method_SupportServantListViewItem__SetSortValue_b__56_0__,
              0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        (System_Func_T__bool__o *)v27,
                                        (const MethodInfo_301CDFC *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_42;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          v19 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v19 )
          {
LABEL_42:
            if ( !v4->fields.isEventUpVal )
              goto LABEL_65;
            break;
          }
        }
        else
        {
          v19 = sort->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v19;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v24 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v25 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v73.fields.currentCryptoKey = v24;
        *(_QWORD *)&v73.fields.fakeValue = v23;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                 v73,
                                                 0LL);
        if ( !v25 )
          goto LABEL_125;
        IsEnableServant = EventCampaignMaster__IsEnableServant(v25, (int32_t)this, v4->fields.bonusKindId, 0LL);
LABEL_32:
        v4->fields.isEventUpVal = IsEnableServant;
        if ( !IsEnableServant )
          goto LABEL_65;
        break;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind2 )
        {
          v17 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v17 )
            goto LABEL_42;
        }
        else
        {
          v17 = sort->fields.bonusKind2Id;
        }
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.bonusKind = bonusKind2;
        v4->fields.bonusKindId = v17;
        if ( !this )
          goto LABEL_125;
        IsEnableServant = UserServantEntity__getEventUpVal_42107500(
                            (UserServantEntity_o *)this,
                            v4->fields.eventSetupInfo,
                            v17,
                            0LL,
                            0LL);
        goto LABEL_32;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v20 = sort->fields.bonusKind2Id;
          if ( v4->fields.bonusKindId == v20 )
            goto LABEL_42;
        }
        else
        {
          v20 = sort->fields.bonusKind2Id;
        }
        v4->fields.bonusKind = 7;
        v4->fields.bonusKindId = v20;
        this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_125;
        this = (SupportServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
        if ( !this )
          goto LABEL_125;
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
      goto LABEL_125;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
      goto LABEL_65;
    this = (SupportServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_125;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v36) )
    {
LABEL_65:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0LL;
  v30 = !isChoice;
  v31 = !isChoice;
  v32 = !v30;
  if ( !isSwapChoice )
    v31 = v32;
  if ( v31 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10LL;
  this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
LABEL_125:
    sub_1BDBAD4(this, sort);
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (SupportServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_125;
      v34 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v71.fields.fakeValue = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v70 = v71;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                               &v70,
                                               0LL);
      v35 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v35 )
        goto LABEL_125;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_125;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v35->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_102;
    case 2:
      rarity = v4->fields.rarity;
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_87;
    case 3:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      equipServantEntity_low = SLODWORD(this->fields.equipServantEntity);
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = equipServantEntity_low;
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_125;
      IconLabelInfo__Set_39930232(iconLabelInfo1, 2, equipServantEntity_low, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
      goto LABEL_107;
    case 4:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      UserServantEntity__getTreasureDeviceInfo_42114760((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(cost) = tdMaxLv[1];
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_125;
      friendshipMax = tdMaxLv[0];
      v42 = 33;
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
        v45 = v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0LL);
        v46 = v4->fields.equipUserServantEntity;
        if ( !v46 || !v45 )
          goto LABEL_125;
        atk = v46->fields.hp;
        v48 = (int)this;
        v49 = 46;
        goto LABEL_83;
      }
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_125;
      v62 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      this = (SupportServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0LL);
      if ( !v62 )
        goto LABEL_125;
      friendshipMax = (int)this;
      v42 = 3;
      goto LABEL_114;
    case 6:
      v50 = v4->fields.equipUserServantEntity;
      hp = v4->fields.atk;
      if ( v50 )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = v50->fields.atk + (int)hp;
        if ( !this )
          goto LABEL_125;
        v45 = v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0LL);
        v51 = v4->fields.equipUserServantEntity;
        if ( !v51 || !v45 )
          goto LABEL_125;
        atk = v51->fields.atk;
        v48 = (int)this;
        v49 = 47;
LABEL_83:
        IconLabelInfo__Set_39930232(v45, v49, hp, v48, atk, 0, 0, 0, 0, 0LL);
      }
      else
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_125;
        v62 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        this = (SupportServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0LL);
        if ( !v62 )
          goto LABEL_125;
        friendshipMax = (int)this;
        v42 = 5;
LABEL_114:
        this = v62;
        LODWORD(cost) = hp;
LABEL_101:
        IconLabelInfo__Set_39930232((IconLabelInfo_o *)this, v42, cost, friendshipMax, 0, 0, 0, 0, 0, 0LL);
      }
LABEL_102:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_104:
      equipServantEntity = (int32_t)this->fields.equipServantEntity;
LABEL_105:
      this = (SupportServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_125;
      IconLabelInfo__Set_39930232(iconLabelInfo2, 2, equipServantEntity, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
LABEL_107:
      LOBYTE(this) = 1;
      return (char)this;
    case 7:
      cost = v4->fields.cost;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      v42 = 7;
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
      v53 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v54 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v74.fields.currentCryptoKey = v53;
      *(_QWORD *)&v74.fields.fakeValue = v54;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v74, 0LL);
      v56 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v57 = v55;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v57;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                               friendship,
                                               0LL);
      if ( !v56 )
        goto LABEL_125;
      friendshipMax = v4->fields.friendshipMax;
      LODWORD(cost) = (_DWORD)this;
      v42 = 32;
      this = v56;
      goto LABEL_101;
    case 0xE:
      this = (SupportServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_122;
      manager = sort->fields.manager;
      if ( manager
        && (methodPtr_low = LOBYTE(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportServantListViewManager_TypeInfo )
          v60 = sort->fields.manager;
        else
          v60 = 0LL;
      }
      else
      {
        v60 = 0LL;
      }
      v64 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v63 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v76.fields.currentCryptoKey = v64;
      *(_QWORD *)&v76.fields.fakeValue = v63;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                               v76,
                                               0LL);
      if ( !v60 )
        goto LABEL_125;
      this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                               (SupportServantListViewManager_o *)v60,
                                               (int32_t)this,
                                               v65);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_122:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_125;
      collectionNo = servantEntity->fields.collectionNo;
      v68 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v68 )
        goto LABEL_125;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      equipServantEntity = v68->fields.lv;
      this = (SupportServantListViewItem_o *)v68;
      goto LABEL_105;
    case 0xF:
      cost = v4->fields.hpReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v42 = 44;
      goto LABEL_101;
    case 0x10:
      cost = v4->fields.atkReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = cost;
      if ( !this )
        goto LABEL_125;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v42 = 45;
      goto LABEL_101;
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


bool __fastcall SupportServantListViewItem___SetSortValue_b__56_0(
        SupportServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  EventCampaignMaster_o *v11; // x21
  ServantFilterMaster_o *userServantEntity; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B41250 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B41250 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  userServantEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                 v15,
                                                 0LL);
  if ( !entity || !v11 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)userServantEntity, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userServantEntity, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  userServantEntity = (ServantFilterMaster_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_17:
    sub_1BDBAD4(userServantEntity, v13);
  return UserServantEntity__getEventUpVal_42107500(
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
  return this->fields.cost;
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
  if ( (byte_4B4124C & 1) == 0 )
  {
    sub_1BDB878(&TutorialFlag_TypeInfo, method);
    byte_4B4124C = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_39449392(126, 0LL);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B4124D & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B4124D = 1;
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
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v7, 0LL);
  if ( !supportServantData )
LABEL_8:
    sub_1BDBAD4(this, method);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, 0LL);
}


System_String_o *__fastcall SupportServantListViewItem__get_NameText(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B4124B & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BDB878(&StringLiteral_19073/*"error"*/, v3);
    byte_4B4124B = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19073/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0, 0LL);
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

  if ( (byte_4B4124A & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B4124A = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v6, 0LL);
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