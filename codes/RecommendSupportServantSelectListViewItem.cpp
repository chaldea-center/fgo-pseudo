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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  IconLabelInfo_o *v22; // x27
  struct IconLabelInfo_o **p_IconInfo2_k__BackingField; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_UserServant_k__BackingField; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct RecommendSupportData_o **p_recommendSupportServantData; // x23
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x1
  int64_t UserServant_k__BackingField; // x0
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct ServantEntity_o *Servant_k__BackingField; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // q0
  Il2CppObject *MasterData_object; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x25
  __int64 v71; // x26
  ServantLimitMaster_o *v72; // x24
  int32_t v73; // w25
  const MethodInfo *v74; // x2
  struct ServantEntity_o *v75; // x8
  const MethodInfo_476E8C0 *v76; // x0
  __int64 v77; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  UserServantCollectionMaster_o *v79; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // q1
  int64_t v81; // x25
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  struct UserServantEntity_o *v94; // x8
  __int128 v95; // q1
  RecommendSupportData_o *v96; // x8
  int64_t v97; // x23
  int64_t Servant; // x8
  bool IsLock; // w8
  bool IsChoice; // w8
  bool IsEventJoin; // w8
  bool v102; // w8
  int64_t Equip; // x0
  int64_t v104; // x22
  Il2CppObject *v105; // x23
  Il2CppObject *Instance; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x24
  __int64 v110; // x25
  PartyOrganizationUtility_o *v111; // x22
  int32_t v112; // w24
  int32_t v113; // w25
  __int64 v114; // x2
  UserServantEntity_o *v115; // x9
  __int128 v116; // q0
  __int128 v117; // q1
  __int64 v118; // x22
  int v119; // w9
  int64_t v120; // x8
  bool v121; // w8
  UserServantEntity_o *v122; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  __int64 v137; // x2
  int v138; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v140; // x0
  int64_t v141; // x8
  __int64 rarity; // x22
  __int64 v143; // x2
  UserServantEntity_o *v144; // x8
  __int64 v145; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v146; // x0
  __int64 v147; // x21
  __int64 v148; // x22
  __int64 v149; // x2
  struct UserServantEntity_o *v150; // x8
  __int128 v151; // q0
  __int128 v152; // q1
  int v153; // w8
  int64_t v154; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+80h] [xbp-A0h]
  int32_t actMaxRarity; // [xsp+ACh] [xbp-74h] BYREF
  System_String_o *skillName; // [xsp+B0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16

  if ( (byte_593442C & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_593442C = 1;
  }
  friendshipRank = 0;
  skillName = 0;
  actMaxRarity = 0;
  v15 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0);
  this->fields._IconInfo1_k__BackingField = v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconInfo1_k__BackingField,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0);
  this->fields._IconInfo2_k__BackingField = v22;
  p_IconInfo2_k__BackingField = &this->fields._IconInfo2_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconInfo2_k__BackingField,
    (int32_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._UserServant_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.recommendSupportServantData = supportServantData;
  p_recommendSupportServantData = &this->fields.recommendSupportServantData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.recommendSupportServantData,
    (int32_t)supportServantData,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.eventSetupInfo = eventUpValSetupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)eventUpValSetupInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)UserServant_k__BackingField, -1, 0);
  this->fields._Servant_k__BackingField = ServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Servant_k__BackingField,
    (int32_t)ServantEntity,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    goto LABEL_64;
  id = Servant_k__BackingField->fields.id;
  this->fields.eventFriendPoints = friendPointCampaignEntityList;
  this->fields.svtId = id;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaignEntityList,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  UserServant_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)UserServant_k__BackingField,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v70 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v71 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v72 = (ServantLimitMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v68, v69);
  *(_QWORD *)&v163.fields.currentCryptoKey = v70;
  *(_QWORD *)&v163.fields.fakeValue = v71;
  UserServant_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v163, 0);
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_64;
  v73 = UserServant_k__BackingField;
  UserServant_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                  (*p_UserServant_k__BackingField)[6],
                                  0);
  if ( !v72 )
    goto LABEL_64;
  ServantLimitMaster__GetEntity(v72, v73, UserServant_k__BackingField, 0);
  RecommendSupportServantSelectListViewItem__SetOverwriteStatus(this, this->fields._UserServant_k__BackingField, v74);
  v75 = this->fields._Servant_k__BackingField;
  if ( !v75 )
    goto LABEL_64;
  v76 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields._ClassId_k__BackingField = v75->fields.classId;
  UserServant_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance(v76);
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  UserServant_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                           (DataManager_o *)UserServant_k__BackingField,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v78 = *p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_64;
  v79 = (UserServantCollectionMaster_o *)UserServant_k__BackingField;
  v80 = v78[4];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v159.fields.currentCryptoKey = v78[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v159.fields.fakeValue = v80;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50, v77);
  v158 = v159;
  UserServant_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v158, 0);
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_64;
  v81 = UserServant_k__BackingField;
  UserServant_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                  (*p_UserServant_k__BackingField)[5],
                                  0);
  if ( !v79 )
    goto LABEL_64;
  UserServant_k__BackingField = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                                           v79,
                                           v81,
                                           UserServant_k__BackingField,
                                           0);
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)UserServant_k__BackingField,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0);
  this->fields._IsSame_k__BackingField = 0;
  this->fields.equipUserServantEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntity, 0, v82, v83, v84, v85, v86, v87);
  this->fields.equipIdList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v88, v89, v90, v91, v92, v93);
  v94 = this->fields._UserServant_k__BackingField;
  if ( !v94 )
    goto LABEL_64;
  v95 = *(_OWORD *)&v94->fields.id.fields.fakeValue;
  *(_OWORD *)&v157.fields.currentCryptoKey = *(_OWORD *)&v94->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v157.fields.fakeValue = v95;
  UserServant_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v157, 0);
  v96 = *p_recommendSupportServantData;
  if ( !*p_recommendSupportServantData )
    goto LABEL_64;
  v97 = UserServant_k__BackingField;
  Servant = RecommendSupportData__GetServant(v96, selectIndex, 0);
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  this->fields._IsBase_k__BackingField = v97 == Servant;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)UserServant_k__BackingField, 0);
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  this->fields._IsLock_k__BackingField = IsLock;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)UserServant_k__BackingField, 0);
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  this->fields._IsChoice_k__BackingField = IsChoice;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)UserServant_k__BackingField, 0);
  UserServant_k__BackingField = (int64_t)this->fields._Servant_k__BackingField;
  this->fields._IsEventJoin_k__BackingField = IsEventJoin;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  v102 = ServantEntity__checkIsHeroineSvt((ServantEntity_o *)UserServant_k__BackingField, 0);
  UserServant_k__BackingField = (int64_t)this->fields.recommendSupportServantData;
  this->fields._IsSwapLock_k__BackingField = 0;
  this->fields._IsSwapChoice_k__BackingField = 0;
  this->fields.isHeroine = v102;
  this->fields._IsInvalidRarity_k__BackingField = 0;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  Equip = RecommendSupportData__GetEquip((RecommendSupportData_o *)UserServant_k__BackingField, selectIndex, 0);
  if ( Equip >= 1 )
  {
    v104 = Equip;
    UserServant_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserServant_k__BackingField )
      goto LABEL_64;
    UserServant_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                             (DataManager_o *)UserServant_k__BackingField,
                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !UserServant_k__BackingField )
      goto LABEL_64;
    v105 = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)UserServant_k__BackingField,
             v104,
             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v109 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v110 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v111 = (PartyOrganizationUtility_o *)Instance;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v107, v108);
    *(_QWORD *)&v164.fields.currentCryptoKey = v109;
    *(_QWORD *)&v164.fields.fakeValue = v110;
    UserServant_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v164, 0);
    if ( !*p_UserServant_k__BackingField )
      goto LABEL_64;
    v112 = UserServant_k__BackingField;
    UserServant_k__BackingField = UserServantEntity__getRarity((UserServantEntity_o *)*p_UserServant_k__BackingField, 0);
    if ( !v105 )
      goto LABEL_64;
    v113 = UserServant_k__BackingField;
    UserServant_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v105[5],
                                    0);
    if ( !v111 )
      goto LABEL_64;
    this->fields._IsInvalidRarity_k__BackingField = PartyOrganizationUtility__IsRarityRestriction(
                                                      v111,
                                                      &skillName,
                                                      &actMaxRarity,
                                                      v112,
                                                      v113,
                                                      UserServant_k__BackingField,
                                                      -1,
                                                      0);
  }
  this->fields._IsUseInSet_k__BackingField = 0;
  this->fields._IsPushMode_k__BackingField = 0;
  UserServant_k__BackingField = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  v115 = (UserServantEntity_o *)*p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_64;
  v116 = *(_OWORD *)&v115->fields.id.fields.currentCryptoKey;
  v117 = *(_OWORD *)&v115->fields.id.fields.fakeValue;
  v118 = *(_QWORD *)(UserServant_k__BackingField + 128);
  v119 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v159.fields.currentCryptoKey = v116;
  *(_OWORD *)&v159.fields.fakeValue = v117;
  if ( !v119 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50, v114);
  v156 = v159;
  v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v156, 0);
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  this->fields._IsEnabled_k__BackingField = 1;
  this->fields._IsPush_k__BackingField = v118 == v120;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  if ( UserServantEntity__get_IsSaveTransformServant((UserServantEntity_o *)UserServant_k__BackingField, 0) )
  {
    UserServant_k__BackingField = (int64_t)*p_UserServant_k__BackingField;
    if ( !*p_UserServant_k__BackingField )
      goto LABEL_64;
    v121 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)UserServant_k__BackingField, -1, 0);
  }
  else
  {
    v121 = 0;
  }
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  this->fields.isTransformed = v121;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  UserServant_k__BackingField = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                  (UserServantEntity_o *)UserServant_k__BackingField,
                                  -1,
                                  0,
                                  0);
  v122 = this->fields._UserServant_k__BackingField;
  this->fields.dispLimitCount = UserServant_k__BackingField;
  if ( !v122 )
    goto LABEL_64;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v122, -1, UserServant_k__BackingField, 0);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)UserServant_k__BackingField,
                                   0,
                                   this->fields.dispLimitCount,
                                   0);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  v138 = *(_DWORD *)(UserServant_k__BackingField + 420);
  if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    static_fields = BalanceConfig_TypeInfo->static_fields;
    this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v138;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v50, v137);
    UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
    static_fields = BalanceConfig_TypeInfo->static_fields;
    this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v138;
    if ( !UserServant_k__BackingField )
      goto LABEL_64;
  }
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(UserServant_k__BackingField + 416);
  UserServantEntity__GetAdjustMaxData(
    (UserServantEntity_o *)UserServant_k__BackingField,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  v140 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  UserServant_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance(v140);
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  UserServant_k__BackingField = (int64_t)DataManager__GetMasterData_object_(
                                           (DataManager_o *)UserServant_k__BackingField,
                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  UserServant_k__BackingField = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServant_k__BackingField,
                                           this->fields._ClassId_k__BackingField,
                                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  v141 = *(int *)(UserServant_k__BackingField + 52);
  UserServant_k__BackingField = (int64_t)this->fields._UserServant_k__BackingField;
  this->fields.priority = v141;
  this->fields.sortValue1B = v141;
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  rarity = (unsigned int)this->fields.rarity;
  UserServant_k__BackingField = (int64_t)UserServantEntity__get_BaseServantEntity(
                                           (UserServantEntity_o *)UserServant_k__BackingField,
                                           0);
  if ( !UserServant_k__BackingField )
    goto LABEL_64;
  v144 = (UserServantEntity_o *)*p_UserServant_k__BackingField;
  if ( !*p_UserServant_k__BackingField )
    goto LABEL_64;
  v145 = *(int *)(UserServant_k__BackingField + 208);
  v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.sortValue2 = (v145 << 16) | (rarity << 48) | v144->fields.lv;
  v147 = *(_QWORD *)&v144->fields.svtId.fields.currentCryptoKey;
  v148 = *(_QWORD *)&v144->fields.svtId.fields.fakeValue;
  if ( !*(&v146->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v146, v50, v143);
  *(_QWORD *)&v165.fields.currentCryptoKey = v147;
  *(_QWORD *)&v165.fields.fakeValue = v148;
  UserServant_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v165, 0);
  v150 = this->fields._UserServant_k__BackingField;
  this->fields.sortValue2B = (int)UserServant_k__BackingField;
  if ( !v150 )
    goto LABEL_64;
  v151 = *(_OWORD *)&v150->fields.id.fields.currentCryptoKey;
  v152 = *(_OWORD *)&v150->fields.id.fields.fakeValue;
  v153 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v159.fields.currentCryptoKey = v151;
  *(_OWORD *)&v159.fields.fakeValue = v152;
  if ( !v153 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50, v149);
  v155 = v159;
  v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v155, 0);
  UserServant_k__BackingField = (int64_t)this->fields._IconInfo1_k__BackingField;
  this->fields.sortValueLast = v154;
  this->fields.amountSortValue = -1;
  if ( !UserServant_k__BackingField
    || (IconLabelInfo__Clear((IconLabelInfo_o *)UserServant_k__BackingField, 0),
        (UserServant_k__BackingField = (int64_t)*p_IconInfo2_k__BackingField) == 0) )
  {
LABEL_64:
    sub_21FFECC(UserServant_k__BackingField, v50);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)UserServant_k__BackingField, 0);
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
  __int64 v6; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_array *v7; // x8
  int64_t v8; // x20
  unsigned __int64 v9; // x21
  __int64 v10; // x23
  unsigned __int64 max_length_low; // x9
  __int128 *v12; // x8
  __int128 v13; // q0
  __int128 v14; // q1
  unsigned __int64 v15; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_5934430 & 1) == 0 )
  {
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5934430 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v4 = sub_21FFD10(long___TypeInfo, LODWORD(equipIdList->max_length));
  v7 = this->fields.equipIdList;
  if ( !v7 )
LABEL_13:
    sub_21FFECC(v4, v5);
  v8 = v4;
  v9 = 0;
  v10 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(v7->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
      return (System_Int64_array *)v8;
    if ( v9 >= max_length_low )
      goto LABEL_16;
    v12 = (__int128 *)((char *)v7 + v10);
    v13 = *v12;
    v14 = v12[1];
    LODWORD(v12) = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v18.fields.currentCryptoKey = v13;
    *(_OWORD *)&v18.fields.fakeValue = v14;
    if ( !(_DWORD)v12 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6);
    v17 = v18;
    v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v17, 0);
    if ( v8 )
    {
      if ( v9 >= *(unsigned int *)(v8 + 24) )
LABEL_16:
        sub_21FFED4(v4);
      v15 = v8 + 8 * v9;
      v7 = this->fields.equipIdList;
      ++v9;
      v10 += 32;
      *(_QWORD *)(v15 + 32) = v4;
      if ( v7 )
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
  __int64 v6; // x1
  __int64 v7; // x2
  RecommendSupportServantSelectListViewItem___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__114_1; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  RecommendSupportServantSelectListViewItem___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v25; // x9
  System_Func_object__bool__o *_9__114_2; // x20
  Il2CppObject *v27; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  RecommendSupportServantSelectListViewItem___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v40; // x9
  System_Func_object__object__o *_9__114_3; // x20
  Il2CppObject *v42; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  RecommendSupportServantSelectListViewItem___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x19
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v55; // x9
  System_Func_T1__T2__TResult__o *_9__114_4; // x20
  Il2CppObject *v57; // x21
  struct RecommendSupportServantSelectListViewItem___c_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7

  if ( (byte_5934435 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType4_EventCampaignEntity__int____);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool____);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool____);
    sub_21FFC50(&System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo);
    sub_21FFC50(&System_Func_EventCampaignEntity____f__AnonymousType4_EventCampaignEntity__int___TypeInfo);
    sub_21FFC50(&System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___bool__TypeInfo);
    sub_21FFC50(&System_Func___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___TypeInfo);
    sub_21FFC50(&System_Func_int__EventCampaignEntity__int__TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__114_0__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__114_1__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__114_2__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__114_3__);
    sub_21FFC50(&Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__114_4__);
    sub_21FFC50(&RecommendSupportServantSelectListViewItem___c_TypeInfo);
    byte_5934435 = 1;
  }
  eventFriendPoints = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventFriendPoints;
  if ( !eventFriendPoints )
    return -1;
  v4 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_EventCampaignEntity____f__AnonymousType4_EventCampaignEntity__int___TypeInfo);
  System_Func_object__object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecommendSupportServantSelectListViewItem__GetFriendPointBonus_b__114_0__,
    0);
  v5 = System_Linq_Enumerable__Select_object__object_(
         eventFriendPoints,
         (System_Func_TSource__TResult__o *)v4,
         (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity____f__AnonymousType4_EventCampaignEntity__int____);
  v8 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !*(&RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo, v6, v7);
    v8 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__114_1 = (System_Func_object__object__o *)static_fields->__9__114_1;
  if ( !_9__114_1 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__114_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___TypeInfo);
    System_Func_object__object____ctor(
      _9__114_1,
      v12,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__114_1__,
      0);
    v13 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v13->__9__114_1 = (struct System_Func___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___o *)_9__114_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__114_1, (int32_t)_9__114_1, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__Select_object__object_(
          v9,
          (System_Func_TSource__TResult__o *)_9__114_1,
          (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select___f__AnonymousType4_EventCampaignEntity__int_____f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool____);
  v23 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !*(&RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo, v21, v22);
    v23 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  v25 = v23->static_fields;
  _9__114_2 = (System_Func_object__bool__o *)v25->__9__114_2;
  if ( !_9__114_2 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v21, v22);
      v25 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)v25->__9;
    _9__114_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__114_2,
      v27,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__114_2__,
      0);
    v28 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v28->__9__114_2 = (struct System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___bool__o *)_9__114_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__114_2, (int32_t)_9__114_2, v29, v30, v31, v32, v33, v34);
  }
  v35 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)_9__114_2,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool____);
  v38 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v39 = v35;
  if ( !*(&RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo, v36, v37);
    v38 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  v40 = v38->static_fields;
  _9__114_3 = (System_Func_object__object__o *)v40->__9__114_3;
  if ( !_9__114_3 )
  {
    if ( !*(&v38->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v38, v36, v37);
      v40 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)v40->__9;
    _9__114_3 = (System_Func_object__object__o *)sub_21FFEBC(System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__114_3,
      v42,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__114_3__,
      0);
    v43 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v43->__9__114_3 = (struct System_Func___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity__o *)_9__114_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->__9__114_3, (int32_t)_9__114_3, v44, v45, v46, v47, v48, v49);
  }
  v50 = System_Linq_Enumerable__Select_object__object_(
          v39,
          (System_Func_TSource__TResult__o *)_9__114_3,
          (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___EventCampaignEntity___);
  v53 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v50;
  if ( !*(&RecommendSupportServantSelectListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItem___c_TypeInfo, v51, v52);
    v53 = RecommendSupportServantSelectListViewItem___c_TypeInfo;
  }
  v55 = v53->static_fields;
  _9__114_4 = (System_Func_T1__T2__TResult__o *)v55->__9__114_4;
  if ( !_9__114_4 )
  {
    if ( !*(&v53->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v53, v51, v52);
      v55 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)v55->__9;
    _9__114_4 = (System_Func_T1__T2__TResult__o *)sub_21FFEBC(System_Func_int__EventCampaignEntity__int__TypeInfo);
    System_Func_int__object__int____ctor(
      _9__114_4,
      v57,
      Method_RecommendSupportServantSelectListViewItem___c__GetFriendPointBonus_b__114_4__,
      0);
    v58 = RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields;
    v58->__9__114_4 = (struct System_Func_int__EventCampaignEntity__int__o *)_9__114_4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v58->__9__114_4, (int32_t)_9__114_4, v59, v60, v61, v62, v63, v64);
  }
  return System_Linq_Enumerable__Aggregate_object__int_(
           v54,
           -1,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__114_4,
           (const MethodInfo_382FE08 *)Method_System_Linq_Enumerable_Aggregate_EventCampaignEntity__int___);
}


