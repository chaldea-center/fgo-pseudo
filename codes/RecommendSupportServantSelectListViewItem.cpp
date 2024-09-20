void __fastcall RecommendSupportServantSelectListViewItem___ctor(
        RecommendSupportServantSelectListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *entity,
        RecommendSupportData_o *supportServantData,
        int32_t selectIndex,
        EventUpValSetupInfo_o *eventUpValSetupInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        const MethodInfo *method)
{
  IconLabelInfo_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  IconLabelInfo_o *v18; // x27
  struct IconLabelInfo_o **p_IconInfo2_k__BackingField; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  UserServantEntity_o **p_UserServant_k__BackingField; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  struct RecommendSupportData_o **p_recommendSupportServantData; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int64_t Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x26
  __int64 v34; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x25
  Il2CppObject *v36; // x0
  struct ServantEntity_o **p_Servant_k__BackingField; // x25
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x24
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  int32_t v44; // w26
  UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  UserServantCollectionMaster_o *v47; // x24
  int64_t v48; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  RecommendSupportData_o *v57; // x8
  int64_t v58; // x23
  UserServantEntity_o *v59; // x8
  UserServantEntity_o *v60; // x8
  UserServantEntity_o *v61; // x8
  ServantEntity_o *Servant_k__BackingField; // x8
  bool v63; // w8
  int64_t Equip; // x0
  int64_t v65; // x22
  Il2CppObject *v66; // x23
  UserServantEntity_o *v67; // x8
  PartyOrganizationUtility_o *v68; // x22
  __int64 v69; // x24
  __int64 v70; // x25
  int32_t v71; // w24
  int32_t v72; // w25
  UserServantEntity_o *v73; // x8
  __int128 v74; // q0
  __int64 v75; // x22
  bool v76; // zf
  bool v77; // w8
  UserServantEntity_o *v78; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  int v85; // w22
  BalanceConfig_c *v86; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v88; // x8
  struct ServantEntity_o *v89; // x9
  UserServantEntity_o *v90; // x8
  __int64 v91; // x21
  __int64 v92; // x22
  int32_t v93; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4A57477 & 1) == 0 )
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
    byte_4A57477 = 1;
  }
  friendshipRank = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v15 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  this->fields._IconInfo1_k__BackingField = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._IconInfo1_k__BackingField, (int32_t)v15, v16, v17);
  v18 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0LL);
  this->fields._IconInfo2_k__BackingField = v18;
  p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._IconInfo2_k__BackingField, (int32_t)v18, v20, v21);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)entity,
    v23,
    v24);
  this->fields.recommendSupportServantData = supportServantData;
  p_recommendSupportServantData = &this->fields.recommendSupportServantData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.recommendSupportServantData,
    (int32_t)supportServantData,
    v26,
    v27);
  this->fields.eventSetupInfo = eventUpValSetupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)eventUpValSetupInfo, v28, v29);
  if ( !this->fields._UserServant_k__BackingField )
    goto LABEL_60;
  this->fields.svtId = this->fields._UserServant_k__BackingField->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v101.fields.currentCryptoKey = v34;
  *(_QWORD *)&v101.fields.fakeValue = v33;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v101, 0LL);
  if ( !v35 )
    goto LABEL_60;
  v36 = DataMasterBase_object__object__int___GetEntity(
          v35,
          Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._Servant_k__BackingField = (struct ServantEntity_o *)v36;
  p_Servant_k__BackingField = &this->fields._Servant_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Servant_k__BackingField, (int32_t)v36, v38, v39);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v40,
    v41);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v42 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_60;
  v44 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
               UserServant_k__BackingField->fields.limitCount,
               0LL);
  if ( !v42 )
    goto LABEL_60;
  Instance = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v42, v44, Instance, 0LL);
  if ( !*p_Servant_k__BackingField )
    goto LABEL_60;
  this->fields._ClassId_k__BackingField = (*p_Servant_k__BackingField)->fields.classId;
  if ( !Instance )
    goto LABEL_60;
  this->fields._Rarity_k__BackingField = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v45 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v46 = *(_OWORD *)&v45->fields.userId.fields.fakeValue;
  v47 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v45->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v97.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v96 = v97;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v96, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  if ( !v47 )
    goto LABEL_60;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v47, v48, Instance, 0LL);
  if ( !Instance )
    goto LABEL_60;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields._IsSame_k__BackingField = 0;
  this->fields.equipUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, v49, v50);
  this->fields.equipServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v51, v52);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v53, v54);
  v55 = this->fields._UserServant_k__BackingField;
  if ( !v55 )
    goto LABEL_60;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v95.fields.fakeValue = v56;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v95, 0LL);
  v57 = *p_recommendSupportServantData;
  if ( !*p_recommendSupportServantData )
    goto LABEL_60;
  v58 = Instance;
  Instance = RecommendSupportData__GetServant(v57, selectIndex, 0LL);
  v59 = this->fields._UserServant_k__BackingField;
  this->fields._IsBase_k__BackingField = v58 == Instance;
  if ( !v59 )
    goto LABEL_60;
  Instance = UserServantEntity__IsLock(v59, 0LL);
  v60 = this->fields._UserServant_k__BackingField;
  this->fields._IsLock_k__BackingField = Instance & 1;
  if ( !v60 )
    goto LABEL_60;
  Instance = UserServantEntity__IsChoice(v60, 0LL);
  v61 = this->fields._UserServant_k__BackingField;
  this->fields._IsChoice_k__BackingField = Instance & 1;
  if ( !v61 )
    goto LABEL_60;
  Instance = UserServantEntity__IsEventJoin(v61, 0LL);
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  this->fields._IsEventJoin_k__BackingField = Instance & 1;
  if ( !Servant_k__BackingField )
    goto LABEL_60;
  v63 = ServantEntity__checkIsHeroineSvt(Servant_k__BackingField, 0LL);
  Instance = (int64_t)this->fields.recommendSupportServantData;
  this->fields.isHeroine = v63;
  this->fields._IsSwapLock_k__BackingField = 0;
  this->fields._IsSwapChoice_k__BackingField = 0;
  this->fields._IsInvalidRarity_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_60;
  Equip = RecommendSupportData__GetEquip((RecommendSupportData_o *)Instance, selectIndex, 0LL);
  if ( Equip < 1 )
    goto LABEL_36;
  v65 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  v66 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v65,
          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v67 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v68 = (PartyOrganizationUtility_o *)Instance;
  v70 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v102.fields.currentCryptoKey = v70;
  *(_QWORD *)&v102.fields.fakeValue = v69;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v102, 0LL);
  if ( !*p_UserServant_k__BackingField
    || (v71 = Instance, Instance = UserServantEntity__getRarity(*p_UserServant_k__BackingField, 0LL), !v66)
    || (v72 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v66[5],
                     0LL),
        !v68) )
  {
LABEL_60:
    sub_1B8880C(Instance, v31);
  }
  this->fields._IsInvalidRarity_k__BackingField = PartyOrganizationUtility__IsRarityRestriction(
                                                    v68,
                                                    &skillName,
                                                    &actMaxRarity,
                                                    v71,
                                                    v72,
                                                    Instance,
                                                    -1,
                                                    0LL);
