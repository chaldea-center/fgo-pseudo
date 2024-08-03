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
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  IconLabelInfo_o *v39; // x28
  struct IconLabelInfo_o **p_iconLabelInfo2; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  UserServantEntity_o **p_userServantEntity; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  int64_t Instance; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  struct SupportServantData_o *v50; // x1
  struct SupportServantData_o **p_supportServantData; // x24
  int32_t v52; // w2
  int32_t v53; // w3
  struct UserServantEntity_o *v54; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v56; // x27
  __int64 v57; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x26
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x25
  struct UserServantEntity_o *v66; // x8
  int32_t v67; // w27
  UserServantEntity_o *v68; // x8
  __int128 v69; // q1
  UserServantCollectionMaster_o *v70; // x25
  int64_t v71; // x26
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w2
  int32_t v77; // w3
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  const MethodInfo *v80; // x2
  SupportServantData_o *v81; // x8
  int64_t v82; // x24
  UserServantEntity_o *v83; // x8
  UserServantEntity_o *v84; // x8
  UserServantEntity_o *v85; // x8
  ServantEntity_o *servantEntity; // x8
  const MethodInfo *v87; // x2
  bool v88; // w8
  int64_t Equip; // x0
  const MethodInfo *v90; // x5
  int64_t v91; // x23
  Il2CppObject *v92; // x24
  UserServantEntity_o *v93; // x8
  PartyOrganizationUtility_o *v94; // x23
  __int64 v95; // x25
  __int64 v96; // x26
  int32_t v97; // w25
  int32_t v98; // w26
  bool v99; // w0
  UserServantEntity_o *v100; // x8
  __int128 v101; // q0
  __int64 v102; // x22
  bool v103; // zf
  bool v104; // w8
  UserServantEntity_o *v105; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  int v112; // w22
  BalanceConfig_c *v113; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v115; // x8
  struct ServantEntity_o *v116; // x9
  UserServantEntity_o *v117; // x8
  __int64 v118; // x21
  __int64 v119; // x22
  int32_t v120; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  if ( (byte_49F8F26 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v22);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v23);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v25);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v27);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v28);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v29);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33);
    byte_49F8F26 = 1;
  }
  friendshipRank = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v34 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo1 = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v34, v35, v36);
  v39 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v37, v38);
  IconLabelInfo___ctor(v39, 0LL);
  this->fields.iconLabelInfo2 = v39;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v39, v41, v42);
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v44,
    v45);
  if ( !supportServantData )
    goto LABEL_66;
  if ( supportServantData->max_length <= nowDeckNum )
    sub_1B6432C(Instance, v47);
  v50 = supportServantData->m_Items[nowDeckNum];
  this->fields.supportServantData = v50;
  p_supportServantData = &this->fields.supportServantData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v50, v48, v49);
  this->fields.eventSetupInfo = eventSetupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)eventSetupInfo, v52, v53);
  v54 = this->fields.userServantEntity;
  if ( !v54 )
    goto LABEL_66;
  this->fields.svtId = v54->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v57 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v129.fields.currentCryptoKey = v57;
  *(_QWORD *)&v129.fields.fakeValue = v56;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v129, 0LL);
  if ( !v58 )
    goto LABEL_66;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v58,
             Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v61, v62);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v63,
    v64);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v65 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.svtId, 0LL);
  v66 = this->fields.userServantEntity;
  if ( !v66 )
    goto LABEL_66;
  v67 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v66->fields.limitCount, 0LL);
  if ( !v65 )
    goto LABEL_66;
  Instance = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v65, v67, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_66;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !Instance )
    goto LABEL_66;
  this->fields.rarity = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v68 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v69 = *(_OWORD *)&v68->fields.userId.fields.fakeValue;
  v70 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v68->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v125.fields.fakeValue = v69;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v124 = v125;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v124, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.svtId, 0LL);
  if ( !v70 )
    goto LABEL_66;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v70, v71, Instance, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, v72, v73);
  this->fields.equipServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v74, v75);
  this->fields.equipIdList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v76, v77);
  v78 = this->fields.userServantEntity;
  if ( !v78 )
    goto LABEL_66;
  v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
  *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v123.fields.fakeValue = v79;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v123, 0LL);
  v81 = *p_supportServantData;
  if ( !*p_supportServantData )
    goto LABEL_66;
  v82 = Instance;
  Instance = SupportServantData__getMember(v81, classPos, v80);
  v83 = this->fields.userServantEntity;
  this->fields.isBase = v82 == Instance;
  if ( !v83 )
    goto LABEL_66;
  Instance = UserServantEntity__IsLock(v83, 0LL);
  v84 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v84 )
    goto LABEL_66;
  Instance = UserServantEntity__IsChoice(v84, 0LL);
  v85 = this->fields.userServantEntity;
  this->fields.isChoice = Instance & 1;
  if ( !v85 )
    goto LABEL_66;
  Instance = UserServantEntity__IsEventJoin(v85, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !servantEntity )
    goto LABEL_66;
  v88 = ServantEntity__checkIsHeroineSvt(servantEntity, 0LL);
  Instance = (int64_t)this->fields.supportServantData;
  this->fields.isHeroine = v88;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  if ( !Instance )
    goto LABEL_66;
  Equip = SupportServantData__getEquip((SupportServantData_o *)Instance, classPos, v87);
  if ( Equip < 1 )
    goto LABEL_38;
  v91 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_66;
  v92 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v91,
          (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v93 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v94 = (PartyOrganizationUtility_o *)Instance;
  v96 = *(_QWORD *)&v93->fields.svtId.fields.currentCryptoKey;
  v95 = *(_QWORD *)&v93->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v130.fields.currentCryptoKey = v96;
  *(_QWORD *)&v130.fields.fakeValue = v95;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v130, 0LL);
  if ( !*p_userServantEntity
    || (v97 = Instance, Instance = UserServantEntity__getRarity(*p_userServantEntity, 0LL), !v92)
    || (v98 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v92[5],
                     0LL),
        !v94) )
  {
LABEL_66:
    sub_1B64324(Instance);
  }
  this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                   v94,
                                   &skillName,
                                   &actMaxRarity,
                                   v97,
                                   v98,
                                   Instance,
                                   -1,
                                   0LL);
