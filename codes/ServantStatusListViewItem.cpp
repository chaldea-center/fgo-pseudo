void __fastcall ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int64_t Instance; // x0
  __int64 v18; // x1
  struct PartyOrganizationListViewItem_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  char v26; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t pushUserSvtId; // x9
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct PartyOrganizationListViewItem_o *v58; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v60; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x21
  __int64 v62; // x22
  __int64 v63; // x23
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  ServantLimitMaster_o *v72; // x22
  int32_t v73; // w23
  struct ServantLimitEntity_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  ServantCommentMaster_o *v81; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v89; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // q1
  UserServantCollectionMaster_o *v91; // x22
  int64_t v92; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct PartyOrganizationListViewItem_o *v100; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_21590892; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  const MethodInfo *v118; // x1
  struct UserServantCollectionEntity_o *v119; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v121; // x8
  int32_t v122; // w8
  struct System_Int64_array *equipIdList; // x9
  UserServantEntity_o *v124; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v126; // x2
  struct System_Int64_array *v127; // x8
  int64_t v128; // x1
  struct UserServantCollectionEntity_o *v129; // x8
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v137; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v139; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v141; // x8
  int32_t v142; // w0
  UserServantEntity_o *v143; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v145; // x2
  UserServantEntity_o *v146; // x0
  int32_t v147; // w0
  UserServantEntity_o *v148; // x8
  int32_t v149; // w0
  UserServantEntity_o *v150; // x1
  const MethodInfo *v151; // x1
  const MethodInfo *v152; // x2
  RandomLimitCountManager_c *v153; // x0
  __int64 v154; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16

  if ( (byte_4359304 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_4359304 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)partyItem,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !partyItem )
    goto LABEL_81;
  v19 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberItem,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
    goto LABEL_85;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL) )
  {
LABEL_85:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_81;
    v26 = *(_BYTE *)(Instance + 96) ^ 1;
  }
  else
  {
    v26 = 0;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v26;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_81;
  this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
  pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  memberItem = this->fields.memberItem;
  this->fields.pushUserSvtId = pushUserSvtId;
  if ( !memberItem )
    goto LABEL_81;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_81;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)EquipList,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v58 = this->fields.memberItem;
  if ( !v58 )
    goto LABEL_81;
  questRestrictionInfo = v58->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v60 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v63 = *(_QWORD *)&v60[5].fields.currentCryptoKey;
  v62 = *(_QWORD *)&v60[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v157.fields.currentCryptoKey = v63;
  *(_QWORD *)&v157.fields.fakeValue = v62;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v157, 0LL);
  if ( !v61 )
    goto LABEL_81;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v61,
                                       Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v72 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v73 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[6], 0LL);
  if ( !v72 )
    goto LABEL_81;
  v74 = ServantLimitMaster__GetEntity(v72, v73, Instance, 0LL);
  this->fields.svtLimitEntity = v74;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_81;
  v81 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_svtEntity)[1], 0LL);
  if ( !v81 )
    goto LABEL_81;
  EntityList = ServantCommentMaster__GetEntityList(v81, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v89 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v90 = v89[4];
  v91 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.currentCryptoKey = v89[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v156.fields.fakeValue = v90;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v155 = v156;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v155, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v92 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[5], 0LL);
  if ( !v91 )
    goto LABEL_81;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v91, v92, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v100 = this->fields.memberItem;
  if ( !v100 )
    goto LABEL_81;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v100->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_81;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_81;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_81;
  CostumeList_21590892 = UserServantCollectionEntity__getCostumeList_21590892(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_21590892;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList_21590892,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v118);
  v119 = this->fields.userSvtCollectionEntity;
  if ( !v119 )
    goto LABEL_81;
  svtCommonFlag = v119->fields.svtCommonFlag;
  v121 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v121 )
    goto LABEL_81;
  v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v121->fields.battleVoice, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v122;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_81;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v124 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v124 )
    goto LABEL_81;
  IsChoice = UserServantEntity__IsChoice(v124, 0LL);
  v127 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v127 )
  {
    if ( !v127->max_length )
    {
      v154 = sub_B70798(IsChoice);
      sub_B70738(v154, 0LL);
    }
    v128 = v127->m_Items[0];
  }
  else
  {
    v128 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v128, v126);
  v129 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v129 != 0LL;
  if ( !Instance )
    goto LABEL_81;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_55;
    }
LABEL_81:
    sub_B7076C(Instance, v18);
  }
  IsNameTrue = 0;
LABEL_55:
  v137 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v137 != 0LL;
  if ( !v137 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_61;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v137, 0LL);
  v139 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v139 )
  {
LABEL_61:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_62;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v139, 0LL);
  v141 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v141 )
  {
LABEL_62:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_63;
  }
  v142 = BasicHelper__DecryptValue_20858460(v141->fields.limitCountSupport, 0LL);
  v143 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v142;
  if ( v143 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v143, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_63:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v146 = this->fields.userSvtEntity;
  if ( !v146 )
  {
    v150 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
LABEL_68:
    v149 = 3;
    goto LABEL_69;
  }
  v147 = UserServantEntity__OwnRandomSettingSelectedButton(v146, 0LL);
  v148 = this->fields.userSvtEntity;
  this->fields.ownRandomSettingButtonIndex = v147;
  if ( !v148 )
  {
    v150 = 0LL;
    goto LABEL_68;
  }
  v149 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v148, 0LL);
  v150 = (UserServantEntity_o *)*p_userSvtEntity;
LABEL_69:
  this->fields.supportRandomSettingButtonIndex = v149;
  ServantStatusListViewItem__SetLimitCountInfo(this, v150, v145);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v153 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v153 = RandomLimitCountManager_TypeInfo;
  }
  if ( v153->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v152);
  ServantStatusListViewItem__ModifyInfo(this, v151);
}


void __fastcall ServantStatusListViewItem___ctor_36336776(
        ServantStatusListViewItem_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int64_t Instance; // x0
  __int64 v16; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t pushUserSvtId; // x9
  struct PartyOrganizationListViewItem_o *v39; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct PartyOrganizationListViewItem_o *v55; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x21
  __int64 v59; // x22
  __int64 v60; // x23
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  ServantLimitMaster_o *v69; // x22
  int32_t v70; // w23
  struct ServantLimitEntity_o *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  ServantCommentMaster_o *v78; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // q1
  UserServantCollectionMaster_o *v88; // x22
  int64_t v89; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  struct PartyOrganizationListViewItem_o *v97; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_21590892; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  const MethodInfo *v115; // x1
  struct UserServantCollectionEntity_o *v116; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v118; // x8
  int32_t v119; // w8
  struct System_Int64_array *equipIdList; // x9
  UserServantEntity_o *v121; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v123; // x2
  struct System_Int64_array *v124; // x8
  int64_t v125; // x1
  struct UserServantCollectionEntity_o *v126; // x8
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v134; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v136; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v138; // x8
  int32_t v139; // w0
  UserServantEntity_o *v140; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v142; // x2
  UserServantEntity_o *v143; // x0
  int32_t v144; // w0
  UserServantEntity_o *v145; // x8
  int32_t v146; // w0
  UserServantEntity_o *v147; // x1
  const MethodInfo *v148; // x1
  const MethodInfo *v149; // x2
  RandomLimitCountManager_c *v150; // x0
  __int64 v151; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16

  if ( (byte_4359305 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4359305 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.warBoardPartyItem,
    (System_Int32_array **)partyItem,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !partyItem )
    goto LABEL_71;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.memberItem,
    (System_Int32_array **)MemberItem,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_71;
  this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
  pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  v39 = this->fields.memberItem;
  this->fields.pushUserSvtId = pushUserSvtId;
  if ( !v39 )
    goto LABEL_71;
  userServantEntity = v39->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_71;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)EquipList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v55 = this->fields.memberItem;
  if ( !v55 )
    goto LABEL_71;
  questRestrictionInfo = v55->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v57 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v60 = *(_QWORD *)&v57[5].fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v154.fields.currentCryptoKey = v60;
  *(_QWORD *)&v154.fields.fakeValue = v59;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v154, 0LL);
  if ( !v58 )
    goto LABEL_71;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v58,
                                       Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v69 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v70 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[6], 0LL);
  if ( !v69 )
    goto LABEL_71;
  v71 = ServantLimitMaster__GetEntity(v69, v70, Instance, 0LL);
  this->fields.svtLimitEntity = v71;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_71;
  v78 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_svtEntity)[1], 0LL);
  if ( !v78 )
    goto LABEL_71;
  EntityList = ServantCommentMaster__GetEntityList(v78, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v86 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v87 = v86[4];
  v88 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v153.fields.currentCryptoKey = v86[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v153.fields.fakeValue = v87;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v152 = v153;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v152, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_71;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[5], 0LL);
  if ( !v88 )
    goto LABEL_71;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v88, v89, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v97 = this->fields.memberItem;
  if ( !v97 )
    goto LABEL_71;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v97->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_71;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_71;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_71;
  CostumeList_21590892 = UserServantCollectionEntity__getCostumeList_21590892(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_21590892;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList_21590892,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v115);
  v116 = this->fields.userSvtCollectionEntity;
  if ( !v116 )
    goto LABEL_71;
  svtCommonFlag = v116->fields.svtCommonFlag;
  v118 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v118 )
    goto LABEL_71;
  v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v118->fields.battleVoice, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v119;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_71;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v121 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v121 )
    goto LABEL_71;
  IsChoice = UserServantEntity__IsChoice(v121, 0LL);
  v124 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v124 )
  {
    if ( !v124->max_length )
    {
      v151 = sub_B70798(IsChoice);
      sub_B70738(v151, 0LL);
    }
    v125 = v124->m_Items[0];
  }
  else
  {
    v125 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v125, v123);
  v126 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v126 != 0LL;
  if ( !Instance )
    goto LABEL_71;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_45;
    }
LABEL_71:
    sub_B7076C(Instance, v16);
  }
  IsNameTrue = 0;
LABEL_45:
  v134 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v134 != 0LL;
  if ( !v134 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v134, 0LL);
  v136 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v136 )
  {
LABEL_51:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_52;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v136, 0LL);
  v138 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v138 )
  {
LABEL_52:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_53;
  }
  v139 = BasicHelper__DecryptValue_20858460(v138->fields.limitCountSupport, 0LL);
  v140 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v139;
  if ( v140 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v140, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_53:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v143 = this->fields.userSvtEntity;
  if ( !v143 )
  {
    v147 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
LABEL_58:
    v146 = 3;
    goto LABEL_59;
  }
  v144 = UserServantEntity__OwnRandomSettingSelectedButton(v143, 0LL);
  v145 = this->fields.userSvtEntity;
  this->fields.ownRandomSettingButtonIndex = v144;
  if ( !v145 )
  {
    v147 = 0LL;
    goto LABEL_58;
  }
  v146 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v145, 0LL);
  v147 = (UserServantEntity_o *)*p_userSvtEntity;
LABEL_59:
  this->fields.supportRandomSettingButtonIndex = v146;
  ServantStatusListViewItem__SetLimitCountInfo(this, v147, v142);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v150 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v150 = RandomLimitCountManager_TypeInfo;
  }
  if ( v150->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v149);
  ServantStatusListViewItem__ModifyInfo(this, v148);
}


void __fastcall ServantStatusListViewItem___ctor_36338452(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        bool enableBattleVoice,
        bool canMoveCombine,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int64_t Instance; // x0
  __int64 v26; // x1
  char v27; // w8
  __int128 v28; // q1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x24
  __int64 v51; // x26
  __int64 v52; // x27
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x24
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  ServantLimitMaster_o *v61; // x26
  int32_t v62; // w27
  struct ServantLimitEntity_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  ServantCommentMaster_o *v70; // x26
  int32_t v71; // w27
  struct ServantCommentEntity_array *EntityList_27485772; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v79; // x8
  __int64 v80; // x26
  __int64 v81; // x27
  int32_t v82; // w0
  bool IsConvertOverwriteImage; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // q0
  int64_t v86; // x25
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v93; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // q0
  UserServantCollectionMaster_o *v95; // x25
  bool v96; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  int64_t v98; // x26
  __int64 v99; // x27
  __int64 v100; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x25
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x26
  int32_t lv; // w27
  struct System_Int32_array *CostumeList_21590892; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  const MethodInfo *v126; // x1
  struct System_Int32_array *v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  struct UserServantEntity_o *v146; // x8
  __int64 v147; // x25
  __int64 v148; // x26
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  UserServantEntity_o *v161; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  const MethodInfo *v164; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v165; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // q0
  UserDeckMaster_o *v167; // x23
  bool v168; // w20
  bool v169; // w8
  struct System_Int64_array *v170; // x9
  int64_t v171; // x1
  struct UserServantCollectionEntity_o *v172; // x8
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v180; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v182; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v184; // x8
  int32_t v185; // w0
  UserServantEntity_o *v186; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v188; // x2
  UserServantEntity_o *v189; // x0
  int32_t v190; // w0
  UserServantEntity_o *v191; // x8
  int32_t v192; // w0
  UserServantEntity_o *v193; // x1
  const MethodInfo *v194; // x1
  const MethodInfo *v195; // x2
  RandomLimitCountManager_c *v196; // x0
  __int64 v197; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v198; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v199; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v200; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v201; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v202; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v203; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16

  if ( (byte_4359306 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_4359306 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
    goto LABEL_122;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
  if ( (Instance & 1) != 0 )
  {
LABEL_122:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_118;
    v27 = *(_BYTE *)(Instance + 96) ^ 1;
  }
  else
  {
    v27 = 0;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v27;
  if ( !userServant )
    goto LABEL_118;
  v28 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v202.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v202.fields.fakeValue = v28;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v201 = v202;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v201, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_118;
  if ( Instance == userGameEntity->fields.userId )
  {
    this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
    this->fields.pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v29, v30, v31, v32, v33, v34);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServant,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.equipIdList = equipIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)equipIdList,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v49 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_118;
  v50 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v52 = *(_QWORD *)&v49[5].fields.currentCryptoKey;
  v51 = *(_QWORD *)&v49[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v203.fields.currentCryptoKey = v52;
  *(_QWORD *)&v203.fields.fakeValue = v51;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v203, 0LL);
  if ( !v50 )
    goto LABEL_118;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v50,
                                       Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_118;
  v61 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_118;
  v62 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[6], 0LL);
  if ( !v61 )
    goto LABEL_118;
  v63 = ServantLimitMaster__GetEntity(v61, v62, Instance, 0LL);
  this->fields.svtLimitEntity = v63;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_118;
  v70 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_118;
  v71 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[7], 0LL);
  if ( !v70 )
    goto LABEL_118;
  EntityList_27485772 = ServantCommentMaster__GetEntityList_27485772(v70, v71, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList_27485772;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList_27485772,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  if ( questRestrictionInfo )
  {
    v79 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_118;
    v81 = *(_QWORD *)&v79[5].fields.currentCryptoKey;
    v80 = *(_QWORD *)&v79[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v204.fields.currentCryptoKey = v81;
    *(_QWORD *)&v204.fields.fakeValue = v80;
    v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v204, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v82, 0LL);
  }
  else
  {
    IsConvertOverwriteImage = 0;
  }
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v84 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_118:
    sub_B7076C(Instance, v26);
  v85 = v84[4];
  v86 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v202.fields.currentCryptoKey = v84[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v202.fields.fakeValue = v85;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v200 = v202;
  if ( v86 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v200, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v93 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_118;
    v94 = v93[4];
    v95 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v202.fields.currentCryptoKey = v93[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v202.fields.fakeValue = v94;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v96 = enableBattleVoice;
    v199 = v202;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v199, 0LL);
    v97 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_118;
    v98 = Instance;
    v100 = *(_QWORD *)&v97[5].fields.currentCryptoKey;
    v99 = *(_QWORD *)&v97[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v205.fields.currentCryptoKey = v100;
    *(_QWORD *)&v205.fields.fakeValue = v99;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v205, 0LL);
    if ( !v95 )
      goto LABEL_118;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v95, v98, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      (System_Int32_array **)EntityDefinitely,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_118;
    enableBattleVoice = v96;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)CommandCodeIdList,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_118;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_118;
    CostumeList_21590892 = UserServantCollectionEntity__getCostumeList_21590892(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_21590892;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.costumeIds,
      (System_Int32_array **)CostumeList_21590892,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v126);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v87, v88, v89, v90, v91, v92);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_118;
    v127 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v127;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)v127,
      v128,
      v129,
      v130,
      v131,
      v132,
      v133);
    this->fields.costumeIds = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v134, v135, v136, v137, v138, v139);
    this->fields.costumeAndOtherIds = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.costumeAndOtherIds,
      0LL,
      v140,
      v141,
      v142,
      v143,
      v144,
      v145);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_118;
  v146 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  if ( !v146 )
    goto LABEL_118;
  v148 = *(_QWORD *)&v146->fields.battleVoice.fields.currentCryptoKey;
  v147 = *(_QWORD *)&v146->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v206.fields.currentCryptoKey = v148;
  *(_QWORD *)&v206.fields.fakeValue = v147;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v206, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v149, v150, v151, v152, v153, v154);
  this->fields.equipTargetInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v155, v156, v157, v158, v159, v160);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_118;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v161 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v161 )
    goto LABEL_118;
  Instance = UserServantEntity__IsChoice(v161, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_118;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v165 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_118;
    v166 = v165[2];
    v167 = (UserDeckMaster_o *)Instance;
    v168 = enableTdSpeed;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v202.fields.currentCryptoKey = v165[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v202.fields.fakeValue = v166;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v198 = v202;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v198, 0LL);
    if ( !v167 )
      goto LABEL_118;
    IsServantEquip = UserDeckMaster__IsEquip(v167, Instance, 0LL);
    v169 = IsServantEquip;
  }
  else
  {
    v168 = enableTdSpeed;
    v169 = 0;
  }
  v170 = this->fields.equipIdList;
  this->fields.isUse = v169;
  if ( v170 )
  {
    if ( !v170->max_length )
    {
      v197 = sub_B70798(IsServantEquip);
      sub_B70738(v197, 0LL);
    }
    v171 = v170->m_Items[0];
  }
  else
  {
    v171 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v171, v164);
  v172 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v172 != 0LL && v168;
  if ( !Instance )
    goto LABEL_118;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_92;
    }
    goto LABEL_118;
  }
  IsNameTrue = 0;