LABEL_36:
  this->fields._IsUseInSet_k__BackingField = 0;
  this->fields._IsPushMode_k__BackingField = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_60;
  v73 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
  v75 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v97.fields.fakeValue = v74;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v94 = v97;
  v76 = v75 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v94, 0LL);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  v77 = v76;
  this->fields._IsPush_k__BackingField = v77;
  this->fields._IsEnabled_k__BackingField = 1;
  if ( !Instance )
    goto LABEL_60;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v78 = this->fields._UserServant_k__BackingField;
  this->fields.dispLimitCount = Instance;
  if ( !v78 )
    goto LABEL_60;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v78, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v80,
    v81);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_60;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v83,
    v84);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_60;
  v85 = *(_DWORD *)(Instance + 276);
  v86 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v86 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_UserServant_k__BackingField;
  }
  static_fields = v86->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v85;
  if ( !Instance )
    goto LABEL_60;
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
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields._ClassId_k__BackingField,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_60;
  v88 = *(int *)(Instance + 48);
  v89 = this->fields._Servant_k__BackingField;
  this->fields.priority = v88;
  this->fields.sortValue1B = v88;
  if ( !v89 )
    goto LABEL_60;
  v90 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  this->fields.sortValue2 = ((__int64)v89->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields._Rarity_k__BackingField << 48) | v90->fields.lv;
  v92 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
  v91 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v92;
  *(_QWORD *)&v103.fields.fakeValue = v91;
  v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v103, 0LL);
  Instance = (int64_t)this->fields._IconInfo1_k__BackingField;
  this->fields.sortValue2B = v93;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_60;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_IconInfo2_k__BackingField;
  if ( !*p_IconInfo2_k__BackingField )
    goto LABEL_60;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__Finalize(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_Int64_array *__fastcall RecommendSupportServantSelectListViewItem__GetEquipList(
        RecommendSupportServantSelectListViewItem_o *this,
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

  if ( (byte_4A5747B & 1) == 0 )
  {
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5747B = 1;
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


int32_t __fastcall RecommendSupportServantSelectListViewItem__GetFriendPointBonus(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *eventFriendPoints; // x20
  System_Func_object__object__o *v4; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v5; // x0
  RecommendSupportServantSelectListViewItem___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__object__o *_9__122_1; // x20
  Il2CppObject *v9; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x0
  RecommendSupportServantSelectListViewItem___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__bool__o *_9__122_2; // x20
  Il2CppObject *v17; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  RecommendSupportServantSelectListViewItem___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__object__o *_9__122_3; // x20
  Il2CppObject *v25; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v29; // x0
  RecommendSupportServantSelectListViewItem___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_T1__T2__TResult__o *_9__122_4; // x20
  Il2CppObject *v33; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A57483 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType2_EventCampaignEntity__int____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool____);
    sub_1B885B0(&System_Func___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___TypeInfo);
    sub_1B885B0(&System_Func_EventCampaignEntity____f__AnonymousType2_EventCampaignEntity__int___TypeInfo);
    sub_1B885B0(&System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___bool__TypeInfo);
    sub_1B885B0(&System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo);
    sub_1B885B0(&System_Func_int__EventCampaignEntity__int__TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__122_0__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_1__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_2__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_3__);
    sub_1B885B0(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_4__);
    sub_1B885B0(&RecommendSupportServantSelectListViewItem___c_TypeInfo);
    byte_4A57483 = 1;
  }
  eventFriendPoints = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v4 = (System_Func_object__object__o *)sub_1B887FC(System_Func_EventCampaignEntity____f__AnonymousType2_EventCampaignEntity__int___TypeInfo);
  System_Func_object__object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__122_0__,
    0LL);
  v5 = System_Linq_Enumerable__Select_object__object_(
         eventFriendPoints,
         (System_Func_TSource__TResult__o *)v4,
         (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType2_EventCampaignEntity__int____);
  v6 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v6 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_1 = (System_Func_object__object__o *)v6->static_fields->__9__122_1;
  if ( !_9__122_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__122_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___TypeInfo);
    System_Func_object__object____ctor(
      _9__122_1,
      v9,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_1__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__122_1 = (struct System_Func___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___o *)_9__122_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__122_1, (int32_t)_9__122_1, v11, v12);
  }
  v13 = System_Linq_Enumerable__Select_object__object_(
          v7,
          (System_Func_TSource__TResult__o *)_9__122_1,
          (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool____);
  v14 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v14 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_2 = (System_Func_object__bool__o *)v14->static_fields->__9__122_2;
  if ( !_9__122_2 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__122_2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__122_2,
      v17,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_2__,
      0LL);
    v18 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v18->__9__122_2 = (struct System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___bool__o *)_9__122_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->__9__122_2, (int32_t)_9__122_2, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)_9__122_2,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool____);
  v22 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v23 = v21;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v22 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_3 = (System_Func_object__object__o *)v22->static_fields->__9__122_3;
  if ( !_9__122_3 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__122_3 = (System_Func_object__object__o *)sub_1B887FC(System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__122_3,
      v25,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_3__,
      0LL);
    v26 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v26->__9__122_3 = (struct System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity__o *)_9__122_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->__9__122_3, (int32_t)_9__122_3, v27, v28);
  }
  v29 = System_Linq_Enumerable__Select_object__object_(
          v23,
          (System_Func_TSource__TResult__o *)_9__122_3,
          (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity___);
  v30 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v30 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_4 = (System_Func_T1__T2__TResult__o *)v30->static_fields->__9__122_4;
  if ( !_9__122_4 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__122_4 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_int__EventCampaignEntity__int__TypeInfo);
    System_Func_int__object__int____ctor(
      _9__122_4,
      v33,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_4__,
      0LL);
    v34 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v34->__9__122_4 = (struct System_Func_int__EventCampaignEntity__int__o *)_9__122_4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->__9__122_4, (int32_t)_9__122_4, v35, v36);
  }
  return System_Linq_Enumerable__Aggregate_object__int_(
           v31,
           -1,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__122_4,
           (const MethodInfo_2E8A684 *)Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
}