bool RecommendSupportServantSelectListViewItem__IsMatchServantFilter(
        RecommendSupportServantSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UserServantEntity_o *UserServant_k__BackingField; // x21
  __int64 v19; // x2
  _BOOL4 IsChoice_k__BackingField; // w8
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *v24; // x0
  bool v25; // w8
  _BOOL4 v26; // w21
  int32_t DispLimitCountStageSealAfterIndexZero; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v43; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v45; // w0

  if ( (byte_593442E & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterKind___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&ServantEventBonusFilterController_TypeInfo);
    byte_593442E = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_70;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_70;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields._Servant_k__BackingField, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields._Servant_k__BackingField, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields._UserServant_k__BackingField, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields._UserServant_k__BackingField, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
    if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v16, v17);
    if ( ServantEventBonusFilterController__IsHideServant(UserServant_k__BackingField, sort, -1, 0) )
      return 0;
  }
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_30;
  v24 = this->fields._UserServant_k__BackingField;
  if ( v24 )
  {
    if ( UserServantEntity__get_IsSaveTransformServant(v24, 0) )
    {
      ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._UserServant_k__BackingField;
      if ( !ClassGroupFilterKindList )
        goto LABEL_70;
      v25 = !UserServantEntity__CheckBaseServant((UserServantEntity_o *)ClassGroupFilterKindList, -1, 0);
    }
    else
    {
      v25 = 0;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._UserServant_k__BackingField;
    if ( ClassGroupFilterKindList )
    {
      v26 = v25;
      DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                                -1,
                                                0,
                                                0);
      if ( this->fields.isTransformed != v26 || this->fields.dispLimitCount != DispLimitCountStageSealAfterIndexZero )
      {
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._UserServant_k__BackingField;
        this->fields.isTransformed = v26;
        this->fields.dispLimitCount = DispLimitCountStageSealAfterIndexZero;
        if ( !ClassGroupFilterKindList )
          goto LABEL_70;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                                (UserServantEntity_o *)ClassGroupFilterKindList,
                                -1,
                                DispLimitCountStageSealAfterIndexZero,
                                0);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields._UserServant_k__BackingField;
        if ( !ClassGroupFilterKindList )
          goto LABEL_70;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         this->fields.dispLimitCount,
                                         0);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      goto LABEL_57;
    }