LABEL_38:
  this->fields.isUseInSet = 0;
  if ( !isFixMainDeck
    || (v99 = SupportServantListViewItem__CheckUseInSet(
                this,
                &this->fields.useSet,
                fixMainDeckIds,
                nowDeckId,
                supportServantData,
                v90),
        !(this->fields.isUseInSet = v99)) )
  {
    if ( isFixEventDeck )
      this->fields.isUseInSet = SupportServantListViewItem__CheckUseInSet(
                                  this,
                                  &this->fields.useSet,
                                  fixEventDeckIds,
                                  nowDeckId,
                                  supportServantData,
                                  v90);
  }
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_66;
  v100 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  v101 = *(_OWORD *)&v100->fields.id.fields.fakeValue;
  v102 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v100->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v125.fields.fakeValue = v101;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v122 = v125;
  v103 = v102 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v122, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v104 = v103;
  this->fields.isPush = v104;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_66;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v105 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v105 )
    goto LABEL_66;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v105, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v107,
    v108);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v110,
    v111);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_66;
  v112 = *(_DWORD *)(Instance + 276);
  v113 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v113 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v113->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v112;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_66;
  v115 = *(int *)(Instance + 48);
  v116 = this->fields.servantEntity;
  this->fields.priority = v115;
  this->fields.sortValue1B = v115;
  if ( !v116 )
    goto LABEL_66;
  v117 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_66;
  this->fields.sortValue2 = ((__int64)v116->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v117->fields.lv;
  v119 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
  v118 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v131.fields.currentCryptoKey = v119;
  *(_QWORD *)&v131.fields.fakeValue = v118;
  v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v131, 0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.sortValue2B = v120;
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
  if ( (byte_49F8F27 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, setNo);
    this = (SupportServantListViewItem_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_49F8F27 = 1;
  }
  *setNo = 0;
  if ( !fixDeckIds )
LABEL_28:
    sub_1B64324(this);
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
      if ( i >= *(_DWORD *)(*(_QWORD *)&this->fields.friendshipMax + 164LL) )
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
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)this,
                                  i,
                                  (const MethodInfo *)fixDeckIds);
      if ( UserServantLeaderEntity )
      {
        svtId = UserServantLeaderEntity->fields.svtId;
        v23 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v27.fields.currentCryptoKey = v23;
        *(_QWORD *)&v27.fields.fakeValue = v22;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                 v27,
                                                 0LL);
        if ( svtId == (_DWORD)this )
          break;
      }
    }
    if ( (unsigned int)v13 >= fixDeckIds->max_length )