bool __fastcall RecommendSupportServantSelectListViewItem__GetNpInfo(
        RecommendSupportServantSelectListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57482 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A57482 = 1;
  }
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
    return UserServantEntity__getTreasureDeviceInfo(UserServant_k__BackingField, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


bool __fastcall RecommendSupportServantSelectListViewItem__IsMatchServantFilter(
        RecommendSupportServantSelectListViewItem_o *this,
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
  UserServantEntity_o *UserServant_k__BackingField; // x21
  __int64 v14; // x1
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x21
  UserServantEntity_o *v18; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v20; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v28; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v30; // w0

  if ( (byte_4A57479 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A57479 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_60;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields._Servant_k__BackingField, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields._Servant_k__BackingField, 0LL) )
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
    goto LABEL_60;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServant_k__BackingField, 0LL) )
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
LABEL_60:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServant_k__BackingField, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(UserServant_k__BackingField, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v18 = this->fields._UserServant_k__BackingField;
    if ( v18 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v18, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_60;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v20 = this->fields._UserServant_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v20 )
          goto LABEL_60;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v22,
          v23);
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_60;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v25,
          v26);
      }
    }
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v14 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_61;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v14 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_61:
      sub_1B88814(ClassGroupFilterKindList, v14);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v28 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v30 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v28) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v30 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v30 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v14 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_61;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v16, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields._Rarity_k__BackingField, 0LL);
}


