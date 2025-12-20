void RecommendSupportServantSelectListViewItem___ctor(
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
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  IconLabelInfo_o *v22; // x27
  struct IconLabelInfo_o **p_IconInfo2_k__BackingField; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UserServantEntity_o **p_UserServant_k__BackingField; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct RecommendSupportData_o **p_recommendSupportServantData; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int64_t Instance; // x0
  __int64 v51; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v53; // x26
  __int64 v54; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x25
  Il2CppObject *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  Il2CppObject *v69; // x24
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  int32_t v71; // w25
  const MethodInfo *v72; // x2
  struct ServantEntity_o *Servant_k__BackingField; // x8
  UserServantEntity_o *v74; // x8
  __int128 v75; // q1
  UserServantCollectionMaster_o *v76; // x24
  int64_t v77; // x25
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  struct UserServantEntity_o *v96; // x8
  __int128 v97; // q0
  RecommendSupportData_o *v98; // x8
  int64_t v99; // x23
  UserServantEntity_o *v100; // x8
  UserServantEntity_o *v101; // x8
  UserServantEntity_o *v102; // x8
  ServantEntity_o *v103; // x8
  bool v104; // w8
  int64_t Equip; // x0
  int64_t v106; // x22
  Il2CppObject *v107; // x23
  UserServantEntity_o *v108; // x8
  PartyOrganizationUtility_o *v109; // x22
  __int64 v110; // x24
  __int64 v111; // x25
  int32_t v112; // w24
  int32_t v113; // w25
  UserServantEntity_o *v114; // x8
  __int128 v115; // q0
  __int64 v116; // x22
  bool v117; // zf
  bool v118; // w8
  UserServantEntity_o *v119; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  int v134; // w22
  BalanceConfig_c *v135; // x8
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v137; // x8
  struct ServantEntity_o *v138; // x9
  UserServantEntity_o *v139; // x8
  __int64 v140; // x21
  __int64 v141; // x22
  struct UserServantEntity_o *v142; // x8
  __int128 v143; // q0
  int64_t v144; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+10h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+90h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+BCh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+C0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+CCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16

  if ( (byte_4D28637 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&IconLabelInfo_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D28637 = 1;
  }
  friendshipRank = 0;
  skillName = 0;
  actMaxRarity = 0;
  v15 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields._IconInfo1_k__BackingField = v15;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconInfo1_k__BackingField,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_1C942E4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields._IconInfo2_k__BackingField = v22;
  p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconInfo2_k__BackingField,
    (int32_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.recommendSupportServantData = supportServantData;
  p_recommendSupportServantData = &this->fields.recommendSupportServantData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.recommendSupportServantData,
    (int32_t)supportServantData,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.eventSetupInfo = eventUpValSetupInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventUpValSetupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !this->fields._UserServant_k__BackingField )
    goto LABEL_60;
  this->fields.svtId = this->fields._UserServant_k__BackingField->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  v54 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v153.fields.currentCryptoKey = v54;
  *(_QWORD *)&v153.fields.fakeValue = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v153, 0);
  if ( !v55 )
    goto LABEL_60;
  v56 = DataMasterBase_object__object__int___GetEntity(
          v55,
          Instance,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._Servant_k__BackingField = (struct ServantEntity_o *)v56;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Servant_k__BackingField,
    (int32_t)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v69 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(this->fields.svtId, 0);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_60;
  v71 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
               UserServant_k__BackingField->fields.limitCount,
               0);
  if ( !v69 )
    goto LABEL_60;
  ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v69, v71, Instance, 0);
  RecommendSupportServantSelectListViewItem__SetOverwriteStatus(this, this->fields._UserServant_k__BackingField, v72);
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    goto LABEL_60;
  this->fields._ClassId_k__BackingField = Servant_k__BackingField->fields.classId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v74 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v75 = *(_OWORD *)&v74->fields.userId.fields.fakeValue;
  v76 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v74->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v149.fields.fakeValue = v75;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v148 = v149;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v148, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(this->fields.svtId, 0);
  if ( !v76 )
    goto LABEL_60;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v76, v77, Instance, 0);
  if ( !Instance )
    goto LABEL_60;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0);
  this->fields._IsSame_k__BackingField = 0;
  this->fields.equipUserServantEntity = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v78, v79, v80, v81, v82, v83);
  this->fields.equipServantEntity = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v84, v85, v86, v87, v88, v89);
  this->fields.equipIdList = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v90, v91, v92, v93, v94, v95);
  v96 = this->fields._UserServant_k__BackingField;
  if ( !v96 )
    goto LABEL_60;
  v97 = *(_OWORD *)&v96->fields.id.fields.fakeValue;
  *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&v96->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v147.fields.fakeValue = v97;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v147, 0);
  v98 = *p_recommendSupportServantData;
  if ( !*p_recommendSupportServantData )
    goto LABEL_60;
  v99 = Instance;
  Instance = RecommendSupportData__GetServant(v98, selectIndex, 0);
  v100 = this->fields._UserServant_k__BackingField;
  this->fields._IsBase_k__BackingField = v99 == Instance;
  if ( !v100 )
    goto LABEL_60;
  Instance = UserServantEntity__IsLock(v100, 0);
  v101 = this->fields._UserServant_k__BackingField;
  this->fields._IsLock_k__BackingField = Instance & 1;
  if ( !v101 )
    goto LABEL_60;
  Instance = UserServantEntity__IsChoice(v101, 0);
  v102 = this->fields._UserServant_k__BackingField;
  this->fields._IsChoice_k__BackingField = Instance & 1;
  if ( !v102 )
    goto LABEL_60;
  Instance = UserServantEntity__IsEventJoin(v102, 0);
  v103 = this->fields._Servant_k__BackingField;
  this->fields._IsEventJoin_k__BackingField = Instance & 1;
  if ( !v103 )
    goto LABEL_60;
  v104 = ServantEntity__checkIsHeroineSvt(v103, 0);
  Instance = (int64_t)this->fields.recommendSupportServantData;
  this->fields.isHeroine = v104;
  this->fields._IsSwapLock_k__BackingField = 0;
  this->fields._IsSwapChoice_k__BackingField = 0;
  this->fields._IsInvalidRarity_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_60;
  Equip = RecommendSupportData__GetEquip((RecommendSupportData_o *)Instance, selectIndex, 0);
  if ( Equip < 1 )
    goto LABEL_35;
  v106 = Equip;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  v107 = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           v106,
           (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v108 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v109 = (PartyOrganizationUtility_o *)Instance;
  v111 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
  v110 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v154.fields.currentCryptoKey = v111;
  *(_QWORD *)&v154.fields.fakeValue = v110;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v154, 0);
  if ( !*p_UserServant_k__BackingField
    || (v112 = Instance, Instance = UserServantEntity__getRarity(*p_UserServant_k__BackingField, 0), !v107)
    || (v113 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v107[5],
                     0),
        !v109) )
  {
LABEL_60:
    sub_1C942F0(Instance, v51);
  }
  this->fields._IsInvalidRarity_k__BackingField = PartyOrganizationUtility__IsRarityRestriction(
                                                    v109,
                                                    &skillName,
                                                    &actMaxRarity,
                                                    v112,
                                                    v113,
                                                    Instance,
                                                    -1,
                                                    0);