LABEL_70:
    sub_21FFECC(ClassGroupFilterKindList, sort);
  }
LABEL_57:
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_71;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_71:
    sub_21FFED4(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v43 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v45 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( IsUnSelectedAllTargetFilters && v43 || !IsUnSelectedAllTargetFilters && !v43 )
  {
    if ( !IsMatchEffectCategory && !v45 )
      return 0;
  }
  else if ( IsUnSelectedAllTargetFilters )
  {
    if ( !v45 )
      return 0;
  }
  else if ( !IsMatchEffectCategory )
  {
    return 0;
  }
LABEL_30:
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_21FFD10(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_71;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    IsChoice_k__BackingField = this->fields._IsChoice_k__BackingField;
    if ( this->fields._IsSwapChoice_k__BackingField )
      IsChoice_k__BackingField = !this->fields._IsChoice_k__BackingField;
    if ( !IsChoice_k__BackingField )
      return 0;
  }
  v21 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v19);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_70;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarity, 0);
}


// local variable allocation has failed, the output may be wrong!
bool RecommendSupportServantSelectListViewItem__IsRestriction(
        RecommendSupportServantSelectListViewItem_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w8
  int64_t Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  __int128 v13; // q1
  QuestRestrictionInfo_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_5934436 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&QuestRestrictionInfo_TypeInfo);
    byte_5934436 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_14;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v13 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v13;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
  v17 = v18;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v17, 0);
  if ( !v12 )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          v12,
          &entity,
          Master_object,
          (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  v14 = (QuestRestrictionInfo_o *)sub_21FFEBC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_50438788(v14, 0, questId, questPhase, 0);
  Master_object = (int64_t)entity;
  if ( !entity )
LABEL_14:
    sub_21FFECC(Master_object, v9);
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)entity, v14, this->fields.rarity, 2, 0);
}


