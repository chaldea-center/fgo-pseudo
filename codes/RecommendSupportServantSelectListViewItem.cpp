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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  IconLabelInfo_o *v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  IconLabelInfo_o *v51; // x27
  struct IconLabelInfo_o **p_IconInfo2_k__BackingField; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  UserServantEntity_o **p_UserServant_k__BackingField; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct RecommendSupportData_o **p_recommendSupportServantData; // x23
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t Instance; // x0
  __int64 v80; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v82; // x1
  __int64 v83; // x26
  __int64 v84; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // x25
  Il2CppObject *v86; // x0
  struct ServantEntity_o **p_Servant_k__BackingField; // x25
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  Il2CppObject *v100; // x24
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  int32_t v102; // w26
  UserServantEntity_o *v103; // x8
  __int128 v104; // q1
  UserServantCollectionMaster_o *v105; // x24
  int64_t v106; // x25
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  struct UserServantEntity_o *v125; // x8
  __int128 v126; // q0
  RecommendSupportData_o *v127; // x8
  int64_t v128; // x23
  UserServantEntity_o *v129; // x8
  UserServantEntity_o *v130; // x8
  UserServantEntity_o *v131; // x8
  ServantEntity_o *Servant_k__BackingField; // x8
  bool v133; // w8
  int64_t Equip; // x0
  int64_t v135; // x22
  Il2CppObject *v136; // x23
  UserServantEntity_o *v137; // x8
  PartyOrganizationUtility_o *v138; // x22
  __int64 v139; // x24
  __int64 v140; // x25
  int32_t v141; // w24
  int32_t v142; // w25
  UserServantEntity_o *v143; // x8
  __int128 v144; // q0
  __int64 v145; // x22
  bool v146; // zf
  bool v147; // w8
  UserServantEntity_o *v148; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int v163; // w22
  BalanceConfig_c *v164; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v166; // x8
  struct ServantEntity_o *v167; // x9
  UserServantEntity_o *v168; // x8
  __int64 v169; // x21
  __int64 v170; // x22
  int32_t v171; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+70h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+9Ch] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16

  if ( (byte_4B12455 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, entity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v29, v30);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v39, v40);
    byte_4B12455 = 1;
  }
  friendshipRank = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v41 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, entity, supportServantData);
  IconLabelInfo___ctor(v41, 0LL);
  this->fields._IconInfo1_k__BackingField = v41;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo1_k__BackingField,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v51 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v48, v49, v50);
  IconLabelInfo___ctor(v51, 0LL);
  this->fields._IconInfo2_k__BackingField = v51;
  p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._IconInfo2_k__BackingField,
    (int64_t)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserServant_k__BackingField,
    (int64_t)entity,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.recommendSupportServantData = supportServantData;
  p_recommendSupportServantData = &this->fields.recommendSupportServantData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.recommendSupportServantData,
    (int64_t)supportServantData,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.eventSetupInfo = eventUpValSetupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
    (int64_t)eventUpValSetupInfo,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  if ( !this->fields._UserServant_k__BackingField )
    goto LABEL_60;
  this->fields.svtId = this->fields._UserServant_k__BackingField->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v84 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v83 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v82);
  *(_QWORD *)&v179.fields.currentCryptoKey = v84;
  *(_QWORD *)&v179.fields.fakeValue = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v179, 0LL);
  if ( !v85 )
    goto LABEL_60;
  v86 = DataMasterBase_object__object__int___GetEntity(
          v85,
          Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._Servant_k__BackingField = (struct ServantEntity_o *)v86;
  p_Servant_k__BackingField = &this->fields._Servant_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Servant_k__BackingField,
    (int64_t)v86,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)friendPointCampaignEntityList,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v100 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_60;
  v102 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
               UserServant_k__BackingField->fields.limitCount,
               0LL);
  if ( !v100 )
    goto LABEL_60;
  Instance = (int64_t)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v100, v102, Instance, 0LL);
  if ( !*p_Servant_k__BackingField )
    goto LABEL_60;
  this->fields._ClassId_k__BackingField = (*p_Servant_k__BackingField)->fields.classId;
  if ( !Instance )
    goto LABEL_60;
  this->fields._Rarity_k__BackingField = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v103 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v104 = *(_OWORD *)&v103->fields.userId.fields.fakeValue;
  v105 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v103->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v175.fields.fakeValue = v104;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v80);
  v174 = v175;
  v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v174, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  if ( !v105 )
    goto LABEL_60;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v105, v106, Instance, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields.equipServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v113, v114, v115, v116, v117, v118);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v119, v120, v121, v122, v123, v124);
  v125 = this->fields._UserServant_k__BackingField;
  if ( !v125 )
    goto LABEL_60;
  v126 = *(_OWORD *)&v125->fields.id.fields.fakeValue;
  *(_OWORD *)&v173.fields.currentCryptoKey = *(_OWORD *)&v125->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v173.fields.fakeValue = v126;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v173, 0LL);
  v127 = *p_recommendSupportServantData;
  if ( !*p_recommendSupportServantData )
    goto LABEL_60;
  v128 = Instance;
  Instance = RecommendSupportData__GetServant(v127, selectIndex, 0LL);
  v129 = this->fields._UserServant_k__BackingField;
  this->fields._IsBase_k__BackingField = v128 == Instance;
  if ( !v129 )
    goto LABEL_60;
  Instance = UserServantEntity__IsLock(v129, 0LL);
  v130 = this->fields._UserServant_k__BackingField;
  this->fields._IsLock_k__BackingField = Instance & 1;
  if ( !v130 )
    goto LABEL_60;
  Instance = UserServantEntity__IsChoice(v130, 0LL);
  v131 = this->fields._UserServant_k__BackingField;
  this->fields._IsChoice_k__BackingField = Instance & 1;
  if ( !v131 )
    goto LABEL_60;
  Instance = UserServantEntity__IsEventJoin(v131, 0LL);
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  this->fields._IsEventJoin_k__BackingField = Instance & 1;
  if ( !Servant_k__BackingField )
    goto LABEL_60;
  v133 = ServantEntity__checkIsHeroineSvt(Servant_k__BackingField, 0LL);
  Instance = (int64_t)this->fields.recommendSupportServantData;
  this->fields.isHeroine = v133;
  this->fields._IsSwapLock_k__BackingField = 0;
  this->fields._IsSwapChoice_k__BackingField = 0;
  this->fields._IsInvalidRarity_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_60;
  Equip = RecommendSupportData__GetEquip((RecommendSupportData_o *)Instance, selectIndex, 0LL);
  if ( Equip < 1 )
    goto LABEL_36;
  v135 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  v136 = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           v135,
           (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v137 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v138 = (PartyOrganizationUtility_o *)Instance;
  v140 = *(_QWORD *)&v137->fields.svtId.fields.currentCryptoKey;
  v139 = *(_QWORD *)&v137->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v80);
  *(_QWORD *)&v180.fields.currentCryptoKey = v140;
  *(_QWORD *)&v180.fields.fakeValue = v139;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v180, 0LL);
  if ( !*p_UserServant_k__BackingField
    || (v141 = Instance, Instance = UserServantEntity__getRarity(*p_UserServant_k__BackingField, 0LL), !v136)
    || (v142 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v136[5],
                     0LL),
        !v138) )
  {
LABEL_60:
    sub_1BCAA3C(Instance, v80);
  }
  this->fields._IsInvalidRarity_k__BackingField = PartyOrganizationUtility__IsRarityRestriction(
                                                    v138,
                                                    &skillName,
                                                    &actMaxRarity,
                                                    v141,
                                                    v142,
                                                    Instance,
                                                    -1,
                                                    0LL);