LABEL_35:
  this->fields._IsUseInSet_k__BackingField = 0;
  this->fields._IsPushMode_k__BackingField = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_60;
  v114 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  v115 = *(_OWORD *)&v114->fields.id.fields.fakeValue;
  v116 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v114->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v149.fields.fakeValue = v115;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v146 = v149;
  v117 = v116 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v146, 0);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  v118 = v117;
  this->fields._IsPush_k__BackingField = v118;
  this->fields._IsEnabled_k__BackingField = 1;
  if ( !Instance )
    goto LABEL_60;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
  v119 = this->fields._UserServant_k__BackingField;
  this->fields.dispLimitCount = Instance;
  if ( !v119 )
    goto LABEL_60;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v119, -1, -1, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_60;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   -1,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  Instance = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !Instance )
    goto LABEL_60;
  v134 = *(_DWORD *)(Instance + 276);
  v135 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v135 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_UserServant_k__BackingField;
  }
  static_fields = v135->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v134;
  if ( !Instance )
    goto LABEL_60;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields._ClassId_k__BackingField,
                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_60;
  v137 = *(int *)(Instance + 52);
  v138 = this->fields._Servant_k__BackingField;
  this->fields.priority = v137;
  this->fields.sortValue1B = v137;
  if ( !v138 )
    goto LABEL_60;
  v139 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_60;
  this->fields.sortValue2 = ((__int64)v138->fields.collectionNo << 16)
                          | ((unsigned __int64)(unsigned int)this->fields.rarity << 48)
                          | v139->fields.lv;
  v141 = *(_QWORD *)&v139->fields.svtId.fields.currentCryptoKey;
  v140 = *(_QWORD *)&v139->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v155.fields.currentCryptoKey = v141;
  *(_QWORD *)&v155.fields.fakeValue = v140;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v155, 0);
  v142 = this->fields._UserServant_k__BackingField;
  this->fields.sortValue2B = (int)Instance;
  if ( !v142 )
    goto LABEL_60;
  v143 = *(_OWORD *)&v142->fields.id.fields.fakeValue;
  *(_OWORD *)&v145.fields.currentCryptoKey = *(_OWORD *)&v142->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v145.fields.fakeValue = v143;
  v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v145, 0);
  Instance = (int64_t)this->fields._IconInfo1_k__BackingField;
  this->fields.sortValueLast = v144;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_60;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_IconInfo2_k__BackingField;
  if ( !*p_IconInfo2_k__BackingField )
    goto LABEL_60;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void RecommendSupportServantSelectListViewItem__Finalize(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_Int64_array *RecommendSupportServantSelectListViewItem__GetEquipList(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x8
  int64_t v4; // x0
  __int64 v5; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v6; // x8
  int64_t v7; // x20
  unsigned __int64 v8; // x21
  int64_t v9; // x23
  __int64 v10; // x24
  unsigned __int64 max_length_low; // x9
  _OWORD *v12; // x8
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h]

  if ( (byte_4D2863B & 1) == 0 )
  {
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2863B = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v4 = sub_1C94140(long___TypeInfo, LODWORD(equipIdList->max_length));
  v6 = this->fields.equipIdList;
  if ( !v6 )
LABEL_13:
    sub_1C942F0(v4, v5);
  v7 = v4;
  v8 = 0;
  v9 = v4 + 32;
  v10 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v6->max_length);
    if ( (__int64)v8 >= (int)max_length_low )
      return (System_Int64_array *)v7;
    if ( v8 >= max_length_low )
      goto LABEL_16;
    v12 = (_OWORD *)((char *)v6 + v10);
    v13 = v12[1];
    *(_OWORD *)&v16.fields.currentCryptoKey = *v12;
    *(_OWORD *)&v16.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v15 = v16;
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v15, 0);
    if ( v7 )
    {
      if ( v8 >= *(unsigned int *)(v7 + 24) )
LABEL_16:
        sub_1C942F8(v4);
      *(_QWORD *)(v9 + 8 * v8) = v4;
      v6 = this->fields.equipIdList;
      ++v8;
      v10 += 32;
      if ( v6 )
        continue;
    }
    goto LABEL_13;
  }
}