void RecommendSupportServantSelectListViewItem__ModifyChoiceItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_21FFECC(0, method);
  *(_WORD *)&this->fields._IsChoice_k__BackingField = UserServantEntity__IsChoice(UserServant_k__BackingField, 0);
}


void RecommendSupportServantSelectListViewItem__ModifyItem(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_UserServant_k__BackingField; // x20
  __int64 v11; // x1
  UserServantEntity_o *UserServant_k__BackingField; // x0
  const MethodInfo *v13; // x2
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct ServantEntity_o *Servant_k__BackingField; // x8
  const MethodInfo_476E8C0 *v22; // x0
  int64_t currentCryptoKey_high; // x8
  __int64 rarity; // x21

  if ( (byte_593442D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593442D = 1;
  }
  this->fields._UserServant_k__BackingField = entity;
  p_UserServant_k__BackingField = &this->fields._UserServant_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_13;
  this->fields._IsEventJoin_k__BackingField = UserServantEntity__IsEventJoin(UserServant_k__BackingField, 0);
  RecommendSupportServantSelectListViewItem__SetOverwriteStatus(this, entity, v13);
  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    goto LABEL_13;
  ServantEntity = UserServantEntity__GetServantEntity(UserServant_k__BackingField, -1, 0);
  this->fields._Servant_k__BackingField = ServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Servant_k__BackingField,
    (int32_t)ServantEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Servant_k__BackingField = this->fields._Servant_k__BackingField;
  if ( !Servant_k__BackingField )
    goto LABEL_13;
  this->fields.svtId = Servant_k__BackingField->fields.id;
  v22 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields._ClassId_k__BackingField = Servant_k__BackingField->fields.classId;
  UserServant_k__BackingField = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance(v22);
  if ( !UserServant_k__BackingField )
    goto LABEL_13;
  UserServant_k__BackingField = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)UserServant_k__BackingField,
                                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !UserServant_k__BackingField
    || (UserServant_k__BackingField = (UserServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)UserServant_k__BackingField,
                                                               this->fields._ClassId_k__BackingField,
                                                               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0
    || (currentCryptoKey_high = SHIDWORD(UserServant_k__BackingField->fields.userId.fields.currentCryptoKey),
        UserServant_k__BackingField = this->fields._UserServant_k__BackingField,
        this->fields.priority = currentCryptoKey_high,
        this->fields.sortValue1B = currentCryptoKey_high,
        !UserServant_k__BackingField)
    || (rarity = (unsigned int)this->fields.rarity,
        (UserServant_k__BackingField = (UserServantEntity_o *)UserServantEntity__get_BaseServantEntity(
                                                                UserServant_k__BackingField,
                                                                0)) == 0)
    || !*p_UserServant_k__BackingField )
  {
LABEL_13:
    sub_21FFECC(UserServant_k__BackingField, v11);
  }
  this->fields.sortValue2 = ((__int64)UserServant_k__BackingField->fields.randomLimitCount.fields.currentCryptoKey << 16)
                          | (rarity << 48)
                          | (*p_UserServant_k__BackingField)->fields.lv;
}


