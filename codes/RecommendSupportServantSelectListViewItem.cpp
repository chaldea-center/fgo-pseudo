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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  IconLabelInfo_o *v35; // x27
  struct IconLabelInfo_o **p_IconInfo2_k__BackingField; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UserServantEntity_o **p_UserServant_k__BackingField; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct RecommendSupportData_o **p_recommendSupportServantData; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t Instance; // x0
  __int64 v64; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v66; // x26
  __int64 v67; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x25
  Il2CppObject *v69; // x0
  struct ServantEntity_o **p_Servant_k__BackingField; // x25
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  Il2CppObject *v83; // x24
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  int32_t v85; // w26
  UserServantEntity_o *v86; // x8
  __int128 v87; // q1
  UserServantCollectionMaster_o *v88; // x24
  int64_t v89; // x25
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct UserServantEntity_o *v108; // x8
  __int128 v109; // q0
  RecommendSupportData_o *v110; // x8
  int64_t v111; // x23
  UserServantEntity_o *v112; // x8
  UserServantEntity_o *v113; // x8
  UserServantEntity_o *v114; // x8
  ServantEntity_o *Servant_k__BackingField; // x8
  bool v116; // w8
  int64_t Equip; // x0
  int64_t v118; // x22
  Il2CppObject *v119; // x23
  UserServantEntity_o *v120; // x8
  PartyOrganizationUtility_o *v121; // x22
  __int64 v122; // x24
  __int64 v123; // x25
  int32_t v124; // w24
  int32_t v125; // w25
  UserServantEntity_o *v126; // x8
  __int128 v127; // q0
  __int64 v128; // x22
  bool v129; // zf
  bool v130; // w8
  UserServantEntity_o *v131; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  int v146; // w22
  BalanceConfig_c *v147; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v149; // x8
  struct ServantEntity_o *v150; // x9
  UserServantEntity_o *v151; // x8
  __int64 v152; // x21
  __int64 v153; // x22
  int32_t v154; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16

  if ( (byte_4B62DB2 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, v15);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v16);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v19);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v21);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, v23);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27);
    byte_4B62DB2 = 1;
  }
  friendshipRank = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v28 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v28, 0LL);
  this->fields._IconInfo1_k__BackingField = v28;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo1_k__BackingField,
    (int64_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v35, 0LL);
  this->fields._IconInfo2_k__BackingField = v35;
  p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo2_k__BackingField,
    (int64_t)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  ListViewItem___ctor_41686696((ListViewItem_o *)this, index, 0LL);
  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserServant_k__BackingField,
    (int64_t)entity,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.recommendSupportServantData = supportServantData;
  p_recommendSupportServantData = &this->fields.recommendSupportServantData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.recommendSupportServantData,
    (int64_t)supportServantData,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.eventSetupInfo = eventUpValSetupInfo;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventUpValSetupInfo,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !this->fields._UserServant_k__BackingField )
    goto LABEL_60;
  this->fields.svtId = this->fields._UserServant_k__BackingField->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  v67 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v162.fields.currentCryptoKey = v67;
  *(_QWORD *)&v162.fields.fakeValue = v66;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v162, 0LL);
  if ( !v68 )
    goto LABEL_60;
  v69 = DataMasterBase_object__object__int___GetEntity(
          v68,
          Instance,
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._Servant_k__BackingField = (struct ServantEntity_o *)v69;
  p_Servant_k__BackingField = &this->fields._Servant_k__BackingField;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._Servant_k__BackingField,
    (int64_t)v69,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)friendPointCampaignEntityList,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v83 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(this->fields.svtId, 0LL);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_60;
  v85 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
               UserServant_k__BackingField->fields.limitCount,
               0LL);
  if ( !v83 )
    goto LABEL_60;
  Instance = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v83, v85, Instance, 0LL);
  if ( !*p_Servant_k__BackingField )
    goto LABEL_60;
  this->fields._ClassId_k__BackingField = (*p_Servant_k__BackingField)->fields.classId;
  if ( !Instance )
    goto LABEL_60;
  this->fields._Rarity_k__BackingField = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v86 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v87 = *(_OWORD *)&v86->fields.userId.fields.fakeValue;
  v88 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v86->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v158.fields.fakeValue = v87;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v157 = v158;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v157, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(this->fields.svtId, 0LL);
  if ( !v88 )
    goto LABEL_60;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v88, v89, Instance, 0LL);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity, 0LL, v90, v91, v92, v93, v94, v95);
  this->fields.equipServantEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v96, v97, v98, v99, v100, v101);
  this->fields.equipIdList = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v102, v103, v104, v105, v106, v107);
  v108 = this->fields._UserServant_k__BackingField;
  if ( !v108 )
    goto LABEL_60;
  v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
  *(_OWORD *)&v156.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v156.fields.fakeValue = v109;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v156, 0LL);
  v110 = *p_recommendSupportServantData;
  if ( !*p_recommendSupportServantData )
    goto LABEL_60;
  v111 = Instance;
  Instance = RecommendSupportData__GetServant(v110, selectIndex, 0LL);
  v112 = this->fields._UserServant_k__BackingField;
  this->fields._IsBase_k__BackingField = v111 == Instance;
  if ( !v112 )
    goto LABEL_60;
  Instance = UserServantEntity__IsLock(v112, 0LL);
  v113 = this->fields._UserServant_k__BackingField;
  this->fields._IsLock_k__BackingField = Instance & 1;
  if ( !v113 )
    goto LABEL_60;
  Instance = UserServantEntity__IsChoice(v113, 0LL);
  v114 = this->fields._UserServant_k__BackingField;
  this->fields._IsChoice_k__BackingField = Instance & 1;
  if ( !v114 )
    goto LABEL_60;
  Instance = UserServantEntity__IsEventJoin(v114, 0LL);
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  this->fields._IsEventJoin_k__BackingField = Instance & 1;
  if ( !Servant_k__BackingField )
    goto LABEL_60;
  v116 = ServantEntity__checkIsHeroineSvt(Servant_k__BackingField, 0LL);
  Instance = (int64_t)this->fields.recommendSupportServantData;
  this->fields.isHeroine = v116;
  this->fields._IsSwapLock_k__BackingField = 0;
  this->fields._IsSwapChoice_k__BackingField = 0;
  this->fields._IsInvalidRarity_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_60;
  Equip = RecommendSupportData__GetEquip((RecommendSupportData_o *)Instance, selectIndex, 0LL);
  if ( Equip < 1 )
    goto LABEL_36;
  v118 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  v119 = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           v118,
           (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v120 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v121 = (PartyOrganizationUtility_o *)Instance;
  v123 = *(_QWORD *)&v120->fields.svtId.fields.currentCryptoKey;
  v122 = *(_QWORD *)&v120->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v163.fields.currentCryptoKey = v123;
  *(_QWORD *)&v163.fields.fakeValue = v122;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v163, 0LL);
  if ( !*p_UserServant_k__BackingField
    || (v124 = Instance, Instance = UserServantEntity__getRarity(*p_UserServant_k__BackingField, 0LL), !v119)
    || (v125 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v119[5],
                     0LL),
        !v121) )
  {
LABEL_60:
    sub_1BE4D28(Instance, v64);
  }
  this->fields._IsInvalidRarity_k__BackingField = PartyOrganizationUtility__IsRarityRestriction(
                                                    v121,
                                                    &skillName,
                                                    &actMaxRarity,
                                                    v124,
                                                    v125,
                                                    Instance,
                                                    -1,
                                                    0LL);