bool __fastcall RecommendSupportServantSelectListViewItem__IsRestriction(
        RecommendSupportServantSelectListViewItem_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v10; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  QuestRestrictionInfo_o *v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A57484 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&QuestRestrictionInfo_TypeInfo);
    byte_4A57484 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_14;
  v10 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v15, 0LL);
  if ( !v11 )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v11,
          &entity,
          Master_object,
          (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  v12 = (QuestRestrictionInfo_o *)sub_1B887FC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_40416380(v12, 0, questId, questPhase, 0LL);
  Master_object = (int64_t)entity;
  if ( !entity )
LABEL_14:
    sub_1B8880C(Master_object, v8);
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)entity, v12, 2, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyChoiceItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1B8880C(0LL, method);
  *(_WORD *)&this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyItem(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UserServantEntity_o **p_UserServant_k__BackingField; // x20
  __int64 v6; // x1

  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3);
  if ( !*p_UserServant_k__BackingField )
    sub_1B8880C(0LL, v6);
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin(*p_UserServant_k__BackingField, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyLockItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1B8880C(0LL, method);
  this->fields._IsLock_k__BackingField = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  this->fields._IsSwapLock_k__BackingField = 0;
}


void __fastcall RecommendSupportServantSelectListViewItem__ResetEventCampaign(
        RecommendSupportServantSelectListViewItem_o *this,
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


void __fastcall RecommendSupportServantSelectListViewItem__SetEquipStatus(
        RecommendSupportServantSelectListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIds,
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

  if ( (byte_4A57478 & 1) == 0 )
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
    byte_4A57478 = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v8, v9);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (ServantStatusBattleListViewItem_o *)&this->fields.equipIdList;
  sub_1B88554(p_equipIdList, 0, v11, v12);
  if ( !p_equipIdList->fields.sortValue2B )
    return;
  if ( !equipIds )
    goto LABEL_9;
  klass = p_equipIdList->klass;
  if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIds )
    goto LABEL_14;
  v16 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
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


void __fastcall RecommendSupportServantSelectListViewItem__SetEquipUserServantId(
        RecommendSupportServantSelectListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int128 v9; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A5747C & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5747C = 1;
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
    RecommendSupportServantSelectListViewItem__SetEquipStatus(this, this->fields.equipIdList, v8);
  }
}


bool __fastcall RecommendSupportServantSelectListViewItem__SetSortValue(
        RecommendSupportServantSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *v4; // x19
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
  _BOOL4 IsSwapChoice_k__BackingField; // w8
  _BOOL4 IsChoice_k__BackingField; // w9
  __int64 v19; // x8
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v21; // q1
  struct UserServantEntity_o *v22; // x8
  const MethodInfo *v23; // x2
  unsigned __int64 Rarity_k__BackingField; // x8
  int64_t equipServantEntity_low; // x20
  IconLabelInfo_o *IconInfo1_k__BackingField; // x21
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v29; // w1
  struct UserServantEntity_o *v30; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v34; // w1
  struct UserServantEntity_o *v35; // x8
  struct UserServantEntity_o *v36; // x9
  struct ServantEntity_o *Servant_k__BackingField; // x8
  __int64 v38; // x20
  __int64 v39; // x21
  int32_t v40; // w0
  RecommendSupportServantSelectListViewItem_o *v41; // x20
  int64_t v42; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v45; // x20
  IconLabelInfo_o *IconInfo2_k__BackingField; // x19
  __int64 v47; // x21
  __int64 v48; // x22
  const MethodInfo *v49; // x2
  struct ServantEntity_o *v50; // x8
  int32_t equipServantEntity; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v4 = this;
  if ( (byte_4A5747A & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__93_0__);
    sub_1B885B0(&RecommendSupportServantSelectListViewManager_TypeInfo);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5747A = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_120;
  if ( !sort->fields.isBonusKind || v4->fields._IsBase_k__BackingField )
    goto LABEL_43;
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
      this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_120;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                            (EventGroupMaster_o *)this,
                            v4->fields.bonusKindId,
                            0LL);
      this = (RecommendSupportServantSelectListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                              (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                              0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !EntitiesByGroupId )
          goto LABEL_120;
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          v16 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v16,
            (Il2CppObject *)v4,
            Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__93_0__,
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
          goto LABEL_42;
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
      *(_QWORD *)&v56.fields.currentCryptoKey = v13;
      *(_QWORD *)&v56.fields.fakeValue = v12;
      this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                              v56,
                                                              0LL);
      if ( !v14 )
        goto LABEL_120;
      IsEnableServant = EventCampaignMaster__IsEnableServant(v14, (int32_t)this, v4->fields.bonusKindId, 0LL);
      goto LABEL_32;
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
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
      v4->fields.bonusKind = bonusKind2;
      v4->fields.bonusKindId = v6;
      if ( !this )
        goto LABEL_120;
      IsEnableServant = UserServantEntity__getEventUpVal_40205120(
                          (UserServantEntity_o *)this,
                          v4->fields.eventSetupInfo,
                          v6,
                          0LL,
                          0LL);
      goto LABEL_32;
    case 7:
      if ( v4->fields.bonusKind != 7 )
      {
        v9 = sort->fields.bonusKind2Id;
        goto LABEL_29;
      }
      v9 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId != v9 )
      {
LABEL_29:
        v4->fields.bonusKind = 7;
        v4->fields.bonusKindId = v9;
        this = (RecommendSupportServantSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
          if ( this )
          {
            IsEnableServant = ServantFilterMaster__IsEnableServant(
                                (ServantFilterMaster_o *)this,
                                v4->fields.svtId,
                                v4->fields.bonusKindId,
                                0LL);
LABEL_32:
            v4->fields.isEventUpVal = IsEnableServant;
            if ( !IsEnableServant )
              goto LABEL_63;
            goto LABEL_43;
          }
        }
LABEL_120:
        sub_1B8880C(this, sort);
      }