void RecommendSupportServantSelectListViewItem__ModifyLockItem(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *UserServant_k__BackingField; // x0
  bool IsLock; // w0

  UserServant_k__BackingField = this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
    sub_21FFECC(0, method);
  IsLock = UserServantEntity__IsLock(UserServant_k__BackingField, 0);
  this->fields._IsSwapLock_k__BackingField = 0;
  this->fields._IsLock_k__BackingField = IsLock;
}


void RecommendSupportServantSelectListViewItem__ResetEventCampaign(
        RecommendSupportServantSelectListViewItem_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, userServantEntity);
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
  _BOOL4 IsChoice_k__BackingField; // w8
  _BOOL4 IsSwapChoice_k__BackingField; // w9
  bool v7; // zf
  _BOOL4 v8; // w8
  int v9; // w10
  __int64 v10; // x8
  __int64 v11; // x2
  int32_t sortKind; // w8
  int64_t sortValue1B_low; // x20
  IconLabelInfo_o *v14; // x21
  const MethodInfo *v15; // x2
  __int64 v16; // x20
  __int64 v17; // x21
  int64_t v18; // x8
  IconLabelInfo_o *v19; // x20
  int32_t bonusKind2; // w8
  int32_t v21; // w2
  struct UserServantEntity_o *v22; // x8
  int64_t hp; // x20
  IconLabelInfo_o *v24; // x21
  struct UserServantEntity_o *v25; // x8
  int32_t atk; // w4
  int32_t v27; // w3
  IconLabelInfo_o *v28; // x0
  int32_t v29; // w1
  int64_t atkReinforceValue; // x2
  int32_t bonusKind2Id; // w8
  int32_t v32; // w8
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q1
  struct UserServantEntity_o *v35; // x8
  int64_t cost; // x2
  int32_t v37; // w2
  int64_t amountSortValue; // x21
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v41; // x20
  int64_t v42; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x8
  IconLabelInfo_o *v44; // x21
  struct UserServantEntity_o *v45; // x8
  int64_t hpReinforceValue; // x2
  bool IsEnableServant; // w0
  int32_t v48; // w8
  DataManager_c *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  Il2CppObject *Master_object; // x21
  __int64 v53; // x22
  __int64 v54; // x23
  IconLabelInfo_o *v55; // x21
  IconLabelInfo_o *v56; // x21
  IconLabelInfo_o *IconInfo1_k__BackingField; // x19
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v59; // x22
  __int64 v60; // x2
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  __int64 v62; // x21
  __int64 v63; // x22
  __int64 rarity; // x20
  __int64 Servant_k__BackingField_low; // x9
  int32_t sortValue1B; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v4 = this;
  if ( (byte_593442F & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__95_0__);
    sub_21FFC50(&RecommendSupportServantSelectListViewManager_TypeInfo);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593442F = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_150;
  if ( !sort->fields.isBonusKind || v4->fields._IsBase_k__BackingField )
  {
LABEL_6:
    if ( !v4->fields._IsBase_k__BackingField )
    {
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._Servant_k__BackingField;
      if ( !this )
        goto LABEL_150;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
        goto LABEL_128;
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._Servant_k__BackingField;
      if ( !this )
        goto LABEL_150;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
        || !RecommendSupportServantSelectListViewItem__IsMatchServantFilter(v4, sort, v15) )
      {
        goto LABEL_128;
      }
    }
    IsChoice_k__BackingField = v4->fields._IsChoice_k__BackingField;
    IsSwapChoice_k__BackingField = v4->fields._IsSwapChoice_k__BackingField;
    v4->fields.sortValue0 = 0;
    v7 = !IsChoice_k__BackingField;
    v8 = IsChoice_k__BackingField;
    v9 = v7;
    if ( IsSwapChoice_k__BackingField )
      v8 = v9;
    if ( v8 && sort->fields.isChoiceSort )
    {
      v10 = 10;
    }
    else
    {
      if ( !RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(v4, (const MethodInfo *)sort) )
        goto LABEL_18;
      v10 = -10;
    }
    v4->fields.sortValue0 = v10;
LABEL_18:
    this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo2_k__BackingField;
    if ( !this )
      goto LABEL_150;
    IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
    sortKind = sort->fields.sortKind;
    this = (RecommendSupportServantSelectListViewItem_o *)(&dword_0 + 1);
    if ( sortKind > 6 )
    {
      if ( sortKind > 13 )
      {
        switch ( sortKind )
        {
          case 14:
            amountSortValue = v4->fields.amountSortValue;
            if ( amountSortValue < 0 )
            {
              manager = sort->fields.manager;
              if ( manager
                && (naturalAligment = RecommendSupportServantSelectListViewManager_TypeInfo->_2.naturalAligment,
                    manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (RecommendSupportServantSelectListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportServantSelectListViewManager_TypeInfo )
                  v41 = (UnityEngine_Object_o *)sort->fields.manager;
                else
                  v41 = 0;
              }
              else
              {
                v41 = 0;
              }
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sort, v11);
              this = (RecommendSupportServantSelectListViewItem_o *)UnityEngine_Object__op_Inequality(v41, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                UserServant_k__BackingField = v4->fields._UserServant_k__BackingField;
                if ( !UserServant_k__BackingField )
                  goto LABEL_150;
                v62 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
                v63 = *(_QWORD *)&UserServant_k__BackingField->fields.svtId.fields.fakeValue;
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v60);
                *(_QWORD *)&v74.fields.currentCryptoKey = v62;
                *(_QWORD *)&v74.fields.fakeValue = v63;
                this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                        v74,
                                                                        0);
                if ( !v41 )
                  goto LABEL_150;
                amountSortValue = RecommendSupportServantSelectListViewManager__GetAmountSortValue(
                                    (RecommendSupportServantSelectListViewManager_o *)v41,
                                    (int32_t)this,
                                    0);
                v4->fields.amountSortValue = amountSortValue;
              }
              else
              {
                amountSortValue = v4->fields.amountSortValue;
              }
            }
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            if ( !this )
              goto LABEL_150;
            rarity = v4->fields.rarity;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_BaseServantEntity(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            if ( !this )
              goto LABEL_150;
            Servant_k__BackingField_low = SLODWORD(this->fields._Servant_k__BackingField);
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v42 = ((rarity << 32) + (amountSortValue << 48)) | Servant_k__BackingField_low;
            goto LABEL_144;
          case 15:
            hpReinforceValue = v4->fields.hpReinforceValue;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = hpReinforceValue;
            if ( !this )
              goto LABEL_150;
            IconLabelInfo__Set_47932852(
              (IconLabelInfo_o *)this,
              44,
              hpReinforceValue,
              v4->fields.nowMaxHpReinforceValue,
              0,
              0,
              0,
              0,
              0,
              0);
            break;
          case 16:
            atkReinforceValue = v4->fields.atkReinforceValue;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = atkReinforceValue;
            if ( !this )
              goto LABEL_150;
            IconLabelInfo__Set_47932852(
              (IconLabelInfo_o *)this,
              45,
              atkReinforceValue,
              v4->fields.nowMaxAtkReinforceValue,
              0,
              0,
              0,
              0,
              0,
              0);
            break;
          default:
            return (char)this;
        }
      }
      else
      {
        switch ( sortKind )
        {
          case 7:
            cost = v4->fields.cost;
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = cost;
            if ( !this )
              goto LABEL_150;
            IconLabelInfo__Set_47932852((IconLabelInfo_o *)this, 7, cost, 0, 0, 0, 0, 0, 0, 0);
            break;
          case 8:
            v42 = -v4->fields.priority;
LABEL_84:
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
LABEL_144:
            v4->fields.sortValue1 = v42;
            if ( !this )
              goto LABEL_150;
            IconInfo1_k__BackingField = v4->fields._IconInfo1_k__BackingField;
            goto LABEL_146;
          case 10:
            v16 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v11);
            *(_QWORD *)&v71.fields.currentCryptoKey = v16;
            *(_QWORD *)&v71.fields.fakeValue = v17;
            v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v71, 0);
            v19 = v4->fields._IconInfo1_k__BackingField;
            friendship = v4->fields.friendship;
            v4->fields.sortValue1 = v18;
            this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                    friendship,
                                                                    0);
            if ( !v19 )
              goto LABEL_150;
            IconLabelInfo__Set_47932852(v19, 32, (int32_t)this, v4->fields.friendshipMax, 0, 0, 0, 0, 0, 0);
            break;
          default:
            return (char)this;
        }
      }
    }
    else if ( sortKind > 3 )
    {
      if ( sortKind == 4 )
      {
        this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
        if ( !this )
          goto LABEL_150;
        UserServantEntity__getTreasureDeviceInfo_50128532((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
        v37 = tdMaxLv[1];
        this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
        v4->fields.sortValue1 = tdMaxLv[1];
        if ( !this )
          goto LABEL_150;
        IconLabelInfo__Set_47932852((IconLabelInfo_o *)this, 33, v37, tdMaxLv[0], 0, 0, 0, 0, 0, 0);
      }
      else
      {
        if ( sortKind == 5 )
        {
          equipUserServantEntity = v4->fields.equipUserServantEntity;
          hp = v4->fields.hp;
          if ( equipUserServantEntity )
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
            if ( !this )
              goto LABEL_150;
            v44 = v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_HpBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            v45 = v4->fields.equipUserServantEntity;
            if ( !v45 || !v44 )
              goto LABEL_150;
            atk = v45->fields.hp;
            v27 = (int)this;
            v28 = v44;
            v29 = 46;
          }
          else
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_150;
            v56 = v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_HpBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            if ( !v56 )
              goto LABEL_150;
            v27 = (int)this;
            atk = 0;
            v28 = v56;
            v29 = 3;
          }
        }
        else
        {
          v22 = v4->fields.equipUserServantEntity;
          hp = v4->fields.atk;
          if ( v22 )
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = v22->fields.atk + (int)hp;
            if ( !this )
              goto LABEL_150;
            v24 = v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            v25 = v4->fields.equipUserServantEntity;
            if ( !v25 || !v24 )
              goto LABEL_150;
            atk = v25->fields.atk;
            v27 = (int)this;
            v28 = v24;
            v29 = 47;
          }
          else
          {
            this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
            v4->fields.sortValue1 = hp;
            if ( !this )
              goto LABEL_150;
            v55 = v4->fields._IconInfo1_k__BackingField;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__get_AtkBoostValue(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            if ( !v55 )
              goto LABEL_150;
            v27 = (int)this;
            atk = 0;
            v28 = v55;
            v29 = 5;
          }
        }
        IconLabelInfo__Set_47932852(v28, v29, hp, v27, atk, 0, 0, 0, 0, 0);
      }
    }
    else
    {
      if ( sortKind != 1 )
      {
        if ( sortKind != 2 )
        {
          if ( sortKind != 3 )
            return (char)this;
          this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
          if ( this )
          {
            sortValue1B_low = SLODWORD(this[1].fields.sortValue1B);
            v14 = v4->fields._IconInfo1_k__BackingField;
            v4->fields.sortValue1 = sortValue1B_low;
            this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__getLevelMax(
                                                                    (UserServantEntity_o *)this,
                                                                    0);
            if ( v14 )
            {
              IconLabelInfo__Set_47932852(v14, 2, sortValue1B_low, (int32_t)this, 0, 0, 0, 0, 0, 0);
LABEL_148:
              LOBYTE(this) = 1;
              return (char)this;
            }
          }
LABEL_150:
          sub_21FFECC(this, sort);
        }
        v42 = v4->fields.rarity;
        goto LABEL_84;
      }
      v33 = v4->fields._UserServant_k__BackingField;
      if ( !v33 )
        goto LABEL_150;
      v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v69.fields.fakeValue = v34;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v11);
      v68 = v69;
      this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                              &v68,
                                                              0);
      v35 = v4->fields._UserServant_k__BackingField;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v35 )
        goto LABEL_150;
      this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._IconInfo1_k__BackingField;
      if ( !this )
        goto LABEL_150;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v35->fields.createdAt, 0, 0, 0, 0);
    }
    this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
    if ( !this )
      goto LABEL_150;
    IconInfo1_k__BackingField = v4->fields._IconInfo2_k__BackingField;
