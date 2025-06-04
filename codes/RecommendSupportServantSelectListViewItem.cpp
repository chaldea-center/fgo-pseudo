// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
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
  IconLabelInfo_o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  IconLabelInfo_o *v31; // x27
  struct IconLabelInfo_o **p_IconInfo2_k__BackingField; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UserServantEntity_o **p_UserServant_k__BackingField; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct RecommendSupportData_o **p_recommendSupportServantData; // x23
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int64_t Instance; // x0
  __int64 v44; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v46; // x26
  __int64 v47; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x25
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x24
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  int32_t v56; // w25
  const MethodInfo *v57; // x2
  struct ServantEntity_o *Servant_k__BackingField; // x8
  UserServantEntity_o *v59; // x8
  __int128 v60; // q1
  UserServantCollectionMaster_o *v61; // x24
  int64_t v62; // x25
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct UserServantEntity_o *v69; // x8
  __int128 v70; // q0
  RecommendSupportData_o *v71; // x8
  int64_t v72; // x23
  UserServantEntity_o *v73; // x8
  UserServantEntity_o *v74; // x8
  UserServantEntity_o *v75; // x8
  ServantEntity_o *v76; // x8
  bool v77; // w8
  int64_t Equip; // x0
  int64_t v79; // x22
  Il2CppObject *v80; // x23
  UserServantEntity_o *v81; // x8
  PartyOrganizationUtility_o *v82; // x22
  __int64 v83; // x24
  __int64 v84; // x25
  int32_t v85; // w24
  int32_t v86; // w25
  UserServantEntity_o *v87; // x8
  __int128 v88; // q0
  __int64 v89; // x22
  bool v90; // zf
  bool v91; // w8
  UserServantEntity_o *v92; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int v99; // w22
  BalanceConfig_c *v100; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v102; // x8
  struct ServantEntity_o *v103; // x9
  UserServantEntity_o *v104; // x8
  __int64 v105; // x21
  __int64 v106; // x22
  int32_t v107; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_4AFE040 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v15);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, v16);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v19);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v21);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v23);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27);
    byte_4AFE040 = 1;
  }
  friendshipRank = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v28 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v28, 0LL);
  this->fields._IconInfo1_k__BackingField = v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._IconInfo1_k__BackingField, (int32_t)v28, v29, v30);
  v31 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields._IconInfo2_k__BackingField = v31;
  p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._IconInfo2_k__BackingField, (int32_t)v31, v33, v34);
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._UserServant_k__BackingField, (int32_t)entity, v36, v37);
  this->fields.recommendSupportServantData = supportServantData;
  p_recommendSupportServantData = &this->fields.recommendSupportServantData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.recommendSupportServantData, (int32_t)supportServantData, v39, v40);
  this->fields.eventSetupInfo = eventUpValSetupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)eventUpValSetupInfo, v41, v42);
  if ( !this->fields._UserServant_k__BackingField )
    goto LABEL_59;
  this->fields.svtId = this->fields._UserServant_k__BackingField->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v46 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v115.fields.currentCryptoKey = v47;
  *(_QWORD *)&v115.fields.fakeValue = v46;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v115, 0LL);
  if ( !v48 )
    goto LABEL_59;
  v49 = DataMasterBase_object__object__int___GetEntity(
          v48,
          Instance,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._Servant_k__BackingField = (struct ServantEntity_o *)v49;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Servant_k__BackingField, (int32_t)v49, v50, v51);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v52,
    v53);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  v54 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(this->fields.svtId, 0LL);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_59;
  v56 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
               UserServant_k__BackingField->fields.limitCount,
               0LL);
  if ( !v54 )
    goto LABEL_59;
  ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v54, v56, Instance, 0LL);
  RecommendSupportServantSelectListViewItem__SetOverwriteStatus(this, this->fields._UserServant_k__BackingField, v57);
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    goto LABEL_59;
  this->fields._ClassId_k__BackingField = Servant_k__BackingField->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v59 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_59;
  v60 = *(_OWORD *)&v59->fields.userId.fields.fakeValue;
  v61 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v59->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v60;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v110 = v111;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v110, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(this->fields.svtId, 0LL);
  if ( !v61 )
    goto LABEL_59;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v61, v62, Instance, 0LL);
  if ( !Instance )
    goto LABEL_59;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields._IsSame_k__BackingField = 0;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v63, v64);
  this->fields.equipServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v65, v66);
  this->fields.equipIdList = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v67, v68);
  v69 = this->fields._UserServant_k__BackingField;
  if ( !v69 )
    goto LABEL_59;
  v70 = *(_OWORD *)&v69->fields.id.fields.fakeValue;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v69->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v70;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v109, 0LL);
  v71 = *p_recommendSupportServantData;
  if ( !*p_recommendSupportServantData )
    goto LABEL_59;
  v72 = Instance;
  Instance = RecommendSupportData__GetServant(v71, selectIndex, 0LL);
  v73 = this->fields._UserServant_k__BackingField;
  this->fields._IsBase_k__BackingField = v72 == Instance;
  if ( !v73 )
    goto LABEL_59;
  Instance = UserServantEntity__IsLock(v73, 0LL);
  v74 = this->fields._UserServant_k__BackingField;
  this->fields._IsLock_k__BackingField = Instance & 1;
  if ( !v74 )
    goto LABEL_59;
  Instance = UserServantEntity__IsChoice(v74, 0LL);
  v75 = this->fields._UserServant_k__BackingField;
  this->fields._IsChoice_k__BackingField = Instance & 1;
  if ( !v75 )
    goto LABEL_59;
  Instance = UserServantEntity__IsEventJoin(v75, 0LL);
  v76 = this->fields._Servant_k__BackingField;
  this->fields._IsEventJoin_k__BackingField = Instance & 1;
  if ( !v76 )
    goto LABEL_59;
  v77 = ServantEntity__checkIsHeroineSvt(v76, 0LL);
  Instance = (int64_t)this->fields.recommendSupportServantData;
  this->fields.isHeroine = v77;
  this->fields._IsSwapLock_k__BackingField = 0;
  this->fields._IsSwapChoice_k__BackingField = 0;
  this->fields._IsInvalidRarity_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_59;
  Equip = RecommendSupportData__GetEquip((RecommendSupportData_o *)Instance, selectIndex, 0LL);
  if ( Equip < 1 )
    goto LABEL_35;
  v79 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_59;
  v80 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          v79,
          (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v81 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_59;
  v82 = (PartyOrganizationUtility_o *)Instance;
  v84 = *(_QWORD *)&v81->fields.svtId.fields.currentCryptoKey;
  v83 = *(_QWORD *)&v81->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v116.fields.currentCryptoKey = v84;
  *(_QWORD *)&v116.fields.fakeValue = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v116, 0LL);
  if ( !*p_UserServant_k__BackingField
    || (v85 = Instance, Instance = UserServantEntity__getRarity(*p_UserServant_k__BackingField, 0LL), !v80)
    || (v86 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v80[5],
                     0LL),
        !v82) )
  {
LABEL_59:
    sub_1BC3264(Instance, v44);
  }
  this->fields._IsInvalidRarity_k__BackingField = PartyOrganizationUtility__IsRarityRestriction(
                                                    v82,
                                                    &skillName,
                                                    &actMaxRarity,
                                                    v85,
                                                    v86,
                                                    Instance,
                                                    -1,
                                                    0LL);