LABEL_92:
  v180 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue && enableBattleVoice;
  this->fields.isDisplayRandomLimitCount = v180 != 0LL;
  if ( !v180 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_98;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v180, 0LL);
  v182 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v182 )
  {
LABEL_98:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_99;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v182, 0LL);
  v184 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v184 )
  {
LABEL_99:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_100;
  }
  v185 = BasicHelper__DecryptValue_20858460(v184->fields.limitCountSupport, 0LL);
  v186 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v185;
  if ( v186 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v186, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_100:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  v189 = this->fields.userSvtEntity;
  if ( !v189 )
  {
    v193 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
LABEL_105:
    v192 = 3;
    goto LABEL_106;
  }
  v190 = UserServantEntity__OwnRandomSettingSelectedButton(v189, 0LL);
  v191 = this->fields.userSvtEntity;
  this->fields.ownRandomSettingButtonIndex = v190;
  if ( !v191 )
  {
    v193 = 0LL;
    goto LABEL_105;
  }
  v192 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v191, 0LL);
  v193 = (UserServantEntity_o *)*p_userSvtEntity;
LABEL_106:
  this->fields.supportRandomSettingButtonIndex = v192;
  ServantStatusListViewItem__SetLimitCountInfo(this, v193, v188);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v196 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v196 = RandomLimitCountManager_TypeInfo;
  }
  if ( v196->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v195);
  ServantStatusListViewItem__ModifyInfo(this, v194);
}


void __fastcall ServantStatusListViewItem___ctor_36340984(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int64_t Instance; // x0
  __int64 v16; // x1
  __int128 v17; // q1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x22
  __int64 v40; // x23
  __int64 v41; // x24
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  ServantLimitMaster_o *v50; // x23
  int32_t v51; // w24
  struct ServantLimitEntity_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  ServantCommentMaster_o *v59; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // q0
  int64_t v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // q0
  UserServantCollectionMaster_o *v78; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v79; // x8
  int64_t v80; // x24
  __int64 v81; // x25
  __int64 v82; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x24
  int32_t lv; // w25
  struct System_Int32_array *CostumeList_21590892; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  const MethodInfo *v108; // x1
  struct System_Int32_array *v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct UserServantEntity_o *v128; // x8
  __int64 v129; // x23
  __int64 v130; // x24
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  UserServantEntity_o *v143; // x8
  const MethodInfo *v144; // x2
  struct UserServantCollectionEntity_o *v145; // x8
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  bool IsNameTrue; // w8
  struct UserServantEntity_o *v153; // x9
  int32_t v154; // w0
  UserServantEntity_o *v155; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v157; // x2
  UserServantEntity_o *v158; // x0
  int32_t v159; // w0
  UserServantEntity_o *v160; // x8
  int32_t v161; // w0
  UserServantEntity_o *v162; // x1
  const MethodInfo *v163; // x1
  const MethodInfo *v164; // x2
  RandomLimitCountManager_c *v165; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16

  if ( (byte_4359307 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4359307 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_82;
  v17 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v169.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v168 = v169;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v168, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_82;
  if ( Instance == userGameEntity->fields.userId )
  {
    this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
    this->fields.pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v18, v19, v20, v21, v22, v23);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServant,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.equipIdList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.questRestrictionInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v32, v33, v34, v35, v36, v37);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_82;
  v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v41 = *(_QWORD *)&v38[5].fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v170.fields.currentCryptoKey = v41;
  *(_QWORD *)&v170.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v170, 0LL);
  if ( !v39 )
    goto LABEL_82;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v39,
                                       Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_82;
  v50 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_82;
  v51 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_userSvtEntity)[6], 0LL);
  if ( !v50 )
    goto LABEL_82;
  v52 = ServantLimitMaster__GetEntity(v50, v51, Instance, 0LL);
  this->fields.svtLimitEntity = v52;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_82;
  v59 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_svtEntity)[1], 0LL);
  if ( !v59 )
    goto LABEL_82;
  EntityList = ServantCommentMaster__GetEntityList(v59, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.isConvertOverwriteImage = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v67 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_82;
  v68 = v67[4];
  v69 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v169.fields.currentCryptoKey = v67[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v169.fields.fakeValue = v68;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v167 = v169;
  if ( v69 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v167, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v76 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_82;
    v77 = v76[4];
    v78 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v169.fields.currentCryptoKey = v76[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v169.fields.fakeValue = v77;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v166 = v169;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v166, 0LL);
    v79 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_82;
    v80 = Instance;
    v82 = *(_QWORD *)&v79[5].fields.currentCryptoKey;
    v81 = *(_QWORD *)&v79[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v171.fields.currentCryptoKey = v82;
    *(_QWORD *)&v171.fields.fakeValue = v81;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v171, 0LL);
    if ( !v78 )
      goto LABEL_82;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v78, v80, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      (System_Int32_array **)EntityDefinitely,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_82;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)CommandCodeIdList,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_82;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_82;
    CostumeList_21590892 = UserServantCollectionEntity__getCostumeList_21590892(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_21590892;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.costumeIds,
      (System_Int32_array **)CostumeList_21590892,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v108);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v70, v71, v72, v73, v74, v75);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_82;
    v109 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v109;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)v109,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    this->fields.costumeIds = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v116, v117, v118, v119, v120, v121);
    this->fields.costumeAndOtherIds = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.costumeAndOtherIds,
      0LL,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_82;
  v128 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  if ( !v128 )
    goto LABEL_82;
  v130 = *(_QWORD *)&v128->fields.battleVoice.fields.currentCryptoKey;
  v129 = *(_QWORD *)&v128->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v172.fields.currentCryptoKey = v130;
  *(_QWORD *)&v172.fields.fakeValue = v129;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v172, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v131, v132, v133, v134, v135, v136);
  this->fields.equipTargetInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v137, v138, v139, v140, v141, v142);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_82;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v143 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v143 )
    goto LABEL_82;
  this->fields.isChoice = UserServantEntity__IsChoice(v143, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v144);
  v145 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v145 != 0LL;
  if ( !Instance )
    goto LABEL_82;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_60;
    }
LABEL_82:
    sub_B7076C(Instance, v16);
  }
  IsNameTrue = 0;
LABEL_60:
  v153 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v153 )
  {
    v154 = BasicHelper__DecryptValue_20858460(v153->fields.limitCountSupport, 0LL);
    v155 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v154;
    if ( v155 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v155, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v158 = this->fields.userSvtEntity;
  if ( !v158 )
  {
    v162 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
LABEL_70:
    v161 = 3;
    goto LABEL_71;
  }
  v159 = UserServantEntity__OwnRandomSettingSelectedButton(v158, 0LL);
  v160 = this->fields.userSvtEntity;
  this->fields.ownRandomSettingButtonIndex = v159;
  if ( !v160 )
  {
    v162 = 0LL;
    goto LABEL_70;
  }
  v161 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v160, 0LL);
  v162 = (UserServantEntity_o *)*p_userSvtEntity;
LABEL_71:
  this->fields.supportRandomSettingButtonIndex = v161;
  ServantStatusListViewItem__SetLimitCountInfo(this, v162, v157);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v165 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v165 = RandomLimitCountManager_TypeInfo;
  }
  if ( v165->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v164);
  ServantStatusListViewItem__ModifyInfo(this, v163);
}


void __fastcall ServantStatusListViewItem___ctor_36342860(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct UserServantCollectionEntity_o *v56; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x22
  __int64 v58; // x23
  __int64 v59; // x24
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  ServantLimitMaster_o *v68; // x23
  struct ServantLimitEntity_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  ServantCommentMaster_o *v77; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct System_Int32_array *CostumeList; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  const MethodInfo *v99; // x1
  BalanceConfig_c *v100; // x0
  struct UserServantCollectionEntity_o *v101; // x8
  __int64 v102; // x22
  __int64 v103; // x23
  int32_t v104; // w22
  int32_t maxLimitCount; // w23
  struct UserServantCollectionEntity_o *v106; // x8
  __int64 v107; // x22
  __int64 v108; // x23
  int32_t v109; // w22
  int32_t v110; // w23
  struct UserServantCollectionEntity_o *v111; // x8
  struct System_Int32_array *CardSelectList; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct UserServantCollectionEntity_o *v119; // x8
  struct UserServantCollectionEntity_o *v120; // x8
  struct System_Int32_array *SelectList; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct UserServantCollectionEntity_o *v128; // x8
  struct UserServantCollectionEntity_o *v129; // x8
  struct System_Int32_array *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v145; // x8
  struct System_Int32_array *v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v154; // x8
  struct System_Int32_array *v155; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  const MethodInfo *v162; // x2
  struct UserServantCollectionEntity_o *v163; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v165; // x8
  const MethodInfo *v166; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16

  if ( (byte_4359308 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4359308 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_62;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v19, v20, v21, v22, v23, v24);
  }
  this->fields.userSvtEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.questRestrictionInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.servantLeaderInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v44, v45, v46, v47, v48, v49);
  this->fields.equipTargetInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v50, v51, v52, v53, v54, v55);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v56 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v59 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v167.fields.currentCryptoKey = v59;
  *(_QWORD *)&v167.fields.fakeValue = v58;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v167, 0LL);
  if ( !v57 )
    goto LABEL_62;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v57,
                                       (int32_t)Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v68 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  if ( !v68 )
    goto LABEL_62;
  v69 = ServantLimitMaster__GetEntity(v68, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v69;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v76 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_62;
  v77 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v76[1], 0LL);
  if ( !v77 )
    goto LABEL_62;
  EntityList = ServantCommentMaster__GetEntityList(v77, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v99);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v100 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v100 = BalanceConfig_TypeInfo;
    }
    Instance = (DataManager_o *)(unsigned int)v100->static_fields->OtherImageLimitCount;
    goto LABEL_36;
  }
  v101 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v103 = *(_QWORD *)&v101->fields.svtId.fields.currentCryptoKey;
  v102 = *(_QWORD *)&v101->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v168.fields.currentCryptoKey = v103;
  *(_QWORD *)&v168.fields.fakeValue = v102;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v168, 0LL);
  if ( !*p_userSvtCollectionEntity )
LABEL_62:
    sub_B7076C(Instance, v18);
  v104 = (int)Instance;
  maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v104, maxLimitCount, 1, 0, 0LL);
LABEL_36:
  v106 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v106 )
    goto LABEL_62;
  v108 = *(_QWORD *)&v106->fields.svtId.fields.currentCryptoKey;
  v107 = *(_QWORD *)&v106->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v169.fields.currentCryptoKey = v108;
  *(_QWORD *)&v169.fields.fakeValue = v107;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v169, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v109 = (int)Instance;
  v110 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v109, v110, 1, 0, 0LL);
  v111 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v111 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v111->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  v119 = this->fields.userSvtCollectionEntity;
  if ( !v119 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v119->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v120 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v120 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v120->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v128 = this->fields.userSvtCollectionEntity;
  if ( !v128 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v128->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v129 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v129 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v129->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v130 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.commandCardSelectList = v130;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v130,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)CommandCardParam,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v145 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v145 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v145->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v146 = ImageLimitCount__GetCardSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.iconSelectList = v146;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v146,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v154 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v154 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v154->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v155 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.portraitSelectList = v155;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v155,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  v163 = this->fields.userSvtCollectionEntity;
  if ( !v163 )
    goto LABEL_62;
  svtCommonFlag = v163->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v162);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
    goto LABEL_62;
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v165 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v165 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v166);
}