LABEL_36:
  this->fields._IsUseInSet_k__BackingField = 0;
  this->fields._IsPushMode_k__BackingField = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_60;
  v143 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v144 = *(_OWORD *)&v143->fields.id.fields.fakeValue;
  v145 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v143->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v175.fields.fakeValue = v144;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v80);
  v172 = v175;
  v146 = v145 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v172, 0LL);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  v147 = v146;
  this->fields._IsPush_k__BackingField = v147;
  this->fields._IsEnabled_k__BackingField = 1;
  if ( !Instance )
    goto LABEL_60;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v148 = this->fields._UserServant_k__BackingField;
  this->fields.dispLimitCount = Instance;
  if ( !v148 )
    goto LABEL_60;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v148, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_60;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_60;
  v163 = *(_DWORD *)(Instance + 276);
  v164 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v80);
    v164 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_UserServant_k__BackingField;
  }
  static_fields = v164->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v163;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields._ClassId_k__BackingField,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_60;
  v166 = *(int *)(Instance + 52);
  v167 = this->fields._Servant_k__BackingField;
  this->fields.priority = v166;
  this->fields.sortValue1B = v166;
  if ( !v167 )
    goto LABEL_60;
  v168 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  this->fields.sortValue2 = ((__int64)v167->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)this->fields._Rarity_k__BackingField << 48) | v168->fields.lv;
  v170 = *(_QWORD *)&v168->fields.svtId.fields.currentCryptoKey;
  v169 = *(_QWORD *)&v168->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v80);
  *(_QWORD *)&v181.fields.currentCryptoKey = v170;
  *(_QWORD *)&v181.fields.fakeValue = v169;
  v171 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v181, 0LL);
  Instance = (int64_t)this->fields._IconInfo1_k__BackingField;
  this->fields.sortValue2B = v171;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v7; // x0
  __int64 v8; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v9; // x8
  System_Int64_array *v10; // x20
  unsigned __int64 v11; // x21
  int64_t v12; // x23
  __int64 v13; // x24
  unsigned __int64 max_length; // x9
  _OWORD *v15; // x8
  __int128 v16; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h]

  if ( (byte_4B12459 & 1) == 0 )
  {
    sub_1BCA7E0(&long___TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
    byte_4B12459 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0LL;
  v7 = sub_1BCA888(long___TypeInfo, equipIdList->max_length);
  v9 = this->fields.equipIdList;
  if ( !v9 )
LABEL_13:
    sub_1BCAA3C(v7, v8);
  v10 = (System_Int64_array *)v7;
  v11 = 0LL;
  v12 = v7 + 32;
  v13 = 32LL;
  while ( 1 )
  {
    max_length = v9->max_length;
    if ( (__int64)v11 >= (int)max_length )
      return v10;
    if ( v11 >= max_length )
      goto LABEL_16;
    v15 = (_OWORD *)((char *)v9 + v13);
    v16 = v15[1];
    *(_OWORD *)&v19.fields.currentCryptoKey = *v15;
    *(_OWORD *)&v19.fields.fakeValue = v16;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    v18 = v19;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v18, 0LL);
    if ( v10 )
    {
      if ( v11 >= v10->max_length )
LABEL_16:
        sub_1BCAA44(v7, v8);
      *(_QWORD *)(v12 + 8 * v11) = v7;
      v9 = this->fields.equipIdList;
      ++v11;
      v13 += 32LL;
      if ( v9 )
        continue;
    }
    goto LABEL_13;
  }
}