LABEL_35:
  this->fields._IsUseInSet_k__BackingField = 0;
  this->fields._IsPushMode_k__BackingField = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_59;
  v87 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_59;
  v88 = *(_OWORD *)&v87->fields.id.fields.fakeValue;
  v89 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v87->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v88;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v108 = v111;
  v90 = v89 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v108, 0LL);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  v91 = v90;
  this->fields._IsPush_k__BackingField = v91;
  this->fields._IsEnabled_k__BackingField = 1;
  if ( !Instance )
    goto LABEL_59;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v92 = this->fields._UserServant_k__BackingField;
  this->fields.dispLimitCount = Instance;
  if ( !v92 )
    goto LABEL_59;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v92, -1, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v94, v95);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_59;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   -1,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.tdCategoryIdList, (int32_t)TreasureDeviceCategoryIdList, v97, v98);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_59;
  v99 = *(_DWORD *)(Instance + 276);
  v100 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v100 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_UserServant_k__BackingField;
  }
  static_fields = v100->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v99;
  if ( !Instance )
    goto LABEL_59;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_59;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields._ClassId_k__BackingField,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_59;
  v102 = *(int *)(Instance + 52);
  v103 = this->fields._Servant_k__BackingField;
  this->fields.priority = v102;
  this->fields.sortValue1B = v102;
  if ( !v103 )
    goto LABEL_59;
  v104 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_59;
  this->fields.sortValue2 = ((__int64)v103->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields.rarity << 48) | v104->fields.lv;
  v106 = *(_QWORD *)&v104->fields.svtId.fields.currentCryptoKey;
  v105 = *(_QWORD *)&v104->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v117.fields.currentCryptoKey = v106;
  *(_QWORD *)&v117.fields.fakeValue = v105;
  v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v117, 0LL);
  Instance = (int64_t)this->fields._IconInfo1_k__BackingField;
  this->fields.sortValue2B = v107;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_59;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_IconInfo2_k__BackingField;
  if ( !*p_IconInfo2_k__BackingField )
    goto LABEL_59;
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

  if ( (byte_4AFE044 & 1) == 0 )
  {
    sub_1BC3008(&long___TypeInfo, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_4AFE044 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v5 = sub_1BC30B0(long___TypeInfo, equipIdList->max_length);
  v8 = this->fields.equipIdList;
  if ( !v8 )
LABEL_13:
    sub_1BC3264(v5, v6);
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
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v17, 0LL);
    if ( v9 )
    {
      if ( v10 >= v9->max_length )
LABEL_16:
        sub_1BC326C(v5, v6, v7);
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


int32_t __fastcall RecommendSupportServantSelectListViewItem__GetFriendPointBonus(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_Collections_Generic_IEnumerable_TSource__o *eventFriendPoints; // x20
  System_Func_object__object__o *v19; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  RecommendSupportServantSelectListViewItem___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__object__o *_9__123_1; // x20
  Il2CppObject *v24; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v28; // x0
  RecommendSupportServantSelectListViewItem___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  System_Func_object__bool__o *_9__123_2; // x20
  Il2CppObject *v32; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  RecommendSupportServantSelectListViewItem___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_object__object__o *_9__123_3; // x20
  Il2CppObject *v40; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v44; // x0
  RecommendSupportServantSelectListViewItem___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  System_Func_T1__T2__TResult__o *_9__123_4; // x20
  Il2CppObject *v48; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3

  if ( (byte_4AFE04C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___, method);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType4_EventCampaignEntity__int____,
      v3);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool____,
      v4);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity___,
      v5);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_Where___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool____,
      v6);
    sub_1BC3008(
      &System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo,
      v7);
    sub_1BC3008(&System_Func_EventCampaignEntity____f__AnonymousType4_EventCampaignEntity__int___TypeInfo, v8);
    sub_1BC3008(
      &System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___bool__TypeInfo,
      v9);
    sub_1BC3008(
      &System_Func___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___TypeInfo,
      v10);
    sub_1BC3008(&System_Func_int__EventCampaignEntity__int__TypeInfo, v11);
    sub_1BC3008(&Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__123_0__, v12);
    sub_1BC3008(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_1__, v13);
    sub_1BC3008(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_2__, v14);
    sub_1BC3008(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_3__, v15);
    sub_1BC3008(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_4__, v16);
    sub_1BC3008(&RecommendSupportServantSelectListViewItem___c_TypeInfo, v17);
    byte_4AFE04C = 1;
  }
  eventFriendPoints = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v19 = (System_Func_object__object__o *)sub_1BC3254(System_Func_EventCampaignEntity____f__AnonymousType4_EventCampaignEntity__int___TypeInfo);
  System_Func_object__object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__123_0__,
    0LL);
  v20 = System_Linq_Enumerable__Select_object__object_(
          eventFriendPoints,
          (System_Func_TSource__TResult__o *)v19,
          (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType4_EventCampaignEntity__int____);
  v21 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v21 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__123_1 = (System_Func_object__object__o *)v21->static_fields->__9__123_1;
  if ( !_9__123_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__123_1 = (System_Func_object__object__o *)sub_1BC3254(System_Func___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___TypeInfo);
    System_Func_object__object____ctor(
      _9__123_1,
      v24,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_1__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__123_1 = (struct System_Func___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___o *)_9__123_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__123_1, (int32_t)_9__123_1, v26, v27);
  }
  v28 = System_Linq_Enumerable__Select_object__object_(
          v22,
          (System_Func_TSource__TResult__o *)_9__123_1,
          (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool____);
  v29 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v29 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__123_2 = (System_Func_object__bool__o *)v29->static_fields->__9__123_2;
  if ( !_9__123_2 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__123_2 = (System_Func_object__bool__o *)sub_1BC3254(System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__123_2,
      v32,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_2__,
      0LL);
    v33 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v33->__9__123_2 = (struct System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___bool__o *)_9__123_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v33->__9__123_2, (int32_t)_9__123_2, v34, v35);
  }
  v36 = System_Linq_Enumerable__Where_object_(
          v30,
          (System_Func_TSource__bool__o *)_9__123_2,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool____);
  v37 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v38 = v36;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v37 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__123_3 = (System_Func_object__object__o *)v37->static_fields->__9__123_3;
  if ( !_9__123_3 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__123_3 = (System_Func_object__object__o *)sub_1BC3254(System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__123_3,
      v40,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_3__,
      0LL);
    v41 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v41->__9__123_3 = (struct System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity__o *)_9__123_3;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v41->__9__123_3, (int32_t)_9__123_3, v42, v43);
  }
  v44 = System_Linq_Enumerable__Select_object__object_(
          v38,
          (System_Func_TSource__TResult__o *)_9__123_3,
          (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity___);
  v45 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v45 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__123_4 = (System_Func_T1__T2__TResult__o *)v45->static_fields->__9__123_4;
  if ( !_9__123_4 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__123_4 = (System_Func_T1__T2__TResult__o *)sub_1BC3254(System_Func_int__EventCampaignEntity__int__TypeInfo);
    System_Func_int__object__int____ctor(
      _9__123_4,
      v48,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_4__,
      0LL);
    v49 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v49->__9__123_4 = (struct System_Func_int__EventCampaignEntity__int__o *)_9__123_4;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v49->__9__123_4, (int32_t)_9__123_4, v50, v51);
  }
  return System_Linq_Enumerable__Aggregate_object__int_(
           v46,
           -1,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__123_4,
           (const MethodInfo_300A7B4 *)Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
}