void __fastcall ServantStatusListViewItem___ctor_36344544(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x24
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UserServantCollectionEntity_o *v58; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x22
  __int64 v60; // x24
  __int64 v61; // x25
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct UserServantCollectionEntity_o *v70; // x8
  ServantLimitMaster_o *v71; // x23
  struct ServantLimitEntity_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v79; // x8
  ServantCommentMaster_o *v80; // x22
  struct ServantCommentEntity_array *EntityList_27485772; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct System_Int32_array *CostumeList; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  const MethodInfo *v102; // x1
  struct UserServantCollectionEntity_o *v103; // x8
  int32_t v104; // w22
  struct UserServantCollectionEntity_o *v105; // x8
  int32_t v106; // w0
  struct UserServantCollectionEntity_o *v107; // x8
  int32_t v108; // w0
  struct System_Int32_array *CardSelectList; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct UserServantCollectionEntity_o *v116; // x8
  int32_t v117; // w0
  struct UserServantCollectionEntity_o *v118; // x8
  int32_t v119; // w0
  struct System_Int32_array *SelectList; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  struct UserServantCollectionEntity_o *v127; // x8
  int32_t v128; // w0
  struct UserServantCollectionEntity_o *v129; // x8
  int32_t v130; // w0
  struct System_Int32_array *v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v146; // x8
  int32_t v147; // w0
  struct System_Int32_array *v148; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v156; // x8
  int32_t v157; // w0
  struct System_Int32_array *v158; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  const MethodInfo *v165; // x2
  struct UserServantCollectionEntity_o *v166; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v168; // x8
  const MethodInfo *v169; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16

  if ( (byte_4359309 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4359309 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_37;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v21, v22, v23, v24, v25, v26);
  }
  this->fields.userSvtEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.equipIdList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.questRestrictionInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.servantLeaderInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v46, v47, v48, v49, v50, v51);
  this->fields.equipTargetInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v52, v53, v54, v55, v56, v57);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v58 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v61 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v170.fields.currentCryptoKey = v61;
  *(_QWORD *)&v170.fields.fakeValue = v60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v170, 0LL);
  if ( !v59 )
    goto LABEL_37;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v59,
                                       (int32_t)Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v70 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v71 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v70->fields.svtId,
                                0LL);
  if ( !v71 )
    goto LABEL_37;
  v72 = ServantLimitMaster__GetEntity(v71, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v72;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v79 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_37;
  v80 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v79[1], 0LL);
  if ( !v80 )
    goto LABEL_37;
  EntityList_27485772 = ServantCommentMaster__GetEntityList_27485772(v80, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList_27485772;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList_27485772,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v102);
  v103 = this->fields.userSvtCollectionEntity;
  if ( !v103 )
    goto LABEL_37;
  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v103->fields.svtId, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v104, limitCount, 1, 0, 0LL);
  v105 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v105 )
    goto LABEL_37;
  v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v105->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v106, limitCount, 1, 0, 0LL);
  v107 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v107 )
    goto LABEL_37;
  v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v107->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v108, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  v116 = this->fields.userSvtCollectionEntity;
  if ( !v116 )
    goto LABEL_37;
  v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v116->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v117, limitCount, 0LL);
  v118 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v118 )
    goto LABEL_37;
  v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v118->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v119, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  v127 = this->fields.userSvtCollectionEntity;
  if ( !v127 )
    goto LABEL_37;
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v127->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v128, limitCount, 0LL);
  v129 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v129 )
    goto LABEL_37;
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v129->fields.svtId, 0LL);
  v131 = ImageLimitCount__GetSelectList(v130, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v131;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v131,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)CommandCardParam,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v146 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v146 )
    goto LABEL_37;
  v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v146->fields.svtId, 0LL);
  v148 = ImageLimitCount__GetCardSelectList(v147, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v148;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v148,
    v149,
    v150,
    v151,
    v152,
    v153,
    v154);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v156 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v156 )
    goto LABEL_37;
  v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v156->fields.svtId, 0LL);
  v158 = ImageLimitCount__GetSelectList(v157, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v158;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v158,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  v166 = this->fields.userSvtCollectionEntity;
  if ( !v166 )
    goto LABEL_37;
  svtCommonFlag = v166->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v165);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_37:
    sub_B7076C(Instance, v20);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v168 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v168 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v169);
}


void __fastcall ServantStatusListViewItem___ctor_36345984(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v52; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x21
  __int64 v54; // x22
  __int64 v55; // x23
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  ServantLimitMaster_o *v64; // x22
  struct ServantLimitEntity_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x8
  ServantCommentMaster_o *v73; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  ServantLeaderInfo_o *v94; // x8
  struct ServantLeaderInfo_o *v95; // x8
  int32_t v96; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_27793888; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  ServantLeaderInfo_o *v106; // x8
  struct ServantLeaderInfo_o *v107; // x8
  struct System_Int32_array *SelectList_27793160; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  ServantLeaderInfo_o *v115; // x8
  struct ServantLeaderInfo_o *v116; // x8
  struct System_Int32_array *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct ServantLeaderInfo_o *v130; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v132; // x8
  struct ServantLeaderInfo_o *v133; // x8
  struct System_Int32_array *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  ServantLeaderInfo_o *v141; // x8
  struct ServantLeaderInfo_o *v142; // x8
  struct System_Int32_array *v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  const MethodInfo *v150; // x2
  struct ServantLeaderInfo_o *v151; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v153; // x21
  __int64 v154; // x22
  __int64 v155; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v156; // x21
  __int64 v157; // x22
  __int64 v158; // x23
  struct ServantEntity_o *v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  __int64 v166; // x8
  ServantLimitMaster_o *v167; // x21
  __int64 v168; // x8
  struct ServantLimitEntity_o *v169; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  const MethodInfo *v176; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16

  if ( (byte_435930A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435930A = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields.userSvtEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.equipIdList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.questRestrictionInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantLeaderInfo,
    (System_Int32_array **)servantLeaderInfo,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.equipTargetInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v44, v45, v46, v47, v48, v49);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = isEquipShowMode;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v52 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v55 = *(_QWORD *)&v52[3].fields.currentCryptoKey;
  v54 = *(_QWORD *)&v52[3].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v177.fields.currentCryptoKey = v55;
  *(_QWORD *)&v177.fields.fakeValue = v54;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v177, 0LL);
  if ( !v53 )
    goto LABEL_63;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v53,
                                       (int32_t)Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v64 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  if ( !v64 )
    goto LABEL_63;
  v65 = ServantLimitMaster__GetEntity(v64, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v65;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v72 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_63;
  v73 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v72[1], 0LL);
  if ( !v73 )
    goto LABEL_63;
  EntityList = ServantCommentMaster__GetEntityList(v73, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields.costumeIds = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v88, v89, v90, v91, v92, v93);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v94 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v94 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v94, 0, 0LL);
  v95 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v95 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v95->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v96 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardSelectList_27793888 = ImageLimitCount__GetCardSelectList_27793888(v96, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_27793888;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList_27793888,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v106 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)Instance;
  if ( !v106 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v106, 0LL);
  v107 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v107 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v107->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  SelectList_27793160 = ImageLimitCount__GetSelectList_27793160(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_27793160;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList_27793160,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v115 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v115 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v115, 0LL);
  v116 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  if ( !v116 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v116->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v117 = ImageLimitCount__GetSelectList_27793160(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.commandCardLimitCount,
           0,
           0LL);
  this->fields.commandCardSelectList = v117;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v117,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  v130 = this->fields.servantLeaderInfo;
  if ( !v130 )
    goto LABEL_63;
  commandCardParam = v130->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)commandCardParam,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v132 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)Instance;
  if ( !v132 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v132, 0, 0LL);
  v133 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)Instance;
  if ( !v133 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v133->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v134 = ImageLimitCount__GetCardSelectList_27793888(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.iconLimitCount,
           0LL);
  this->fields.iconSelectList = v134;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v141 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)Instance;
  if ( !v141 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v141, 0LL);
  v142 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)Instance;
  if ( !v142 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                v142->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v143 = ImageLimitCount__GetSelectList_27793160(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.portraitLimitCount,
           0,
           0LL);
  this->fields.portraitSelectList = v143;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v143,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v150);
  v151 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v151 )
    goto LABEL_63;
  equipTarget1 = v151->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v154 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v153 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v178.fields.currentCryptoKey = v154;
    *(_QWORD *)&v178.fields.fakeValue = v153;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v178, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v155 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v155 )
          {
            v156 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            v158 = *(_QWORD *)(v155 + 56);
            v157 = *(_QWORD *)(v155 + 64);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v179.fields.currentCryptoKey = v158;
            *(_QWORD *)&v179.fields.fakeValue = v157;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v179, 0LL);
            if ( v156 )
            {
              v159 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v156,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = v159;
              sub_B70630(
                (BattleServantConfConponent_o *)&this->fields.equipServantEntity,
                (System_Int32_array **)v159,
                v160,
                v161,
                v162,
                v163,
                v164,
                v165);
              Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              Instance,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v166 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v166 )
                  {
                    v167 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v166 + 56),
                                                  0LL);
                    if ( *p_servantLeaderInfo )
                    {
                      v168 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v168 )
                      {
                        if ( v167 )
                        {
                          v169 = ServantLimitMaster__GetEntity(v167, (int32_t)Instance, *(_DWORD *)(v168 + 72), 0LL);
                          this->fields.equipSvtLimitEntity = v169;
                          sub_B70630(
                            (BattleServantConfConponent_o *)&this->fields.equipSvtLimitEntity,
                            (System_Int32_array **)v169,
                            v170,
                            v171,
                            v172,
                            v173,
                            v174,
                            v175);
                          goto LABEL_61;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_63:
      sub_B7076C(Instance, v51);
    }
  }
LABEL_61:
  Instance = (DataManager_o *)*p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  ServantLeaderInfo__getEquipSkillInfo((ServantLeaderInfo_o *)Instance, &this->fields.equipSkillInfoList, 0LL);
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v176);
}


void __fastcall ServantStatusListViewItem___ctor_36347696(
        ServantStatusListViewItem_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct EquipTargetInfo_o **p_equipTargetInfo; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  struct EquipTargetInfo_o *v52; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x21
  __int64 v54; // x22
  __int64 v55; // x23
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  ServantLimitMaster_o *v64; // x22
  struct ServantLimitEntity_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  ServantCommentMaster_o *v72; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  if ( (byte_435930B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435930B = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields.userSvtEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.equipIdList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.questRestrictionInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.servantLeaderInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipTargetInfo,
    (System_Int32_array **)equipTargetInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = isNpcFollowerServantEquip;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v52 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_17;
  v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v55 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v130.fields.currentCryptoKey = v55;
  *(_QWORD *)&v130.fields.fakeValue = v54;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v130, 0LL);
  if ( !v53 )
    goto LABEL_17;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v53,
                                       (int32_t)Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_17;
  v64 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                (*p_equipTargetInfo)->fields.svtId,
                                0LL);
  if ( !*p_equipTargetInfo
    || !v64
    || (v65 = ServantLimitMaster__GetEntity(v64, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v65,
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
          (System_Int32_array **)v65,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v72 = (ServantCommentMaster_o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                      (*p_svtEntity)[1],
                                      0LL),
        !v72) )
  {
LABEL_17:
    sub_B7076C(Instance, v51);
  }
  EntityList = ServantCommentMaster__GetEntityList(v72, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.commandCodeIdList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v80, v81, v82, v83, v84, v85);
  this->fields.costumeIds = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v86, v87, v88, v89, v90, v91);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.cardSelectList, 0LL, v92, v93, v94, v95, v96, v97);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.dispSelectList, 0LL, v98, v99, v100, v101, v102, v103);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    0LL,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  this->fields.commandCardParam = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.commandCardParam, 0LL, v110, v111, v112, v113, v114, v115);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.iconSelectList, 0LL, v116, v117, v118, v119, v120, v121);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.portraitSelectList, 0LL, v122, v123, v124, v125, v126, v127);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v128);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v129);
}


void __fastcall ServantStatusListViewItem___ctor_36348524(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x21
  __int64 v29; // x22
  __int64 v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_435930C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_B70694(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435930C = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields.userCommandCodeEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)commandCode,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_11;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v30 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v29 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v30;
  *(_QWORD *)&v37.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v37, 0LL);
  if ( !v28 )
    goto LABEL_11;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v28,
    (WarEntity_o **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_21C049C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    0LL,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_11:
    sub_B7076C(Instance, v26);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_36348920(
        ServantStatusListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int64_t Instance; // x0
  __int64 v14; // x1
  __int128 v15; // q1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v23; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x21
  struct UserCommandCodeEntity_o *v36; // x8
  __int128 v37; // q0
  int64_t v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UserCommandCodeEntity_o *v45; // x8
  __int128 v46; // q0
  UserCommandCodeCollectionMaster_o *v47; // x21
  struct UserCommandCodeEntity_o *v48; // x8
  int64_t v49; // x22
  __int64 v50; // x23
  __int64 v51; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v54; // x8
  struct UserCommandCodeEntity_o *v55; // x8
  __int128 v56; // q0
  UserServantCommandCodeMaster_o *v57; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_435930D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435930D = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_49;
  v15 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v62 = v63;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v62, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_49;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v16, v17, v18, v19, v20, v21);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v23 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v26 = *(_QWORD *)&v23->fields.commandCodeId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v26;
  *(_QWORD *)&v64.fields.fakeValue = v25;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v64, 0LL);
  if ( !v24 )
    goto LABEL_49;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v24,
                                           Instance,
                                           (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_49;
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v35 )
    goto LABEL_49;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v35,
    (WarEntity_o **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_21C049C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v36 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v37 = *(_OWORD *)&v36->fields.userId.fields.fakeValue;
  v38 = Instance;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v36->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v37;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v61 = v63;
  if ( v38 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v61, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v45 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v46 = *(_OWORD *)&v45->fields.userId.fields.fakeValue;
        v47 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v45->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v63.fields.fakeValue = v46;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v60 = v63;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v60, 0LL);
        v48 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v49 = Instance;
          v51 = *(_QWORD *)&v48->fields.commandCodeId.fields.currentCryptoKey;
          v50 = *(_QWORD *)&v48->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v65.fields.currentCryptoKey = v51;
          *(_QWORD *)&v65.fields.fakeValue = v50;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v65, 0LL);
          if ( v47 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v47, v49, Instance, 0LL);
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_49:
    sub_B7076C(Instance, v14);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  EntityDefinitely = 0LL;
LABEL_39:
  sub_B70630(
    (BattleServantConfConponent_o *)p_userCommandCodeCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v54 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v54 )
    goto LABEL_49;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v54, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v55 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  v57 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v56;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v59 = v63;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v59, 0LL);
  if ( !v57 )
    goto LABEL_49;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v57, Instance, 0LL);
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isUse = IsAttach;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
    goto LABEL_49;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_36350056(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v22; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x20
  __int64 v24; // x21
  __int64 v25; // x22
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_435930E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435930E = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_18;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields, 0LL, v15, v16, v17, v18, v19, v20);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    (System_Int32_array **)userCommandCodeCollection,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v22 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_18;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v25 = *(_QWORD *)&v22->fields.commandCodeId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v25;
  *(_QWORD *)&v35.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v35, 0LL);
  if ( !v23 )
    goto LABEL_18;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v23,
                                           (int32_t)Instance,
                                           (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v34)
    || (DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v34,
          (WarEntity_o **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_21C049C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        !Instance) )
  {
LABEL_18:
    sub_B7076C(Instance, v14);
  }
  UserCommandCodeCollectionEntity__GetSkillInfo(
    (UserCommandCodeCollectionEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


bool __fastcall ServantStatusListViewItem__ChangeChoice(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isChoice;
  this->fields.isChoice ^= 1u;
  return v2;
}


bool __fastcall ServantStatusListViewItem__ChangeLock(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isLock;
  this->fields.isLock ^= 1u;
  return v2;
}


void __fastcall ServantStatusListViewItem__CreateCurrentLimitCountCache(
        ServantStatusListViewItem_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountCache_o *v5; // x22
  struct ServantStatusListViewItem_LimitCountCache_o **p_currentLimitCountCache; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  unsigned __int64 userSvtEntity; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *v16; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v17; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v18; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v19; // x21

  if ( (byte_4359311 & 1) == 0 )
  {
    sub_B70694(&ServantStatusListViewItem_LimitCountCache_TypeInfo);
    byte_4359311 = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_B70764(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0LL);
  p_currentLimitCountCache = &this->fields.currentLimitCountCache;
  this->fields.currentLimitCountCache = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentLimitCountCache,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity
      || (userSvtEntity = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL),
          !currentLimitCountCache) )
    {
LABEL_29:
      sub_B7076C(userSvtEntity, v13);
    }
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.cardLimitCount;
    if ( !currentLimitCountCache )
      goto LABEL_29;
  }
  currentLimitCountCache->fields.cardLimitCount = userSvtEntity;
  v16 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    userSvtEntity = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL);
    if ( !v16 )
      goto LABEL_29;
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.iconLimitCount;
    if ( !v16 )
      goto LABEL_29;
  }
  v16->fields.iconLimitCount = userSvtEntity;
  v17 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    userSvtEntity = UserServantEntity__getCommandCardLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL);
    if ( !v17 )
      goto LABEL_29;
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.commandCardLimitCount;
    if ( !v17 )
      goto LABEL_29;
  }
  v17->fields.commandCardLimitCount = userSvtEntity;
  v18 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    userSvtEntity = UserServantEntity__getDispLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL);
    if ( !v18 )
      goto LABEL_29;
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.dispLimitCount;
    if ( !v18 )
      goto LABEL_29;
  }
  v18->fields.dispLimitCount = userSvtEntity;
  v19 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = (unsigned __int64)this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_29;
    userSvtEntity = UserServantEntity__getPortraitLimitCount((UserServantEntity_o *)userSvtEntity, 1, 0LL);
    if ( !v19 )
      goto LABEL_29;
  }
  else
  {
    userSvtEntity = (unsigned int)this->fields.portraitLimitCount;
    if ( !v19 )
      goto LABEL_29;
  }
  v19->fields.portraitLimitCount = userSvtEntity;
}