LABEL_36:
  this->fields._IsUseInSet_k__BackingField = 0;
  this->fields._IsPushMode_k__BackingField = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_60;
  v126 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v127 = *(_OWORD *)&v126->fields.id.fields.fakeValue;
  v128 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v126->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v158.fields.fakeValue = v127;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v155 = v158;
  v129 = v128 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v155, 0LL);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  v130 = v129;
  this->fields._IsPush_k__BackingField = v130;
  this->fields._IsEnabled_k__BackingField = 1;
  if ( !Instance )
    goto LABEL_60;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v131 = this->fields._UserServant_k__BackingField;
  this->fields.dispLimitCount = Instance;
  if ( !v131 )
    goto LABEL_60;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v131, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_60;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_60;
  v146 = *(_DWORD *)(Instance + 276);
  v147 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v147 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_UserServant_k__BackingField;
  }
  static_fields = v147->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v146;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields._ClassId_k__BackingField,
                        (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_60;
  v149 = *(int *)(Instance + 52);
  v150 = this->fields._Servant_k__BackingField;
  this->fields.priority = v149;
  this->fields.sortValue1B = v149;
  if ( !v150 )
    goto LABEL_60;
  v151 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  this->fields.sortValue2 = ((__int64)v150->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields._Rarity_k__BackingField << 48) | v151->fields.lv;
  v153 = *(_QWORD *)&v151->fields.svtId.fields.currentCryptoKey;
  v152 = *(_QWORD *)&v151->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v164.fields.currentCryptoKey = v153;
  *(_QWORD *)&v164.fields.fakeValue = v152;
  v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v164, 0LL);
  Instance = (int64_t)this->fields._IconInfo1_k__BackingField;
  this->fields.sortValue2B = v154;
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

  if ( (byte_4B62DB6 & 1) == 0 )
  {
    sub_1BE4ACC(&long___TypeInfo, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_4B62DB6 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v5 = sub_1BE4B74(long___TypeInfo, equipIdList->max_length);
  v7 = this->fields.equipIdList;
  if ( !v7 )
LABEL_13:
    sub_1BE4D28(v5, v6);
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
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v16, 0LL);
    if ( v8 )
    {
      if ( v9 >= v8->max_length )
LABEL_16:
        sub_1BE4D30(v5, v6);
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
  System_Func_object__object__o *_9__122_1; // x20
  Il2CppObject *v24; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0
  RecommendSupportServantSelectListViewItem___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__bool__o *_9__122_2; // x20
  Il2CppObject *v36; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  RecommendSupportServantSelectListViewItem___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  System_Func_object__object__o *_9__122_3; // x20
  Il2CppObject *v48; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v56; // x0
  RecommendSupportServantSelectListViewItem___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x19
  System_Func_T1__T2__TResult__o *_9__122_4; // x20
  Il2CppObject *v60; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7

  if ( (byte_4B62DBE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___, method);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType3_EventCampaignEntity__int____,
      v3);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType3_EventCampaignEntity__int_____f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool____,
      v4);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___EventCampaignEntity___,
      v5);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_Where___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool____,
      v6);
    sub_1BE4ACC(
      &System_Func___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___bool__TypeInfo,
      v7);
    sub_1BE4ACC(&System_Func_EventCampaignEntity____f__AnonymousType3_EventCampaignEntity__int___TypeInfo, v8);
    sub_1BE4ACC(
      &System_Func___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo,
      v9);
    sub_1BE4ACC(
      &System_Func___f__AnonymousType3_EventCampaignEntity__int_____f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___TypeInfo,
      v10);
    sub_1BE4ACC(&System_Func_int__EventCampaignEntity__int__TypeInfo, v11);
    sub_1BE4ACC(&Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__122_0__, v12);
    sub_1BE4ACC(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_1__, v13);
    sub_1BE4ACC(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_2__, v14);
    sub_1BE4ACC(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_3__, v15);
    sub_1BE4ACC(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_4__, v16);
    sub_1BE4ACC(&RecommendSupportServantSelectListViewItem___c_TypeInfo, v17);
    byte_4B62DBE = 1;
  }
  eventFriendPoints = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v19 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_EventCampaignEntity____f__AnonymousType3_EventCampaignEntity__int___TypeInfo);
  System_Func_object__object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__122_0__,
    0LL);
  v20 = System_Linq_Enumerable__Select_object__object_(
          eventFriendPoints,
          (System_Func_TSource__TResult__o *)v19,
          (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType3_EventCampaignEntity__int____);
  v21 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v21 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_1 = (System_Func_object__object__o *)v21->static_fields->__9__122_1;
  if ( !_9__122_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__122_1 = (System_Func_object__object__o *)sub_1BE4D18(System_Func___f__AnonymousType3_EventCampaignEntity__int_____f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___TypeInfo);
    System_Func_object__object____ctor(
      _9__122_1,
      v24,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_1__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__122_1 = (struct System_Func___f__AnonymousType3_EventCampaignEntity__int_____f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___o *)_9__122_1;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__122_1,
      (int64_t)_9__122_1,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Select_object__object_(
          v22,
          (System_Func_TSource__TResult__o *)_9__122_1,
          (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select___f__AnonymousType3_EventCampaignEntity__int_____f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool____);
  v33 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v33 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_2 = (System_Func_object__bool__o *)v33->static_fields->__9__122_2;
  if ( !_9__122_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__122_2 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__122_2,
      v36,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_2__,
      0LL);
    v37 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v37->__9__122_2 = (struct System_Func___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___bool__o *)_9__122_2;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v37->__9__122_2, (int64_t)_9__122_2, v38, v39, v40, v41, v42, v43);
  }
  v44 = System_Linq_Enumerable__Where_object_(
          v34,
          (System_Func_TSource__bool__o *)_9__122_2,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool____);
  v45 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v46 = v44;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v45 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_3 = (System_Func_object__object__o *)v45->static_fields->__9__122_3;
  if ( !_9__122_3 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__122_3 = (System_Func_object__object__o *)sub_1BE4D18(System_Func___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__122_3,
      v48,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_3__,
      0LL);
    v49 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v49->__9__122_3 = (struct System_Func___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___EventCampaignEntity__o *)_9__122_3;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v49->__9__122_3, (int64_t)_9__122_3, v50, v51, v52, v53, v54, v55);
  }
  v56 = System_Linq_Enumerable__Select_object__object_(
          v46,
          (System_Func_TSource__TResult__o *)_9__122_3,
          (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___EventCampaignEntity___);
  v57 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v57 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_4 = (System_Func_T1__T2__TResult__o *)v57->static_fields->__9__122_4;
  if ( !_9__122_4 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v57->static_fields->__9;
    _9__122_4 = (System_Func_T1__T2__TResult__o *)sub_1BE4D18(System_Func_int__EventCampaignEntity__int__TypeInfo);
    System_Func_int__object__int____ctor(
      _9__122_4,
      v60,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_4__,
      0LL);
    v61 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v61->__9__122_4 = (struct System_Func_int__EventCampaignEntity__int__o *)_9__122_4;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v61->__9__122_4, (int64_t)_9__122_4, v62, v63, v64, v65, v66, v67);
  }
  return System_Linq_Enumerable__Aggregate_object__int_(
           v58,
           -1,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__122_4,
           (const MethodInfo_2F6206C *)Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
}


bool __fastcall RecommendSupportServantSelectListViewItem__GetNpInfo(
        RecommendSupportServantSelectListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0
  TreasureDvcInfo_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B62DBD & 1) == 0 )
  {
    sub_1BE4ACC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4B62DBD = 1;
  }
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
    return UserServantEntity__getTreasureDeviceInfo(UserServant_k__BackingField, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BE4D18(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)tdInfo, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v17; // x1
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21
  UserServantEntity_o *v21; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v23; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v39; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v41; // w0

  if ( (byte_4B62DB4 & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, sort);
    sub_1BE4ACC(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BE4ACC(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4B62DB4 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_60;
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
      goto LABEL_60;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    goto LABEL_60;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
LABEL_60:
    sub_1BE4D28(ClassGroupFilterKindList, sort);
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    v21 = this->fields._UserServant_k__BackingField;
    if ( v21 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v21, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_60;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v23 = this->fields._UserServant_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v23 )
          goto LABEL_60;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_60;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
    }
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_61;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v17 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_61:
      sub_1BE4D30(ClassGroupFilterKindList, v17);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v39 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v41 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v39) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v41 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v41 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BE4B74(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v17 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_61;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields._Rarity_k__BackingField, 0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  QuestRestrictionInfo_o *v16; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B62DBF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&questId);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BE4ACC(&QuestRestrictionInfo_TypeInfo, v10);
    byte_4B62DBF = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v19, 0LL);
  if ( !v15 )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v15,
          &entity,
          Master_object,
          (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  v16 = (QuestRestrictionInfo_o *)sub_1BE4D18(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_41390840(v16, 0, questId, questPhase, 0LL);
  Master_object = (int64_t)entity;
  if ( !entity )
LABEL_14:
    sub_1BE4D28(Master_object, v12);
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)entity, v16, 2, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyChoiceItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1BE4D28(0LL, method);
  *(_WORD *)&this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServant_k__BackingField, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyItem(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UserServantEntity_o **p_UserServant_k__BackingField; // x20
  __int64 v10; // x1

  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserServant_k__BackingField,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_UserServant_k__BackingField )
    sub_1BE4D28(0LL, v10);
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin(*p_UserServant_k__BackingField, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyLockItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1BE4D28(0LL, method);
  this->fields._IsLock_k__BackingField = UserServantEntity__IsLock(UserServant_k__BackingField, 0LL);
  this->fields._IsSwapLock_k__BackingField = 0;
}


void __fastcall RecommendSupportServantSelectListViewItem__ResetEventCampaign(
        RecommendSupportServantSelectListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)friendPointCampaigns,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendSupportServantSelectListViewItem__SetEquipStatus(
        RecommendSupportServantSelectListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  PartyOrganizationUtility_o *p_equipUserServantEntity; // x20
  PartyOrganizationUtility_o *p_equipServantEntity; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array **p_equipIdList; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t Instance; // x0
  __int64 v34; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v35; // x8
  Il2CppObject *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *v43; // x22
  int64_t v44; // x1
  BalanceConfig_c *v45; // x0
  __int128 v46; // q1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v47; // x8
  __int128 v48; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x21
  Il2CppObject *Entity; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  PartyOrganizationUtility_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  PartyOrganizationUtility_c *v60; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x20
  Il2CppClass *v62; // x21
  Il2CppClass *v63; // x22
  Il2CppObject *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_4B62DB3 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, equipIds);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v15);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B62DB3 = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_equipServantEntity = (PartyOrganizationUtility_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_equipIdList, 0LL, v27, v28, v29, v30, v31, v32);
  if ( !p_equipIdList[10] )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v35 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v36 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
  if ( v36 )
  {
    v43 = v36;
    v44 = sub_1BE4C08(v36, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v44 )
    {
      sub_1BE4FE8(v43);
LABEL_9:
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      v44 = sub_1BE4B74(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v45->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v44 = 0LL;
  }
  *p_equipIdList = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)v44;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_equipIdList, v44, v37, v38, v39, v40, v41, v42);
  v35 = *p_equipIdList;
LABEL_14:
  if ( !v35 )
    goto LABEL_36;
  if ( !v35->max_length )
    goto LABEL_37;
  v46 = *(_OWORD *)&v35->m_Items[0].fields.fakeValue;
  *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&v35->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v73.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v72 = v73;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v72, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v47 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_36;
  if ( !v47->max_length )
LABEL_37:
    sub_1BE4D30(Instance, v34);
  v48 = *(_OWORD *)&v47->m_Items[0].fields.fakeValue;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&v47->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v73.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v71 = v73;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v71, 0LL);
  if ( !v49 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v49,
             Instance,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BE4A70(p_equipUserServantEntity, (int64_t)Entity, v51, v52, v53, v54, v55, v56);
  klass = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v74.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v74.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v74, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
        v60 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v63 = v60->_1.declaringType;
          v62 = v60->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v75.fields.currentCryptoKey = v63;
          *(_QWORD *)&v75.fields.fakeValue = v62;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v75, 0LL);
          if ( v61 )
          {
            v64 = DataMasterBase_object__object__int___GetEntity(
                    v61,
                    Instance,
                    (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (PartyOrganizationUtility_c *)v64;
            sub_1BE4A70(p_equipServantEntity, (int64_t)v64, v65, v66, v67, v68, v69, v70);
            return;
          }
        }
      }