LABEL_27:
      sub_1B6432C(this, setNo);
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v7; // x8
  System_Int64_array *v8; // x20
  unsigned __int64 v9; // x21
  int64_t v10; // x23
  __int64 v11; // x24
  unsigned __int64 max_length; // x9
  _OWORD *v13; // x8
  __int128 v14; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h]

  if ( (byte_49F8F2D & 1) == 0 )
  {
    sub_1B640C8(&long___TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_49F8F2D = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v5 = sub_1B64170(long___TypeInfo, equipIdList->max_length);
  v7 = this->fields.equipIdList;
  if ( !v7 )
LABEL_13:
    sub_1B64324(v5);
  v8 = (System_Int64_array *)v5;
  v9 = 0LL;
  v10 = v5 + 32;
  v11 = 32LL;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (__int64)v9 >= (int)max_length )
      return v8;
    if ( v9 >= max_length )
      goto LABEL_16;
    v13 = (_OWORD *)((char *)v7 + v11);
    v14 = v13[1];
    *(_OWORD *)&v17.fields.currentCryptoKey = *v13;
    *(_OWORD *)&v17.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v16 = v17;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
    if ( v8 )
    {
      if ( v9 >= v8->max_length )
LABEL_16:
        sub_1B6432C(v5, v6);
      *(_QWORD *)(v10 + 8 * v9) = v5;
      v7 = this->fields.equipIdList;
      ++v9;
      v11 += 32LL;
      if ( v7 )
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
  __int64 v3; // x1
  struct EventCampaignEntity_array *eventFriendPoints; // x8
  int32_t v5; // w20
  __int64 v6; // x24
  int max_length; // w9
  unsigned int v8; // w25
  __int64 v9; // x8
  System_Int32_array *v10; // x21
  int32_t SvtId; // w0
  __int64 v12; // x9
  __int64 v13; // x10
  _BOOL4 v14; // w10
  int32_t v15; // w21

  v2 = this;
  if ( (byte_49F8F34 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, method);
    this = (SupportServantListViewItem_o *)sub_1B640C8(&System_Math_TypeInfo, v3);
    byte_49F8F34 = 1;
  }
  eventFriendPoints = v2->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v5 = -1;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = eventFriendPoints->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      return v5;
    if ( v8 >= max_length )
      goto LABEL_22;
    v9 = *((_QWORD *)&eventFriendPoints->obj.klass + v6);
    if ( v9 )
    {
      v10 = *(System_Int32_array **)(v9 + 40);
      SvtId = SupportServantListViewItem__get_SvtId(v2, method);
      this = (SupportServantListViewItem_o *)System_Array__IndexOf_int_(
                                               v10,
                                               SvtId,
                                               (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
      eventFriendPoints = v2->fields.eventFriendPoints;
      if ( eventFriendPoints )
      {
        if ( v8 >= eventFriendPoints->max_length )
LABEL_22:
          sub_1B6432C(this, method);
        v12 = *((_QWORD *)&eventFriendPoints->obj.klass + v6);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 40);
          if ( v13 )
            v14 = *(_DWORD *)(v13 + 24) == 0;
          else
            v14 = 1;
          if ( v14 || (int)this >= 0 )
          {
            v15 = *(_DWORD *)(v12 + 48);
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            this = (SupportServantListViewItem_o *)System_Math__Max_62194036(v5, v15, 0LL);
            eventFriendPoints = v2->fields.eventFriendPoints;
            v5 = (int)this;
          }
          ++v6;
          if ( eventFriendPoints )
            continue;
        }
      }
    }
    sub_1B64324(this);
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

  if ( (byte_49F8F33 & 1) == 0 )
  {
    sub_1B640C8(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_49F8F33 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B64314(TreasureDvcInfo_TypeInfo, tdInfo, method);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
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

  if ( (byte_49F8F2A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&classType);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v6);
    byte_49F8F2A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( classType == 8 )
  {
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)ServantClassMaster__getExtraClassIdList(Master_object, 0LL);
      if ( Master_object )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Master_object,
                 this->fields.classId,
                 (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_11:
    sub_1B64324(Master_object);
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
  SupportServantListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  int32_t seed; // w1
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  UserServantEntity_o *userServantEntity; // x21
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
  int32_t v36; // w3
  System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v41; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v43; // w0

  v4 = this;
  if ( (byte_49F8F2B & 1) == 0 )
  {
    sub_1B640C8(&FilterKindList_TypeInfo, sort);
    sub_1B640C8(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B640C8(&ServantEventBonusFilterController_TypeInfo, v7);
    this = (SupportServantListViewItem_o *)sub_1B640C8(&SupportServantListViewManager_TypeInfo, v8);
    byte_49F8F2B = 1;
  }
  if ( !sort )
    goto LABEL_82;
  manager = sort->fields.manager;
  if ( !manager )
    goto LABEL_82;
  methodPtr_low = LOBYTE(SupportServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SupportServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != SupportServantListViewManager_TypeInfo )
  {
    goto LABEL_82;
  }
  seed = (int32_t)manager[1].fields.seed;
  if ( (unsigned int)(seed - 1) >= 7 )
  {
    if ( seed == 8 )
    {
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
LABEL_82:
        sub_1B64324(this);
      v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)this,
                                               (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL) )
      {
        v24 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v24 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v24->static_fields->ClassExtra1InShielderFilterKindList;
        if ( !this )
          goto LABEL_82;
        v25 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v25, 0LL) )
        {
LABEL_60:
          if ( !ListViewSort__IsMatchClassFilter(sort, v4->fields.servantEntity, 0LL) )
            return 0;
          goto LABEL_9;
        }
        v26 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v26 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v26->static_fields->ClassExtra2FilterKindList;
        if ( !this )
          goto LABEL_82;
LABEL_59:
        v30 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                 (System_Collections_Generic_List_T__o *)this,
                                                 (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v30, 0LL) )
          goto LABEL_9;
        goto LABEL_60;
      }
    }
    else
    {
      v27 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v27 = FilterKindList_TypeInfo;
      }
      this = (SupportServantListViewItem_o *)v27->static_fields->ClassGroupFilterKindList;
      if ( !this )
        goto LABEL_82;
      v28 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                               (System_Collections_Generic_List_T__o *)this,
                                               (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v28, 0LL) )
      {
        v29 = FilterKindList_TypeInfo;
        if ( !FilterKindList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
          v29 = FilterKindList_TypeInfo;
        }
        this = (SupportServantListViewItem_o *)v29->static_fields->ClassFilterKindList;
        if ( !this )
          goto LABEL_82;
        goto LABEL_59;
      }
    }
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v4->fields.servantEntity, 0LL) )
      return 0;
    goto LABEL_9;
  }
  if ( !SupportServantListViewItem__IsMatchClass(v4, seed, method) )
    return 0;