int32_t __fastcall RecommendSupportServantSelectListViewItem__GetFriendPointBonus(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_IEnumerable_TSource__o *eventFriendPoints; // x20
  System_Func_object__object__o *v36; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  RecommendSupportServantSelectListViewItem___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  System_Func_object__object__o *_9__122_1; // x20
  Il2CppObject *v44; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  RecommendSupportServantSelectListViewItem___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x19
  System_Func_object__bool__o *_9__122_2; // x20
  Il2CppObject *v59; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  RecommendSupportServantSelectListViewItem___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x19
  System_Func_object__object__o *_9__122_3; // x20
  Il2CppObject *v74; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  RecommendSupportServantSelectListViewItem___c_c *v86; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x19
  System_Func_T1__T2__TResult__o *_9__122_4; // x20
  Il2CppObject *v89; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7

  if ( (byte_4B12461 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___, method, v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType2_EventCampaignEntity__int____,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool____,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity___,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Where___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool____,
      v11,
      v12);
    sub_1BCA7E0(
      &System_Func___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___TypeInfo,
      v13,
      v14);
    sub_1BCA7E0(&System_Func_EventCampaignEntity____f__AnonymousType2_EventCampaignEntity__int___TypeInfo, v15, v16);
    sub_1BCA7E0(
      &System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___bool__TypeInfo,
      v17,
      v18);
    sub_1BCA7E0(
      &System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo,
      v19,
      v20);
    sub_1BCA7E0(&System_Func_int__EventCampaignEntity__int__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__122_0__, v23, v24);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_1__, v25, v26);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_2__, v27, v28);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_3__, v29, v30);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_4__, v31, v32);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem___c_TypeInfo, v33, v34);
    byte_4B12461 = 1;
  }
  eventFriendPoints = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v36 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_EventCampaignEntity____f__AnonymousType2_EventCampaignEntity__int___TypeInfo,
                                           method,
                                           v2,
                                           v3);
  System_Func_object__object____ctor(
    v36,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__122_0__,
    0LL);
  v37 = System_Linq_Enumerable__Select_object__object_(
          eventFriendPoints,
          (System_Func_TSource__TResult__o *)v36,
          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType2_EventCampaignEntity__int____);
  v41 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo, v38);
    v41 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_1 = (System_Func_object__object__o *)v41->static_fields->__9__122_1;
  if ( !_9__122_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41, v38);
      v41 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__122_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___TypeInfo,
                                                   v38,
                                                   v39,
                                                   v40);
    System_Func_object__object____ctor(
      _9__122_1,
      v44,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_1__,
      0LL);
    static_fields = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__122_1 = (struct System_Func___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___o *)_9__122_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__122_1,
      (int64_t)_9__122_1,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  v52 = System_Linq_Enumerable__Select_object__object_(
          v42,
          (System_Func_TSource__TResult__o *)_9__122_1,
          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select___f__AnonymousType2_EventCampaignEntity__int_____f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool____);
  v56 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo, v53);
    v56 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_2 = (System_Func_object__bool__o *)v56->static_fields->__9__122_2;
  if ( !_9__122_2 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56, v53);
      v56 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v56->static_fields->__9;
    _9__122_2 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___bool__TypeInfo,
                                                 v53,
                                                 v54,
                                                 v55);
    System_Func_object__bool____ctor(
      _9__122_2,
      v59,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_2__,
      0LL);
    v60 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v60->__9__122_2 = (struct System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___bool__o *)_9__122_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v60->__9__122_2, (int64_t)_9__122_2, v61, v62, v63, v64, v65, v66);
  }
  v67 = System_Linq_Enumerable__Where_object_(
          v57,
          (System_Func_TSource__bool__o *)_9__122_2,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool____);
  v71 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v72 = v67;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo, v68);
    v71 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_3 = (System_Func_object__object__o *)v71->static_fields->__9__122_3;
  if ( !_9__122_3 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71, v68);
      v71 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v74 = (Il2CppObject *)v71->static_fields->__9;
    _9__122_3 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo,
                                                   v68,
                                                   v69,
                                                   v70);
    System_Func_object__object____ctor(
      _9__122_3,
      v74,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_3__,
      0LL);
    v75 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v75->__9__122_3 = (struct System_Func___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity__o *)_9__122_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v75->__9__122_3, (int64_t)_9__122_3, v76, v77, v78, v79, v80, v81);
  }
  v82 = System_Linq_Enumerable__Select_object__object_(
          v72,
          (System_Func_TSource__TResult__o *)_9__122_3,
          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___EventCampaignEntity___);
  v86 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v87 = (System_Collections_Generic_IEnumerable_TSource__o *)v82;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo, v83);
    v86 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__122_4 = (System_Func_T1__T2__TResult__o *)v86->static_fields->__9__122_4;
  if ( !_9__122_4 )
  {
    if ( !v86->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v86, v83);
      v86 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v89 = (Il2CppObject *)v86->static_fields->__9;
    _9__122_4 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                    System_Func_int__EventCampaignEntity__int__TypeInfo,
                                                    v83,
                                                    v84,
                                                    v85);
    System_Func_int__object__int____ctor(
      _9__122_4,
      v89,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__122_4__,
      0LL);
    v90 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v90->__9__122_4 = (struct System_Func_int__EventCampaignEntity__int__o *)_9__122_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v90->__9__122_4, (int64_t)_9__122_4, v91, v92, v93, v94, v95, v96);
  }
  return System_Linq_Enumerable__Aggregate_object__int_(
           v87,
           -1,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__122_4,
           (const MethodInfo_2F1BBEC *)Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
}