bool __fastcall RecommendSupportServantSelectListViewItem__GetNpInfo(
        RecommendSupportServantSelectListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFE04B & 1) == 0 )
  {
    sub_1BC3008(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4AFE04B = 1;
  }
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
    return UserServantEntity__getTreasureDeviceInfo(UserServant_k__BackingField, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BC3254(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


bool __fastcall RecommendSupportServantSelectListViewItem__IsMatchServantFilter(
        RecommendSupportServantSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  UserServantEntity_o *UserServant_k__BackingField; // x21
  __int64 v17; // x2
  __int64 v18; // x1
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v32; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v34; // w0

  if ( (byte_4AFE042 & 1) == 0 )
  {
    sub_1BC3008(&FilterKindList_TypeInfo, sort);
    sub_1BC3008(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BC3008(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4AFE042 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v11, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields._Servant_k__BackingField, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields._Servant_k__BackingField, 0LL) )
  {
    return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServant_k__BackingField, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_62:
    sub_1BC3264(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0LL)
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
    v22 = this->fields._UserServant_k__BackingField;
    if ( v22 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v22, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v24 = this->fields._UserServant_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v24 )
          goto LABEL_62;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v24, -1, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v26, v27);
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BC2FAC(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v29,
          v30);
      }
    }
    ClassGroupFilterKindList = sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v18 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    v18 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v32 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v34 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v32) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v34 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v34 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(
          sort,
          this->fields._UserServant_k__BackingField,
          this->fields._Servant_k__BackingField,
          0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields._UserServant_k__BackingField,
          this->fields._Servant_k__BackingField,
          0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1BC30B0(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v18 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
    sub_1BC326C(ClassGroupFilterKindList, v18, v17);
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportServantSelectListViewItem__IsRestriction(
        RecommendSupportServantSelectListViewItem_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t Master_object; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v14; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  QuestRestrictionInfo_o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4AFE04D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&questId);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BC3008(&QuestRestrictionInfo_TypeInfo, v10);
    byte_4AFE04D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_14;
  v14 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v19, 0LL);
  if ( !v15 )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v15,
          &entity,
          Master_object,
          (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  v16 = (QuestRestrictionInfo_o *)sub_1BC3254(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_42371264(v16, 0, questId, questPhase, 0LL);
  Master_object = (int64_t)entity;
  if ( !entity )
LABEL_14:
    sub_1BC3264(Master_object, v12);
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)entity, v16, this->fields.rarity, 2, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyChoiceItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1BC3264(0LL, method);
  *(_WORD *)&this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyItem(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UserServantEntity_o **p_UserServant_k__BackingField; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._UserServant_k__BackingField, (int32_t)entity, (int32_t)method, v3);
  if ( !*p_UserServant_k__BackingField )
    sub_1BC3264(0LL, v7);
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin(*p_UserServant_k__BackingField, 0LL);
  RecommendSupportServantSelectListViewItem__SetOverwriteStatus(this, entity, v8);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyLockItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1BC3264(0LL, method);
  this->fields._IsLock_k__BackingField = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  this->fields._IsSwapLock_k__BackingField = 0;
}


void __fastcall RecommendSupportServantSelectListViewItem__ResetEventCampaign(
        RecommendSupportServantSelectListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3);
}


void __fastcall RecommendSupportServantSelectListViewItem__SetEquipStatus(
        RecommendSupportServantSelectListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIds,
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

  if ( (byte_4AFE041 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, equipIds);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4AFE041 = 1;
  }
  p_equipUserServantEntity = (CGThumbnailListItem_o *)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = (CGThumbnailListItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v16, v17);
  this->fields.equipIdList = 0LL;
  p_equipIdList = (CGThumbnailListItem_o *)&this->fields.equipIdList;
  sub_1BC2FAC(p_equipIdList, 0, v19, v20);
  if ( !p_equipIdList->fields.sortValue2B )
    return;
  if ( !equipIds )
    goto LABEL_9;
  klass = p_equipIdList->klass;
  if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIds )
    goto LABEL_14;
  v25 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
  if ( v25 )
  {
    v28 = v25;
    v29 = sub_1BC3144(v25, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v29 )
    {
      sub_1BC3524(v28);
LABEL_9:
      v30 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v30 = BalanceConfig_TypeInfo;
      }
      v29 = sub_1BC30B0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v30->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v29 = 0LL;
  }
  p_equipIdList->klass = (CGThumbnailListItem_c *)v29;
  sub_1BC2FAC(p_equipIdList, v29, v26, v27);
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v49, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v32 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_36;
  if ( !LODWORD(v32->_1.namespaze) )
LABEL_37:
    sub_1BC326C(Instance, v22, v23);
  v33 = v32->_1.this_arg;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(Il2CppType *)&v50.fields.currentCryptoKey = v32->_1.byval_arg;
  *(Il2CppType *)&v50.fields.fakeValue = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v48 = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v48, 0LL);
  if ( !v34 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v34,
             Instance,
             (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1BC2FAC(p_equipUserServantEntity, (int32_t)Entity, v36, v37);
  v38 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v38->_1.declaringType;
    parent = v38->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v51.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v51, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
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
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v52, 0LL);
          if ( v42 )
          {
            v45 = DataMasterBase_object__object__int___GetEntity(
                    v42,
                    Instance,
                    (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (CGThumbnailListItem_c *)v45;
            sub_1BC2FAC(p_equipServantEntity, (int32_t)v45, v46, v47);
            return;
          }
        }
      }
LABEL_36:
      sub_1BC3264(Instance, v22);
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

  if ( (byte_4AFE045 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    byte_4AFE045 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userSvtId, 0LL);
    v9 = *(_OWORD *)&v10.fields.fakeValue;
    if ( !equipIdList->max_length )
      sub_1BC326C(v6, v7, v8);
    *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey = *(_OWORD *)&v10.fields.currentCryptoKey;
    *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue = v9;
    RecommendSupportServantSelectListViewItem__SetEquipStatus(this, this->fields.equipIdList, v8);
  }
}


void __fastcall RecommendSupportServantSelectListViewItem__SetOverwriteStatus(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                                 userServantEntity,
                                                                 0LL,
                                                                 0LL)) == 0LL) )
  {
    sub_1BC3264(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8uLL);
}