int32_t RecommendSupportServantSelectListViewItem__GetFriendPointBonus(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *eventFriendPoints; // x20
  System_Func_object__object__o *v4; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v5; // x0
  RecommendSupportServantSelectListViewItem___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__object__o *_9__123_1; // x20
  Il2CppObject *v9; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  RecommendSupportServantSelectListViewItem___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__bool__o *_9__123_2; // x20
  Il2CppObject *v21; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  RecommendSupportServantSelectListViewItem___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_object__object__o *_9__123_3; // x20
  Il2CppObject *v33; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v41; // x0
  RecommendSupportServantSelectListViewItem___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x19
  System_Func_T1__T2__TResult__o *_9__123_4; // x20
  Il2CppObject *v45; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7

  if ( (byte_4D28643 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType5_EventCampaignEntity__int____);
    sub_1C94098(&Method_System_Linq_Enumerable_Select___f__AnonymousType5_EventCampaignEntity__int_____f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool____);
    sub_1C94098(&Method_System_Linq_Enumerable_Select___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___EventCampaignEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool____);
    sub_1C94098(&System_Func___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___bool__TypeInfo);
    sub_1C94098(&System_Func___f__AnonymousType5_EventCampaignEntity__int_____f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___TypeInfo);
    sub_1C94098(&System_Func___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo);
    sub_1C94098(&System_Func_EventCampaignEntity____f__AnonymousType5_EventCampaignEntity__int___TypeInfo);
    sub_1C94098(&System_Func_int__EventCampaignEntity__int__TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__123_0__);
    sub_1C94098(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_1__);
    sub_1C94098(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_2__);
    sub_1C94098(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_3__);
    sub_1C94098(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_4__);
    sub_1C94098(&RecommendSupportServantSelectListViewItem___c_TypeInfo);
    byte_4D28643 = 1;
  }
  eventFriendPoints = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v4 = (System_Func_object__object__o *)sub_1C942E4(System_Func_EventCampaignEntity____f__AnonymousType5_EventCampaignEntity__int___TypeInfo);
  System_Func_object__object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__123_0__,
    0);
  v5 = System_Linq_Enumerable__Select_object__object_(
         eventFriendPoints,
         (System_Func_TSource__TResult__o *)v4,
         (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType5_EventCampaignEntity__int____);
  v6 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v6 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__123_1 = (System_Func_object__object__o *)v6->static_fields->__9__123_1;
  if ( !_9__123_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__123_1 = (System_Func_object__object__o *)sub_1C942E4(System_Func___f__AnonymousType5_EventCampaignEntity__int_____f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___TypeInfo);
    System_Func_object__object____ctor(
      _9__123_1,
      v9,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_1__,
      0);
    static_fields = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__123_1 = (struct System_Func___f__AnonymousType5_EventCampaignEntity__int_____f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___o *)_9__123_1;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__123_1,
      (int32_t)_9__123_1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Linq_Enumerable__Select_object__object_(
          v7,
          (System_Func_TSource__TResult__o *)_9__123_1,
          (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select___f__AnonymousType5_EventCampaignEntity__int_____f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool____);
  v18 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v18 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__123_2 = (System_Func_object__bool__o *)v18->static_fields->__9__123_2;
  if ( !_9__123_2 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__123_2 = (System_Func_object__bool__o *)sub_1C942E4(System_Func___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__123_2,
      v21,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_2__,
      0);
    v22 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v22->__9__123_2 = (struct System_Func___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___bool__o *)_9__123_2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v22->__9__123_2, (int32_t)_9__123_2, v23, v24, v25, v26, v27, v28);
  }
  v29 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)_9__123_2,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool____);
  v30 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v31 = v29;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v30 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__123_3 = (System_Func_object__object__o *)v30->static_fields->__9__123_3;
  if ( !_9__123_3 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__123_3 = (System_Func_object__object__o *)sub_1C942E4(System_Func___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__123_3,
      v33,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_3__,
      0);
    v34 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v34->__9__123_3 = (struct System_Func___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___EventCampaignEntity__o *)_9__123_3;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v34->__9__123_3, (int32_t)_9__123_3, v35, v36, v37, v38, v39, v40);
  }
  v41 = System_Linq_Enumerable__Select_object__object_(
          v31,
          (System_Func_TSource__TResult__o *)_9__123_3,
          (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___EventCampaignEntity___);
  v42 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
  if ( !RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo);
    v42 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  _9__123_4 = (System_Func_T1__T2__TResult__o *)v42->static_fields->__9__123_4;
  if ( !_9__123_4 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__123_4 = (System_Func_T1__T2__TResult__o *)sub_1C942E4(System_Func_int__EventCampaignEntity__int__TypeInfo);
    System_Func_int__object__int____ctor(
      _9__123_4,
      v45,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__123_4__,
      0);
    v46 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v46->__9__123_4 = (struct System_Func_int__EventCampaignEntity__int__o *)_9__123_4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v46->__9__123_4, (int32_t)_9__123_4, v47, v48, v49, v50, v51, v52);
  }
  return System_Linq_Enumerable__Aggregate_object__int_(
           v43,
           -1,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__123_4,
           (const MethodInfo_31A4A84 *)Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
}


bool RecommendSupportServantSelectListViewItem__GetNpInfo(
        RecommendSupportServantSelectListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D28642 & 1) == 0 )
  {
    sub_1C94098(&TreasureDvcInfo_TypeInfo);
    byte_4D28642 = 1;
  }
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
    return UserServantEntity__getTreasureDeviceInfo(UserServant_k__BackingField, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C942E4(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


bool RecommendSupportServantSelectListViewItem__IsMatchServantFilter(
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
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x21
  UserServantEntity_o *v17; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v19; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v35; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v37; // w0

  if ( (byte_4D28639 & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&ListViewSort_FilterKind___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&ServantEventBonusFilterController_TypeInfo);
    byte_4D28639 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_62;
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
      goto LABEL_62;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields._Servant_k__BackingField, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields._Servant_k__BackingField, 0) )
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
    goto LABEL_62;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServant_k__BackingField, 0) )
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
LABEL_62:
    sub_1C942F0(ClassGroupFilterKindList, sort);
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServant_k__BackingField, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(UserServant_k__BackingField, sort, -1, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    v17 = this->fields._UserServant_k__BackingField;
    if ( v17 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v17, 0, 0) )
      {
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0);
        v19 = this->fields._UserServant_k__BackingField;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v19 )
          goto LABEL_62;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v19, -1, -1, 0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        ClassGroupFilterKindList = (__int64)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_62;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         -1,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
    }
    ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_62;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_63;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v35 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v37 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v35) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v37 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v37 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(
          sort,
          this->fields._UserServant_k__BackingField,
          this->fields._Servant_k__BackingField,
          0)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields._UserServant_k__BackingField,
          this->fields._Servant_k__BackingField,
          0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C94140(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_63:
    sub_1C942F8(ClassGroupFilterKindList);
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0)
    && this->fields._IsSwapChoice_k__BackingField == this->fields._IsChoice_k__BackingField )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_62;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v15, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