bool __fastcall RecommendSupportServantSelectListViewItem__GetNpInfo(
        RecommendSupportServantSelectListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantEntity_o *UserServant_k__BackingField; // x0
  TreasureDvcInfo_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B12460 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B12460 = 1;
  }
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
    return UserServantEntity__getTreasureDeviceInfo(UserServant_k__BackingField, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, method, v3);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  return 0;
}


bool __fastcall RecommendSupportServantSelectListViewItem__IsMatchServantFilter(
        RecommendSupportServantSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  UserServantEntity_o *UserServant_k__BackingField; // x21
  __int64 v21; // x1
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x21
  UserServantEntity_o *v25; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v27; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v43; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v45; // w0

  if ( (byte_4B12457 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    byte_4B12457 = 1;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_60;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v13 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v13->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields._Servant_k__BackingField, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields._Servant_k__BackingField, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServant_k__BackingField, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_60:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServant_k__BackingField, 0LL) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0LL) )
  {
    UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19);
    if ( ServantEventBonusFilterController__IsHideServant(UserServant_k__BackingField, sort, -1, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v25 = this->fields._UserServant_k__BackingField;
    if ( v25 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v25, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_60;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v27 = this->fields._UserServant_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v27 )
          goto LABEL_60;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v27, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_60;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
    }
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v21 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_61;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_60;
    v21 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_61:
      sub_1BCAA44(ClassGroupFilterKindList, v21);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v43 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v45 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v43) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v45 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v45 )
    {
      return 0;
    }
  }
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v21 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_61;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v22 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v22 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v22->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_60;
  v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v23, 0LL)
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t Master_object; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v18; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  QuestRestrictionInfo_o *v23; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B12462 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestRestrictionInfo_TypeInfo, v13, v14);
    byte_4B12462 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_14;
  v18 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
  v26 = v27;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v26, 0LL);
  if ( !v19 )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v19,
          &entity,
          Master_object,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  v23 = (QuestRestrictionInfo_o *)sub_1BCAA2C(QuestRestrictionInfo_TypeInfo, v20, v21, v22);
  QuestRestrictionInfo___ctor_41151748(v23, 0, questId, questPhase, 0LL);
  Master_object = (int64_t)entity;
  if ( !entity )