void __fastcall ServantStatusListViewItem__Finalize(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantStatusListViewItem__GetAdjustMax(
        ServantStatusListViewItem_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    LOBYTE(servantLeaderInfo) = UserServantEntity__GetAdjustMax(
                                  userSvtEntity,
                                  maxAjustHp,
                                  maxAjustAtk,
                                  secondMaxAdjustHp,
                                  secondMaxAdjustAtk,
                                  0LL);
  }
  else
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      LOBYTE(servantLeaderInfo) = ServantLeaderInfo__GetAdjustMax(
                                    servantLeaderInfo,
                                    maxAjustHp,
                                    maxAjustAtk,
                                    secondMaxAdjustHp,
                                    secondMaxAdjustAtk,
                                    0LL);
    }
    else
    {
      *maxAjustHp = 0;
      *maxAjustAtk = 0;
      *secondMaxAdjustHp = 0;
      *secondMaxAdjustAtk = 0;
    }
  }
  return (char)servantLeaderInfo;
}


void __fastcall ServantStatusListViewItem__GetAppendPassiveSkillInfo(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_Int32_array *appendPassiveSkillIdList; // x8
  System_String_array *appendPassiveSkillTitleMessageList; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *appendPassiveSkillExplanationMessageList; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Boolean_array *appendPassiveSkillReleaseStateList; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array *appendPassiveSkillLvList; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  *idList = appendPassiveSkillIdList;
  sub_B70630(
    (BattleServantConfConponent_o *)idList,
    (System_Int32_array **)appendPassiveSkillIdList,
    titleList,
    explanationList,
    releaseStateList,
    lvList,
    (System_Int32_array *)method,
    v7);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_B70630(
    (BattleServantConfConponent_o *)titleList,
    (System_Int32_array **)appendPassiveSkillTitleMessageList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_B70630(
    (BattleServantConfConponent_o *)explanationList,
    (System_Int32_array **)appendPassiveSkillExplanationMessageList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_B70630(
    (BattleServantConfConponent_o *)releaseStateList,
    (System_Int32_array **)appendPassiveSkillReleaseStateList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_B70630(
    (BattleServantConfConponent_o *)lvList,
    (System_Int32_array **)appendPassiveSkillLvList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


System_Int32_array *__fastcall ServantStatusListViewItem__GetCommandCardIds(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  struct ServantEntity_o *TransformedServant_k__BackingField; // x8

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = this->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      goto LABEL_4;
  }
  else
  {
    TransformedServant_k__BackingField = this->fields.svtEntity;
    if ( !TransformedServant_k__BackingField )
LABEL_4:
      sub_B7076C(this, checkTransform);
  }
  return TransformedServant_k__BackingField->fields.cardIds;
}


int32_t __fastcall ServantStatusListViewItem__GetDispLimitCount(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t *p_TransformedServantDispLimitCount_k__BackingField; // x8

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    p_TransformedServantDispLimitCount_k__BackingField = &this->fields._TransformedServantDispLimitCount_k__BackingField;
  else
    p_TransformedServantDispLimitCount_k__BackingField = &this->fields.dispLimitCount;
  return *p_TransformedServantDispLimitCount_k__BackingField;
}


bool __fastcall ServantStatusListViewItem__GetEquipExpInfo(
        ServantStatusListViewItem_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  UserServantEntity_o *equipUserSvtEntity; // x0
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    LOBYTE(servantLeaderInfo) = UserServantEntity__getExpInfo(equipUserSvtEntity, exp, lateExp, barExp, 0LL);
  }
  else
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      LOBYTE(servantLeaderInfo) = ServantLeaderInfo__getEquipExpInfo(servantLeaderInfo, exp, lateExp, barExp, 0LL);
    }
    else
    {
      *lateExp = 0;
      *exp = 0;
      *barExp = 0.0;
    }
  }
  return (char)servantLeaderInfo;
}


void __fastcall ServantStatusListViewItem__GetEquipSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SkillInfo_array *equipSkillInfoList; // x8

  equipSkillInfoList = this->fields.equipSkillInfoList;
  *skillInfoList = equipSkillInfoList;
  sub_B70630(
    (BattleServantConfConponent_o *)skillInfoList,
    (System_Int32_array **)equipSkillInfoList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall ServantStatusListViewItem__GetExpInfo(
        ServantStatusListViewItem_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    LOBYTE(userSvtEntity) = UserServantEntity__getExpInfo(userSvtEntity, exp, lateExp, barExp, 0LL);
  }
  else
  {
    *lateExp = 0;
    *exp = 0;
    *barExp = 0.0;
  }
  return (char)userSvtEntity;
}


bool __fastcall ServantStatusListViewItem__GetFriendshipInfo(
        ServantStatusListViewItem_o *this,
        int32_t *rank,
        int32_t *max,
        int32_t *late,
        float *fraction,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct ServantEntity_o *svtEntity; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  FriendshipMaster_o *v15; // x24
  int32_t friendshipId; // w25
  __int64 v17; // x26
  __int64 v18; // x27
  struct ServantEntity_o *v19; // x8
  struct UserServantCollectionEntity_o *v20; // x9
  UserServantEntity_o *userSvtEntity; // x0
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4359328 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4359328 = 1;
  }
  if ( this->fields.userSvtCollectionEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FriendshipMaster___);
      svtEntity = this->fields.svtEntity;
      if ( svtEntity )
      {
        userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v15 = (FriendshipMaster_o *)Instance;
          friendshipId = svtEntity->fields.friendshipId;
          v17 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v18 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v23.fields.currentCryptoKey = v17;
          *(_QWORD *)&v23.fields.fakeValue = v18;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v23, 0LL);
          v19 = this->fields.svtEntity;
          if ( v19 )
          {
            v20 = this->fields.userSvtCollectionEntity;
            if ( v20 )
            {
              if ( v15 )
              {
                FriendshipMaster__GetFriendshipRank(
                  v15,
                  friendshipId,
                  (int32_t)Instance,
                  v20->fields.friendshipExceedCount + v19->fields.maxFriendshipRank,
                  rank,
                  max,
                  late,
                  fraction,
                  0LL);
                userSvtEntity = this->fields.userSvtEntity;
                if ( !userSvtEntity || UserServantEntity__IsAddFriendShipHeroine(userSvtEntity, 0LL) )
                  return 1;
                Instance = (DataManager_o *)this->fields.svtEntity;
                if ( Instance )
                {
                  if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
                    *late = -1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    sub_B7076C(Instance, v12);
  }
  result = 0;
  *rank = 0;
  *max = 0;
  *late = 0;
  *fraction = 0.0;
  return result;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TreasureDvcInfo_o *v8; // x8

  v8 = this->fields.tdInfo;
  *tdInfo = v8;
  sub_B70630(
    (BattleServantConfConponent_o *)tdInfo,
    (System_Int32_array **)v8,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return this->fields.isTdResult;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo_36359392(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4359327 & 1) == 0 )
  {
    sub_B70694(&TreasureDvcInfo_TypeInfo);
    byte_4359327 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_14;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = this->fields.userSvtEntity;
      if ( svtEntity )
        return UserServantEntity__getTreasureDeviceInfo(svtEntity, tdInfo, -1, dispLimitCount, 0, 0LL);
LABEL_14:
      sub_B7076C(svtEntity, tdInfo);
    }
    goto LABEL_13;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_13;
  svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_14;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
LABEL_13:
    v9 = (TreasureDvcInfo_o *)sub_B70764(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_B70630((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    return 0;
  }
  svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
  if ( !svtEntity )
    goto LABEL_14;
  return UserServantCollectionEntity__getTreasureDeviceInfo(
           (UserServantCollectionEntity_o *)svtEntity,
           tdInfo,
           -1,
           dispLimitCount,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        bool checkTransform,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array *transformedPassiveSkillIdList; // x1
  System_String_array *transformedPassiveSkillTitleMessageList; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array *transformedPassiveSkillExplanationMessageList; // x1
  System_Int32_array *passiveSkillIdList; // x1
  System_String_array *passiveSkillTitleMessageList; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
  {
    transformedPassiveSkillIdList = this->fields.transformedPassiveSkillIdList;
    *idList = transformedPassiveSkillIdList;
    sub_B70630(
      (BattleServantConfConponent_o *)idList,
      (System_Int32_array **)transformedPassiveSkillIdList,
      titleList,
      explanationList,
      (System_Boolean_array **)checkTransform,
      (System_Int32_array **)method,
      v6,
      v7);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_B70630(
      (BattleServantConfConponent_o *)titleList,
      (System_Int32_array **)transformedPassiveSkillTitleMessageList,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    transformedPassiveSkillExplanationMessageList = this->fields.transformedPassiveSkillExplanationMessageList;
  }
  else
  {
    passiveSkillIdList = this->fields.passiveSkillIdList;
    *idList = passiveSkillIdList;
    sub_B70630(
      (BattleServantConfConponent_o *)idList,
      (System_Int32_array **)passiveSkillIdList,
      titleList,
      explanationList,
      (System_Boolean_array **)checkTransform,
      (System_Int32_array **)method,
      v6,
      v7);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_B70630(
      (BattleServantConfConponent_o *)titleList,
      (System_Int32_array **)passiveSkillTitleMessageList,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    transformedPassiveSkillExplanationMessageList = this->fields.passiveSkillExplanationMessageList;
  }
  *explanationList = transformedPassiveSkillExplanationMessageList;
  sub_B70630(
    (BattleServantConfConponent_o *)explanationList,
    (System_Int32_array **)transformedPassiveSkillExplanationMessageList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_36358828(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x23
  BalanceConfig_c *v13; // x0
  System_Int32_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4359326 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&string___TypeInfo);
    byte_4359326 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_21;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      svtEntity = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( svtEntity && userSvtEntity )
      {
        UserServantEntity__getPassiveSkillInfo(
          userSvtEntity,
          idList,
          titleList,
          explanationList,
          dispLimitCount,
          *((_QWORD *)svtEntity + 13),
          0LL);
        return;
      }
LABEL_21:
      sub_B7076C(svtEntity, idList);
    }
    goto LABEL_17;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_17;
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_21;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
LABEL_17:
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v13->static_fields->SvtPassiveSkillListMax);
    *idList = v14;
    sub_B70630((BattleServantConfConponent_o *)idList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    v21 = (System_String_array *)sub_B706AC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v21;
    sub_B70630((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
    v28 = (System_String_array *)sub_B706AC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v28;
    sub_B70630(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    return;
  }
  svtEntity = this->fields.userSvtCollectionEntity;
  if ( !svtEntity )
    goto LABEL_21;
  UserServantCollectionEntity__getPassiveSkillInfo(
    (UserServantCollectionEntity_o *)svtEntity,
    idList,
    titleList,
    explanationList,
    dispLimitCount,
    1,
    0LL);
}


ServantEntity_o *__fastcall ServantStatusListViewItem__GetServantEntity(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  ServantEntity_o **p_TransformedServant_k__BackingField; // x8

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
  else
    p_TransformedServant_k__BackingField = &this->fields.svtEntity;
  return *p_TransformedServant_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem__GetSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        bool checkTransform,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SkillInfo_array *transformedSkillInfoList; // x1

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    transformedSkillInfoList = this->fields.transformedSkillInfoList;
  else
    transformedSkillInfoList = this->fields.skillInfoList;
  *skillInfoList = transformedSkillInfoList;
  sub_B70630(
    (BattleServantConfConponent_o *)skillInfoList,
    (System_Int32_array **)transformedSkillInfoList,
    (System_String_array **)checkTransform,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo_36358396(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4359325 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&SkillInfo___TypeInfo);
    byte_4359325 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, dispLimitCount, 1, 0, -1, 0LL);
  }
  else
  {
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( userSvtCollectionEntity )
    {
      UserServantCollectionEntity__getSkillInfo(userSvtCollectionEntity, skillInfoList, -1, dispLimitCount, -1, 0LL);
    }
    else
    {
      v9 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      v10 = (SkillInfo_array *)sub_B706AC(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
      *skillInfoList = v10;
      sub_B70630(
        (BattleServantConfConponent_o *)skillInfoList,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItem__GetSvtId(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    return this->fields._TransformedSvtId_k__BackingField;
  else
    return ServantStatusListViewItem__get_SvtId(this, (const MethodInfo *)checkTransform);
}


System_String_o *__fastcall ServantStatusListViewItem__GetTransformName(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 544LL;
  if ( this->fields._IsTransformed_k__BackingField )
    v2 = 552LL;
  return *(System_String_o **)((char *)&this->klass + v2);
}


void __fastcall ServantStatusListViewItem__GetTransformedNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TreasureDvcInfo_o *transformedTdInfo; // x8

  transformedTdInfo = this->fields.transformedTdInfo;
  *tdInfo = transformedTdInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)tdInfo,
    (System_Int32_array **)transformedTdInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall ServantStatusListViewItem__GetVoiceInfo(
        ServantStatusListViewItem_o *this,
        System_String_o **illust,
        System_String_o **voice,
        bool *isPlayVoice,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v15; // x1
  int32_t name; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v21; // x8
  ServantLimitAddMaster_o *v22; // x23
  __int64 v23; // x26
  __int64 v24; // x27
  WarEntity_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *age; // x1
  WarEntity_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *v40; // x1
  LocalizationManager_c *v41; // x0
  __int64 *v42; // x8
  ServantLimitAddEntity_o *v44; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4359329 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_CvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_IllustratorMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_14908/*"UNKNOWN_NAME_ILLUST"*/);
    sub_B70694(&StringLiteral_9467/*"NO_ENTRY_NAME_ILLUST"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4359329 = 1;
  }
  entity = 0LL;
  v44 = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)voice,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)voice,
    (System_String_array **)isPlayVoice,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *isPlayVoice = 0;
  if ( this->fields.commandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    Instance = (DataManager_o *)ServantStatusListViewItem__get_CommandCodeId(this, v15);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  &entity,
                                  (int32_t)Instance,
                                  (const MethodInfo_21C049C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_36;
    if ( !entity )
LABEL_49:
      sub_B7076C(Instance, v13);
    name = (int32_t)entity->fields.name;
  }
  else
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_49;
    currentCardLimitCount = this->fields.currentCardLimitCount;
    name = svtEntity->fields.illustratorId;
    cvId = svtEntity->fields.cvId;
    if ( (currentCardLimitCount & 0x80000000) != 0 )
    {
      cardLimitCount = this->fields.cardLimitCount;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      currentCardLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v21 = this->fields.svtEntity;
    if ( !v21 )
      goto LABEL_49;
    v22 = (ServantLimitAddMaster_o *)Instance;
    v24 = *(_QWORD *)&v21->fields.id.fields.currentCryptoKey;
    v23 = *(_QWORD *)&v21->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v46.fields.currentCryptoKey = v24;
    *(_QWORD *)&v46.fields.fakeValue = v23;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v46, 0LL);
    if ( !v22 )
      goto LABEL_49;
    if ( ServantLimitAddMaster__TryGetEntity(v22, &v44, (int32_t)Instance, currentCardLimitCount, 0LL) )
    {
      Instance = (DataManager_o *)v44;
      if ( !v44 )
        goto LABEL_49;
      cvId = ServantLimitAddEntity__GetOverwriteCvId(v44, cvId, 0LL);
    }
    if ( cvId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CvMaster___);
      if ( !Instance )
        goto LABEL_49;
      v25 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
              cvId,
              (const MethodInfo_21C0440 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
      if ( v25 )
      {
        age = v25->fields.age;
        *voice = age;
        sub_B70630((BattleServantConfConponent_o *)voice, (System_Int32_array **)age, v26, v27, v28, v29, v30, v31);
        *isPlayVoice = 1;
      }
    }
  }
  if ( name < 1 )
  {
    v41 = LocalizationManager_TypeInfo;
    if ( !name )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v42 = &StringLiteral_9467/*"NO_ENTRY_NAME_ILLUST"*/;
      goto LABEL_43;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_42:
      v42 = &StringLiteral_14908/*"UNKNOWN_NAME_ILLUST"*/;
LABEL_43:
      v40 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
      *illust = v40;
      goto LABEL_44;
    }
LABEL_40:
    if ( !v41->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v41);
    goto LABEL_42;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Instance )
    goto LABEL_49;
  v33 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          name,
          (const MethodInfo_21C0440 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v33 )
  {
LABEL_36:
    v41 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v40 = v33->fields.age;
  *illust = v40;
LABEL_44:
  sub_B70630((BattleServantConfConponent_o *)illust, (System_Int32_array **)v40, v34, v35, v36, v37, v38, v39);
  return 1;
}


bool __fastcall ServantStatusListViewItem__IsEnableAppendSkillInfo(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *appendPassiveSkillIdList; // x8

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  return appendPassiveSkillIdList && *(_QWORD *)&appendPassiveSkillIdList->max_length != 0LL;
}


bool __fastcall ServantStatusListViewItem__IsEnablePassiveSkillInfo(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *passiveSkillIdList; // x8

  passiveSkillIdList = this->fields.passiveSkillIdList;
  return passiveSkillIdList && passiveSkillIdList->max_length != 0;
}


bool __fastcall ServantStatusListViewItem__IsEnableSkillInfo(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct SkillInfo_array *skillInfoList; // x8

  skillInfoList = this->fields.skillInfoList;
  return skillInfoList && skillInfoList->max_length != 0;
}


bool __fastcall ServantStatusListViewItem__IsModifyEquipId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipTargetId1 != this->fields.oldEquipTargetId1;
}


bool __fastcall ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t favoriteUserSvtId; // x8
  struct UserGameEntity_o *userGameEntity; // x9

  favoriteUserSvtId = this->fields.favoriteUserSvtId;
  return favoriteUserSvtId >= 1
      && (userGameEntity = this->fields.userGameEntity) != 0LL
      && userGameEntity->fields.favoriteUserSvtId != favoriteUserSvtId;
}


bool __fastcall ServantStatusListViewItem__IsModifyPushUserSvtId(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserGameEntity_o *userGameEntity; // x8

  userGameEntity = this->fields.userGameEntity;
  return userGameEntity && userGameEntity->fields.pushUserSvtId != this->fields.pushUserSvtId;
}


bool __fastcall ServantStatusListViewItem__IsUpdateServantParameters(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_String_o *CondTitle; // x0
  int32_t paramLimitCount; // w8
  bool result; // w0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435932C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435932C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B7076C(Instance, v8);
  CondTitle = ServantLimitAddEntity__GetCondTitle(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !System_String__op_Equality(CondTitle, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    paramLimitCount = this->fields.paramLimitCount;
    if ( (paramLimitCount & 0x80000000) != 0 || paramLimitCount != imageLimitCount )
    {
      result = 1;
      this->fields.paramLimitCount = imageLimitCount;
      return result;
    }
  }
  return 0;
}


void __fastcall ServantStatusListViewItem__ModifyInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  TreasureDvcInfo_o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x22
  bool TreasureDeviceInfo; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *equipTargetInfo; // x0

  if ( (byte_4359312 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&TreasureDvcInfo_TypeInfo);
    byte_4359312 = 1;
  }
  this->fields.isTdResult = 0;
  v3 = (TreasureDvcInfo_o *)sub_B70764(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v3, 0LL);
  this->fields.tdInfo = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.tdInfo, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v10);
  if ( !this->fields.userSvtEntity )
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &this->fields.skillInfoList, 0LL);
      svtEntity = this->fields.servantLeaderInfo;
      if ( svtEntity )
      {
        ServantLeaderInfo__getPassiveSkillInfo(
          (ServantLeaderInfo_o *)svtEntity,
          &this->fields.passiveSkillIdList,
          &this->fields.passiveSkillTitleMessageList,
          &this->fields.passiveSkillExplanationMessageList,
          0LL);
        svtEntity = this->fields.servantLeaderInfo;
        if ( svtEntity )
        {
          ServantLeaderInfo__GetAppendPassiveSkillInfo(
            (ServantLeaderInfo_o *)svtEntity,
            &this->fields.appendPassiveSkillIdList,
            &this->fields.appendPassiveSkillTitleMessageList,
            &this->fields.appendPassiveSkillExplanationMessageList,
            &this->fields.appendPassiveSkillReleaseStateList,
            &this->fields.appendPassiveSkillLvList,
            0LL);
          svtEntity = this->fields.servantLeaderInfo;
          if ( svtEntity )
          {
            TreasureDeviceInfo = ServantLeaderInfo__getTreasureDeviceInfo(
                                   (ServantLeaderInfo_o *)svtEntity,
                                   &this->fields.tdInfo,
                                   0LL);
            goto LABEL_20;
          }
        }
      }
    }
    else
    {
      equipTargetInfo = this->fields.equipTargetInfo;
      if ( equipTargetInfo )
      {
        EquipTargetInfo__getSkillInfo(equipTargetInfo, &this->fields.skillInfoList, 0LL);
        goto LABEL_21;
      }
      if ( !this->fields.userSvtCollectionEntity )
        goto LABEL_21;
      svtEntity = this->fields.svtEntity;
      if ( svtEntity )
      {
        if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_29;
        svtEntity = this->fields.svtEntity;
        if ( !svtEntity )
          goto LABEL_37;
        if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
        {
LABEL_29:
          svtEntity = this->fields.userSvtCollectionEntity;
          if ( !svtEntity )
            goto LABEL_37;
          UserServantCollectionEntity__getSkillInfo(
            (UserServantCollectionEntity_o *)svtEntity,
            &this->fields.skillInfoList,
            -1,
            ConvertOverwriteDispImageLimitCount,
            -1,
            0LL);
        }
        svtEntity = this->fields.svtEntity;
        if ( svtEntity )
        {
          if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_21;
          svtEntity = this->fields.userSvtCollectionEntity;
          if ( svtEntity )
          {
            UserServantCollectionEntity__getPassiveSkillInfo(
              (UserServantCollectionEntity_o *)svtEntity,
              &this->fields.passiveSkillIdList,
              &this->fields.passiveSkillTitleMessageList,
              &this->fields.passiveSkillExplanationMessageList,
              ConvertOverwriteDispImageLimitCount,
              1,
              0LL);
            svtEntity = this->fields.userSvtCollectionEntity;
            if ( svtEntity )
            {
              UserServantCollectionEntity__GetAppendPassiveSkillInfo(
                (UserServantCollectionEntity_o *)svtEntity,
                &this->fields.appendPassiveSkillIdList,
                &this->fields.appendPassiveSkillTitleMessageList,
                &this->fields.appendPassiveSkillExplanationMessageList,
                &this->fields.appendPassiveSkillReleaseStateList,
                &this->fields.appendPassiveSkillLvList,
                0LL);
              svtEntity = this->fields.userSvtCollectionEntity;
              if ( svtEntity )
              {
                TreasureDeviceInfo = UserServantCollectionEntity__getTreasureDeviceInfo(
                                       (UserServantCollectionEntity_o *)svtEntity,
                                       &this->fields.tdInfo,
                                       -1,
                                       ConvertOverwriteDispImageLimitCount,
                                       0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_B7076C(svtEntity, v11);
  }
  UserServantEntity__getSkillInfo(
    this->fields.userSvtEntity,
    &this->fields.skillInfoList,
    -1,
    ConvertOverwriteDispImageLimitCount,
    1,
    0,
    -1,
    0LL);
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_37;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    svtEntity = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( svtEntity )
    {
      if ( userSvtEntity )
      {
        UserServantEntity__getPassiveSkillInfo(
          userSvtEntity,
          &this->fields.passiveSkillIdList,
          &this->fields.passiveSkillTitleMessageList,
          &this->fields.passiveSkillExplanationMessageList,
          ConvertOverwriteDispImageLimitCount,
          *((_QWORD *)svtEntity + 13),
          0LL);
        svtEntity = this->fields.userSvtEntity;
        if ( svtEntity )
        {
          UserServantEntity__GetAppendPassiveSkillInfo(
            (UserServantEntity_o *)svtEntity,
            &this->fields.appendPassiveSkillIdList,
            &this->fields.appendPassiveSkillTitleMessageList,
            &this->fields.appendPassiveSkillExplanationMessageList,
            &this->fields.appendPassiveSkillReleaseStateList,
            &this->fields.appendPassiveSkillLvList,
            0LL);
          goto LABEL_13;
        }
      }
    }
    goto LABEL_37;
  }
LABEL_13:
  svtEntity = this->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_37;
  TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(
                         (UserServantEntity_o *)svtEntity,
                         &this->fields.tdInfo,
                         -1,
                         ConvertOverwriteDispImageLimitCount,
                         0,
                         0LL);
LABEL_20:
  this->fields.isTdResult = TreasureDeviceInfo;
LABEL_21:
  ServantStatusListViewItem__SetTransformData(this, v11);
}


void __fastcall ServantStatusListViewItem__RefreshLimitCountWithRandom(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v5; // x20
  int32_t ownRandomSettingButtonIndex; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // kr00_16
  __int64 v8; // x8
  __int64 v9; // x9
  const MethodInfo *v10; // x2
  int32_t v11; // w21
  BalanceConfig_c *v12; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t dispLimitCount; // w21
  struct ServantStatusListViewItem_LimitCountCache_o *v15; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_435930F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    sub_B70694(&UserServantEntity_TypeInfo);
    byte_435930F = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount )
  {
    if ( this->fields.isEnableOwnRandomSetting )
    {
      userSvtEntity = this->fields.userSvtEntity;
      v5 = sub_B70764(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21610488((UserServantEntity_o *)v5, userSvtEntity, 0LL);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0LL);
      if ( !v5 )
        sub_B7076C(*(_QWORD *)&v7.fields.currentCryptoKey, *(_QWORD *)&v7.fields.fakeValue);
      v8 = *(_QWORD *)(v5 + 80);
      v9 = *(_QWORD *)(v5 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 208) = v7;
      *(_QWORD *)&v16.fields.currentCryptoKey = v8;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL);
      v12 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      if ( v11 == v12->static_fields->ServantIdMashu1 )
      {
        currentLimitCountCache = this->fields.currentLimitCountCache;
        if ( currentLimitCountCache )
        {
          dispLimitCount = currentLimitCountCache->fields.dispLimitCount;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                             dispLimitCount,
                                                                             0LL);
        }
      }
      ServantStatusListViewItem__SetLimitCountInfo(this, (UserServantEntity_o *)v5, v10);
    }
    else
    {
      v15 = this->fields.currentLimitCountCache;
      if ( v15 )
      {
        this->fields.cardLimitCount = v15->fields.cardLimitCount;
        this->fields.iconLimitCount = v15->fields.iconLimitCount;
        this->fields.commandCardLimitCount = v15->fields.commandCardLimitCount;
        this->fields.dispLimitCount = v15->fields.dispLimitCount;
        this->fields.portraitLimitCount = v15->fields.portraitLimitCount;
      }
    }
  }
}


void __fastcall ServantStatusListViewItem__SetCostumeAndOtherIds(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  System_Int32_array **v11; // x1
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v14; // x0
  System_Collections_Generic_List_int__o *v15; // x20
  struct System_Int32_array *v16; // x0
  struct System_Int32_array **v17; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Int32_array *v24; // x0

  if ( (byte_435932D & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164920);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_435932D = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_23;
  if ( !ServantEntity__IsBeast(svtEntity, 0LL) )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_23;
    if ( !ServantEntity__get_IsServant(svtEntity, 0LL) )
    {
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_23;
      if ( !ServantEntity__get_IsServantCollection(svtEntity, 0LL) )
        goto LABEL_5;
    }
    IsOtherImage = ConstantMaster__IsOtherImage(0LL);
    costumeIds = this->fields.costumeIds;
    if ( IsOtherImage )
    {
      v14 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
      v15 = v14;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_51074676(
          v14,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_30B5674 *)Method_System_Collections_Generic_List_int___ctor___69164920);
      else
        System_Collections_Generic_List_int____ctor(
          v14,
          (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v15 )
      {
        System_Collections_Generic_List_int___Add(
          v15,
          BalanceConfig_TypeInfo->static_fields->OtherImageLimitCount,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        v24 = System_Collections_Generic_List_int___ToArray(
                v15,
                (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
        this->fields.costumeAndOtherIds = v24;
        v11 = (System_Int32_array **)v24;
        p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v16 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v16;
      v17 = &this->fields.costumeAndOtherIds;
      sub_B70630((BattleServantConfConponent_o *)v17, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
      svtEntity = (ServantEntity_o *)*(v17 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v17, 0, 0LL);
        return;
      }
    }
LABEL_23:
    sub_B7076C(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v11 = 0LL;
LABEL_22:
  sub_B70630((BattleServantConfConponent_o *)p_costumeAndOtherIds, v11, v4, v5, v6, v7, v8, v9);
}


void __fastcall ServantStatusListViewItem__SetCurrentCardLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t cardLimitCount,
        const MethodInfo *method)
{
  this->fields.currentCardLimitCount = cardLimitCount;
}


void __fastcall ServantStatusListViewItem__SetEquipTargetId1(
        ServantStatusListViewItem_o *this,
        int64_t equipUserSvtId,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusListViewItem_o *v9; // x19
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_equipUserSvtEntity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v12; // x8
  __int64 v13; // x22
  __int64 v14; // x23
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v17; // x8
  ServantStatusListViewItem_o *v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  System_Int32_array **Entity; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  ServantStatusListViewItem_o *v28; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x8
  int32_t v30; // w20
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Int64_array *v38; // x8
  PartyOrganizationListViewItem_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BalanceConfig_c *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v9 = this;
  if ( (byte_4359313 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantStatusListViewItem_o *)sub_B70694(&SkillInfo___TypeInfo);
    byte_4359313 = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_42;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v9->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                            &v9->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = *p_equipUserSvtEntity;
      if ( !*p_equipUserSvtEntity )
        goto LABEL_42;
      v14 = *(_QWORD *)&v12[5].fields.currentCryptoKey;
      v13 = *(_QWORD *)&v12[5].fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v61.fields.currentCryptoKey = v14;
      *(_QWORD *)&v61.fields.fakeValue = v13;
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                              v61,
                                              0LL);
      if ( (int)this >= 1 )
      {
        equipIdList = v9->fields.equipIdList;
        if ( !equipIdList )
          goto LABEL_18;
        if ( equipIdList->max_length )
        {
          equipIdList->m_Items[0] = equipUserSvtId;
LABEL_18:
          memberItem = v9->fields.memberItem;
          if ( memberItem )
            PartyOrganizationListViewItem__SetEquipUserServantId(memberItem, equipUserSvtId, 0LL);
          v9->fields.equipTargetId1 = equipUserSvtId;
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
            v17 = *p_equipUserSvtEntity;
            if ( *p_equipUserSvtEntity )
            {
              v18 = this;
              v20 = *(_QWORD *)&v17[5].fields.currentCryptoKey;
              v19 = *(_QWORD *)&v17[5].fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v62.fields.currentCryptoKey = v20;
              *(_QWORD *)&v62.fields.fakeValue = v19;
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                      v62,
                                                      0LL);
              if ( v18 )
              {
                Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)v18,
                                                  (int32_t)this,
                                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v9->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_B70630(
                  (BattleServantConfConponent_o *)&v9->fields.equipServantEntity,
                  Entity,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v28 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0LL);
                    v29 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v30 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                              v29[6],
                                                              0LL);
                      if ( v28 )
                      {
                        v31 = (System_Int32_array **)ServantLimitMaster__GetEntity(
                                                       (ServantLimitMaster_o *)v28,
                                                       v30,
                                                       (int32_t)this,
                                                       0LL);
                        v9->fields.equipSvtLimitEntity = (struct ServantLimitEntity_o *)v31;
                        sub_B70630(
                          (BattleServantConfConponent_o *)&v9->fields.equipSvtLimitEntity,
                          v31,
                          v32,
                          v33,
                          v34,
                          v35,
                          v36,
                          v37);
                        this = (ServantStatusListViewItem_o *)v9->fields.equipUserSvtEntity;
                        if ( this )
                        {
                          UserServantEntity__getEquipSkillInfo(
                            (UserServantEntity_o *)this,
                            &v9->fields.equipSkillInfoList,
                            1,
                            0LL);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_42:
          sub_B7076C(this, v10);
        }
LABEL_43:
        v60 = sub_B70798(this);
        sub_B70738(v60, 0LL);
      }
    }
  }
  v38 = v9->fields.equipIdList;
  if ( v38 )
  {
    if ( !v38->max_length )
      goto LABEL_43;
    v38->m_Items[0] = 0LL;
  }
  v39 = v9->fields.memberItem;
  if ( v39 && !v39->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v39, 0LL, 0LL);
  v9->fields.equipTargetId1 = 0LL;
  v9->fields.equipUserSvtEntity = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&v9->fields.equipUserSvtEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v9->fields.equipServantEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v9->fields.equipServantEntity, 0LL, v40, v41, v42, v43, v44, v45);
  v9->fields.equipSvtLimitEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v9->fields.equipSvtLimitEntity, 0LL, v46, v47, v48, v49, v50, v51);
  v52 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v52 = BalanceConfig_TypeInfo;
  }
  v53 = (System_Int32_array **)sub_B706AC(SkillInfo___TypeInfo, (unsigned int)v52->static_fields->SvtEquipSkillListMax);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v53;
  sub_B70630((BattleServantConfConponent_o *)&v9->fields.equipSkillInfoList, v53, v54, v55, v56, v57, v58, v59);
}


void __fastcall ServantStatusListViewItem__SetLimitCountInfo(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w21
  int32_t v8; // w0
  System_Int32_array *costumeAndOtherIds; // x22
  int32_t v10; // w23
  struct System_Int32_array *CardSelectList; // x0
  struct System_Int32_array **p_cardSelectList; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t v19; // w21
  int32_t v20; // w0
  System_Int32_array **SelectList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t v28; // w21
  int32_t v29; // w0
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **CommandCardParam; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t v44; // w21
  int32_t v45; // w0
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t v55; // w20
  int32_t v56; // w0
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4359310 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4359310 = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0LL);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0LL);
    v6 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v64.fields.currentCryptoKey = v6;
    *(_QWORD *)&v64.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v64, 0LL);
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v10 = v8;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardSelectList = ImageLimitCount__GetCardSelectList(v7, v10, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    p_cardSelectList = &this->fields.cardSelectList;
    sub_B70630(
      (BattleServantConfConponent_o *)p_cardSelectList,
      (System_Int32_array **)CardSelectList,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    *((_DWORD *)p_cardSelectList + 2) = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 3) = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(entity->fields.svtId, 0LL);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(entity->fields.limitCount, 0LL);
    SelectList = (System_Int32_array **)ImageLimitCount__GetSelectList(v19, v20, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[2] = (struct System_Int32_array *)SelectList;
    sub_B70630((BattleServantConfConponent_o *)(p_cardSelectList + 2), SelectList, v22, v23, v24, v25, v26, v27);
    *((_DWORD *)p_cardSelectList + 6) = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 7) = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(entity->fields.svtId, 0LL);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(entity->fields.limitCount, 0LL);
    v30 = (System_Int32_array **)ImageLimitCount__GetSelectList(v28, v29, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[4] = (struct System_Int32_array *)v30;
    sub_B70630((BattleServantConfConponent_o *)(p_cardSelectList + 4), v30, v31, v32, v33, v34, v35, v36);
    CommandCardParam = (System_Int32_array **)UserServantEntity__GetCommandCardParam(entity, 0LL);
    p_cardSelectList[5] = (struct System_Int32_array *)CommandCardParam;
    sub_B70630((BattleServantConfConponent_o *)(p_cardSelectList + 5), CommandCardParam, v38, v39, v40, v41, v42, v43);
    *((_DWORD *)p_cardSelectList + 12) = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 13) = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(entity->fields.svtId, 0LL);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(entity->fields.limitCount, 0LL);
    v46 = (System_Int32_array **)ImageLimitCount__GetCardSelectList(v44, v45, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[7] = (struct System_Int32_array *)v46;
    sub_B70630((BattleServantConfConponent_o *)(p_cardSelectList + 7), v46, v47, v48, v49, v50, v51, v52);
    *((_DWORD *)p_cardSelectList + 16) = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 17) = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(entity->fields.svtId, 0LL);
    v54 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v55 = v53;
    *(_QWORD *)&v65.fields.currentCryptoKey = v54;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v65, 0LL);
    v57 = (System_Int32_array **)ImageLimitCount__GetSelectList(v55, v56, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[9] = (struct System_Int32_array *)v57;
    sub_B70630((BattleServantConfConponent_o *)(p_cardSelectList + 9), v57, v58, v59, v60, v61, v62, v63);
  }
}


void __fastcall ServantStatusListViewItem__SetRandomSettingByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( index > 2 )
    this->fields.supportRandomSettingButtonIndex = index;
  else
    this->fields.ownRandomSettingButtonIndex = index;
}


void __fastcall ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x19
  struct System_Int32_array *supportRandomLimitCountList; // x8
  int32_t max_length; // w9
  int32_t LIMIT_SUPPORT_NOT_ASSIGN; // w8
  UserServantEntity_c *v8; // x0
  __int64 v9; // x0

  v4 = this;
  if ( (byte_4359324 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_B70694(&UserServantEntity_TypeInfo);
    byte_4359324 = 1;
  }
  if ( index == -1 )
  {
    v8 = UserServantEntity_TypeInfo;
    if ( (BYTE3(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v8 = UserServantEntity_TypeInfo;
    }
    LIMIT_SUPPORT_NOT_ASSIGN = v8->static_fields->LIMIT_SUPPORT_NOT_ASSIGN;
    goto LABEL_13;
  }
  supportRandomLimitCountList = v4->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    max_length = supportRandomLimitCountList->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
      {
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
      LIMIT_SUPPORT_NOT_ASSIGN = supportRandomLimitCountList->m_Items[index + 1];
LABEL_13:
      v4->fields.supportRandomLimitCount = LIMIT_SUPPORT_NOT_ASSIGN;
    }
  }
}


void __fastcall ServantStatusListViewItem__SetTransformData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  ServantTransformMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v5; // x1
  void *SvtId; // x0
  __int64 expType; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ServantTransformEntity_o *v14; // x8
  struct System_String_o *befTitle; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_o *aftTitle; // x1
  struct ServantEntity_o *v23; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WarQuestSelectionMaster_o *v31; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v33; // x22
  const MethodInfo *v34; // x1
  ServantLimitEntity_o *v35; // x20
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t lv; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _DWORD *v46; // x21
  int32_t atkBase; // w24
  int32_t atkMax; // w25
  int v49; // w23
  CheckCombineResStatus_c *v50; // x0
  int32_t v51; // w8
  struct CheckCombineResStatus_StaticFields **p_static_fields; // x0
  struct CheckCombineResStatus_StaticFields *static_fields; // t1
  _DWORD *v54; // x9
  int32_t v55; // w23
  int32_t adjustAtk; // w24
  struct ServantLeaderInfo_o *v57; // x8
  int32_t v58; // w10
  int32_t StatusUpAdjustHp; // w8
  UserServantEntity_o *v60; // x0
  UserServantEntity_o *v61; // x22
  int32_t v62; // w20
  int32_t TransformedServantDispLimitCount_k__BackingField; // w21
  ServantLeaderInfo_o *v64; // x0
  ServantLeaderInfo_o *v65; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  BalanceConfig_c *v67; // x8
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_435932E & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CheckCombineResStatus_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_435932E = 1;
  }
  entity = 0LL;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantTransformMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = (void *)ServantStatusListViewItem__get_SvtId(this, v5);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_68;
    SvtId = (void *)ServantTransformMaster__TryGetEntity(
                      Master_WarQuestSelectionMaster,
                      &entity,
                      (int32_t)SvtId,
                      this->fields.dispLimitCount + 1,
                      0LL);
    if ( ((unsigned __int8)SvtId & 1) != 0 )
    {
      v14 = entity;
      if ( !entity )
        goto LABEL_68;
      this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
      this->fields._TransformedServantDispLimitCount_k__BackingField = v14->fields.aftDispLimitCount - 1;
      befTitle = v14->fields.befTitle;
      this->fields.transformNameBefore = befTitle;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.transformNameBefore,
        (System_Int32_array **)befTitle,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( !entity )
        goto LABEL_68;
      aftTitle = entity->fields.aftTitle;
      this->fields.transformNameAfter = aftTitle;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.transformNameAfter,
        (System_Int32_array **)aftTitle,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      this->fields._IsTransformServant_k__BackingField = 1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      SvtId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !SvtId )
        goto LABEL_68;
      v23 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)SvtId,
                                        this->fields._TransformedSvtId_k__BackingField,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
      this->fields._TransformedServant_k__BackingField = v23;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._TransformedServant_k__BackingField,
        (System_Int32_array **)v23,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      v31 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
      v33 = (ServantLimitMaster_o *)v31;
      SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v34);
      if ( !v33 )
        goto LABEL_68;
      v35 = ServantLimitMaster__GetEntity(v33, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0LL);
      SvtId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantExpMaster___);
      if ( !*p_TransformedServant_k__BackingField )
        goto LABEL_68;
      userSvtEntity = this->fields.userSvtEntity;
      expType = (unsigned int)(*p_TransformedServant_k__BackingField)->fields.expType;
      if ( userSvtEntity )
      {
        lv = userSvtEntity->fields.lv;
        if ( !SvtId )
          goto LABEL_68;
      }
      else
      {
        servantLeaderInfo = this->fields.servantLeaderInfo;
        if ( servantLeaderInfo )
        {
          lv = servantLeaderInfo->fields.lv;
          if ( !SvtId )
            goto LABEL_68;
        }
        else
        {
          equipTargetInfo = this->fields.equipTargetInfo;
          if ( equipTargetInfo )
          {
            lv = equipTargetInfo->fields.lv;
            if ( !SvtId )
              goto LABEL_68;
          }
          else if ( this->fields.isCollection )
          {
            lv = this->fields.collectionLv;
            if ( !SvtId )
              goto LABEL_68;
          }
          else
          {
            lv = 0;
            if ( !SvtId )
              goto LABEL_68;
          }
        }
      }
      SvtId = ServantExpMaster__GetEntity((ServantExpMaster_o *)SvtId, expType, lv, 0LL);
      if ( !v35 || (v46 = SvtId) == 0LL )
LABEL_68:
        sub_B7076C(SvtId, expType);
      atkBase = v35->fields.atkBase;
      atkMax = v35->fields.atkMax;
      v49 = *((_DWORD *)SvtId + 7);
      v50 = CheckCombineResStatus_TypeInfo;
      if ( (BYTE3(CheckCombineResStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
        v50 = CheckCombineResStatus_TypeInfo;
        v51 = v35->fields.atkBase;
      }
      else
      {
        v51 = v35->fields.atkBase;
      }
      static_fields = v50->static_fields;
      p_static_fields = &v50->static_fields;
      v54 = this->fields.userSvtEntity;
      v55 = v49 * (atkMax - atkBase) / static_fields->LOT_RATE + v51;
      this->fields.transformedAtk = v55;
      if ( v54 )
      {
        adjustAtk = v54[68];
      }
      else
      {
        v57 = this->fields.servantLeaderInfo;
        if ( v57 )
          adjustAtk = v57->fields.adjustAtk;
        else
          adjustAtk = 0;
      }
      v67 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v67 = BalanceConfig_TypeInfo;
        v54 = this->fields.userSvtEntity;
        p_static_fields = &CheckCombineResStatus_TypeInfo->static_fields;
      }
      this->fields.transformedAtk = v55 + v67->static_fields->StatusUpAdjustAtk * adjustAtk;
      v58 = v46[7] * (v35->fields.hpMax - v35->fields.hpBase) / (*p_static_fields)->LOT_RATE + v35->fields.hpBase;
      this->fields.transformedHp = v58;
      if ( v54 )
      {
        LODWORD(v54) = v54[69];
      }
      else
      {
        v54 = this->fields.servantLeaderInfo;
        if ( v54 )
          LODWORD(v54) = v54[22];
      }
      StatusUpAdjustHp = v67->static_fields->StatusUpAdjustHp;
      this->fields.transformedServantLimitEntity = v35;
      this->fields.transformedHp = v58 + StatusUpAdjustHp * (_DWORD)v54;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.transformedServantLimitEntity,
        (System_Int32_array **)v35,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v60 = this->fields.userSvtEntity;
      if ( v60 )
      {
        UserServantEntity__GetTransformedSkillInfo(
          v60,
          &this->fields.transformedSkillInfoList,
          this->fields._TransformedSvtId_k__BackingField,
          -1,
          this->fields._TransformedServantDispLimitCount_k__BackingField,
          1,
          0,
          -1,
          0LL);
        v61 = this->fields.userSvtEntity;
        v62 = this->fields._TransformedSvtId_k__BackingField;
        TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        SvtId = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( SvtId )
        {
          if ( v61 )
          {
            UserServantEntity__GetTransformedPassiveSkillInfo(
              v61,
              &this->fields.transformedPassiveSkillIdList,
              &this->fields.transformedPassiveSkillTitleMessageList,
              &this->fields.transformedPassiveSkillExplanationMessageList,
              v62,
              TransformedServantDispLimitCount_k__BackingField,
              *((_QWORD *)SvtId + 13),
              0LL);
            SvtId = this->fields.userSvtEntity;
            if ( SvtId )
            {
              UserServantEntity__GetTransformedTreasureDeviceInfo(
                (UserServantEntity_o *)SvtId,
                &this->fields.transformedTdInfo,
                this->fields._TransformedSvtId_k__BackingField,
                -1,
                this->fields._TransformedServantDispLimitCount_k__BackingField,
                0,
                0LL);
              return;
            }
          }
        }
        goto LABEL_68;
      }
      v64 = this->fields.servantLeaderInfo;
      if ( v64 )
      {
        ServantLeaderInfo__GetTransformedSkillInfo(
          v64,
          &this->fields.transformedSkillInfoList,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_68;
        ServantLeaderInfo__GetTransformedPassiveSkillInfo(
          (ServantLeaderInfo_o *)SvtId,
          &this->fields.transformedPassiveSkillIdList,
          &this->fields.transformedPassiveSkillTitleMessageList,
          &this->fields.transformedPassiveSkillExplanationMessageList,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_68;
        ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
          (ServantLeaderInfo_o *)SvtId,
          &this->fields.transformedTdInfo,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_68;
        SvtId = (void *)ServantLeaderInfo__get_TransformedAtk((ServantLeaderInfo_o *)SvtId, 0LL);
        v65 = this->fields.servantLeaderInfo;
        this->fields.transformedAtk = (int)SvtId;
        if ( !v65 )
          goto LABEL_68;
        this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v65, 0LL);
      }
      else
      {
        userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          UserServantCollectionEntity__GetTransformedSkillInfo(
            userSvtCollectionEntity,
            &this->fields.transformedSkillInfoList,
            this->fields._TransformedSvtId_k__BackingField,
            -1,
            this->fields._TransformedServantDispLimitCount_k__BackingField,
            -1,
            0LL);
          SvtId = this->fields.userSvtCollectionEntity;
          if ( !SvtId )
            goto LABEL_68;
          UserServantCollectionEntity__GetTransformedPassiveSkillInfo(
            (UserServantCollectionEntity_o *)SvtId,
            &this->fields.transformedPassiveSkillIdList,
            &this->fields.transformedPassiveSkillTitleMessageList,
            &this->fields.transformedPassiveSkillExplanationMessageList,
            this->fields._TransformedSvtId_k__BackingField,
            this->fields._TransformedServantDispLimitCount_k__BackingField,
            1,
            0LL);
          SvtId = this->fields.userSvtCollectionEntity;
          if ( !SvtId )
            goto LABEL_68;
          UserServantCollectionEntity__GetTransformedTreasureDeviceInfo(
            (UserServantCollectionEntity_o *)SvtId,
            &this->fields.transformedTdInfo,
            this->fields._TransformedSvtId_k__BackingField,
            -1,
            this->fields._TransformedServantDispLimitCount_k__BackingField,
            0LL);
        }
      }
    }
  }
}


bool __fastcall ServantStatusListViewItem__UpdateServantComment(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  _DWORD *klass; // x8
  BattleServantConfConponent_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  __int64 v18; // x20
  int v19; // w9
  unsigned int v20; // w10
  unsigned int v21; // w21
  bool v22; // w21
  __int64 v24; // x0

  if ( (byte_435932B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_435932B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = (__int64)ServantCommentMaster__GetEntityList_27485772(
                                              (ServantCommentMaster_o *)Master_WarQuestSelectionMaster,
                                              svtId,
                                              imageLimitCount,
                                              0,
                                              0,
                                              0,
                                              0LL);
  svtCommentEntityList = this->fields.svtCommentEntityList;
  p_svtCommentEntityList = (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList;
  klass = svtCommentEntityList;
  v18 = Master_WarQuestSelectionMaster;
  if ( svtCommentEntityList )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_18;
    v19 = klass[6];
    if ( v19 != *(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
    {
LABEL_20:
      v22 = 1;
      goto LABEL_21;
    }
    if ( v19 >= 1 )
    {
      v20 = 0;
      do
      {
        if ( v20 >= klass[6] || (v21 = v20, v20 >= v19) )
        {
          v24 = sub_B70798(Master_WarQuestSelectionMaster);
          sub_B70738(v24, 0LL);
        }
        Master_WarQuestSelectionMaster = *(_QWORD *)&klass[2 * v20 + 8];
        if ( !Master_WarQuestSelectionMaster )
          break;
        Master_WarQuestSelectionMaster = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster
                                                                                            + 312LL))(
                                           Master_WarQuestSelectionMaster,
                                           *(_QWORD *)(v18 + 8LL * (int)v20 + 32),
                                           *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 320LL));
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          goto LABEL_20;
        v19 = *(_DWORD *)(v18 + 24);
        v20 = v21 + 1;
        if ( (int)(v21 + 1) >= v19 )
          goto LABEL_19;
        klass = p_svtCommentEntityList->klass;
      }
      while ( p_svtCommentEntityList->klass );
LABEL_18:
      sub_B7076C(Master_WarQuestSelectionMaster, v8);
    }
  }
LABEL_19:
  v22 = 0;
LABEL_21:
  p_svtCommentEntityList->klass = (BattleServantConfConponent_c *)v18;
  sub_B70630(p_svtCommentEntityList, (System_Int32_array **)v18, v9, v10, v11, v12, v13, v14);
  return v22;
}


int32_t __fastcall ServantStatusListViewItem__get_AdjustAtk(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustAtk;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.adjustAtk;
  else
    return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_AdjustHp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.adjustHp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.adjustHp;
  else
    return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_Agility(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B7076C(this, method);
  return svtLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_Atk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8

  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields.transformedAtk;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.atk;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields.atk;
  if ( this->fields.isCollection )
    return this->fields.collectionAtk;
  return 0;
}


bool __fastcall ServantStatusListViewItem__get_CanMoveCombine(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CanMoveCombine_k__BackingField;
}


int32_t __fastcall ServantStatusListViewItem__get_CardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.cardLimitCount;
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_CardSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.cardSelectList;
}


int32_t __fastcall ServantStatusListViewItem__get_ChangeBattleVoiceSelect(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.changeVoiceFlag;
}


int32_t __fastcall ServantStatusListViewItem__get_ChangeVoiceFlag(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.changeVoiceFlag;
}


int32_t __fastcall ServantStatusListViewItem__get_CommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCardLimitCount;
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_CommandCardParam(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCardParam;
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_CommandCardSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCardSelectList;
}


CommandCodeEntity_o *__fastcall ServantStatusListViewItem__get_CommandCode(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


CommandCodeCommentEntity_o *__fastcall ServantStatusListViewItem__get_CommandCodeCommentData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeCommentEntity;
}


int32_t __fastcall ServantStatusListViewItem__get_CommandCodeId(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4359315 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4359315 = 1;
  }
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    return 0;
  v5 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v7, 0LL);
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_CommandCodeIdList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeIdList;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteCardImageLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *memberItem; // x0
  int32_t result; // w0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( !this->fields.isConvertOverwriteImage )
    return this->fields.cardLimitCount;
  memberItem = this->fields.memberItem;
  if ( memberItem )
    return PartyOrganizationListViewItem__GetCardImageLimitCount(memberItem, 0LL);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.cardLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.cardLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34231828(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.cardLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v2; // x19
  struct ServantEntity_o *TransformedServant_k__BackingField; // x8
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  int32_t limitMax; // w21
  int32_t LimitCountByDispLimit; // w0
  int32_t result; // w0
  PartyOrganizationListViewItem_o *memberItem; // x0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  v2 = this;
  if ( (byte_435931B & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_B70694(&ImageLimitCount_TypeInfo);
    byte_435931B = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_B7076C(this, method);
    TransformedServantDispLimitCount_k__BackingField = v2->fields._TransformedServantDispLimitCount_k__BackingField;
    limitMax = TransformedServant_k__BackingField->fields.limitMax;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(
                              TransformedServantDispLimitCount_k__BackingField,
                              limitMax,
                              0LL);
    return ImageLimitCount__GetImageLimitCount(v2->fields._TransformedSvtId_k__BackingField, LimitCountByDispLimit, 0LL);
  }
  else
  {
    if ( !v2->fields.isConvertOverwriteImage )
      return v2->fields.commandCardLimitCount;
    memberItem = v2->fields.memberItem;
    if ( memberItem )
      return PartyOrganizationListViewItem__GetCommandCardLimitCount(memberItem, 0LL);
    userSvtEntity = v2->fields.userSvtEntity;
    if ( !userSvtEntity )
      return v2->fields.commandCardLimitCount;
    questRestrictionInfo = v2->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      return v2->fields.commandCardLimitCount;
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34231828(questRestrictionInfo, userSvtEntity, 0LL);
    if ( (result & 0x80000000) != 0 )
      return v2->fields.commandCardLimitCount;
  }
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0
  PartyOrganizationListViewItem_o *memberItem; // x0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields._TransformedServantDispLimitCount_k__BackingField;
  if ( !this->fields.isConvertOverwriteImage )
    return this->fields.dispLimitCount;
  memberItem = this->fields.memberItem;
  if ( memberItem )
    return PartyOrganizationListViewItem__GetDispImageLimitCount(memberItem, 0LL);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.dispLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.dispLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34231828(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.dispLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *memberItem; // x0
  int32_t result; // w0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( !this->fields.isConvertOverwriteImage )
    return this->fields.iconLimitCount;
  memberItem = this->fields.memberItem;
  if ( memberItem )
    return PartyOrganizationListViewItem__GetIconLimitCount(memberItem, 0LL);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.iconLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.iconLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34231828(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.iconLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *memberItem; // x0
  int32_t result; // w0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( !this->fields.isConvertOverwriteImage )
    return this->fields.portraitLimitCount;
  memberItem = this->fields.memberItem;
  if ( memberItem )
    return PartyOrganizationListViewItem__GetPortraitLimitCount(memberItem, 0LL);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.portraitLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.portraitLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34231828(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_B7076C(this, method);
  return svtEntity->fields.cost;
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_CostumeIds(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeIds;
}


int32_t __fastcall ServantStatusListViewItem__get_Defense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B7076C(this, method);
  return svtLimitEntity->fields.defense;
}


int32_t __fastcall ServantStatusListViewItem__get_DispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dispLimitCount;
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_DispSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dispSelectList;
}


bool __fastcall ServantStatusListViewItem__get_EnableChangeVoice(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enableChangeVoice;
}


bool __fastcall ServantStatusListViewItem__get_EnableTdSpeed(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enableTdSpeed;
}


int32_t __fastcall ServantStatusListViewItem__get_EquipAtk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.atk;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0LL )
    return equipTarget1->fields.atk;
  else
    return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_EquipCost(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_EquipExp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.exp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0LL )
    return equipTarget1->fields.exp;
  else
    return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_EquipHp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.hp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0LL )
    return equipTarget1->fields.hp;
  else
    return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_EquipLevel(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.lv;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0LL )
    return equipTarget1->fields.lv;
  else
    return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_EquipLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4359322 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4359322 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    v5 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v5;
    *(_QWORD *)&v9.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
  }
  else
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0LL )
      return equipTarget1->fields.limitCount;
    else
      return 0;
  }
}