bool RecommendSupportServantSelectListViewItem__IsRestriction(
        RecommendSupportServantSelectListViewItem_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int128 v10; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  QuestRestrictionInfo_o *v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4D28644 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&QuestRestrictionInfo_TypeInfo);
    byte_4D28644 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
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
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v15, 0);
  if ( !v11 )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v11,
          &entity,
          Master_object,
          (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  v12 = (QuestRestrictionInfo_o *)sub_1C942E4(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_44187308(v12, 0, questId, questPhase, 0);
  Master_object = (int64_t)entity;
  if ( !entity )
LABEL_14:
    sub_1C942F0(Master_object, v8);
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)entity, v12, this->fields.rarity, 2, 0);
}


void RecommendSupportServantSelectListViewItem__ModifyChoiceItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1C942F0(0, method);
  this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServant_k__BackingField, 0);
  this->fields._IsSwapChoice_k__BackingField = 0;
}


void RecommendSupportServantSelectListViewItem__ModifyItem(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UserServantEntity_o **p_UserServant_k__BackingField; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_UserServant_k__BackingField )
    sub_1C942F0(0, v11);
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin(*p_UserServant_k__BackingField, 0);
  RecommendSupportServantSelectListViewItem__SetOverwriteStatus(this, entity, v12);
}


void RecommendSupportServantSelectListViewItem__ModifyLockItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_1C942F0(0, method);
  this->fields._IsLock_k__BackingField = UserServantEntity__IsLock(UserServant_k__BackingField, 0);
  this->fields._IsSwapLock_k__BackingField = 0;
}


void RecommendSupportServantSelectListViewItem__ResetEventCampaign(
        RecommendSupportServantSelectListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportServantSelectListViewItem__SetEquipStatus(
        RecommendSupportServantSelectListViewItem_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_equipUserServantEntity; // x20
  GrandQuestFolderBoardItem_o *p_equipServantEntity; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  GrandQuestFolderBoardItem_o *p_equipIdList; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int64_t Instance; // x0
  __int64 v26; // x1
  GrandQuestFolderBoardItem_c *klass; // x8
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  Il2CppObject *v35; // x22
  __int64 v36; // x1
  BalanceConfig_c *v37; // x0
  Il2CppType this_arg; // q1
  GrandQuestFolderBoardItem_c *v39; // x8
  Il2CppType v40; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x21
  Il2CppObject *Entity; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  GrandQuestFolderBoardItem_c *v49; // x8
  Il2CppClass *parent; // x21
  Il2CppClass *declaringType; // x22
  GrandQuestFolderBoardItem_c *v52; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // x20
  Il2CppClass *v54; // x21
  Il2CppClass *v55; // x22
  Il2CppObject *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4D28638 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28638 = 1;
  }
  p_equipUserServantEntity = (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity,
    0,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_equipServantEntity = (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v12, v13, v14, v15, v16, v17);
  this->fields.equipIdList = 0;
  p_equipIdList = (GrandQuestFolderBoardItem_o *)&this->fields.equipIdList;
  sub_1C9403C(p_equipIdList, 0, v19, v20, v21, v22, v23, v24);
  if ( !p_equipIdList->fields.sortValue2B )
    return;
  if ( !equipIds )
    goto LABEL_9;
  klass = p_equipIdList->klass;
  if ( (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *)p_equipIdList->klass == equipIds )
    goto LABEL_14;
  v28 = System_Array__Clone((System_Array_o *)equipIds, 0);
  if ( v28 )
  {
    v35 = v28;
    v36 = sub_1C941D4(v28, CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo);
    if ( !v36 )
    {
      sub_1C9468C(v35);
LABEL_9:
      v37 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v37 = BalanceConfig_TypeInfo;
      }
      v36 = sub_1C94140(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong___TypeInfo,
              (unsigned int)v37->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v36 = 0;
  }
  p_equipIdList->klass = (GrandQuestFolderBoardItem_c *)v36;
  sub_1C9403C(p_equipIdList, v36, v29, v30, v31, v32, v33, v34);
  klass = p_equipIdList->klass;
LABEL_14:
  if ( !klass )
    goto LABEL_36;
  if ( !LODWORD(klass->_1.namespaze) )
    goto LABEL_37;
  this_arg = klass->_1.this_arg;
  *(Il2CppType *)&v65.fields.currentCryptoKey = klass->_1.byval_arg;
  *(Il2CppType *)&v65.fields.fakeValue = this_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v64 = v65;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v64, 0) < 1 )
    return;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v39 = p_equipIdList->klass;
  if ( !p_equipIdList->klass )
    goto LABEL_36;
  if ( !LODWORD(v39->_1.namespaze) )
LABEL_37:
    sub_1C942F8(Instance);
  v40 = v39->_1.this_arg;
  v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  *(Il2CppType *)&v65.fields.currentCryptoKey = v39->_1.byval_arg;
  *(Il2CppType *)&v65.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v63 = v65;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v63, 0);
  if ( !v41 )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v41,
             Instance,
             (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_equipUserServantEntity->klass = (GrandQuestFolderBoardItem_c *)Entity;
  sub_1C9403C(p_equipUserServantEntity, (int32_t)Entity, v43, v44, v45, v46, v47, v48);
  v49 = p_equipUserServantEntity->klass;
  if ( p_equipUserServantEntity->klass )
  {
    declaringType = v49->_1.declaringType;
    parent = v49->_1.parent;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v66.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v66.fields.fakeValue = parent;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v66, 0) >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
        v52 = p_equipUserServantEntity->klass;
        if ( p_equipUserServantEntity->klass )
        {
          v53 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v55 = v52->_1.declaringType;
          v54 = v52->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v67.fields.currentCryptoKey = v55;
          *(_QWORD *)&v67.fields.fakeValue = v54;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v67, 0);
          if ( v53 )
          {
            v56 = DataMasterBase_object__object__int___GetEntity(
                    v53,
                    Instance,
                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            p_equipServantEntity->klass = (GrandQuestFolderBoardItem_c *)v56;
            sub_1C9403C(p_equipServantEntity, (int32_t)v56, v57, v58, v59, v60, v61, v62);
            return;
          }
        }
      }