LABEL_42:
      if ( !v4->fields.isEventUpVal )
        goto LABEL_63;
LABEL_43:
      if ( !v4->fields._IsBase_k__BackingField )
      {
        this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._Servant_k__BackingField;
        if ( !this )
          goto LABEL_120;
        if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
          goto LABEL_63;
        this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._Servant_k__BackingField;
        if ( !this )
          goto LABEL_120;
        if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
          || !RecommendSupportServantSelectListViewItem__IsMatchServantFilter(v4, sort, v23) )
        {
LABEL_63:
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
      IsSwapChoice_k__BackingField = v4->fields._IsSwapChoice_k__BackingField;
      IsChoice_k__BackingField = v4->fields._IsChoice_k__BackingField;
      v4->fields.sortValue0 = 0LL;
      if ( IsSwapChoice_k__BackingField == IsChoice_k__BackingField || !sort->fields.isChoiceSort )
      {
        if ( !RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(v4, (const MethodInfo *)sort) )
          goto LABEL_50;
        v19 = -10LL;
      }
      else
      {
        v19 = 10LL;
      }
      v4->fields.sortValue0 = v19;
LABEL_50:
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo2_k__BackingField;
      if ( !this )
        goto LABEL_120;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (RecommendSupportServantSelectListViewItem_o *)(&dword_0 + 1);
      switch ( sort->fields.sortKind )
      {
        case 1:
          UserServant_k__BackingField = v4->fields._UserServant_k__BackingField;
          if ( !UserServant_k__BackingField )
            goto LABEL_120;
          v21 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v54.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v53 = v54;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                  &v53,
                                                                  0LL);
          v22 = v4->fields._UserServant_k__BackingField;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v22 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          if ( !this )
            goto LABEL_120;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v22->fields.createdAt, 0, 0, 0, 0LL);
          goto LABEL_101;
        case 2:
          Rarity_k__BackingField = v4->fields._Rarity_k__BackingField;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          goto LABEL_115;
        case 3:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_120;
          equipServantEntity_low = SLODWORD(this->fields.equipServantEntity);
          IconInfo1_k__BackingField = v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = equipServantEntity_low;
          this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                                  (UserServantEntity_o *)this,
                                                                  0LL);
          if ( !IconInfo1_k__BackingField )
            goto LABEL_120;
          IconLabelInfo__Set_38140136(
            IconInfo1_k__BackingField,
            2,
            equipServantEntity_low,
            (int32_t)this,
            0,
            0,
            0,
            0,
            0LL);
          goto LABEL_119;
        case 4:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_120;
          UserServantEntity__getTreasureDeviceInfo_40212352((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
          LODWORD(hp) = tdMaxLv[1];
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = tdMaxLv[1];
          if ( !this )
            goto LABEL_120;
          adjustAtk = tdMaxLv[0];
          v29 = 33;
          goto LABEL_100;
        case 5:
          v30 = v4->fields._UserServant_k__BackingField;
          if ( !v30 )
            goto LABEL_120;
          equipUserServantEntity = v4->fields.equipUserServantEntity;
          hp = v30->fields.hp;
          if ( equipUserServantEntity )
          {
            atk = equipUserServantEntity->fields.hp;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = atk + (int)hp;
            if ( !this )
              goto LABEL_120;
            adjustHp = v30->fields.adjustHp;
            v34 = 46;
            goto LABEL_79;
          }
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_120;
          adjustAtk = v30->fields.adjustHp;
          v29 = 3;
          goto LABEL_100;
        case 6:
          v35 = v4->fields._UserServant_k__BackingField;
          if ( !v35 )
            goto LABEL_120;
          v36 = v4->fields.equipUserServantEntity;
          hp = v35->fields.atk;
          if ( v36 )
          {
            atk = v36->fields.atk;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = atk + (int)hp;
            if ( !this )
              goto LABEL_120;
            adjustHp = v35->fields.adjustAtk;
            v34 = 47;
LABEL_79:
            IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v34, hp, adjustHp, atk, 0, 0, 0, 0LL);
          }
          else
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_120;
            adjustAtk = v35->fields.adjustAtk;
            v29 = 5;
LABEL_100:
            IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v29, hp, adjustAtk, 0, 0, 0, 0, 0LL);
          }