LABEL_9:
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v12->static_fields->NpTypeFilterKindList;
  if ( !this )
    goto LABEL_82;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  this = (SupportServantListViewItem_o *)v14->static_fields->NpEffectFilterKindList;
  if ( !this )
    goto LABEL_82;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, v4->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    userServantEntity = v4->fields.userServantEntity;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v31 = v4->fields.userServantEntity;
    if ( v31 )
    {
      dispLimitCount = v4->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v31, 0, 0LL) )
      {
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_82;
        this = (SupportServantListViewItem_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
        v33 = v4->fields.userServantEntity;
        v4->fields.dispLimitCount = (int)this;
        if ( !v33 )
          goto LABEL_82;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v33, -1, 0LL);
        v4->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v4->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v35,
          v36);
        this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_82;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)this,
                                         0,
                                         0LL);
        v4->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v4->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v38,
          v39);
      }
    }
    this = (SupportServantListViewItem_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_82;
    v17 = this;
    if ( !this->fields.sortIndex )
      goto LABEL_83;
    LODWORD(this->fields.sortValue0) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)this,
                                     0LL);
    this = (SupportServantListViewItem_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_82;
    v17 = this;
    if ( !this->fields.sortIndex )
LABEL_83:
      sub_1B6432C(this, v17);
    LODWORD(this->fields.sortValue0) = 51;
    v41 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              v4->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v43 = ServantEquipEffectFilterController__IsMatchEffectCategory(v4->fields.skillCategoryIdList, sort, 0LL);
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
  this = (SupportServantListViewItem_o *)sub_1B64170(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_82;
  v17 = this;
  if ( !this->fields.sortIndex )
    goto LABEL_83;
  LODWORD(this->fields.sortValue0) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)this, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
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
    goto LABEL_82;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)this,
                                           (const MethodInfo_3494300 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, v4->fields.rarity, 0LL);
}