LABEL_36:
      sub_1C942F0(Instance, v26);
    }
  }
}


void RecommendSupportServantSelectListViewItem__SetEquipUserServantId(
        RecommendSupportServantSelectListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *equipIdList; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v6; // x0
  const MethodInfo *v7; // x2
  __int128 v8; // [xsp+10h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4D2863C & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2863C = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v9, userSvtId, 0);
    v8 = *(_OWORD *)&v9.fields.fakeValue;
    if ( !LODWORD(equipIdList->max_length) )
      sub_1C942F8(v6);
    *(_OWORD *)&equipIdList->m_Items[0].fields.currentCryptoKey = *(_OWORD *)&v9.fields.currentCryptoKey;
    *(_OWORD *)&equipIdList->m_Items[0].fields.fakeValue = v8;
    RecommendSupportServantSelectListViewItem__SetEquipStatus(this, this->fields.equipIdList, v7);
  }
}


void RecommendSupportServantSelectListViewItem__SetOverwriteStatus(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *v3; // x19

  if ( !userServantEntity
    || (v3 = this,
        (this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__GetOverwriteStatus(
                                                                 userServantEntity,
                                                                 0,
                                                                 0)) == 0) )
  {
    sub_1C942F0(this, userServantEntity);
  }
  *(int8x16_t *)&v3->fields.rarity = vextq_s8(
                                       *(int8x16_t *)&this->fields.selectNum,
                                       *(int8x16_t *)&this->fields.selectNum,
                                       8u);
}