LABEL_101:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_120;
          IconInfo2_k__BackingField = v4->fields._IconInfo2_k__BackingField;
LABEL_117:
          equipServantEntity = (int32_t)this->fields.equipServantEntity;
          this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                                  (UserServantEntity_o *)this,
                                                                  0LL);
          if ( !IconInfo2_k__BackingField )
            goto LABEL_120;
          IconLabelInfo__Set_38140136(IconInfo2_k__BackingField, 2, equipServantEntity, (int32_t)this, 0, 0, 0, 0, 0LL);
LABEL_119:
          LOBYTE(this) = 1;
          return (char)this;
        case 7:
          Servant_k__BackingField = v4->fields._Servant_k__BackingField;
          if ( !Servant_k__BackingField )
            goto LABEL_120;
          hp = Servant_k__BackingField->fields.cost;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_120;
          v29 = 7;
          adjustAtk = 0;
          goto LABEL_100;
        case 8:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          Rarity_k__BackingField = -v4->fields.priority;
          goto LABEL_115;
        case 0xA:
          v39 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
          v38 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v57.fields.currentCryptoKey = v39;
          *(_QWORD *)&v57.fields.fakeValue = v38;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v57, 0LL);
          v41 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v42 = v40;
          friendship = v4->fields.friendship;
          v4->fields.sortValue1 = v42;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                  friendship,
                                                                  0LL);
          if ( !v41 )
            goto LABEL_120;
          adjustAtk = v4->fields.friendshipMax;
          LODWORD(hp) = (_DWORD)this;
          v29 = 32;
          this = v41;
          goto LABEL_100;
        case 0xE:
          if ( (v4->fields.amountSortValue & 0x8000000000000000LL) == 0 )
            goto LABEL_113;
          manager = sort->fields.manager;
          if ( manager
            && (methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
          {
            if ( (RecommendSupportServantSelectListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewManager_TypeInfo )
              v45 = (UnityEngine_Object_o *)sort->fields.manager;
            else
              v45 = 0LL;
          }
          else
          {
            v45 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (RecommendSupportServantSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_113;
          v48 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v47 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = v48;
          *(_QWORD *)&v59.fields.fakeValue = v47;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                  v59,
                                                                  0LL);
          if ( !v45 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)RecommendSupportServantSelectListViewManager__GetAmountSortValue(
                                                                  (RecommendSupportServantSelectListViewManager_o *)v45,
                                                                  (int32_t)this,
                                                                  v49);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_113:
          v50 = v4->fields._Servant_k__BackingField;
          if ( !v50 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          Rarity_k__BackingField = (((unsigned __int64)(unsigned int)v4->fields._Rarity_k__BackingField << 32)
                                  + (v4->fields.amountSortValue << 48)) | v50->fields.collectionNo;
LABEL_115:
          v4->fields.sortValue1 = Rarity_k__BackingField;
          if ( !this )
            goto LABEL_120;
          IconInfo2_k__BackingField = v4->fields._IconInfo1_k__BackingField;
          goto LABEL_117;
        case 0xF:
          hp = v4->fields.hpReinforceValue;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_120;
          adjustAtk = v4->fields.nowMaxHpReinforceValue;
          v29 = 44;
          goto LABEL_100;
        case 0x10:
          hp = v4->fields.atkReinforceValue;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_120;
          adjustAtk = v4->fields.nowMaxAtkReinforceValue;
          v29 = 45;
          goto LABEL_100;
        default:
          return (char)this;
      }
    default:
      goto LABEL_43;
  }
}


bool __fastcall RecommendSupportServantSelectListViewItem__SwapChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapChoice_k__BackingField;
  this->fields._IsSwapChoice_k__BackingField ^= 1u;
  return v2;
}


bool __fastcall RecommendSupportServantSelectListViewItem__SwapLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapLock_k__BackingField;
  this->fields._IsSwapLock_k__BackingField ^= 1u;
  return v2;
}