LABEL_146:
    sortValue1B = this[1].fields.sortValue1B;
    this = (RecommendSupportServantSelectListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
    if ( IconInfo1_k__BackingField )
    {
      IconLabelInfo__Set_47932852(IconInfo1_k__BackingField, 2, sortValue1B, (int32_t)this, 0, 0, 0, 0, 0, 0);
      goto LABEL_148;
    }
    goto LABEL_150;
  }
  bonusKind2 = sort->fields.bonusKind2;
  if ( bonusKind2 <= 3 )
  {
    if ( bonusKind2 )
    {
      if ( bonusKind2 != 3 )
        goto LABEL_6;
      if ( v4->fields.bonusKind == 3 )
      {
        bonusKind2Id = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == bonusKind2Id )
          goto LABEL_127;
      }
      else
      {
        bonusKind2Id = sort->fields.bonusKind2Id;
      }
      v49 = DataManager_TypeInfo;
      v4->fields.bonusKind = 3;
      v4->fields.bonusKindId = bonusKind2Id;
      if ( !*(&v49->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v49, sort, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v53 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50, v51);
      *(_QWORD *)&v73.fields.currentCryptoKey = v53;
      *(_QWORD *)&v73.fields.fakeValue = v54;
      this = (RecommendSupportServantSelectListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                              v73,
                                                              0);
      if ( !Master_object )
        goto LABEL_150;
      IsEnableServant = EventCampaignMaster__IsEnableServant(
                          (EventCampaignMaster_o *)Master_object,
                          (int32_t)this,
                          v4->fields.bonusKindId,
                          0);
      goto LABEL_108;
    }
    if ( v4->fields.bonusKind )
    {
      v48 = sort->fields.bonusKind2Id;
    }
    else
    {
      v48 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v48 )
        goto LABEL_127;
    }
    v4->fields.bonusKind = 0;
    v4->fields.bonusKindId = v48;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, method);
    this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventGroupMaster___);
    if ( !this )
      goto LABEL_150;
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
    this = (RecommendSupportServantSelectListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                            (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                            0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !EntitiesByGroupId )
        goto LABEL_150;
      if ( EntitiesByGroupId->fields._size >= 2 )
      {
        v59 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventGroupEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v59,
          (Il2CppObject *)v4,
          Method_RecommendSupportServantSelectListViewItem__SetSortValue_b__95_0__,
          0);
        v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                    (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                    (System_Func_T__bool__o *)v59,
                                    (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EventGroupEntity___);
      }
    }