int32_t __fastcall ServantStatusListViewItem__get_EquipMaxLevel(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *equipUserSvtEntity; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  EquipTargetInfo_o *equipTarget1; // x0

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return UserServantEntity__getLevelMax(equipUserSvtEntity, 0LL);
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0LL )
    return EquipTargetInfo__getLevelMax(equipTarget1, 0LL);
  else
    return 0;
}


ServantEntity_o *__fastcall ServantStatusListViewItem__get_EquipServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipServantEntity;
}


EquipTargetInfo_o *__fastcall ServantStatusListViewItem__get_EquipTargetData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipTargetInfo;
}


int64_t __fastcall ServantStatusListViewItem__get_EquipTargetId1(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipTargetId1;
}


UserServantEntity_o *__fastcall ServantStatusListViewItem__get_EquipUserServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity;
}


int32_t __fastcall ServantStatusListViewItem__get_Exp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.exp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.exp;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields.exp;
  else
    return 0;
}


int64_t __fastcall ServantStatusListViewItem__get_FavoriteUserSvtId(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.favoriteUserSvtId;
}


int32_t __fastcall ServantStatusListViewItem__get_Hp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8

  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields.transformedHp;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.hp;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields.hp;
  if ( this->fields.isCollection )
    return this->fields.collectionHp;
  return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_IconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconLimitCount;
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_IconSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconSelectList;
}