__f__AnonymousType2_EventCampaignEntity__int__o *__fastcall RecommendSupportServantSelectListViewItem___GetFriendPointBonus_b__122_0(
        RecommendSupportServantSelectListViewItem_o *this,
        EventCampaignEntity_o *t,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *v4; // x20
  System_Int32_array *targetIds; // x21
  int32_t SvtId; // w0
  int32_t v7; // w20
  __f__AnonymousType2__t_j__TPar___indexOf_j__TPar__o *v8; // x21

  v4 = this;
  if ( (byte_4A57486 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method___f__AnonymousType2_EventCampaignEntity__int___ctor__);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1B885B0(&_f__AnonymousType2_EventCampaignEntity__int__TypeInfo);
    byte_4A57486 = 1;
  }
  if ( !t )
    sub_1B8880C(this, t);
  targetIds = t->fields.targetIds;
  SvtId = RecommendSupportServantSelectListViewItem__get_SvtId(v4, (const MethodInfo *)t);
  v7 = System_Array__IndexOf_int_(targetIds, SvtId, (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
  v8 = (__f__AnonymousType2__t_j__TPar___indexOf_j__TPar__o *)sub_1B887FC(_f__AnonymousType2_EventCampaignEntity__int__TypeInfo);
  _f__AnonymousType2_object__int____ctor(
    v8,
    (Il2CppObject *)t,
    v7,
    (const MethodInfo_304FA14 *)Method___f__AnonymousType2_EventCampaignEntity__int___ctor__);
  return (__f__AnonymousType2_EventCampaignEntity__int__o *)v8;
}


bool __fastcall RecommendSupportServantSelectListViewItem___SetSortValue_b__93_0(
        RecommendSupportServantSelectListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  EventCampaignMaster_o *v8; // x21
  ServantFilterMaster_o *UserServant_k__BackingField; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A57485 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57485 = 1;
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
  UserServant_k__BackingField = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                           v12,
                                                           0LL);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)UserServant_k__BackingField, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserServant_k__BackingField = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !UserServant_k__BackingField )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(
         UserServant_k__BackingField,
         this->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  UserServant_k__BackingField = (ServantFilterMaster_o *)this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
LABEL_17:
    sub_1B8880C(UserServant_k__BackingField, v10);
  return UserServantEntity__getEventUpVal_40205120(
           (UserServantEntity_o *)UserServant_k__BackingField,
           this->fields.eventSetupInfo,
           entity->fields.eventId,
           0LL,
           0LL);
}


int32_t __fastcall RecommendSupportServantSelectListViewItem__get_ClassId(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassId_k__BackingField;
}


int32_t __fastcall RecommendSupportServantSelectListViewItem__get_Cost(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *Servant_k__BackingField; // x8

  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    sub_1B8880C(this, method);
  return Servant_k__BackingField->fields.cost;
}