LABEL_127:
    if ( v4->fields.isEventUpVal )
      goto LABEL_6;
    goto LABEL_128;
  }
  if ( (unsigned int)(bonusKind2 - 4) >= 2 )
  {
    if ( bonusKind2 != 7 )
      goto LABEL_6;
    if ( v4->fields.bonusKind == 7 )
    {
      v32 = sort->fields.bonusKind2Id;
      if ( v4->fields.bonusKindId == v32 )
        goto LABEL_127;
    }
    else
    {
      v32 = sort->fields.bonusKind2Id;
    }
    v4->fields.bonusKind = 7;
    v4->fields.bonusKindId = v32;
    this = (RecommendSupportServantSelectListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_150;
    this = (RecommendSupportServantSelectListViewItem_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)this,
                                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    if ( !this )
      goto LABEL_150;
    IsEnableServant = ServantFilterMaster__IsEnableServant(
                        (ServantFilterMaster_o *)this,
                        v4->fields.svtId,
                        v4->fields.bonusKindId,
                        0);
    goto LABEL_108;
  }
  if ( v4->fields.bonusKind == bonusKind2 )
  {
    v21 = sort->fields.bonusKind2Id;
    if ( v4->fields.bonusKindId == v21 )
      goto LABEL_127;
  }
  else
  {
    v21 = sort->fields.bonusKind2Id;
  }
  this = (RecommendSupportServantSelectListViewItem_o *)v4->fields._UserServant_k__BackingField;
  v4->fields.bonusKind = bonusKind2;
  v4->fields.bonusKindId = v21;
  if ( !this )
    goto LABEL_150;
  IsEnableServant = UserServantEntity__getEventUpVal((UserServantEntity_o *)this, v4->fields.eventSetupInfo, v21, 0, 0);
LABEL_108:
  v4->fields.isEventUpVal = IsEnableServant;
  if ( IsEnableServant )
    goto LABEL_6;
LABEL_128:
  LOBYTE(this) = 0;
  return (char)this;
}


bool RecommendSupportServantSelectListViewItem__SwapChoice(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL4 IsSwapChoice_k__BackingField; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  IsSwapChoice_k__BackingField = this->fields._IsSwapChoice_k__BackingField;
  v4 = !IsSwapChoice_k__BackingField;
  v5 = !IsSwapChoice_k__BackingField;
  result = v4;
  this->fields._IsSwapChoice_k__BackingField = v5;
  return result;
}


bool RecommendSupportServantSelectListViewItem__SwapLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL4 IsSwapLock_k__BackingField; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  IsSwapLock_k__BackingField = this->fields._IsSwapLock_k__BackingField;
  v4 = !IsSwapLock_k__BackingField;
  v5 = !IsSwapLock_k__BackingField;
  result = v4;
  this->fields._IsSwapLock_k__BackingField = v5;
  return result;
}