bool __fastcall ServantStatusListViewItem__get_IsChangeImageLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0

  if ( !this->fields.userSvtEntity )
    return 0;
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_B7076C(0LL, method);
  return ServantEntity__get_IsServant(svtEntity, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsChoice(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool __fastcall ServantStatusListViewItem__get_IsCollection(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCollection;
}


bool __fastcall ServantStatusListViewItem__get_IsConvertOverwriteImage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isConvertOverwriteImage;
}


bool __fastcall ServantStatusListViewItem__get_IsDisplayCombineButton(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayCombineButton_k__BackingField;
}


bool __fastcall ServantStatusListViewItem__get_IsDisplayRandomLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isDisplayRandomLimitCount;
}


bool __fastcall ServantStatusListViewItem__get_IsEnableOwnRandomSetting(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEnableOwnRandomSetting;
}


bool __fastcall ServantStatusListViewItem__get_IsEnableServantQuest(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEnableServantQuest;
}


bool __fastcall ServantStatusListViewItem__get_IsEnableSupportRandomSetting(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEnableSupportRandomSetting;
}


bool __fastcall ServantStatusListViewItem__get_IsEquip(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
  {
    LOBYTE(this) = this->fields.equipTargetId1 > 0;
  }
  else
  {
    this = (ServantStatusListViewItem_o *)this->fields.servantLeaderInfo;
    if ( this )
      LOBYTE(this) = ServantLeaderInfo__get_IsEquip((ServantLeaderInfo_o *)this, 0LL);
  }
  return (char)this;
}