LABEL_14:
    sub_1BCAA3C(Master_object, v16);
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)entity, v23, 2, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyChoiceItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._UserServant_k__BackingField,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_UserServant_k__BackingField )
    sub_1BCAA3C(0LL, v10);
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin(*p_UserServant_k__BackingField, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItem__ModifyLockItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  PartyOrganizationUtility_o *p_equipUserServantEntity; // x20
  PartyOrganizationUtility_o *p_equipServantEntity; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array **p_equipIdList; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t Instance; // x0
  __int64 v42; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v43; // x8
  Il2CppObject *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  Il2CppObject *v51; // x22
  int64_t v52; // x1
  BalanceConfig_c *v53; // x0
  __int128 v54; // q1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v55; // x8
  __int128 v56; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x21
  Il2CppObject *Entity; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  PartyOrganizationUtility_c *klass; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  PartyOrganizationUtility_c *v69; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x20
  Il2CppClass *v71; // x21
  Il2CppClass *v72; // x22
  Il2CppObject *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4B12456 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, equipIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16, v17);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B12456 = 1;
  }
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v28, v29, v30, v31, v32, v33);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_1BCA784((PartyOrganizationUtility_o *)p_equipIdList, 0LL, v35, v36, v37, v38, v39, v40);
  if ( !p_equipIdList[10] )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v43 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v44 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
  if ( v44 )
  {
    v51 = v44;
    v52 = sub_1BCA91C(v44, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v52 )
    {
      sub_1BCACFC(v51);
LABEL_9:
      v53 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v42);
        v53 = BalanceConfig_TypeInfo;
      }
      v52 = sub_1BCA888(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v53->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v52 = 0LL;
  }
  *p_equipIdList = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)p_equipIdList, v52, v45, v46, v47, v48, v49, v50);
  v43 = *p_equipIdList;
LABEL_14:
  if ( !v43 )
    goto LABEL_36;
  if ( !v43->max_length )
    goto LABEL_37;
  v54 = *(_OWORD *)&v43->m_Items[0].fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v43->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v54;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
  v81 = v82;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v81, 0LL) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v55 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_36;
  if ( !v55->max_length )
LABEL_37:
    sub_1BCAA44(Instance, v42);
  v56 = *(_OWORD *)&v55->m_Items[0].fields.fakeValue;
  v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v55->m_Items[0].fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42);
  v80 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v80, 0LL);
  if ( !v57 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v57,
             Instance,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BCA784(p_equipUserServantEntity, (int64_t)Entity, v59, v60, v61, v62, v63, v64);
  klass = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = klass->_1.declaringType;
    parent = klass->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v65);
    *(_QWORD *)&v83.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v83.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        v69 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v72 = v69->_1.declaringType;
          v71 = v69->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
          *(_QWORD *)&v84.fields.currentCryptoKey = v72;
          *(_QWORD *)&v84.fields.fakeValue = v71;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84, 0LL);
          if ( v70 )
          {
            v73 = DataMasterBase_object__object__int___GetEntity(
                    v70,
                    Instance,
                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (PartyOrganizationUtility_c *)v73;
            sub_1BCA784(p_equipServantEntity, (int64_t)v73, v74, v75, v76, v77, v78, v79);
            return;
          }
        }
      }