__f__AnonymousType4_EventCampaignEntity__int__o *RecommendSupportServantSelectListViewItem___GetFriendPointBonus_b__114_0(
        RecommendSupportServantSelectListViewItem_o *this,
        EventCampaignEntity_o *t,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItem_o *v4; // x20
  System_Int32_array *targetIds; // x21
  int32_t SvtId; // w0
  int32_t v7; // w20
  __f__AnonymousType4__t_j__TPar___indexOf_j__TPar__o *v8; // x21

  v4 = this;
  if ( (byte_5934438 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&Method___f__AnonymousType4_EventCampaignEntity__int___ctor__);
    this = (RecommendSupportServantSelectListViewItem_o *)sub_21FFC50(&_f__AnonymousType4_EventCampaignEntity__int__TypeInfo);
    byte_5934438 = 1;
  }
  if ( !t )
    sub_21FFECC(this, t);
  targetIds = t->fields.targetIds;
  SvtId = RecommendSupportServantSelectListViewItem__get_SvtId(v4, (const MethodInfo *)t);
  v7 = System_Array__IndexOf_int_(targetIds, SvtId, (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___);
  v8 = (__f__AnonymousType4__t_j__TPar___indexOf_j__TPar__o *)sub_21FFEBC(_f__AnonymousType4_EventCampaignEntity__int__TypeInfo);
  _f__AnonymousType4_object__int____ctor(
    v8,
    (Il2CppObject *)t,
    v7,
    (const MethodInfo_3ADE3C4 *)Method___f__AnonymousType4_EventCampaignEntity__int___ctor__);
  return (__f__AnonymousType4_EventCampaignEntity__int__o *)v8;
}


bool RecommendSupportServantSelectListViewItem___SetSortValue_b__95_0(
        RecommendSupportServantSelectListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x22
  __int64 v9; // x23
  EventCampaignMaster_o *v10; // x21
  ServantFilterMaster_o *UserServant_k__BackingField; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5934437 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5934437 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (EventCampaignMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  UserServant_k__BackingField = (ServantFilterMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                           v16,
                                                           0);
  if ( !entity || !v10 )
    goto LABEL_17;
  if ( EventCampaignMaster__IsEnableServant(v10, (int32_t)UserServant_k__BackingField, entity->fields.eventId, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  UserServant_k__BackingField = (ServantFilterMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !UserServant_k__BackingField )
    goto LABEL_17;
  if ( ServantFilterMaster__IsEnableServant(UserServant_k__BackingField, this->fields.svtId, entity->fields.eventId, 0) )
    return 1;
  UserServant_k__BackingField = (ServantFilterMaster_o *)this->fields._UserServant_k__BackingField;
  if ( !UserServant_k__BackingField )
LABEL_17:
    sub_21FFECC(UserServant_k__BackingField, v12);
  return UserServantEntity__getEventUpVal(
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
  __int64 v2; // x2

  if ( (byte_5934432 & 1) == 0 )
  {
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5934432 = 1;
  }
  if ( !this->fields.isHeroine )
    return 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47357952(126, 0);
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
  if ( this->fields._IsSwapChoice_k__BackingField )
    return !this->fields._IsChoice_k__BackingField;
  else
    return this->fields._IsChoice_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsDispLock(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields._IsSwapLock_k__BackingField )
    return !this->fields._IsLock_k__BackingField;
  else
    return this->fields._IsLock_k__BackingField;
}


bool RecommendSupportServantSelectListViewItem__get_IsEnabled(
        RecommendSupportServantSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnabled_k__BackingField;
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

  if ( (byte_5934434 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_5934434 = 1;
  }
  *(_QWORD *)questPhase = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (klass = (RecommendSupportData_o *)Instance[7].klass,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !klass )
  {
    sub_21FFECC(Instance, v4);
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
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *UserServant_k__BackingField; // x8
  RecommendSupportSelectControl_o *v7; // x19
  __int128 v8; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_5934433 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_5934433 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (RecommendSupportSelectControl_o *)RecommendSupportSelectControl__get_SelectServantId(Instance, v4),
        (UserServant_k__BackingField = this->fields._UserServant_k__BackingField) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  v7 = Instance;
  v8 = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&UserServant_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
  v10 = v11;
  return v7 == (RecommendSupportSelectControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                    &v10,
                                                    0);
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
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_5934431 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5934431 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v7, 0);
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


void RecommendSupportServantSelectListViewItem__set_ClassId(
        RecommendSupportServantSelectListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ClassId_k__BackingField = value;
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


void RecommendSupportServantSelectListViewItem__set_Servant(
        RecommendSupportServantSelectListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Servant_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Servant_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportServantSelectListViewItem__set_UserServant(
        RecommendSupportServantSelectListViewItem_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserServant_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServant_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportServantSelectListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593443B & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportServantSelectListViewItem___c_TypeInfo);
    byte_593443B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RecommendSupportServantSelectListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields->__9 = (struct RecommendSupportServantSelectListViewItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportServantSelectListViewItem___c_TypeInfo->static_fields,
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


__f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__o *RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__114_1(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType4_EventCampaignEntity__int__o *h__TransparentIdentifier0,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *t_i__Field; // x9
  struct System_Int32_array *targetIds; // x9
  char v6; // w20
  __f__AnonymousType5____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *v7; // x21

  if ( (byte_593443C & 1) == 0 )
  {
    sub_21FFC50(&Method___f__AnonymousType4_EventCampaignEntity__int__get_t__);
    sub_21FFC50(&Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___ctor__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_21FFC50(&_f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__TypeInfo);
    byte_593443C = 1;
  }
  if ( !h__TransparentIdentifier0 || (t_i__Field = h__TransparentIdentifier0->fields._t_i__Field) == 0 )
    sub_21FFECC(this, h__TransparentIdentifier0);
  targetIds = t_i__Field->fields.targetIds;
  if ( targetIds )
    v6 = LODWORD(targetIds->max_length) == 0;
  else
    v6 = 1;
  v7 = (__f__AnonymousType5____h__TransparentIdentifier0_j__TPar___isAllTarget_j__TPar__o *)sub_21FFEBC(_f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__TypeInfo);
  _f__AnonymousType5_object__bool____ctor(
    v7,
    (Il2CppObject *)h__TransparentIdentifier0,
    v6,
    (const MethodInfo_3ADF110 *)Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool___ctor__);
  return (__f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__o *)v7;
}


bool RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__114_2(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  struct __f__AnonymousType4_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_593443D & 1) == 0 )
  {
    sub_21FFC50(&Method___f__AnonymousType4_EventCampaignEntity__int__get_indexOf__);
    sub_21FFC50(&Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_21FFC50(&Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__get_isAllTarget__);
    byte_593443D = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0 )
  {
    sub_21FFECC(this, h__TransparentIdentifier1);
  }
  return (h__TransparentIdentifier0_i__Field->fields._indexOf_i__Field & 0x80000000) == 0
      || h__TransparentIdentifier1->fields._isAllTarget_i__Field;
}


EventCampaignEntity_o *RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__114_3(
        RecommendSupportServantSelectListViewItem___c_o *this,
        __f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__o *h__TransparentIdentifier1,
        const MethodInfo *method)
{
  struct __f__AnonymousType4_EventCampaignEntity__int__o *h__TransparentIdentifier0_i__Field; // x8

  if ( (byte_593443E & 1) == 0 )
  {
    sub_21FFC50(&Method___f__AnonymousType4_EventCampaignEntity__int__get_t__);
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_21FFC50(&Method___f__AnonymousType5___f__AnonymousType4_EventCampaignEntity__int___bool__get___h__TransparentIdentifier0__);
    byte_593443E = 1;
  }
  if ( !h__TransparentIdentifier1
    || (h__TransparentIdentifier0_i__Field = h__TransparentIdentifier1->fields.___h__TransparentIdentifier0_i__Field) == 0 )
  {
    sub_21FFECC(this, h__TransparentIdentifier1);
  }
  return h__TransparentIdentifier0_i__Field->fields._t_i__Field;
}


// local variable allocation has failed, the output may be wrong!
int32_t RecommendSupportServantSelectListViewItem___c___GetFriendPointBonus_b__114_4(
        RecommendSupportServantSelectListViewItem___c_o *this,
        int32_t current,
        EventCampaignEntity_o *t,
        const MethodInfo *method)
{
  int32_t value; // w20

  if ( (byte_593443F & 1) == 0 )
  {
    this = (RecommendSupportServantSelectListViewItem___c_o *)sub_21FFC50(&System_Math_TypeInfo);
    byte_593443F = 1;
  }
  if ( !t )
    sub_21FFECC(this, *(_QWORD *)&current);
  value = t->fields.value;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&current, t);
  return System_Math__Max_76939956(current, value, 0);
}