bool __fastcall ServantStatusListViewItem__get_IsEquipChangeMode(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquipChangeMode;
}


bool __fastcall ServantStatusListViewItem__get_IsEquipShowMode(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquipShowMode;
}


bool __fastcall ServantStatusListViewItem__get_IsEventJoin(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall ServantStatusListViewItem__get_IsLock(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool __fastcall ServantStatusListViewItem__get_IsMine(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantLeaderInfo == 0LL;
}


bool __fastcall ServantStatusListViewItem__get_IsModifyBattleVoice(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsModifyBattleVoice(userSvtEntity, this->fields.changeVoiceFlag, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall ServantStatusListViewItem__get_IsModifyChoice(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
    return UserServantEntity__IsModifyChoice(this->fields.userSvtEntity, this->fields.isChoice, 0LL);
  if ( this->fields.userCommandCodeEntity )
    return UserCommandCodeEntity__IsModifyChoice(this->fields.userCommandCodeEntity, this->fields.isChoice, 0LL);
  return 0;
}


bool __fastcall ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *ManualSetCommandCardLimit; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t commandCardLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_435931A & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_435931A = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  ManualSetCommandCardLimit = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    ManualSetCommandCardLimit = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !ManualSetCommandCardLimit->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      commandCardLimitCount = this->fields.commandCardLimitCount;
      v7 = this->fields.userSvtEntity;
      v6 = 0;
      return UserServantEntity__IsModifyCommandCardLimitCount(v7, commandCardLimitCount, v6, 0LL);
    }
LABEL_19:
    sub_B7076C(ManualSetCommandCardLimit, method);
  }
  ManualSetCommandCardLimit = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                                             this,
                                                             method);
  if ( !userSvtEntity )
    goto LABEL_19;
  commandCardLimitCount = (int)ManualSetCommandCardLimit;
  v6 = 1;
  v7 = userSvtEntity;
  return UserServantEntity__IsModifyCommandCardLimitCount(v7, commandCardLimitCount, v6, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *ManualSetDispLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t dispLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_4359318 & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_4359318 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  ManualSetDispLimitCount = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    ManualSetDispLimitCount = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !ManualSetDispLimitCount->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      dispLimitCount = this->fields.dispLimitCount;
      v7 = this->fields.userSvtEntity;
      v6 = 0;
      return UserServantEntity__IsModifyDispLimitCount(v7, dispLimitCount, v6, 0LL);
    }
LABEL_19:
    sub_B7076C(ManualSetDispLimitCount, method);
  }
  ManualSetDispLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_19;
  dispLimitCount = (int)ManualSetDispLimitCount;
  v6 = 1;
  v7 = userSvtEntity;
  return UserServantEntity__IsModifyDispLimitCount(v7, dispLimitCount, v6, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *ManualSetIconLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t iconLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_435931D & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_435931D = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  ManualSetIconLimitCount = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    ManualSetIconLimitCount = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !ManualSetIconLimitCount->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      iconLimitCount = this->fields.iconLimitCount;
      v7 = this->fields.userSvtEntity;
      v6 = 0;
      return UserServantEntity__IsModifyIconLimitCount(v7, iconLimitCount, v6, 0LL);
    }