void __fastcall SupportServantListViewItem__Modify(SupportServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusBattleListViewItem_o *p_userServantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // t1
  DataManager_o *Instance; // x0
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  Il2CppObject *Entity; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  if ( (byte_49F8F28 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F8F28 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity;
  if ( userServantEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    klass = p_userServantEntity->klass;
    if ( !p_userServantEntity->klass )
      goto LABEL_11;
    byval_arg = klass->_1.byval_arg;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v16.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v15 = v16;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL);
    if ( !v11 )
LABEL_11:
      sub_1B64324(Instance);
    Entity = DataMasterBase_object__object__long___GetEntity(
               v11,
               (int64_t)Instance,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_userServantEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
    sub_1B6406C(p_userServantEntity, (int32_t)Entity, v13, v14);
  }
}


void __fastcall SupportServantListViewItem__ModifyChoiceItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B64324(0LL);
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

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  if ( !*p_userServantEntity )
    sub_1B64324(0LL);
  this->fields.isEventJoin = UserServantEntity__IsEventJoin(*p_userServantEntity, 0LL);
}


void __fastcall SupportServantListViewItem__ModifyLockItem(
        SupportServantListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B64324(0LL);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall SupportServantListViewItem__Modify_33096176(
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
  sub_1B6406C(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ServantStatusBattleListViewItem_o *p_equipUserServantEntity; // x20
  ServantStatusBattleListViewItem_o *p_equipServantEntity; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  ServantStatusBattleListViewItem_o *p_equipIdList; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t Instance; // x0
  __int64 v22; // x1
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x22
  __int64 v28; // x1
  BalanceConfig_c *v29; // x0
  Il2CppType this_arg; // q1
  ServantStatusBattleListViewItem_c *v31; // x8
  Il2CppType v32; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x21
  Il2CppObject *Entity; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  ServantStatusBattleListViewItem_c *v37; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  ServantStatusBattleListViewItem_c *v40; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x20
  Il2CppClass *v42; // x21
  Il2CppClass *v43; // x22
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_49F8F29 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, equipIdList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49F8F29 = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  this->fields.equipServantEntity = 0LL;
  p_equipServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v16, v17);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (ServantStatusBattleListViewItem_o *)&this->fields.equipIdList;
  sub_1B6406C(p_equipIdList, 0, v19, v20);
  if ( !p_equipIdList->monitor )
    return;
  if ( !equipIdList )
    goto LABEL_9;
  klass = p_equipIdList->klass;
  if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIdList )
    goto LABEL_14;
  v24 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
  if ( v24 )
  {
    v27 = v24;
    v28 = sub_1B64204(v24, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v28 )
    {
      sub_1B645E4(v27);
LABEL_9:
      v29 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      v28 = sub_1B64170(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v29->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v28 = 0LL;
  }
  p_equipIdList->klass = (ServantStatusBattleListViewItem_c *)v28;
  sub_1B6406C(p_equipIdList, v28, v25, v26);
  klass = p_equipIdList->klass;
LABEL_14:
  if ( !klass )
    goto LABEL_36;
  if ( !LODWORD(klass->_1.namespaze) )
    goto LABEL_37;
  this_arg = klass->_1.this_arg;
  *(Il2CppType *)&v49.fields.currentCryptoKey = klass->_1.byval_arg;
  *(Il2CppType *)&v49.fields.fakeValue = this_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v48 = v49;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v31 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_36;
  if ( !LODWORD(v31->_1.namespaze) )
LABEL_37:
    sub_1B6432C(Instance, v22);
  v32 = v31->_1.this_arg;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(Il2CppType *)&v49.fields.currentCryptoKey = v31->_1.byval_arg;
  *(Il2CppType *)&v49.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v47 = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v47, 0LL);
  if ( !v33 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v33,
             Instance,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B6406C(p_equipUserServantEntity, (int32_t)Entity, v35, v36);
  v37 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v37->_1.declaringType;
    parent = v37->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v50.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v50, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
        v40 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v43 = v40->_1.declaringType;
          v42 = v40->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v51.fields.currentCryptoKey = v43;
          *(_QWORD *)&v51.fields.fakeValue = v42;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v51, 0LL);
          if ( v41 )
          {
            v44 = DataMasterBase_object__object__int___GetEntity(
                    v41,
                    Instance,
                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (ServantStatusBattleListViewItem_c *)v44;
            sub_1B6406C(p_equipServantEntity, (int32_t)v44, v45, v46);
            return;
          }
        }
      }
LABEL_36:
      sub_1B64324(Instance);
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

  if ( (byte_49F8F2E & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    byte_49F8F2E = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userSvtId, 0LL);
    v9 = *(_OWORD *)&v10.fields.fakeValue;
    if ( !equipIdList->max_length )
      sub_1B6432C(v6, v7);
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
  __int64 v27; // x1
  __int64 v28; // x2
  System_Func_object__bool__o *v29; // x22
  _BOOL4 isChoice; // w8
  _BOOL4 isSwapChoice; // w9
  bool v32; // zf
  _BOOL4 v33; // w8
  int v34; // w10
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v36; // q1
  struct UserServantEntity_o *v37; // x8
  const MethodInfo *v38; // x2
  int64_t rarity; // x8
  int64_t eventFriendPoints_low; // x20
  IconLabelInfo_o *iconLabelInfo1; // x21
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v44; // w1
  struct UserServantEntity_o *v45; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v49; // w1
  struct UserServantEntity_o *v50; // x8
  struct UserServantEntity_o *v51; // x9
  struct ServantEntity_o *servantEntity; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v54; // x20
  __int64 v55; // x21
  int32_t v56; // w0
  SupportServantListViewItem_o *v57; // x20
  int64_t v58; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v61; // x20
  int32_t eventFriendPoints; // w20
  __int64 v63; // x21
  __int64 v64; // x22
  const MethodInfo *v65; // x2
  struct ServantEntity_o *v66; // x8
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
  if ( (byte_49F8F2C & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&System_Func_EventGroupEntity__bool__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_SupportServantListViewItem__SetSortValue_b__53_0__, v14);
    this = (SupportServantListViewItem_o *)sub_1B640C8(&SupportServantListViewManager_TypeInfo, v15);
    byte_49F8F2C = 1;
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
        this = (SupportServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            v29 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventGroupEntity__bool__TypeInfo, v27, v28);
            System_Func_object__bool____ctor(
              v29,
              (Il2CppObject *)v4,
              Method_SupportServantListViewItem__SetSortValue_b__53_0__,
              0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        (System_Func_T__bool__o *)v29,
                                        (const MethodInfo_2E24870 *)Method_BasicHelper_Any_EventGroupEntity___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v24 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v25 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v73.fields.currentCryptoKey = v24;
        *(_QWORD *)&v73.fields.fakeValue = v23;
        this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                 v73,
                                                 0LL);
        if ( !v25 )
          goto LABEL_121;
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
          goto LABEL_121;
        IsEnableServant = UserServantEntity__getEventUpVal_39871536(
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
        this = (SupportServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_121;
        this = (SupportServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
      || !SupportServantListViewItem__IsMatchServantFilter(v4, sort, v38) )
    {
LABEL_65:
      LOBYTE(this) = 0;
      return (char)this;
    }
  }
  isChoice = v4->fields.isChoice;
  isSwapChoice = v4->fields.isSwapChoice;
  v4->fields.sortValue0 = 0LL;
  v32 = !isChoice;
  v33 = !isChoice;
  v34 = !v32;
  if ( !isSwapChoice )
    v33 = v34;
  if ( v33 && sort->fields.isChoiceSort )
    v4->fields.sortValue0 = 10LL;
  this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
LABEL_121:
    sub_1B64324(this);
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  this = (SupportServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      userServantEntity = v4->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_121;
      v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v71.fields.fakeValue = v36;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v70 = v71;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                               &v70,
                                               0LL);
      v37 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v37 )
        goto LABEL_121;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_121;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v37->fields.createdAt, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_37825360(iconLabelInfo1, 2, eventFriendPoints_low, (int32_t)this, 0, 0, 0, 0, 0LL);
      goto LABEL_110;
    case 4:
      this = (SupportServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_121;
      UserServantEntity__getTreasureDeviceInfo_39878768((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_121;
      adjustAtk = tdMaxLv[0];
      v44 = 33;
      goto LABEL_104;
    case 5:
      v45 = v4->fields.userServantEntity;
      if ( !v45 )
        goto LABEL_121;
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v45->fields.hp;
      if ( equipUserServantEntity )
      {
        atk = equipUserServantEntity->fields.hp;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_121;
        adjustHp = v45->fields.adjustHp;
        v49 = 46;
        goto LABEL_81;
      }
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v45->fields.adjustHp;
      v44 = 3;
      goto LABEL_104;
    case 6:
      v50 = v4->fields.userServantEntity;
      if ( !v50 )
        goto LABEL_121;
      v51 = v4->fields.equipUserServantEntity;
      hp = v50->fields.atk;
      if ( v51 )
      {
        atk = v51->fields.atk;
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_121;
        adjustHp = v50->fields.adjustAtk;
        v49 = 47;
LABEL_81:
        IconLabelInfo__Set_37825360((IconLabelInfo_o *)this, v49, hp, adjustHp, atk, 0, 0, 0, 0LL);
      }
      else
      {
        this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_121;
        adjustAtk = v50->fields.adjustAtk;
        v44 = 5;
LABEL_104:
        IconLabelInfo__Set_37825360((IconLabelInfo_o *)this, v44, hp, adjustAtk, 0, 0, 0, 0, 0LL);
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
      IconLabelInfo__Set_37825360(iconLabelInfo2, 2, eventFriendPoints, (int32_t)this, 0, 0, 0, 0, 0LL);
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
      v44 = 7;
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
      v55 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v54 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v74.fields.currentCryptoKey = v55;
      *(_QWORD *)&v74.fields.fakeValue = v54;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v74, 0LL);
      v57 = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v58 = v56;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v58;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                               friendship,
                                               0LL);
      if ( !v57 )
        goto LABEL_121;
      adjustAtk = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v44 = 32;
      this = v57;
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
          v61 = sort->fields.manager;
        else
          v61 = 0LL;
      }
      else
      {
        v61 = 0LL;
      }
      v64 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v63 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v76.fields.currentCryptoKey = v64;
      *(_QWORD *)&v76.fields.fakeValue = v63;
      this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                               v76,
                                               0LL);
      if ( !v61 )
        goto LABEL_121;
      this = (SupportServantListViewItem_o *)SupportServantListViewManager__GetAmountSortValue(
                                               (SupportServantListViewManager_o *)v61,
                                               (int32_t)this,
                                               v65);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_118:
      v66 = v4->fields.servantEntity;
      if ( !v66 )
        goto LABEL_121;
      collectionNo = v66->fields.collectionNo;
      v68 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v68 )
        goto LABEL_121;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      eventFriendPoints = v68->fields.lv;
      this = (SupportServantListViewItem_o *)v68;
      goto LABEL_108;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v4->fields.nowMaxHpReinforceValue;
      v44 = 44;
      goto LABEL_104;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (SupportServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_121;
      adjustAtk = v4->fields.nowMaxAtkReinforceValue;
      v44 = 45;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  EventCampaignMaster_o *v11; // x21
  ServantFilterMaster_o *userServantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49F8F35 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49F8F35 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  userServantEntity = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                 v14,
                                                 0LL);
  if ( !entity || !v11 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)userServantEntity, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userServantEntity = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(userServantEntity, this->fields.svtId, entity->fields.eventId, 0LL) )
    return 1;
  userServantEntity = (ServantFilterMaster_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_17:
    sub_1B64324(userServantEntity);
  return UserServantEntity__getEventUpVal_39871536(
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
    sub_1B64324(this);
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
  if ( (byte_49F8F31 & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_TypeInfo, method);
    byte_49F8F31 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37376848(126, 0LL);
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
  if ( (byte_49F8F32 & 1) == 0 )
  {
    this = (SupportServantListViewItem_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49F8F32 = 1;
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
  this = (SupportServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v8, 0LL);
  if ( !supportServantData )
LABEL_8:
    sub_1B64324(this);
  return SupportServantData__isUseServant(supportServantData, (int64_t)this, v6);
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

  if ( (byte_49F8F30 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B640C8(&StringLiteral_18979/*"error"*/, v3);
    byte_49F8F30 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18979/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0LL);
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

  if ( (byte_49F8F2F & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49F8F2F = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
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