int32_t __fastcall RecommendSupportServantSelectListViewItem__get_EquipCost(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


IconLabelInfo_o *__fastcall RecommendSupportServantSelectListViewItem__get_IconInfo1(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconInfo1_k__BackingField;
}


IconLabelInfo_o *__fastcall RecommendSupportServantSelectListViewItem__get_IconInfo2(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconInfo2_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsBase(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsBase_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5747F & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5747F = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37688364(126, 0LL);
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChoice_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsDispChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField ^ this->fields._IsChoice_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsDispLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField ^ this->fields._IsLock_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsEnabled(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnabled_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsEquip(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipServantEntity != 0LL;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsEventJoin(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEventJoin_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsInvalidRarity(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsInvalidRarity_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLock_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsPush(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPush_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsPushMode(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPushMode_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportData_o *klass; // x20
  const MethodInfo *v6; // x3
  int32_t questPhase[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57481 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A57481 = 1;
  }
  *(_QWORD *)questPhase = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (klass = (RecommendSupportData_o *)Instance[7].klass,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !klass )
  {
    sub_1B8880C(Instance, v4);
  }
  return RecommendSupportData__TryGetQuest(klass, (int32_t)Instance[7].monitor, &questPhase[1], questPhase, 0LL)
      && RecommendSupportServantSelectListViewItem__IsRestriction(this, questPhase[1], questPhase[0], v6);
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsSame(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSame_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsSwapChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsSwapLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsUseInSet(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseInSet_k__BackingField;
}


bool __fastcall RecommendSupportServantSelectListViewItem__get_IsUseServant(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v6; // q1
  RecommendSupportSelectControl_o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4A57480 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A57480 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (RecommendSupportSelectControl_o *)RecommendSupportSelectControl__get_SelectServantId(Instance, 0LL),
        (UserServant_k__BackingField = this->fields._UserServant_k__BackingField) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  v6 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v7 = Instance;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return v7 == (RecommendSupportSelectControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                    &v9,
                                                    0LL);
}


System_String_o *__fastcall RecommendSupportServantSelectListViewItem__get_NameText(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *Servant_k__BackingField; // x19
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5747E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5747E = 1;
  }
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
  {
    v6 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.fakeValue;
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
  return ServantEntity__getName(Servant_k__BackingField, v7, -1, 0LL);
}


int32_t __fastcall RecommendSupportServantSelectListViewItem__get_Rarity(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Rarity_k__BackingField;
}


ServantEntity_o *__fastcall RecommendSupportServantSelectListViewItem__get_Servant(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Servant_k__BackingField;
}


int32_t __fastcall RecommendSupportServantSelectListViewItem__get_SvtId(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5747D & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5747D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


int32_t __fastcall RecommendSupportServantSelectListViewItem__get_UseSet(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UseSet_k__BackingField;
}


UserServantEntity_o *__fastcall RecommendSupportServantSelectListViewItem__get_UserServant(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServant_k__BackingField;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_IsChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChoice_k__BackingField = value;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_IsEnabled(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnabled_k__BackingField = value;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_IsEventJoin(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEventJoin_k__BackingField = value;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_IsLock(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLock_k__BackingField = value;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_IsPush(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPush_k__BackingField = value;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_IsPushMode(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPushMode_k__BackingField = value;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_IsSwapChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapChoice_k__BackingField = value;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_IsSwapLock(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapLock_k__BackingField = value;
}


void __fastcall RecommendSupportServantSelectListViewItem__set_UserServant(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._UserServant_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecommendSupportServantSelectListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57487 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportServantSelectListViewItem___c_TypeInfo);
    byte_4A57487 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecommendSupportServantSelectListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewItem___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecommendSupportServantSelectListViewItem___c___ctor(
        RecommendSupportServantSelectListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__o *__fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_1(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType2_EventCampaignEntity__int__o *h__TransparentIdentifier0,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *t_i__Field; // x8
  struct System_Int32_array *targetIds; // x9
  char v6; // w20
  __f__AnonymousType3____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *v7; // x21

  if ( (byte_4A57488 & 1) == 0 )
  {
    sub_1B885B0(&Method___f__AnonymousType2_EventCampaignEntity__int__get_t__);
    sub_1B885B0(&Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___ctor__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1B885B0(&_f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__TypeInfo);
    byte_4A57488 = 1;
  }
  if ( !h__TransparentIdentifier0 || (t_i__Field = h__TransparentIdentifier0->fields._t_i__Field) == 0LL )
    sub_1B8880C(this, h__TransparentIdentifier0);
  targetIds = t_i__Field->fields.targetIds;
  if ( targetIds )
    v6 = targetIds->max_length == 0;
  else
    v6 = 1;
  v7 = (__f__AnonymousType3____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *)sub_1B887FC(_f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__TypeInfo);
  _f__AnonymousType3_object__bool____ctor(
    v7,
    (Il2CppObject *)h__TransparentIdentifier0,
    v6,
    (const MethodInfo_30507E0 *)Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___ctor__);
  return (__f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__o *)v7;
}


bool __fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_2(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  struct __f__AnonymousType2_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4A57489 & 1) == 0 )
  {
    sub_1B885B0(&Method___f__AnonymousType2_EventCampaignEntity__int__get_indexOf__);
    sub_1B885B0(&Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1B885B0(&Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__get_isAllTarget__);
    byte_4A57489 = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0LL )
  {
    sub_1B8880C(this, h__TransparentIdentifier1);
  }
  return (h__TransparentIdentifier0_i__Field->fields._indexOf_i__Field & 0x80000000) == 0
      || h__TransparentIdentifier1->fields._isAllTarget_i__Field;
}


EventCampaignEntity_o *__fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_3(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  struct __f__AnonymousType2_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4A5748A & 1) == 0 )
  {
    sub_1B885B0(&Method___f__AnonymousType2_EventCampaignEntity__int__get_t__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1B885B0(&Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__);
    byte_4A5748A = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0LL )
  {
    sub_1B8880C(this, h__TransparentIdentifier1);
  }
  return h__TransparentIdentifier0_i__Field->fields._t_i__Field;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_4(
        RecommendSupportServantSelectListViewItem___c_o *this,
        int32_t current,
        EventCampaignEntity_o *t,
        const MethodInfo *method)
{
  int32_t value; // w20

  if ( (byte_4A5748B & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5748B = 1;
  }
  if ( !t )
    sub_1B8880C(this, *(_QWORD *)&current);
  value = t->fields.value;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_62525680(current, value, 0LL);
}