LABEL_19:
    sub_B7076C(ManualSetIconLimitCount, method);
  }
  ManualSetIconLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_19;
  iconLimitCount = (int)ManualSetIconLimitCount;
  v6 = 1;
  v7 = userSvtEntity;
  return UserServantEntity__IsModifyIconLimitCount(v7, iconLimitCount, v6, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyLock(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
    return UserServantEntity__IsModifyLock(this->fields.userSvtEntity, this->fields.isLock, 0LL);
  if ( this->fields.userCommandCodeEntity )
    return UserCommandCodeEntity__IsModifyLock(this->fields.userCommandCodeEntity, this->fields.isLock, 0LL);
  return 0;
}


bool __fastcall ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *ManualSetPortraitLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t portraitLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_435931F & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_435931F = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  ManualSetPortraitLimitCount = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    ManualSetPortraitLimitCount = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !ManualSetPortraitLimitCount->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      portraitLimitCount = this->fields.portraitLimitCount;
      v7 = this->fields.userSvtEntity;
      v6 = 0;
      return UserServantEntity__IsModifyPortraitLimitCount(v7, portraitLimitCount, v6, 0LL);
    }
LABEL_19:
    sub_B7076C(ManualSetPortraitLimitCount, method);
  }
  ManualSetPortraitLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetPortraitLimitCount(
                                                               this,
                                                               method);
  if ( !userSvtEntity )
    goto LABEL_19;
  portraitLimitCount = (int)ManualSetPortraitLimitCount;
  v6 = 1;
  v7 = userSvtEntity;
  return UserServantEntity__IsModifyPortraitLimitCount(v7, portraitLimitCount, v6, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  int32_t supportRandomSettingButtonIndex; // w9
  int32_t ownRandomSettingButtonIndex; // w1
  int v6; // w8
  _BOOL4 v7; // w9
  int32_t v8; // w2

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    supportRandomSettingButtonIndex = this->fields.supportRandomSettingButtonIndex;
    ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
    v6 = supportRandomSettingButtonIndex - 3;
    v7 = supportRandomSettingButtonIndex == 4;
    if ( v6 == 2 )
      v8 = 2;
    else
      v8 = v7;
    LOBYTE(userSvtEntity) = UserServantEntity__IsModifyRandomLimitCountSetting(
                              userSvtEntity,
                              ownRandomSettingButtonIndex,
                              v8,
                              0LL);
  }
  return (char)userSvtEntity;
}


bool __fastcall ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4359321 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4359321 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return 0;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  v4 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v7, 0LL) != this->fields.supportRandomLimitCount;
}


bool __fastcall ServantStatusListViewItem__get_IsModifySvtCommonFlag(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsModifySvtCommonFlag(
                                        userSvtCollectionEntity,
                                        this->fields.svtCommonFlag,
                                        0LL);
  return (char)userSvtCollectionEntity;
}


bool __fastcall ServantStatusListViewItem__get_IsNoPeriod(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsNoPeriod(userSvtEntity, 0LL);
  return (char)userSvtEntity;
}


bool __fastcall ServantStatusListViewItem__get_IsNpcFollowerServantEquip(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNpcFollowerServantEquip;
}


bool __fastcall ServantStatusListViewItem__get_IsTransformServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTransformServant_k__BackingField;
}


bool __fastcall ServantStatusListViewItem__get_IsTransformed(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTransformed_k__BackingField;
}


bool __fastcall ServantStatusListViewItem__get_IsUse(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


int32_t __fastcall ServantStatusListViewItem__get_Level(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.lv;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.lv;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields.lv;
  if ( this->fields.isCollection )
    return this->fields.collectionLv;
  return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_LimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4359316 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4359316 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v10.fields.currentCryptoKey = v5;
    *(_QWORD *)&v10.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v10, 0LL);
  }
  else
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      return servantLeaderInfo->fields.limitCount;
    }
    else
    {
      equipTargetInfo = this->fields.equipTargetInfo;
      if ( equipTargetInfo )
      {
        return equipTargetInfo->fields.limitCount;
      }
      else
      {
        userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
          return userSvtCollectionEntity->fields.maxLimitCount;
        else
          return 0;
      }
    }
  }
}


int32_t __fastcall ServantStatusListViewItem__get_Luck(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B7076C(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B7076C(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4359317 & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_4359317 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B7076C(v3, method);
    p_cardLimitCount = &currentLimitCountCache->fields.cardLimitCount;
  }
  else
  {
    p_cardLimitCount = &this->fields.cardLimitCount;
  }
  return *p_cardLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCommandCardLimit(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_commandCardLimitCount; // x8

  if ( (byte_435931C & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_435931C = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B7076C(v3, method);
    p_commandCardLimitCount = &currentLimitCountCache->fields.commandCardLimitCount;
  }
  else
  {
    p_commandCardLimitCount = &this->fields.commandCardLimitCount;
  }
  return *p_commandCardLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_dispLimitCount; // x8

  if ( (byte_4359319 & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_4359319 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B7076C(v3, method);
    p_dispLimitCount = &currentLimitCountCache->fields.dispLimitCount;
  }
  else
  {
    p_dispLimitCount = &this->fields.dispLimitCount;
  }
  return *p_dispLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_iconLimitCount; // x8

  if ( (byte_435931E & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_435931E = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B7076C(v3, method);
    p_iconLimitCount = &currentLimitCountCache->fields.iconLimitCount;
  }
  else
  {
    p_iconLimitCount = &this->fields.iconLimitCount;
  }
  return *p_iconLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetPortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_portraitLimitCount; // x8

  if ( (byte_4359320 & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_4359320 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B7076C(v3, method);
    p_portraitLimitCount = &currentLimitCountCache->fields.portraitLimitCount;
  }
  else
  {
    p_portraitLimitCount = &this->fields.portraitLimitCount;
  }
  return *p_portraitLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_MaxCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxCardLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_MaxCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxCommandCardLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_MaxDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxDispLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_MaxIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxIconLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_MaxLevel(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
    return UserServantEntity__getLevelMax(this->fields.userSvtEntity, 0LL);
  if ( this->fields.servantLeaderInfo )
    return ServantLeaderInfo__getLevelMax(this->fields.servantLeaderInfo, 0LL);
  if ( this->fields.equipTargetInfo )
    return EquipTargetInfo__getLevelMax(this->fields.equipTargetInfo, 0LL);
  if ( this->fields.isCollection )
    return this->fields.collectionLv;
  return 0;
}


int32_t __fastcall ServantStatusListViewItem__get_MaxPortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxPortraitLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_Member(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.memberNum;
}


int32_t __fastcall ServantStatusListViewItem__get_Np(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B7076C(this, method);
  return svtLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_OwnRandomSettingSelectedButton(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.ownRandomSettingButtonIndex;
}


int32_t __fastcall ServantStatusListViewItem__get_ParamLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.paramLimitCount;
}


PartyListViewItem_o *__fastcall ServantStatusListViewItem__get_PartyItem(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


int32_t __fastcall ServantStatusListViewItem__get_PortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.portraitLimitCount;
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_PortraitSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.portraitSelectList;
}


int32_t __fastcall ServantStatusListViewItem__get_Power(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B7076C(this, method);
  return svtLimitEntity->fields.power;
}


int64_t __fastcall ServantStatusListViewItem__get_PushUserSvtId(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.pushUserSvtId;
}


ServantEntity_o *__fastcall ServantStatusListViewItem__get_Servant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtEntity;
}


ServantCommentEntity_array *__fastcall ServantStatusListViewItem__get_ServantCommentDataList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtCommentEntityList;
}


ServantLeaderInfo_o *__fastcall ServantStatusListViewItem__get_ServantLeaderData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantLeaderInfo;
}


int32_t __fastcall ServantStatusListViewItem__get_SupportRandomLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportRandomLimitCount;
}


System_Int32_array *__fastcall ServantStatusListViewItem__get_SupportRandomLimitCountList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportRandomLimitCountList;
}


int32_t __fastcall ServantStatusListViewItem__get_SupportRandomSettingParam(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.supportRandomSettingButtonIndex == 5 )
    return 2;
  else
    return this->fields.supportRandomSettingButtonIndex == 4;
}


int32_t __fastcall ServantStatusListViewItem__get_SupportRandomSettingSelectedButtonByIndex(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportRandomSettingButtonIndex;
}


int32_t __fastcall ServantStatusListViewItem__get_SvtCommonFlag(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtCommonFlag;
}


int32_t __fastcall ServantStatusListViewItem__get_SvtId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4359314 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4359314 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    return 0;
  v5 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v7, 0LL);
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedAgility(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_B7076C(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedDefense(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_B7076C(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedLuck(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_B7076C(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedMagic(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_B7076C(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedNp(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_B7076C(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedPower(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_B7076C(this, method);
  return transformedServantLimitEntity->fields.power;
}


ServantEntity_o *__fastcall ServantStatusListViewItem__get_TransformedServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransformedServant_k__BackingField;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedServantDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransformedServantDispLimitCount_k__BackingField;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedSvtId(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransformedSvtId_k__BackingField;
}


int32_t __fastcall ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t svtCommonFlag; // w8

  svtCommonFlag = this->fields.svtCommonFlag;
  if ( (svtCommonFlag & 2) == 0 )
    return 0;
  if ( (~(svtCommonFlag << 29 >> 31) & 3) != 0 )
    return 1;
  return 2;
}


UserCommandCodeEntity_o *__fastcall ServantStatusListViewItem__get_UserCommandCode(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeEntity;
}


UserCommandCodeCollectionEntity_o *__fastcall ServantStatusListViewItem__get_UserCommandCodeCollection(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeCollectionEntity;
}


UserGameEntity_o *__fastcall ServantStatusListViewItem__get_UserGame(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userGameEntity;
}


int64_t __fastcall ServantStatusListViewItem__get_UserId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  _QWORD *p_klass; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_435932A & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_435932A = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v4 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v9.fields.fakeValue = v4;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v8 = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v8, 0LL);
  }
  else
  {
    servantLeaderInfo = v2->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
      return servantLeaderInfo->fields.userId;
    p_klass = &v2->fields.equipTargetInfo->klass;
    if ( !p_klass )
    {
      if ( !v2->fields.isCollection )
        return 0LL;
      p_klass = &v2->fields.userSvtCollectionEntity->klass;
      if ( !p_klass )
        sub_B7076C(this, method);
    }
    return p_klass[2];
  }
}


UserServantEntity_o *__fastcall ServantStatusListViewItem__get_UserServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


UserServantCollectionEntity_o *__fastcall ServantStatusListViewItem__get_UserServantCollection(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtCollectionEntity;
}


void __fastcall ServantStatusListViewItem__set_ChangeBattleVoiceSelect(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.changeVoiceFlag = value;
}


void __fastcall ServantStatusListViewItem__set_CommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.commandCardLimitCount = value;
}


void __fastcall ServantStatusListViewItem__set_DispLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dispLimitCount = value;
}


void __fastcall ServantStatusListViewItem__set_FavoriteUserSvtId(
        ServantStatusListViewItem_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields.favoriteUserSvtId = value;
}


void __fastcall ServantStatusListViewItem__set_IconLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.iconLimitCount = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0

  if ( (byte_4359323 & 1) == 0 )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_4359323 = 1;
  }
  this->fields.isEnableOwnRandomSetting = value;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_434FE8F )
  {
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_434FE8F = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = RandomLimitCountManager_TypeInfo;
  }
  if ( v5->static_fields->enableRandomLimitCount && !this->fields.isConvertOverwriteImage && this->fields.userSvtEntity )
  {
    if ( this->fields.isEnableOwnRandomSetting )
      ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 0, method);
    ServantStatusListViewItem__RefreshLimitCountWithRandom(this, (const MethodInfo *)value);
  }
}


void __fastcall ServantStatusListViewItem__set_IsEnableSupportRandomSetting(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnableSupportRandomSetting = value;
}


void __fastcall ServantStatusListViewItem__set_IsTransformServant(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTransformServant_k__BackingField = value;
}


void __fastcall ServantStatusListViewItem__set_IsTransformed(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTransformed_k__BackingField = value;
}


void __fastcall ServantStatusListViewItem__set_PortraitLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.portraitLimitCount = value;
}


void __fastcall ServantStatusListViewItem__set_PushUserSvtId(
        ServantStatusListViewItem_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields.pushUserSvtId = value;
}


void __fastcall ServantStatusListViewItem__set_TransformedServant(
        ServantStatusListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._TransformedServant_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._TransformedServant_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantStatusListViewItem__set_TransformedServantDispLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TransformedServantDispLimitCount_k__BackingField = value;
}


void __fastcall ServantStatusListViewItem__set_TransformedSvtId(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TransformedSvtId_k__BackingField = value;
}


void __fastcall ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  int32_t svtCommonFlag; // w8
  int32_t v4; // w8

  svtCommonFlag = this->fields.svtCommonFlag;
  if ( value )
  {
    this->fields.svtCommonFlag = svtCommonFlag | 2;
    if ( value == 2 )
    {
      v4 = svtCommonFlag | 6;
    }
    else
    {
      if ( value != 1 )
        return;
      v4 = svtCommonFlag & 0xFFFFFFF9 | 2;
    }
  }
  else
  {
    v4 = svtCommonFlag & 0xFFFFFFF9;
  }
  this->fields.svtCommonFlag = v4;
}


void __fastcall ServantStatusListViewItem_LimitCountCache___ctor(
        ServantStatusListViewItem_LimitCountCache_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}