bool __fastcall RecommendSupportServantSelectListViewItem__SetSortValue(
        RecommendSupportServantSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *v4; // x19
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
  int32_t bonusKind2; // w8
  int32_t v18; // w2
  int32_t bonusKind2Id; // w8
  int32_t v20; // w8
  int32_t v21; // w8
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v24; // x22
  __int64 v25; // x23
  EventCampaignMaster_o *v26; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v28; // x22
  _BOOL4 IsSwapChoice_k__BackingField; // w8
  _BOOL4 IsChoice_k__BackingField; // w9
  __int64 v31; // x8
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v33; // q1
  struct UserServantEntity_o *v34; // x8
  const MethodInfo *v35; // x2
  unsigned __int64 rarity; // x8
  int64_t equipUserServantEntity_low; // x20
  IconLabelInfo_o *IconInfo1_k__BackingField; // x21
  int64_t cost; // x2
  int32_t friendshipMax; // w3
  int32_t v41; // w1
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int64_t hp; // x20
  IconLabelInfo_o *v44; // x21
  struct UserServantEntity_o *v45; // x8
  int32_t atk; // w4
  int32_t v47; // w3
  int32_t v48; // w1
  struct UserServantEntity_o *v49; // x8
  struct UserServantEntity_o *v50; // x8
  __int64 v51; // x20
  __int64 v52; // x21
  int32_t v53; // w0
  RecommendSupportServantSelectListViewItem_o *v54; // x20
  int64_t v55; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v58; // x20
  IconLabelInfo_o *IconInfo2_k__BackingField; // x19
  RecommendSupportServantSelectListViewItem_o *v60; // x21
  __int64 v61; // x21
  __int64 v62; // x22
  const MethodInfo *v63; // x2
  struct ServantEntity_o *Servant_k__BackingField; // x8
  int32_t v65; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  v4 = this;
  if ( (byte_4AFE043 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&System_Func_EventGroupEntity__bool__TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BC3008(&Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__94_0__, v14);
    sub_1BC3008(&RecommendSupportServantSelectListViewManager_TypeInfo, v15);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1BC3008(
                                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                            v16);
    byte_4AFE043 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_124;
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
      this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_124;
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
          goto LABEL_124;
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          v28 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v28,
            (Il2CppObject *)v4,
            Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__94_0__,
            0LL);
          v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                      (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                      (System_Func_T__bool__o *)v28,
                                      (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_EventGroupEntity___);
        }
      }
      goto LABEL_42;
    case 3:
      if ( v4->fields.bonusKind == 3 )
      {
        v20 = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v20 )
          goto LABEL_42;
      }
      else
      {
        v20 = sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 3;
      v4->fields.bonusKindId = v20;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v25 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      v26 = (EventCampaignMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v70.fields.currentCryptoKey = v25;
      *(_QWORD *)&v70.fields.fakeValue = v24;
      this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                              v70,
                                                              0LL);
      if ( !v26 )
        goto LABEL_124;
      IsEnableServant = EventCampaignMaster__IsEnableServant(v26, (int32_t)this, v4->fields.bonusKindId, 0LL);
      goto LABEL_32;
    case 4:
    case 5:
      if ( v4->fields.bonusKind == bonusKind2 )
      {
        v18 = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v18 )
          goto LABEL_42;
      }
      else
      {
        v18 = sort->fields.bonusKind2Id;
      }
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
      v4->fields.bonusKind = bonusKind2;
      v4->fields.bonusKindId = v18;
      if ( !this )
        goto LABEL_124;
      IsEnableServant = UserServantEntity__getEventUpVal_42144440(
                          (UserServantEntity_o *)this,
                          v4->fields.eventSetupInfo,
                          v18,
                          0LL,
                          0LL);
      goto LABEL_32;
    case 7:
      if ( v4->fields.bonusKind != 7 )
      {
        v21 = sort->fields.bonusKind2Id;
        goto LABEL_29;
      }
      v21 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId != v21 )
      {
LABEL_29:
        v4->fields.bonusKind = 7;
        v4->fields.bonusKindId = v21;
        this = (RecommendSupportServantSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
LABEL_124:
        sub_1BC3264(this, sort);
      }
LABEL_42:
      if ( !v4->fields.isEventUpVal )
        goto LABEL_63;
LABEL_43:
      if ( !v4->fields._IsBase_k__BackingField )
      {
        this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._Servant_k__BackingField;
        if ( !this )
          goto LABEL_124;
        if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
          goto LABEL_63;
        this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._Servant_k__BackingField;
        if ( !this )
          goto LABEL_124;
        if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
          || !RecommendSupportServantSelectListViewItem__IsMatchServantFilter(v4, sort, v35) )
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
        v31 = -10LL;
      }
      else
      {
        v31 = 10LL;
      }
      v4->fields.sortValue0 = v31;