LABEL_36:
      sub_1BCAA3C(Instance, v42);
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

  if ( (byte_4B1245A & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId, method);
    byte_4B1245A = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v10, userSvtId, 0LL);
    v9 = *(_OWORD *)&v10.fields.fakeValue;
    if ( !equipIdList->max_length )
      sub_1BCAA44(v6, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t bonusKind2; // w8
  int32_t v30; // w2
  int32_t bonusKind2Id; // w8
  int32_t v32; // w8
  int32_t v33; // w8
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v36; // x1
  __int64 v37; // x22
  __int64 v38; // x23
  EventCampaignMaster_o *v39; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_object__bool__o *v43; // x22
  _BOOL4 IsSwapChoice_k__BackingField; // w8
  _BOOL4 IsChoice_k__BackingField; // w9
  __int64 v46; // x8
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v48; // q1
  struct UserServantEntity_o *v49; // x8
  const MethodInfo *v50; // x2
  unsigned __int64 Rarity_k__BackingField; // x8
  int64_t equipServantEntity_low; // x20
  IconLabelInfo_o *IconInfo1_k__BackingField; // x21
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v56; // w1
  struct UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v61; // w1
  struct UserServantEntity_o *v62; // x8
  struct UserServantEntity_o *v63; // x9
  struct ServantEntity_o *Servant_k__BackingField; // x8
  __int64 v65; // x20
  __int64 v66; // x21
  int32_t v67; // w0
  RecommendSupportServantSelectListViewItem_o *v68; // x20
  int64_t v69; // x9
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v72; // x20
  IconLabelInfo_o *IconInfo2_k__BackingField; // x19
  __int64 v74; // x21
  __int64 v75; // x22
  const MethodInfo *v76; // x2
  struct ServantEntity_o *v77; // x8
  int32_t equipServantEntity; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  v4 = this;
  if ( (byte_4B12458 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__93_0__, v23, v24);
    sub_1BCA7E0(&RecommendSupportServantSelectListViewManager_TypeInfo, v25, v26);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1BCA7E0(
                                                            &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                            v27,
                                                            v28);
    byte_4B12458 = 1;
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
      this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
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
          v43 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventGroupEntity__bool__TypeInfo, sort, v41, v42);
          System_Func_object__bool____ctor(
            v43,
            (Il2CppObject *)v4,
            Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__93_0__,
            0LL);
          v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                      (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                      (System_Func_T__bool__o *)v43,
                                      (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
        }
      }
      goto LABEL_42;
    case 3:
      if ( v4->fields.bonusKind == 3 )
      {
        v32 = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v32 )
          goto LABEL_42;
      }
      else
      {
        v32 = sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = 3;
      v4->fields.bonusKindId = v32;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v38 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      v39 = (EventCampaignMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
      *(_QWORD *)&v83.fields.currentCryptoKey = v38;
      *(_QWORD *)&v83.fields.fakeValue = v37;
      this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                              v83,
                                                              0LL);
      if ( !v39 )
        goto LABEL_120;
      IsEnableServant = EventCampaignMaster__IsEnableServant(v39, (int32_t)this, v4->fields.bonusKindId, 0LL);
      goto LABEL_32;
    case 4:
    case 5:
      if ( v4->fields.bonusKind == bonusKind2 )
      {
        v30 = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v30 )
          goto LABEL_42;
      }
      else
      {
        v30 = sort->fields.bonusKind2Id;
      }
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
      v4->fields.bonusKind = bonusKind2;
      v4->fields.bonusKindId = v30;
      if ( !this )
        goto LABEL_120;
      IsEnableServant = UserServantEntity__getEventUpVal_40936552(
                          (UserServantEntity_o *)this,
                          v4->fields.eventSetupInfo,
                          v30,
                          0LL,
                          0LL);
      goto LABEL_32;
    case 7:
      if ( v4->fields.bonusKind != 7 )
      {
        v33 = sort->fields.bonusKind2Id;
        goto LABEL_29;
      }
      v33 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId != v33 )
      {
LABEL_29:
        v4->fields.bonusKind = 7;
        v4->fields.bonusKindId = v33;
        this = (RecommendSupportServantSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
        sub_1BCAA3C(this, sort);
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
          || !RecommendSupportServantSelectListViewItem__IsMatchServantFilter(v4, sort, v50) )
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
        v46 = -10LL;
      }
      else
      {
        v46 = 10LL;
      }
      v4->fields.sortValue0 = v46;
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
          v48 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v81.fields.fakeValue = v48;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
          v80 = v81;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                                  &v80,
                                                                  0LL);
          v49 = v4->fields._UserServant_k__BackingField;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v49 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          if ( !this )
            goto LABEL_120;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v49->fields.createdAt, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_38850420(
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
          UserServantEntity__getTreasureDeviceInfo_40943792((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
          LODWORD(hp) = tdMaxLv[1];
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = tdMaxLv[1];
          if ( !this )
            goto LABEL_120;
          adjustAtk = tdMaxLv[0];
          v56 = 33;
          goto LABEL_100;
        case 5:
          v57 = v4->fields._UserServant_k__BackingField;
          if ( !v57 )
            goto LABEL_120;
          equipUserServantEntity = v4->fields.equipUserServantEntity;
          hp = v57->fields.hp;
          if ( equipUserServantEntity )
          {
            atk = equipUserServantEntity->fields.hp;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = atk + (int)hp;
            if ( !this )
              goto LABEL_120;
            adjustHp = v57->fields.adjustHp;
            v61 = 46;
            goto LABEL_79;
          }
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_120;
          adjustAtk = v57->fields.adjustHp;
          v56 = 3;
          goto LABEL_100;
        case 6:
          v62 = v4->fields._UserServant_k__BackingField;
          if ( !v62 )
            goto LABEL_120;
          v63 = v4->fields.equipUserServantEntity;
          hp = v62->fields.atk;
          if ( v63 )
          {
            atk = v63->fields.atk;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = atk + (int)hp;
            if ( !this )
              goto LABEL_120;
            adjustHp = v62->fields.adjustAtk;
            v61 = 47;
LABEL_79:
            IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v61, hp, adjustHp, atk, 0, 0, 0, 0LL);
          }
          else
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_120;
            adjustAtk = v62->fields.adjustAtk;
            v56 = 5;
LABEL_100:
            IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v56, hp, adjustAtk, 0, 0, 0, 0, 0LL);
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
          IconLabelInfo__Set_38850420(IconInfo2_k__BackingField, 2, equipServantEntity, (int32_t)this, 0, 0, 0, 0, 0LL);
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
          v56 = 7;
          adjustAtk = 0;
          goto LABEL_100;
        case 8:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          Rarity_k__BackingField = -v4->fields.priority;
          goto LABEL_115;
        case 0xA:
          v66 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
          v65 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
          *(_QWORD *)&v84.fields.currentCryptoKey = v66;
          *(_QWORD *)&v84.fields.fakeValue = v65;
          v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84, 0LL);
          v68 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v69 = v67;
          friendship = v4->fields.friendship;
          v4->fields.sortValue1 = v69;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                  friendship,
                                                                  0LL);
          if ( !v68 )
            goto LABEL_120;
          adjustAtk = v4->fields.friendshipMax;
          LODWORD(hp) = (_DWORD)this;
          v56 = 32;
          this = v68;
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
              v72 = (UnityEngine_Object_o *)sort->fields.manager;
            else
              v72 = 0LL;
          }
          else
          {
            v72 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sort);
          this = (RecommendSupportServantSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_113;
          v75 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v74 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
          *(_QWORD *)&v86.fields.currentCryptoKey = v75;
          *(_QWORD *)&v86.fields.fakeValue = v74;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                  v86,
                                                                  0LL);
          if ( !v72 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)RecommendSupportServantSelectListViewManager__GetAmountSortValue(
                                                                  (RecommendSupportServantSelectListViewManager_o *)v72,
                                                                  (int32_t)this,
                                                                  v76);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_113:
          v77 = v4->fields._Servant_k__BackingField;
          if ( !v77 )
            goto LABEL_120;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          Rarity_k__BackingField = (((unsigned __int64)(unsigned int)v4->fields._Rarity_k__BackingField << 32)
                                  + (v4->fields.amountSortValue << 48)) | v77->fields.collectionNo;
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
          v56 = 44;
          goto LABEL_100;
        case 0x10:
          hp = v4->fields.atkReinforceValue;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_120;
          adjustAtk = v4->fields.nowMaxAtkReinforceValue;
          v56 = 45;
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Int32_array *targetIds; // x21
  int32_t SvtId; // w0
  int32_t v11; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __f__AnonymousType2__t_j__TPar___indexOf_j__TPar__o *v15; // x21

  v4 = this;
  if ( (byte_4B12464 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, t, method);
    sub_1BCA7E0(&Method___f__AnonymousType2_EventCampaignEntity__int___ctor__, v5, v6);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1BCA7E0(
                                                            &_f__AnonymousType2_EventCampaignEntity__int__TypeInfo,
                                                            v7,
                                                            v8);
    byte_4B12464 = 1;
  }
  if ( !t )
    sub_1BCAA3C(this, t);
  targetIds = t->fields.targetIds;
  SvtId = RecommendSupportServantSelectListViewItem__get_SvtId(v4, (const MethodInfo *)t);
  v11 = System_Array__IndexOf_int_(targetIds, SvtId, (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  v15 = (__f__AnonymousType2__t_j__TPar___indexOf_j__TPar__o *)sub_1BCAA2C(
                                                                 _f__AnonymousType2_EventCampaignEntity__int__TypeInfo,
                                                                 v12,
                                                                 v13,
                                                                 v14);
  _f__AnonymousType2_object__int____ctor(
    v15,
    (Il2CppObject *)t,
    v11,
    (const MethodInfo_30E55D4 *)Method___f__AnonymousType2_EventCampaignEntity__int___ctor__);
  return (__f__AnonymousType2_EventCampaignEntity__int__o *)v15;
}


bool __fastcall RecommendSupportServantSelectListViewItem___SetSortValue_b__93_0(
        RecommendSupportServantSelectListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  EventCampaignMaster_o *v15; // x21
  ServantFilterMaster_o *UserServant_k__BackingField; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B12463 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B12463 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v15 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  UserServant_k__BackingField = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                           v20,
                                                           0LL);
  if ( !entity || !v15 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v15, (int32_t)UserServant_k__BackingField, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  UserServant_k__BackingField = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
    sub_1BCAA3C(UserServant_k__BackingField, v17);
  return UserServantEntity__getEventUpVal_40936552(
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2

  if ( (byte_4B1245D & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B1245D = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  return TutorialFlag__Get_38402052(126, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  RecommendSupportData_o *klass; // x20
  const MethodInfo *v7; // x3
  int32_t questPhase[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1245F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method, v2);
    byte_4B1245F = 1;
  }
  *(_QWORD *)questPhase = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (klass = (RecommendSupportData_o *)Instance[7].klass,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !klass )
  {
    sub_1BCAA3C(Instance, v5);
  }
  return RecommendSupportData__TryGetQuest(klass, (int32_t)Instance[7].monitor, &questPhase[1], questPhase, 0LL)
      && RecommendSupportServantSelectListViewItem__IsRestriction(this, questPhase[1], questPhase[0], v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v7; // x1
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v9; // q1
  RecommendSupportSelectControl_o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_4B1245E & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4, v5);
    byte_4B1245E = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (RecommendSupportSelectControl_o *)RecommendSupportSelectControl__get_SelectServantId(Instance, 0LL),
        (UserServant_k__BackingField = this->fields._UserServant_k__BackingField) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  v9 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v10 = Instance;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
  v12 = v13;
  return v10 == (RecommendSupportSelectControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                     &v12,
                                                     0LL);
}


System_String_o *__fastcall RecommendSupportServantSelectListViewItem__get_NameText(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantEntity_o *Servant_k__BackingField; // x19
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B1245C & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B1245C = 1;
  }
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
  {
    v9 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  }
  else
  {
    v10 = -1;
  }
  return ServantEntity__getName(Servant_k__BackingField, v10, -1, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B1245B & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B1245B = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12465 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportServantSelectListViewItem___c_TypeInfo, v1, v2);
    byte_4B12465 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportServantSelectListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventCampaignEntity_o *t_i__Field; // x8
  struct System_Int32_array *targetIds; // x9
  char v11; // w20
  __f__AnonymousType3____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *v12; // x21

  if ( (byte_4B12466 & 1) == 0 )
  {
    sub_1BCA7E0(&Method___f__AnonymousType2_EventCampaignEntity__int__get_t__, h__TransparentIdentifier0, method);
    sub_1BCA7E0(&Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___ctor__, v5, v6);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BCA7E0(
                                                                &_f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__TypeInfo,
                                                                v7,
                                                                v8);
    byte_4B12466 = 1;
  }
  if ( !h__TransparentIdentifier0 || (t_i__Field = h__TransparentIdentifier0->fields._t_i__Field) == 0LL )
    sub_1BCAA3C(this, h__TransparentIdentifier0);
  targetIds = t_i__Field->fields.targetIds;
  if ( targetIds )
    v11 = targetIds->max_length == 0;
  else
    v11 = 1;
  v12 = (__f__AnonymousType3____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *)sub_1BCAA2C(
                                                                                               _f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__TypeInfo,
                                                                                               h__TransparentIdentifier0,
                                                                                               method,
                                                                                               v3);
  _f__AnonymousType3_object__bool____ctor(
    v12,
    (Il2CppObject *)h__TransparentIdentifier0,
    v11,
    (const MethodInfo_30E63A0 *)Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool___ctor__);
  return (__f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__o *)v12;
}


bool __fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_2(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct __f__AnonymousType2_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4B12467 & 1) == 0 )
  {
    sub_1BCA7E0(&Method___f__AnonymousType2_EventCampaignEntity__int__get_indexOf__, h__TransparentIdentifier1, method);
    sub_1BCA7E0(
      &Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__,
      v4,
      v5);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BCA7E0(
                                                                &Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__get_isAllTarget__,
                                                                v6,
                                                                v7);
    byte_4B12467 = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0LL )
  {
    sub_1BCAA3C(this, h__TransparentIdentifier1);
  }
  return (h__TransparentIdentifier0_i__Field->fields._indexOf_i__Field & 0x80000000) == 0
      || h__TransparentIdentifier1->fields._isAllTarget_i__Field;
}


EventCampaignEntity_o *__fastcall RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__122_3(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  struct __f__AnonymousType2_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4B12468 & 1) == 0 )
  {
    sub_1BCA7E0(&Method___f__AnonymousType2_EventCampaignEntity__int__get_t__, h__TransparentIdentifier1, method);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BCA7E0(
                                                                &Method___f__AnonymousType3___f__AnonymousType2_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__,
                                                                v4,
                                                                v5);
    byte_4B12468 = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0LL )
  {
    sub_1BCAA3C(this, h__TransparentIdentifier1);
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

  if ( (byte_4B12469 & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1BCA7E0(&System_Math_TypeInfo, *(_QWORD *)&current, t);
    byte_4B12469 = 1;
  }
  if ( !t )
    sub_1BCAA3C(this, *(_QWORD *)&current);
  value = t->fields.value;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&current);
  return System_Math__Max_63220196(current, value, 0LL);
}