bool RecommendSupportServantSelectListViewItem__SetSortValue(
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
  unsigned __int64 rarity; // x8
  int64_t v25; // x20
  IconLabelInfo_o *IconInfo1_k__BackingField; // x21
  int64_t cost; // x2
  int32_t friendshipMax; // w3
  int32_t v29; // w1
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int64_t hp; // x20
  IconLabelInfo_o *v32; // x21
  struct UserServantEntity_o *v33; // x8
  int32_t atk; // w4
  int32_t v35; // w3
  int32_t v36; // w1
  struct UserServantEntity_o *v37; // x8
  struct UserServantEntity_o *v38; // x8
  __int64 v39; // x20
  __int64 v40; // x21
  int32_t v41; // w0
  RecommendSupportServantSelectListViewItem_o *v42; // x20
  int64_t v43; // x9
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v46; // x20
  IconLabelInfo_o *IconInfo2_k__BackingField; // x19
  RecommendSupportServantSelectListViewItem_o *v48; // x21
  __int64 v49; // x21
  __int64 v50; // x22
  const MethodInfo *v51; // x2
  struct ServantEntity_o *Servant_k__BackingField; // x8
  int32_t v53; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v4 = this;
  if ( (byte_4D2863A & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__94_0__);
    sub_1C94098(&RecommendSupportServantSelectListViewManager_TypeInfo);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2863A = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
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
      this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_124;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
      this = (RecommendSupportServantSelectListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                              (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                              0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !EntitiesByGroupId )
          goto LABEL_124;
        if ( EntitiesByGroupId->fields._size >= 2 )
        {
          v16 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventGroupEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v16,
            (Il2CppObject *)v4,
            Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__94_0__,
            0);
          v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                      (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                      (System_Func_T__bool__o *)v16,
                                      (const MethodInfo_3185468 *)Method_BasicHelper_Any_EventGroupEntity___);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v13 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      v14 = (EventCampaignMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v13;
      *(_QWORD *)&v58.fields.fakeValue = v12;
      this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                              v58,
                                                              0);
      if ( !v14 )
        goto LABEL_124;
      IsEnableServant = EventCampaignMaster__IsEnableServant(v14, (int32_t)this, v4->fields.bonusKindId, 0);
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
        goto LABEL_124;
      IsEnableServant = UserServantEntity__getEventUpVal_43954324(
                          (UserServantEntity_o *)this,
                          v4->fields.eventSetupInfo,
                          v6,
                          0,
                          0);
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
        this = (RecommendSupportServantSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
          if ( this )
          {
            IsEnableServant = ServantFilterMaster__IsEnableServant(
                                (ServantFilterMaster_o *)this,
                                v4->fields.svtId,
                                v4->fields.bonusKindId,
                                0);
LABEL_32:
            v4->fields.isEventUpVal = IsEnableServant;
            if ( !IsEnableServant )
              goto LABEL_63;
            goto LABEL_43;
          }
        }
LABEL_124:
        sub_1C942F0(this, sort);
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
        if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
          goto LABEL_63;
        this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._Servant_k__BackingField;
        if ( !this )
          goto LABEL_124;
        if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
          || !RecommendSupportServantSelectListViewItem__IsMatchServantFilter(v4, sort, v23) )
        {
LABEL_63:
          LOBYTE(this) = 0;
          return (char)this;
        }
      }
      IsSwapChoice_k__BackingField = v4->fields._IsSwapChoice_k__BackingField;
      IsChoice_k__BackingField = v4->fields._IsChoice_k__BackingField;
      v4->fields.sortValue0 = 0;
      if ( IsSwapChoice_k__BackingField == IsChoice_k__BackingField || !sort->fields.isChoiceSort )
      {
        if ( !RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(v4, (const MethodInfo *)sort) )
          goto LABEL_50;
        v19 = -10;
      }
      else
      {
        v19 = 10;
      }
      v4->fields.sortValue0 = v19;
LABEL_50:
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo2_k__BackingField;
      if ( !this )
        goto LABEL_124;
      IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
      this = (RecommendSupportServantSelectListViewItem_o *)(&dword_0 + 1);
      switch ( sort->fields.sortKind )
      {
        case 1:
          UserServant_k__BackingField = v4->fields._UserServant_k__BackingField;
          if ( !UserServant_k__BackingField )
            goto LABEL_124;
          v21 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
          *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v56.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v55 = v56;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                                  &v55,
                                                                  0);
          v22 = v4->fields._UserServant_k__BackingField;
          v4->fields.sortValue1 = (int64_t)this;
          if ( !v22 )
            goto LABEL_124;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          if ( !this )
            goto LABEL_124;
          IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v22->fields.createdAt, 0, 0, 0, 0);
          goto LABEL_98;
        case 2:
          rarity = v4->fields.rarity;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          goto LABEL_119;
        case 3:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_124;
          v25 = *(int *)&this->fields.isEventUpVal;
          IconInfo1_k__BackingField = v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = v25;
          this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                                  (UserServantEntity_o *)this,
                                                                  0);
          if ( !IconInfo1_k__BackingField )
            goto LABEL_124;
          IconLabelInfo__Set_41670428(IconInfo1_k__BackingField, 2, v25, (int32_t)this, 0, 0, 0, 0, 0, 0);
          goto LABEL_123;
        case 4:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_124;
          UserServantEntity__getTreasureDeviceInfo_43961964((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
          LODWORD(cost) = tdMaxLv[1];
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = tdMaxLv[1];
          if ( !this )
            goto LABEL_124;
          friendshipMax = tdMaxLv[0];
          v29 = 33;
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
            v32 = v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_HpBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            v33 = v4->fields.equipUserServantEntity;
            if ( !v33 || !v32 )
              goto LABEL_124;
            atk = v33->fields.hp;
            v35 = (int)this;
            v36 = 46;
            goto LABEL_81;
          }
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_124;
          v48 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_HpBoostValue(
                                                                  (UserServantEntity_o *)this,
                                                                  0);
          if ( !v48 )
            goto LABEL_124;
          friendshipMax = (int)this;
          v29 = 3;
          goto LABEL_106;
        case 6:
          v37 = v4->fields.equipUserServantEntity;
          hp = v4->fields.atk;
          if ( v37 )
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = v37->fields.atk + (int)hp;
            if ( !this )
              goto LABEL_124;
            v32 = v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            v38 = v4->fields.equipUserServantEntity;
            if ( !v38 || !v32 )
              goto LABEL_124;
            atk = v38->fields.atk;
            v35 = (int)this;
            v36 = 47;
LABEL_81:
            IconLabelInfo__Set_41670428(v32, v36, hp, v35, atk, 0, 0, 0, 0, 0);
          }
          else
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_124;
            v48 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            if ( !v48 )
              goto LABEL_124;
            friendshipMax = (int)this;
            v29 = 5;
LABEL_106:
            this = v48;
            LODWORD(cost) = hp;
LABEL_97:
            IconLabelInfo__Set_41670428((IconLabelInfo_o *)this, v29, cost, friendshipMax, 0, 0, 0, 0, 0, 0);
          }
LABEL_98:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( !this )
            goto LABEL_124;
          IconInfo2_k__BackingField = v4->fields._IconInfo2_k__BackingField;
LABEL_121:
          v53 = *(_DWORD *)&this->fields.isEventUpVal;
          this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                                  (UserServantEntity_o *)this,
                                                                  0);
          if ( !IconInfo2_k__BackingField )
            goto LABEL_124;
          IconLabelInfo__Set_41670428(IconInfo2_k__BackingField, 2, v53, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_123:
          LOBYTE(this) = 1;
          return (char)this;
        case 7:
          cost = v4->fields.cost;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = cost;
          if ( !this )
            goto LABEL_124;
          v29 = 7;
          friendshipMax = 0;
          goto LABEL_97;
        case 8:
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          rarity = -v4->fields.priority;
          goto LABEL_119;
        case 0xA:
          v40 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
          v39 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = v40;
          *(_QWORD *)&v59.fields.fakeValue = v39;
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v59, 0);
          v42 = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v43 = v41;
          friendship = v4->fields.friendship;
          v4->fields.sortValue1 = v43;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                  friendship,
                                                                  0);
          if ( !v42 )
            goto LABEL_124;
          friendshipMax = v4->fields.friendshipMax;
          LODWORD(cost) = (_DWORD)this;
          v29 = 32;
          this = v42;
          goto LABEL_97;
        case 0xE:
          if ( (v4->fields.amountSortValue & 0x8000000000000000LL) == 0 )
            goto LABEL_117;
          manager = sort->fields.manager;
          if ( manager
            && (naturalAligment = RecommendSupportServantSelectListViewManager_TypeInfo->_2.naturalAligment,
                manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
          {
            if ( (RecommendSupportServantSelectListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewManager_TypeInfo )
              v46 = (UnityEngine_Object_o *)sort->fields.manager;
            else
              v46 = 0;
          }
          else
          {
            v46 = 0;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (RecommendSupportServantSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v46, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_117;
          v50 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v61.fields.currentCryptoKey = v50;
          *(_QWORD *)&v61.fields.fakeValue = v49;
          this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                  v61,
                                                                  0);
          if ( !v46 )
            goto LABEL_124;
          this = (RecommendSupportServantSelectListViewItem_o *)RecommendSupportServantSelectListViewManager__GetAmountSortValue(
                                                                  (RecommendSupportServantSelectListViewManager_o *)v46,
                                                                  (int32_t)this,
                                                                  v51);
          v4->fields.amountSortValue = (int64_t)this;
LABEL_117:
          Servant_k__BackingField = v4->fields._Servant_k__BackingField;
          if ( !Servant_k__BackingField )
            goto LABEL_124;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          rarity = (((unsigned __int64)(unsigned int)v4->fields.rarity << 32) + (v4->fields.amountSortValue << 48))
                 | Servant_k__BackingField->fields.collectionNo;
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
          v29 = 44;
          goto LABEL_97;
        case 0x10:
          cost = v4->fields.atkReinforceValue;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
          v4->fields.sortValue1 = cost;
          if ( !this )
            goto LABEL_124;
          friendshipMax = v4->fields.nowMaxAtkReinforceValue;
          v29 = 45;
          goto LABEL_97;
        default:
          return (char)this;
      }
    default:
      goto LABEL_43;
  }
}


bool RecommendSupportServantSelectListViewItem__SwapChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapChoice_k__BackingField;
  this->fields._IsSwapChoice_k__BackingField ^= 1u;
  return v2;
}