LABEL_50:
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo2_k__BackingField;
      if ( !this )
        goto LABEL_124;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (RecommendSupportServantSelectListViewItem_o *)(&dword_0 + 1);
      switch ( sort->fields.sortKind )
      {
        case 1:
          UserServant_k__BackingField = v4->fields._UserServant_k__BackingField;
          if ( !UserServant_k__BackingField )
            goto LABEL_124;
          v33 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v68.fields.fakeValue = v33;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v67 = v68;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                                                  &v67,
                                                                  0LL);
          v34 = v4->fields._UserServant_k__BackingField;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v34 )
            goto LABEL_124;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          if ( !this )
            goto LABEL_124;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v34->fields.createdAt, 0, 0, 0, 0LL);
          goto LABEL_98;
        case 2:
          rarity = v4->fields.rarity;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          goto LABEL_119;
        case 3:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_124;
          equipUserServantEntity_low = SLODWORD(this->fields.equipUserServantEntity);
          IconInfo1_k__BackingField = v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = equipUserServantEntity_low;
          this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                                  (UserServantEntity_o *)this,
                                                                  0LL);
          if ( !IconInfo1_k__BackingField )
            goto LABEL_124;
          IconLabelInfo__Set_39947860(
            IconInfo1_k__BackingField,
            2,
            equipUserServantEntity_low,
            (int32_t)this,
            0,
            0,
            0,
            0,
            0,
            0LL);
          goto LABEL_123;
        case 4:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_124;
          UserServantEntity__getTreasureDeviceInfo_42151700((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
          LODWORD(cost) = tdMaxLv[1];
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = tdMaxLv[1];
          if ( !this )
            goto LABEL_124;
          friendshipMax = tdMaxLv[0];
          v41 = 33;
          goto LABEL_97;
        case 5:
          equipUserServantEntity = v4->fields.equipUserServantEntity;
          hp = v4->fields.hp;
          if ( equipUserServantEntity )
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
            if ( !this )
              goto LABEL_124;
            v44 = v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_HpBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
            v45 = v4->fields.equipUserServantEntity;
            if ( !v45 || !v44 )
              goto LABEL_124;
            atk = v45->fields.hp;
            v47 = (int)this;
            v48 = 46;
            goto LABEL_81;
          }
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_124;
          v60 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_HpBoostValue(
                                                                  (UserServantEntity_o *)this,
                                                                  0LL);
          if ( !v60 )
            goto LABEL_124;
          friendshipMax = (int)this;
          v41 = 3;
          goto LABEL_106;
        case 6:
          v49 = v4->fields.equipUserServantEntity;
          hp = v4->fields.atk;
          if ( v49 )
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = v49->fields.atk + (int)hp;
            if ( !this )
              goto LABEL_124;
            v44 = v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
            v50 = v4->fields.equipUserServantEntity;
            if ( !v50 || !v44 )
              goto LABEL_124;
            atk = v50->fields.atk;
            v47 = (int)this;
            v48 = 47;
LABEL_81:
            IconLabelInfo__Set_39947860(v44, v48, hp, v47, atk, 0, 0, 0, 0, 0LL);
          }
          else
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_124;
            v60 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0LL);
            if ( !v60 )
              goto LABEL_124;
            friendshipMax = (int)this;
            v41 = 5;