LABEL_36:
      sub_1BE4D28(Instance, v34);
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

  if ( (byte_4B62DB7 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    byte_4B62DB7 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userSvtId, 0LL);
    v9 = *(_OWORD *)&v10.fields.fakeValue;
    if ( !equipIdList->max_length )
      sub_1BE4D30(v6, v7);
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
  unsigned __int64 Rarity_k__BackingField; // x8
  int64_t equipServantEntity_low; // x20
  IconLabelInfo_o *IconInfo1_k__BackingField; // x21
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v41; // w1
  struct UserServantEntity_o *v42; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v46; // w1
  struct UserServantEntity_o *v47; // x8
  struct UserServantEntity_o *v48; // x9
  struct ServantEntity_o *Servant_k__BackingField; // x8
  __int64 v50; // x20
  __int64 v51; // x21
  int32_t v52; // w0
  RecommendSupportServantSelectListViewItem_o *v53; // x20
  int64_t v54; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v57; // x20
  IconLabelInfo_o *IconInfo2_k__BackingField; // x19
  __int64 v59; // x21
  __int64 v60; // x22
  const MethodInfo *v61; // x2
  struct ServantEntity_o *v62; // x8
  int32_t equipServantEntity; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  v4 = this;
  if ( (byte_4B62DB5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&System_Func_EventGroupEntity__bool__TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BE4ACC(&Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__93_0__, v14);
    sub_1BE4ACC(&RecommendSupportServantSelectListViewManager_TypeInfo, v15);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1BE4ACC(
                                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                            v16);
    byte_4B62DB5 = 1;
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
      this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
          v28 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v28,
            (Il2CppObject *)v4,
            Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__93_0__,
            0LL);
          v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                      (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                      (System_Func_T__bool__o *)v28,
                                      (const MethodInfo_2F4407C *)Method_BasicHelper_Any_EventGroupEntity___);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v25 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      v26 = (EventCampaignMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v68.fields.currentCryptoKey = v25;
      *(_QWORD *)&v68.fields.fakeValue = v24;
      this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                              v68,
                                                              0LL);
      if ( !v26 )
        goto LABEL_120;
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
        goto LABEL_120;
      IsEnableServant = UserServantEntity__getEventUpVal_41168560(
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
        this = (RecommendSupportServantSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
        sub_1BE4D28(this, sort);
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
        goto LABEL_120;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
      this = (RecommendSupportServantSelectListViewItem_o *)(&dword_0 + 1);
      switch ( sort->fields.sortKind )
      {
        case 1:
          UserServant_k__BackingField = v4->fields._UserServant_k__BackingField;
          if ( !UserServant_k__BackingField )
            goto LABEL_120;
          v33 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v66.fields.fakeValue = v33;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v65 = v66;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                                  &v65,
                                                                  0LL);
          v34 = v4->fields._UserServant_k__BackingField;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v34 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          if ( !this )
            goto LABEL_120;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v34->fields.createdAt, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_39043324(
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
          UserServantEntity__getTreasureDeviceInfo_41175800((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
          LODWORD(hp) = tdMaxLv[1];
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = tdMaxLv[1];
          if ( !this )
            goto LABEL_120;
          adjustAtk = tdMaxLv[0];
          v41 = 33;
          goto LABEL_100;
        case 5:
          v42 = v4->fields._UserServant_k__BackingField;
          if ( !v42 )
            goto LABEL_120;
          equipUserServantEntity = v4->fields.equipUserServantEntity;
          hp = v42->fields.hp;
          if ( equipUserServantEntity )
          {
            atk = equipUserServantEntity->fields.hp;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = atk + (int)hp;
            if ( !this )
              goto LABEL_120;
            adjustHp = v42->fields.adjustHp;
            v46 = 46;
            goto LABEL_79;
          }
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_120;
          adjustAtk = v42->fields.adjustHp;
          v41 = 3;
          goto LABEL_100;
        case 6:
          v47 = v4->fields._UserServant_k__BackingField;
          if ( !v47 )
            goto LABEL_120;
          v48 = v4->fields.equipUserServantEntity;
          hp = v47->fields.atk;
          if ( v48 )
          {
            atk = v48->fields.atk;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = atk + (int)hp;
            if ( !this )
              goto LABEL_120;
            adjustHp = v47->fields.adjustAtk;
            v46 = 47;
LABEL_79:
            IconLabelInfo__Set_39043324((IconLabelInfo_o *)this, v46, hp, adjustHp, atk, 0, 0, 0, 0LL);
          }
          else
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_120;
            adjustAtk = v47->fields.adjustAtk;
            v41 = 5;
LABEL_100:
            IconLabelInfo__Set_39043324((IconLabelInfo_o *)this, v41, hp, adjustAtk, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_39043324(IconInfo2_k__BackingField, 2, equipServantEntity, (int32_t)this, 0, 0, 0, 0, 0LL);
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
          v41 = 7;
          adjustAtk = 0;
          goto LABEL_100;
        case 8:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          Rarity_k__BackingField = -v4->fields.priority;
          goto LABEL_115;
        case 0xA:
          v51 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
          v50 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v69.fields.currentCryptoKey = v51;
          *(_QWORD *)&v69.fields.fakeValue = v50;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v69, 0LL);
          v53 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v54 = v52;
          friendship = v4->fields.friendship;
          v4->fields.sortValue1 = v54;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                                  friendship,
                                                                  0LL);
          if ( !v53 )
            goto LABEL_120;
          adjustAtk = v4->fields.friendshipMax;
          LODWORD(hp) = (_DWORD)this;
          v41 = 32;
          this = v53;
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
              v57 = (UnityEngine_Object_o *)sort->fields.manager;
            else
              v57 = 0LL;
          }
          else
          {
            v57 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (RecommendSupportServantSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_113;
          v60 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v59 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v71.fields.currentCryptoKey = v60;
          *(_QWORD *)&v71.fields.fakeValue = v59;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                                  v71,
                                                                  0LL);
          if ( !v57 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)RecommendSupportServantSelectListViewManager__GetAmountSortValue(
                                                                  (RecommendSupportServantSelectListViewManager_o *)v57,
                                                                  (int32_t)this,
                                                                  v61);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_113:
          v62 = v4->fields._Servant_k__BackingField;
          if ( !v62 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          Rarity_k__BackingField = (((unsigned __int64)(unsigned int)v4->fields._Rarity_k__BackingField << 32)
                                  + (v4->fields.amountSortValue << 48)) | v62->fields.collectionNo;
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
          v41 = 44;
          goto LABEL_100;
        case 0x10:
          hp = v4->fields.atkReinforceValue;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_120;
          adjustAtk = v4->fields.nowMaxAtkReinforceValue;
          v41 = 45;
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


__f__AnonymousType3_EventCampaignEntity__int__o *__fastcall RecommendSupportServantSelectListViewItem___GetFriendPointBonus_b__122_0(
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
  __f__AnonymousType3__t_j__TPar___indexOf_j__TPar__o *v10; // x21

  v4 = this;
  if ( (byte_4B62DC1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, t);
    sub_1BE4ACC(&Method___f__AnonymousType3_EventCampaignEntity__int___ctor__, v5);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1BE4ACC(
                                                            &_f__AnonymousType3_EventCampaignEntity__int__TypeInfo,
                                                            v6);
    byte_4B62DC1 = 1;
  }
  if ( !t )
    sub_1BE4D28(this, t);
  targetIds = t->fields.targetIds;
  SvtId = RecommendSupportServantSelectListViewItem__get_SvtId(v4, (const MethodInfo *)t);
  v9 = System_Array__IndexOf_int_(targetIds, SvtId, (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___);
  v10 = (__f__AnonymousType3__t_j__TPar___indexOf_j__TPar__o *)sub_1BE4D18(_f__AnonymousType3_EventCampaignEntity__int__TypeInfo);
  _f__AnonymousType3_object__int____ctor(
    v10,
    (Il2CppObject *)t,
    v9,
    (const MethodInfo_312D218 *)Method___f__AnonymousType3_EventCampaignEntity__int___ctor__);
  return (__f__AnonymousType3_EventCampaignEntity__int__o *)v10;
}


bool __fastcall RecommendSupportServantSelectListViewItem___SetSortValue_b__93_0(
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

  if ( (byte_4B62DC0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B62DC0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v11 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  UserServant_k__BackingField = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                           v15,
                                                           0LL);
  if ( !entity || !v11 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v11, (int32_t)UserServant_k__BackingField, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserServant_k__BackingField = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_1BE4D28(UserServant_k__BackingField, v13);
  return UserServantEntity__getEventUpVal_41168560(
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
    sub_1BE4D28(this, method);
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
  if ( (byte_4B62DBA & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B62DBA = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_38593888(126, 0LL);
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

  if ( (byte_4B62DBC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_4B62DBC = 1;
  }
  *(_QWORD *)questPhase = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (klass = (RecommendSupportData_o *)Instance[7].klass,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !klass )
  {
    sub_1BE4D28(Instance, v4);
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
  __int64 v5; // x1
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v7; // q1
  RecommendSupportSelectControl_o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4B62DBB & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4B62DBB = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (RecommendSupportSelectControl_o *)RecommendSupportSelectControl__get_SelectServantId(Instance, 0LL),
        (UserServant_k__BackingField = this->fields._UserServant_k__BackingField) == 0LL) )
  {
    sub_1BE4D28(Instance, v5);
  }
  v7 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v8 = Instance;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v11;
  return v8 == (RecommendSupportSelectControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
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

  if ( (byte_4B62DB9 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_19307/*"error"*/, v3);
    byte_4B62DB9 = 1;
  }
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    return (System_String_o *)StringLiteral_19307/*"error"*/;
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
  {
    v7 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(Servant_k__BackingField, v8, -1, 0LL);
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

  if ( (byte_4B62DB8 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B62DB8 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v6, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._UserServant_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._UserServant_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendSupportServantSelectListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B62DC2 & 1) == 0 )
  {
    sub_1BE4ACC(&RecommendSupportServantSelectListViewItem___c_TypeInfo, v1);
    byte_4B62DC2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(RecommendSupportServantSelectListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewItem___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall RecommendSupportServantSelectListViewItem___c___ctor(
        RecommendSupportServantSelectListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__o *__fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_1(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType3_EventCampaignEntity__int__o *h__TransparentIdentifier0,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventCampaignEntity_o *t_i__Field; // x8
  struct System_Int32_array *targetIds; // x9
  char v8; // w20
  __f__AnonymousType4____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *v9; // x21

  if ( (byte_4B62DC3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method___f__AnonymousType3_EventCampaignEntity__int__get_t__, h__TransparentIdentifier0);
    sub_1BE4ACC(&Method___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___ctor__, v4);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BE4ACC(
                                                                &_f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__TypeInfo,
                                                                v5);
    byte_4B62DC3 = 1;
  }
  if ( !h__TransparentIdentifier0 || (t_i__Field = h__TransparentIdentifier0->fields._t_i__Field) == 0LL )
    sub_1BE4D28(this, h__TransparentIdentifier0);
  targetIds = t_i__Field->fields.targetIds;
  if ( targetIds )
    v8 = targetIds->max_length == 0;
  else
    v8 = 1;
  v9 = (__f__AnonymousType4____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *)sub_1BE4D18(_f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__TypeInfo);
  _f__AnonymousType4_object__bool____ctor(
    v9,
    (Il2CppObject *)h__TransparentIdentifier0,
    v8,
    (const MethodInfo_312DFE4 *)Method___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool___ctor__);
  return (__f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__o *)v9;
}


bool __fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_2(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  struct __f__AnonymousType3_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4B62DC4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method___f__AnonymousType3_EventCampaignEntity__int__get_indexOf__, h__TransparentIdentifier1);
    sub_1BE4ACC(
      &Method___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__,
      v4);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BE4ACC(
                                                                &Method___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__get_isAllTarget__,
                                                                v5);
    byte_4B62DC4 = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0LL )
  {
    sub_1BE4D28(this, h__TransparentIdentifier1);
  }
  return (h__TransparentIdentifier0_i__Field->fields._indexOf_i__Field & 0x80000000) == 0
      || h__TransparentIdentifier1->fields._isAllTarget_i__Field;
}


EventCampaignEntity_o *__fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_3(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct __f__AnonymousType3_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4B62DC5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method___f__AnonymousType3_EventCampaignEntity__int__get_t__, h__TransparentIdentifier1);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BE4ACC(
                                                                &Method___f__AnonymousType4___f__AnonymousType3_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__,
                                                                v4);
    byte_4B62DC5 = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0LL )
  {
    sub_1BE4D28(this, h__TransparentIdentifier1);
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

  if ( (byte_4B62DC6 & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BE4ACC(&System_Math_TypeInfo, *(_QWORD *)&current);
    byte_4B62DC6 = 1;
  }
  if ( !t )
    sub_1BE4D28(this, *(_QWORD *)&current);
  value = t->fields.value;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_63517952(current, value, 0LL);
}