bool RecommendSupportServantSelectListViewItem__SwapLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields._IsSwapLock_k__BackingField;
  this->fields._IsSwapLock_k__BackingField ^= 1u;
  return v2;
}


__f__AnonymousType5_EventCampaignEntity__int__o *RecommendSupportServantSelectListViewItem___GetFriendPointBonus_b__123_0(
        RecommendSupportServantSelectListViewItem_o *this,
        EventCampaignEntity_o *t,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *v4; // x20
  System_Int32_array *targetIds; // x21
  int32_t SvtId; // w0
  int32_t v7; // w20
  __f__AnonymousType5__t_j__TPar___indexOf_j__TPar__o *v8; // x21

  v4 = this;
  if ( (byte_4D28646 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    sub_1C94098(&Method___f__AnonymousType5_EventCampaignEntity__int___ctor__);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_1C94098(&_f__AnonymousType5_EventCampaignEntity__int__TypeInfo);
    byte_4D28646 = 1;
  }
  if ( !t )
    sub_1C942F0(this, t);
  targetIds = t->fields.targetIds;
  SvtId = RecommendSupportServantSelectListViewItem__get_SvtId(v4, (const MethodInfo *)t);
  v7 = System_Array__IndexOf_int_(targetIds, SvtId, (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___);
  v8 = (__f__AnonymousType5__t_j__TPar___indexOf_j__TPar__o *)sub_1C942E4(_f__AnonymousType5_EventCampaignEntity__int__TypeInfo);
  _f__AnonymousType5_object__int____ctor(
    v8,
    (Il2CppObject *)t,
    v7,
    (const MethodInfo_337E818 *)Method___f__AnonymousType5_EventCampaignEntity__int___ctor__);
  return (__f__AnonymousType5_EventCampaignEntity__int__o *)v8;
}


bool RecommendSupportServantSelectListViewItem___SetSortValue_b__94_0(
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

  if ( (byte_4D28645 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D28645 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  UserServant_k__BackingField = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                           v12,
                                                           0);
  if ( !entity || !v8 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)UserServant_k__BackingField, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserServant_k__BackingField = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !UserServant_k__BackingField )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(UserServant_k__BackingField, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  UserServant_k__BackingField = (ServantFilterMaster_o *)this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
LABEL_17:
    sub_1C942F0(UserServant_k__BackingField, v10);
  return UserServantEntity__getEventUpVal_43954324(
           (UserServantEntity_o *)UserServant_k__BackingField,
           this->fields.eventSetupInfo,
           entity->fields.eventId,
           0,
           0);
}


int32_t RecommendSupportServantSelectListViewItem__get_ClassId(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassId_k__BackingField;
}


int32_t RecommendSupportServantSelectListViewItem__get_Cost(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.cost;
}


int32_t RecommendSupportServantSelectListViewItem__get_EquipCost(
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


IconLabelInfo_o *RecommendSupportServantSelectListViewItem__get_IconInfo1(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconInfo1_k__BackingField;
}


IconLabelInfo_o *RecommendSupportServantSelectListViewItem__get_IconInfo2(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IconInfo2_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsBase(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsBase_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2863F & 1) == 0 )
  {
    sub_1C94098(&TutorialFlag_TypeInfo);
    byte_4D2863F = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41176064(126, 0);
}


bool RecommendSupportServantSelectListViewItem__get_IsChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsChoice_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsDispChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField ^ this->fields._IsChoice_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsDispLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField ^ this->fields._IsLock_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsEnabled(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnabled_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsEquip(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipServantEntity != 0;
}


bool RecommendSupportServantSelectListViewItem__get_IsEventJoin(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEventJoin_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsInvalidRarity(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsInvalidRarity_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLock_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsPush(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPush_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsPushMode(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPushMode_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportData_o *klass; // x20
  const MethodInfo *v6; // x3
  int32_t questPhase[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D28641 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D28641 = 1;
  }
  *(_QWORD *)questPhase = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (klass = (RecommendSupportData_o *)Instance[7].klass,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !klass )
  {
    sub_1C942F0(Instance, v4);
  }
  return RecommendSupportData__TryGetQuest(klass, (int32_t)Instance[7].monitor, &questPhase[1], questPhase, 0)
      && RecommendSupportServantSelectListViewItem__IsRestriction(this, questPhase[1], questPhase[0], v6);
}


bool RecommendSupportServantSelectListViewItem__get_IsSame(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSame_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsSwapChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapChoice_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsSwapLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSwapLock_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsUseInSet(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseInSet_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsUseServant(
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

  if ( (byte_4D28640 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D28640 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (RecommendSupportSelectControl_o *)RecommendSupportSelectControl__get_SelectServantId(Instance, 0),
        (UserServant_k__BackingField = this->fields._UserServant_k__BackingField) == 0) )
  {
    sub_1C942F0(Instance, v4);
  }
  v6 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  v7 = Instance;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return v7 == (RecommendSupportSelectControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                                    &v9,
                                                    0);
}


System_String_o *RecommendSupportServantSelectListViewItem__get_NameText(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *Servant_k__BackingField; // x19
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4D2863E & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&StringLiteral_19212/*"error"*/);
    byte_4D2863E = 1;
  }
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    return (System_String_o *)StringLiteral_19212/*"error"*/;
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( UserServant_k__BackingField )
  {
    v6 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&UserServant_k__BackingField->fields.limitCount.fields.fakeValue;
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
  return ServantEntity__getName(Servant_k__BackingField, v7, -1, 0, 0);
}


ServantEntity_o *RecommendSupportServantSelectListViewItem__get_Servant(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Servant_k__BackingField;
}


int32_t RecommendSupportServantSelectListViewItem__get_SvtId(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D2863D & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2863D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v6, 0);
}


int32_t RecommendSupportServantSelectListViewItem__get_UseSet(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UseSet_k__BackingField;
}


UserServantEntity_o *RecommendSupportServantSelectListViewItem__get_UserServant(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServant_k__BackingField;
}


void RecommendSupportServantSelectListViewItem__set_IsChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChoice_k__BackingField = value;
}


void RecommendSupportServantSelectListViewItem__set_IsEnabled(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnabled_k__BackingField = value;
}


void RecommendSupportServantSelectListViewItem__set_IsEventJoin(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEventJoin_k__BackingField = value;
}


void RecommendSupportServantSelectListViewItem__set_IsLock(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLock_k__BackingField = value;
}


void RecommendSupportServantSelectListViewItem__set_IsPush(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPush_k__BackingField = value;
}


void RecommendSupportServantSelectListViewItem__set_IsPushMode(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPushMode_k__BackingField = value;
}


void RecommendSupportServantSelectListViewItem__set_IsSwapChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapChoice_k__BackingField = value;
}


void RecommendSupportServantSelectListViewItem__set_IsSwapLock(
        RecommendSupportServantSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSwapLock_k__BackingField = value;
}


void RecommendSupportServantSelectListViewItem__set_UserServant(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UserServant_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportServantSelectListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28647 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportServantSelectListViewItem___c_TypeInfo);
    byte_4D28647 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(RecommendSupportServantSelectListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewItem___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportServantSelectListViewItem___c___ctor(
        RecommendSupportServantSelectListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


__f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__o *RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__123_1(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType5_EventCampaignEntity__int__o *h__TransparentIdentifier0,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *t_i__Field; // x8
  struct System_Int32_array *targetIds; // x9
  char v6; // w20
  __f__AnonymousType6____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *v7; // x21

  if ( (byte_4D28648 & 1) == 0 )
  {
    sub_1C94098(&Method___f__AnonymousType5_EventCampaignEntity__int__get_t__);
    sub_1C94098(&Method___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___ctor__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1C94098(&_f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__TypeInfo);
    byte_4D28648 = 1;
  }
  if ( !h__TransparentIdentifier0 || (t_i__Field = h__TransparentIdentifier0->fields._t_i__Field) == 0 )
    sub_1C942F0(this, h__TransparentIdentifier0);
  targetIds = t_i__Field->fields.targetIds;
  if ( targetIds )
    v6 = LODWORD(targetIds->max_length) == 0;
  else
    v6 = 1;
  v7 = (__f__AnonymousType6____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *)sub_1C942E4(_f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__TypeInfo);
  _f__AnonymousType6_object__bool____ctor(
    v7,
    (Il2CppObject *)h__TransparentIdentifier0,
    v6,
    (const MethodInfo_337F5E4 *)Method___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool___ctor__);
  return (__f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__o *)v7;
}


bool RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__123_2(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  struct __f__AnonymousType5_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4D28649 & 1) == 0 )
  {
    sub_1C94098(&Method___f__AnonymousType5_EventCampaignEntity__int__get_indexOf__);
    sub_1C94098(&Method___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1C94098(&Method___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__get_isAllTarget__);
    byte_4D28649 = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0 )
  {
    sub_1C942F0(this, h__TransparentIdentifier1);
  }
  return (h__TransparentIdentifier0_i__Field->fields._indexOf_i__Field & 0x80000000) == 0
      || h__TransparentIdentifier1->fields._isAllTarget_i__Field;
}


EventCampaignEntity_o *RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__123_3(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  struct __f__AnonymousType5_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_4D2864A & 1) == 0 )
  {
    sub_1C94098(&Method___f__AnonymousType5_EventCampaignEntity__int__get_t__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1C94098(&Method___f__AnonymousType6___f__AnonymousType5_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__);
    byte_4D2864A = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0 )
  {
    sub_1C942F0(this, h__TransparentIdentifier1);
  }
  return h__TransparentIdentifier0_i__Field->fields._t_i__Field;
}


// local variable allocation has failed, the output may be wrong!
int32_t RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__123_4(
        RecommendSupportServantSelectListViewItem___c_o *this,
        int32_t current,
        EventCampaignEntity_o *t,
        const MethodInfo *method)
{
  int32_t value; // w20

  if ( (byte_4D2864B & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_1C94098(&System_Math_TypeInfo);
    byte_4D2864B = 1;
  }
  if ( !t )
    sub_1C942F0(this, *(_QWORD *)&current);
  value = t->fields.value;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Max_65939564(current, value, 0);
}