LABEL_106:
            this = v60;
            LODWORD(cost) = hp;
LABEL_97:
            IconLabelInfo__Set_39947860((IconLabelInfo_o *)this, v41, cost, friendshipMax, 0, 0, 0, 0, 0, 0LL);
          }
LABEL_98:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_124;
          IconInfo2_k__BackingField = v4->fields._IconInfo2_k__BackingField;
LABEL_121:
          v65 = (int32_t)this->fields.equipUserServantEntity;
          this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                                  (UserServantEntity_o *)this,
                                                                  0LL);
          if ( !IconInfo2_k__BackingField )
            goto LABEL_124;
          IconLabelInfo__Set_39947860(IconInfo2_k__BackingField, 2, v65, (int32_t)this, 0, 0, 0, 0, 0, 0LL);
LABEL_123:
          LOBYTE(this) = 1;
          return (char)this;
        case 7:
          cost = v4->fields.cost;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = cost;
          if ( !this )
            goto LABEL_124;
          v41 = 7;
          friendshipMax = 0;
          goto LABEL_97;
        case 8:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          rarity = -v4->fields.priority;
          goto LABEL_119;
        case 0xA:
          v52 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
          v51 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v71.fields.currentCryptoKey = v52;
          *(_QWORD *)&v71.fields.fakeValue = v51;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v71, 0LL);
          v54 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v55 = v53;
          friendship = v4->fields.friendship;
          v4->fields.sortValue1 = v55;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                  friendship,
                                                                  0LL);
          if ( !v54 )
            goto LABEL_124;
          friendshipMax = v4->fields.friendshipMax;
          LODWORD(cost) = (_DWORD)this;
          v41 = 32;
          this = v54;
          goto LABEL_97;
        case 0xE:
          if ( (v4->fields.amountSortValue & 0x8000000000000000LL) == 0 )
            goto LABEL_117;
          manager = sort->fields.manager;
          if ( manager
            && (methodPtr_low = LOBYTE(RecommendSupportServantSelectListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
          {
            if ( (RecommendSupportServantSelectListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportServantSelectListViewManager_TypeInfo )
              v58 = (UnityEngine_Object_o *)sort->fields.manager;
            else
              v58 = 0LL;
          }
          else
          {
            v58 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (RecommendSupportServantSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_117;
          v62 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v61 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v73.fields.currentCryptoKey = v62;
          *(_QWORD *)&v73.fields.fakeValue = v61;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                  v73,
                                                                  0LL);
          if ( !v58 )
            goto LABEL_124;
          this = (RecommendSupportServantSelectListViewItem_o *)RecommendSupportServantSelectListViewManager__GetAmountSortValue(
                                                                  (RecommendSupportServantSelectListViewManager_o *)v58,
                                                                  (int32_t)this,
                                                                  v63);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_117:
          Servant_k__BackingField = v4->fields._Servant_k__BackingField;
          if ( !Servant_k__BackingField )
            goto LABEL_124;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48)) | Servant_k__BackingField->fields.collectionNo;
LABEL_119:
          v4->fields.sortValue1 = rarity;
          if ( !this )
            goto LABEL_124;
          IconInfo2_k__BackingField = v4->fields._IconInfo1_k__BackingField;
          goto LABEL_121;
        case 0xF:
          cost = v4->fields.hpReinforceValue;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = cost;
          if ( !this )
            goto LABEL_124;
          friendshipMax = v4->fields.nowMaxHpReinforceValue;
          v41 = 44;
          goto LABEL_97;
        case 0x10:
          cost = v4->fields.atkReinforceValue;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = cost;
          if ( !this )
            goto LABEL_124;
          friendshipMax = v4->fields.nowMaxAtkReinforceValue;
          v41 = 45;
          goto LABEL_97;
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


__f__AnonymousType4_EventCampaignEntity__int__o *__fastcall RecommendSupportServantSelectListViewItem___GetFriendPointBonus_b__123_0(
        RecommendSupportServantSelectListViewItem_o *this,
        EventCampaignEntity_o *t,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *targetIds; // x21
  int32_t SvtId; // w0
  int32_t v9; // w20
  __f__AnonymousType4__t_j__TPar___indexOf_j__TPar__o *v10; // x21

  v4 = this;
  if ( (byte_4AFE04F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_IndexOf_int___, t);
    sub_1BC3008(&Method___f__AnonymousType4_EventCampaignEntity__int___ctor__, v5);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1BC3008(
                                                            &_f__AnonymousType4_EventCampaignEntity__int__TypeInfo,
                                                            v6);
    byte_4AFE04F = 1;
  }
  if ( !t )
    sub_1BC3264(this, t);
  targetIds = t->fields.targetIds;
  SvtId = RecommendSupportServantSelectListViewItem__get_SvtId(v4, (const MethodInfo *)t);
  v9 = System_Array__IndexOf_int_(targetIds, SvtId, (const MethodInfo_31002A8 *)Method_System_Array_IndexOf_int___);
  v10 = (__f__AnonymousType4__t_j__TPar___indexOf_j__TPar__o *)sub_1BC3254(_f__AnonymousType4_EventCampaignEntity__int__TypeInfo);
  _f__AnonymousType4_object__int____ctor(
    v10,
    (Il2CppObject *)t,
    v9,
    (const MethodInfo_31DB1E8 *)Method___f__AnonymousType4_EventCampaignEntity__int___ctor__);
  return (__f__AnonymousType4_EventCampaignEntity__int__o *)v10;
}


bool __fastcall RecommendSupportServantSelectListViewItem___SetSortValue_b__94_0(
        RecommendSupportServantSelectListViewItem_o *this,
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
  ServantFilterMaster_o *UserServant_k__BackingField; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4AFE04E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4AFE04E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  UserServant_k__BackingField = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                           v15,
                                                           0LL);
  if ( !entity || !v11 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)UserServant_k__BackingField, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserServant_k__BackingField = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_1BC3264(UserServant_k__BackingField, v13);
  return UserServantEntity__getEventUpVal_42144440(
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
  return this->fields.cost;
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
  if ( (byte_4AFE048 & 1) == 0 )
  {
    sub_1BC3008(&TutorialFlag_TypeInfo, method);
    byte_4AFE048 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_39466584(126, 0LL);
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

  if ( (byte_4AFE04A & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_4AFE04A = 1;
  }
  *(_QWORD *)questPhase = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (klass = (RecommendSupportData_o *)Instance[7].klass,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !klass )
  {
    sub_1BC3264(Instance, v4);
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
  __int64 v3; // x1
  RecommendSupportSelectControl_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v7; // q1
  RecommendSupportSelectControl_o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4AFE049 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4AFE049 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (RecommendSupportSelectControl_o *)RecommendSupportSelectControl__get_SelectServantId(Instance, v5),
        (UserServant_k__BackingField = this->fields._UserServant_k__BackingField) == 0LL) )
  {
    sub_1BC3264(Instance, v5);
  }
  v7 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v8 = Instance;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  return v8 == (RecommendSupportSelectControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                                    &v10,
                                                    0LL);
}


System_String_o *__fastcall RecommendSupportServantSelectListViewItem__get_NameText(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantEntity_o *Servant_k__BackingField; // x19
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4AFE047 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BC3008(&StringLiteral_18886/*"error"*/, v3);
    byte_4AFE047 = 1;
  }
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    return (System_String_o *)StringLiteral_18886/*"error"*/;
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
  {
    v7 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(Servant_k__BackingField, v8, -1, 0, 0LL);
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

  if ( (byte_4AFE046 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4AFE046 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v6, 0LL);
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
  const MethodInfo *v3; // x3

  this->fields._UserServant_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._UserServant_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall RecommendSupportServantSelectListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFE050 & 1) == 0 )
  {
    sub_1BC3008(&RecommendSupportServantSelectListViewItem___c_TypeInfo, v1);
    byte_4AFE050 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(RecommendSupportServantSelectListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewItem___c_o *)v2;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall RecommendSupportServantSelectListViewItem___c___ctor(
        RecommendSupportServantSelectListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__o *__fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__123_1(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType4_EventCampaignEntity__int__o *h__TransparentIdentifier0,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventCampaignEntity_o *t_i__Field; // x8
  struct System_Int32_array *targetIds; // x9
  char v8; // w20
  __f__AnonymousType5____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *v9; // x21

  if ( (byte_4AFE051 & 1) == 0 )
  {
    sub_1BC3008(&Method___f__AnonymousType4_EventCampaignEntity__int__get_t__, h__TransparentIdentifier0);
    sub_1BC3008(&Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___ctor__, v4);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BC3008(
                                                                &_f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__TypeInfo,
                                                                v5);
    byte_4AFE051 = 1;
  }
  if ( !h__TransparentIdentifier0 || (t_i__Field = h__TransparentIdentifier0->fields._t_i__Field) == 0LL )
    sub_1BC3264(this, h__TransparentIdentifier0);
  targetIds = t_i__Field->fields.targetIds;
  if ( targetIds )
    v8 = targetIds->max_length == 0;
  else
    v8 = 1;
  v9 = (__f__AnonymousType5____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *)sub_1BC3254(_f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__TypeInfo);
  _f__AnonymousType5_object__bool____ctor(
    v9,
    (Il2CppObject *)h__TransparentIdentifier0,
    v8,
    (const MethodInfo_31DBFB4 *)Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___ctor__);
  return (__f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__o *)v9;
}


bool __fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__123_2(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct __f__AnonymousType4_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4AFE052 & 1) == 0 )
  {
    sub_1BC3008(&Method___f__AnonymousType4_EventCampaignEntity__int__get_indexOf__, h__TransparentIdentifier1);
    sub_1BC3008(
      &Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__,
      v4);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BC3008(
                                                                &Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__get_isAllTarget__,
                                                                v5);
    byte_4AFE052 = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0LL )
  {
    sub_1BC3264(this, h__TransparentIdentifier1);
  }
  return (h__TransparentIdentifier0_i__Field->fields._indexOf_i__Field & 0x80000000) == 0
      || h__TransparentIdentifier1->fields._isAllTarget_i__Field;
}


EventCampaignEntity_o *__fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__123_3(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct __f__AnonymousType4_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4AFE053 & 1) == 0 )
  {
    sub_1BC3008(&Method___f__AnonymousType4_EventCampaignEntity__int__get_t__, h__TransparentIdentifier1);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BC3008(
                                                                &Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__,
                                                                v4);
    byte_4AFE053 = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0LL )
  {
    sub_1BC3264(this, h__TransparentIdentifier1);
  }
  return h__TransparentIdentifier0_i__Field->fields._t_i__Field;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__123_4(
        RecommendSupportServantSelectListViewItem___c_o *this,
        int32_t current,
        EventCampaignEntity_o *t,
        const MethodInfo *method)
{
  int32_t value; // w20

  if ( (byte_4AFE054 & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BC3008(&System_Math_TypeInfo, *(_QWORD *)&current);
    byte_4AFE054 = 1;
  }
  if ( !t )
    sub_1BC3264(this, *(_QWORD *)&current);
  value = t->fields.value;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_63870684(current, value, 0LL);
}