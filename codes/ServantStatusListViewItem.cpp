void __fastcall ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct PartyOrganizationListViewItem_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
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
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t pushUserSvtId; // x9
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  PartyOrganizationListViewItem_o *v48; // x0
  struct System_Int64_array *EquipList; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct PartyOrganizationListViewItem_o *v62; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v67; // x20
  __int64 v68; // x22
  __int64 v69; // x23
  int32_t v70; // w0
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x20
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  WebViewManager_o *v79; // x0
  WarQuestSelectionMaster_o *v80; // x0
  ServantLimitMaster_o *v81; // x22
  int32_t v82; // w0
  int32_t v83; // w23
  int32_t v84; // w0
  struct ServantLimitEntity_o *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  WebViewManager_o *v92; // x0
  WarQuestSelectionMaster_o *v93; // x0
  ServantCommentMaster_o *v94; // x22
  int32_t v95; // w0
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  WebViewManager_o *v103; // x0
  WarQuestSelectionMaster_o *v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v105; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // q1
  UserServantCollectionMaster_o *v107; // x22
  int64_t v108; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v109; // x8
  int64_t v110; // x21
  int32_t v111; // w0
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct PartyOrganizationListViewItem_o *v119; // x8
  UserServantEntity_o *userSvtEntity; // x0
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct UserServantEntity_o *v128; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  int32_t lv; // w22
  int32_t v131; // w0
  struct System_Int32_array *CostumeList_21413440; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  const MethodInfo *v139; // x1
  struct UserServantCollectionEntity_o *v140; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v142; // x8
  int32_t v143; // w8
  UserServantEntity_o *v144; // x0
  struct System_Int64_array *equipIdList; // x9
  bool IsLock; // w0
  UserServantEntity_o *v147; // x8
  _BOOL8 IsChoice; // x0
  __int64 v149; // x1
  const MethodInfo *v150; // x2
  struct System_Int64_array *v151; // x8
  int64_t v152; // x1
  struct UserServantCollectionEntity_o *v153; // x8
  ServantEntity_o *svtEntity; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v162; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v164; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v166; // x8
  int32_t v167; // w0
  UserServantEntity_o *v168; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v170; // x2
  const MethodInfo *v171; // x1
  const MethodInfo *v172; // x2
  RandomLimitCountManager_c *v173; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  if ( (byte_4101948 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4101948 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)partyItem,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !partyItem )
    goto LABEL_65;
  v23 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberItem,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_65;
  this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
  pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  memberItem = this->fields.memberItem;
  this->fields.pushUserSvtId = pushUserSvtId;
  if ( !memberItem )
    goto LABEL_65;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v48 = this->fields.memberItem;
  if ( !v48 )
    goto LABEL_65;
  EquipList = PartyOrganizationListViewItem__GetEquipList(v48, 0LL);
  this->fields.equipIdList = EquipList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)EquipList,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v62 = this->fields.memberItem;
  if ( !v62 )
    goto LABEL_65;
  questRestrictionInfo = v62->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v69 = *(_QWORD *)&v66[5].fields.currentCryptoKey;
  v68 = *(_QWORD *)&v66[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v176.fields.currentCryptoKey = v69;
  *(_QWORD *)&v176.fields.fakeValue = v68;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v176, 0LL);
  if ( !v67 )
    goto LABEL_65;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v67,
                                       v70,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v79 )
    goto LABEL_65;
  v80 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v79,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v81 = (ServantLimitMaster_o *)v80;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v83 = v82;
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v81 )
    goto LABEL_65;
  v85 = ServantLimitMaster__GetEntity(v81, v83, v84, 0LL);
  this->fields.svtLimitEntity = v85;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v92 )
    goto LABEL_65;
  v93 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v92,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_65;
  v94 = (ServantCommentMaster_o *)v93;
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_svtEntity)[1], 0LL);
  if ( !v94 )
    goto LABEL_65;
  EntityList = ServantCommentMaster__GetEntityList(v94, v95, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v103 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v103 )
    goto LABEL_65;
  v104 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v103,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v105 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v106 = v105[4];
  v107 = (UserServantCollectionMaster_o *)v104;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.currentCryptoKey = v105[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.fakeValue = v106;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v174 = v175;
  v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v174, 0LL);
  v109 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v110 = v108;
  v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v109[5], 0LL);
  if ( !v107 )
    goto LABEL_65;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v107, v110, v111, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  v119 = this->fields.memberItem;
  if ( !v119 )
    goto LABEL_65;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v119->fields.isConvertOverwriteImage;
  if ( !userSvtEntity )
    goto LABEL_65;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v128 = this->fields.userSvtEntity;
  if ( !v128 )
    goto LABEL_65;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = v128->fields.lv;
  v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v128->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_65;
  CostumeList_21413440 = UserServantCollectionEntity__getCostumeList_21413440(userSvtCollectionEntity, lv, v131, 0LL);
  this->fields.costumeIds = CostumeList_21413440;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList_21413440,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v139);
  v140 = this->fields.userSvtCollectionEntity;
  if ( !v140 )
    goto LABEL_65;
  svtCommonFlag = v140->fields.svtCommonFlag;
  v142 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v142 )
    goto LABEL_65;
  v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v142->fields.battleVoice, 0LL);
  v144 = this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v143;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !v144 )
    goto LABEL_65;
  IsLock = UserServantEntity__IsLock(v144, 0LL);
  v147 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v147 )
    goto LABEL_65;
  IsChoice = UserServantEntity__IsChoice(v147, 0LL);
  v151 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v151 )
  {
    if ( !v151->max_length )
    {
      sub_B17100(IsChoice, v149, v150);
      sub_B170A0();
    }
    v152 = v151->m_Items[0];
  }
  else
  {
    v152 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v152, v150);
  v153 = this->fields.userSvtCollectionEntity;
  svtEntity = this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v153 != 0LL;
  if ( !svtEntity )
    goto LABEL_65;
  if ( ServantEntity__IsNameHide(svtEntity, 0LL) )
  {
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)*p_svtEntity, 0LL);
      goto LABEL_45;
    }
LABEL_65:
    sub_B170D4();
  }
  IsNameTrue = 0;
LABEL_45:
  v162 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v162 != 0LL;
  if ( !v162 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v162, 0LL);
  v164 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v164 )
  {
LABEL_51:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_52;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v164, 0LL);
  v166 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v166 )
  {
LABEL_52:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_53;
  }
  v167 = BasicHelper__DecryptValue_19259816(v166->fields.limitCountSupport, 0LL);
  v168 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v167;
  if ( v168 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v168, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_53:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  ServantStatusListViewItem__SetLimitCountInfo(this, this->fields.userSvtEntity, v170);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v171);
    byte_40F8215 = 1;
  }
  v173 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v173 = RandomLimitCountManager_TypeInfo;
  }
  if ( v173->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v172);
  ServantStatusListViewItem__ModifyInfo(this, v171);
}


void __fastcall ServantStatusListViewItem___ctor_36647016(
        ServantStatusListViewItem_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
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
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t pushUserSvtId; // x9
  struct PartyOrganizationListViewItem_o *v45; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  PartyOrganizationListViewItem_o *v48; // x0
  struct System_Int64_array *EquipList; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct PartyOrganizationListViewItem_o *v62; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v67; // x20
  __int64 v68; // x22
  __int64 v69; // x23
  int32_t v70; // w0
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x20
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  WebViewManager_o *v79; // x0
  WarQuestSelectionMaster_o *v80; // x0
  ServantLimitMaster_o *v81; // x22
  int32_t v82; // w0
  int32_t v83; // w23
  int32_t v84; // w0
  struct ServantLimitEntity_o *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  WebViewManager_o *v92; // x0
  WarQuestSelectionMaster_o *v93; // x0
  ServantCommentMaster_o *v94; // x22
  int32_t v95; // w0
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  WebViewManager_o *v103; // x0
  WarQuestSelectionMaster_o *v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v105; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // q1
  UserServantCollectionMaster_o *v107; // x22
  int64_t v108; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v109; // x8
  int64_t v110; // x21
  int32_t v111; // w0
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct PartyOrganizationListViewItem_o *v119; // x8
  UserServantEntity_o *userSvtEntity; // x0
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct UserServantEntity_o *v128; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  int32_t lv; // w22
  int32_t v131; // w0
  struct System_Int32_array *CostumeList_21413440; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  const MethodInfo *v139; // x1
  struct UserServantCollectionEntity_o *v140; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v142; // x8
  int32_t v143; // w8
  UserServantEntity_o *v144; // x0
  struct System_Int64_array *equipIdList; // x9
  bool IsLock; // w0
  UserServantEntity_o *v147; // x8
  _BOOL8 IsChoice; // x0
  __int64 v149; // x1
  const MethodInfo *v150; // x2
  struct System_Int64_array *v151; // x8
  int64_t v152; // x1
  struct UserServantCollectionEntity_o *v153; // x8
  ServantEntity_o *svtEntity; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v162; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v164; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v166; // x8
  int32_t v167; // w0
  UserServantEntity_o *v168; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v170; // x2
  const MethodInfo *v171; // x1
  const MethodInfo *v172; // x2
  RandomLimitCountManager_c *v173; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  if ( (byte_4101949 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4101949 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.warBoardPartyItem,
    (System_Int32_array **)partyItem,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !partyItem )
    goto LABEL_65;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberItem,
    (System_Int32_array **)MemberItem,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_65;
  this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
  pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  v45 = this->fields.memberItem;
  this->fields.pushUserSvtId = pushUserSvtId;
  if ( !v45 )
    goto LABEL_65;
  userServantEntity = v45->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v48 = this->fields.memberItem;
  if ( !v48 )
    goto LABEL_65;
  EquipList = PartyOrganizationListViewItem__GetEquipList(v48, 0LL);
  this->fields.equipIdList = EquipList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)EquipList,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v62 = this->fields.memberItem;
  if ( !v62 )
    goto LABEL_65;
  questRestrictionInfo = v62->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v69 = *(_QWORD *)&v66[5].fields.currentCryptoKey;
  v68 = *(_QWORD *)&v66[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v176.fields.currentCryptoKey = v69;
  *(_QWORD *)&v176.fields.fakeValue = v68;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v176, 0LL);
  if ( !v67 )
    goto LABEL_65;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v67,
                                       v70,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v79 )
    goto LABEL_65;
  v80 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v79,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v81 = (ServantLimitMaster_o *)v80;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v83 = v82;
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v81 )
    goto LABEL_65;
  v85 = ServantLimitMaster__GetEntity(v81, v83, v84, 0LL);
  this->fields.svtLimitEntity = v85;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v92 )
    goto LABEL_65;
  v93 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v92,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_65;
  v94 = (ServantCommentMaster_o *)v93;
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_svtEntity)[1], 0LL);
  if ( !v94 )
    goto LABEL_65;
  EntityList = ServantCommentMaster__GetEntityList(v94, v95, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v103 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v103 )
    goto LABEL_65;
  v104 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v103,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v105 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v106 = v105[4];
  v107 = (UserServantCollectionMaster_o *)v104;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.currentCryptoKey = v105[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v175.fields.fakeValue = v106;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v174 = v175;
  v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v174, 0LL);
  v109 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v110 = v108;
  v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v109[5], 0LL);
  if ( !v107 )
    goto LABEL_65;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v107, v110, v111, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  v119 = this->fields.memberItem;
  if ( !v119 )
    goto LABEL_65;
  userSvtEntity = this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v119->fields.isConvertOverwriteImage;
  if ( !userSvtEntity )
    goto LABEL_65;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v128 = this->fields.userSvtEntity;
  if ( !v128 )
    goto LABEL_65;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = v128->fields.lv;
  v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v128->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_65;
  CostumeList_21413440 = UserServantCollectionEntity__getCostumeList_21413440(userSvtCollectionEntity, lv, v131, 0LL);
  this->fields.costumeIds = CostumeList_21413440;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList_21413440,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v139);
  v140 = this->fields.userSvtCollectionEntity;
  if ( !v140 )
    goto LABEL_65;
  svtCommonFlag = v140->fields.svtCommonFlag;
  v142 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v142 )
    goto LABEL_65;
  v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v142->fields.battleVoice, 0LL);
  v144 = this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v143;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !v144 )
    goto LABEL_65;
  IsLock = UserServantEntity__IsLock(v144, 0LL);
  v147 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v147 )
    goto LABEL_65;
  IsChoice = UserServantEntity__IsChoice(v147, 0LL);
  v151 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v151 )
  {
    if ( !v151->max_length )
    {
      sub_B17100(IsChoice, v149, v150);
      sub_B170A0();
    }
    v152 = v151->m_Items[0];
  }
  else
  {
    v152 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v152, v150);
  v153 = this->fields.userSvtCollectionEntity;
  svtEntity = this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v153 != 0LL;
  if ( !svtEntity )
    goto LABEL_65;
  if ( ServantEntity__IsNameHide(svtEntity, 0LL) )
  {
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)*p_svtEntity, 0LL);
      goto LABEL_45;
    }
LABEL_65:
    sub_B170D4();
  }
  IsNameTrue = 0;
LABEL_45:
  v162 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v162 != 0LL;
  if ( !v162 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v162, 0LL);
  v164 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v164 )
  {
LABEL_51:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_52;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v164, 0LL);
  v166 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v166 )
  {
LABEL_52:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_53;
  }
  v167 = BasicHelper__DecryptValue_19259816(v166->fields.limitCountSupport, 0LL);
  v168 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v167;
  if ( v168 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v168, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_53:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  ServantStatusListViewItem__SetLimitCountInfo(this, this->fields.userSvtEntity, v170);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v171);
    byte_40F8215 = 1;
  }
  v173 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v173 = RandomLimitCountManager_TypeInfo;
  }
  if ( v173->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v172);
  ServantStatusListViewItem__ModifyInfo(this, v171);
}


void __fastcall ServantStatusListViewItem___ctor_36648624(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        bool enableBattleVoice,
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int128 v33; // q1
  int64_t v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x24
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x23
  __int64 v59; // x26
  __int64 v60; // x27
  int32_t v61; // w0
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x23
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  WebViewManager_o *v70; // x0
  WarQuestSelectionMaster_o *v71; // x0
  ServantLimitMaster_o *v72; // x26
  int32_t v73; // w0
  int32_t v74; // w27
  int32_t v75; // w0
  struct ServantLimitEntity_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  WebViewManager_o *v83; // x0
  WarQuestSelectionMaster_o *v84; // x0
  ServantCommentMaster_o *v85; // x26
  int32_t v86; // w0
  int32_t v87; // w27
  int32_t v88; // w0
  struct ServantCommentEntity_array *EntityList_30493208; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v96; // x8
  __int64 v97; // x26
  __int64 v98; // x27
  int32_t v99; // w0
  bool IsConvertOverwriteImage; // w8
  int64_t UserId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // q0
  int64_t v104; // x25
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  WebViewManager_o *v111; // x0
  WarQuestSelectionMaster_o *v112; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // q0
  UserServantCollectionMaster_o *v115; // x25
  bool v116; // w20
  int64_t v117; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v118; // x8
  int64_t v119; // x26
  __int64 v120; // x27
  __int64 v121; // x28
  int32_t v122; // w0
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x25
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  UserServantEntity_o *userSvtEntity; // x0
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  struct UserServantEntity_o *v139; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x26
  int32_t lv; // w27
  int32_t v142; // w0
  struct System_Int32_array *CostumeList_21413440; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  const MethodInfo *v150; // x1
  UserServantEntity_o *v151; // x0
  struct System_Int32_array *v152; // x0
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  struct UserServantEntity_o *v171; // x8
  __int64 v172; // x25
  __int64 v173; // x26
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  UserServantEntity_o *v186; // x0
  bool IsLock; // w0
  UserServantEntity_o *v188; // x8
  bool IsChoice; // w0
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  __int64 v192; // x1
  const MethodInfo *v193; // x2
  WebViewManager_o *v194; // x0
  WarQuestSelectionMaster_o *v195; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v196; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // q0
  UserDeckMaster_o *v198; // x22
  bool v199; // w20
  int64_t v200; // x0
  bool v201; // w8
  struct System_Int64_array *v202; // x9
  int64_t v203; // x1
  struct UserServantCollectionEntity_o *v204; // x8
  ServantEntity_o *v205; // x0
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v213; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v215; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v217; // x8
  int32_t v218; // w0
  UserServantEntity_o *v219; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v221; // x2
  const MethodInfo *v222; // x1
  const MethodInfo *v223; // x2
  RandomLimitCountManager_c *v224; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v228; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v229; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v231; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v232; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v233; // 0:x0.16

  if ( (byte_410194A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_410194A = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  if ( !userServant )
    goto LABEL_102;
  v33 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v229.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v229.fields.fakeValue = v33;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v228 = v229;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v228, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_102;
  if ( v34 == userGameEntity->fields.userId )
  {
    this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
    this->fields.pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v35, v36, v37, v38, v39, v40);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServant,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.equipIdList = equipIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)equipIdList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_102;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v57 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_102;
  v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v60 = *(_QWORD *)&v57[5].fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v230.fields.currentCryptoKey = v60;
  *(_QWORD *)&v230.fields.fakeValue = v59;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v230, 0LL);
  if ( !v58 )
    goto LABEL_102;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v58,
                                       v61,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v70 )
    goto LABEL_102;
  v71 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v70,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_102;
  v72 = (ServantLimitMaster_o *)v71;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_102;
  v74 = v73;
  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v72 )
    goto LABEL_102;
  v76 = ServantLimitMaster__GetEntity(v72, v74, v75, 0LL);
  this->fields.svtLimitEntity = v76;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v83 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v83 )
    goto LABEL_102;
  v84 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v83,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_102;
  v85 = (ServantCommentMaster_o *)v84;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_102;
  v87 = v86;
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[7], 0LL);
  if ( !v85 )
    goto LABEL_102;
  EntityList_30493208 = ServantCommentMaster__GetEntityList_30493208(v85, v87, v88, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList_30493208;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList_30493208,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( questRestrictionInfo )
  {
    v96 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_102;
    v98 = *(_QWORD *)&v96[5].fields.currentCryptoKey;
    v97 = *(_QWORD *)&v96[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v231.fields.currentCryptoKey = v98;
    *(_QWORD *)&v231.fields.fakeValue = v97;
    v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v231, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v99, 0LL);
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
  UserId = NetworkManager__get_UserId(0LL);
  v102 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_102:
    sub_B170D4();
  v103 = v102[4];
  v104 = UserId;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.currentCryptoKey = v102[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.fakeValue = v103;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v227 = v229;
  if ( v104 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v227, 0LL) )
  {
    v111 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v111 )
      goto LABEL_102;
    v112 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v111,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v113 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_102;
    v114 = v113[4];
    v115 = (UserServantCollectionMaster_o *)v112;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.currentCryptoKey = v113[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.fakeValue = v114;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v116 = enableBattleVoice;
    v226 = v229;
    v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v226, 0LL);
    v118 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_102;
    v119 = v117;
    v121 = *(_QWORD *)&v118[5].fields.currentCryptoKey;
    v120 = *(_QWORD *)&v118[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v232.fields.currentCryptoKey = v121;
    *(_QWORD *)&v232.fields.fakeValue = v120;
    v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v232, 0LL);
    if ( !v115 )
      goto LABEL_102;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v115, v119, v122, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      (System_Int32_array **)EntityDefinitely,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_102;
    enableBattleVoice = v116;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)CommandCodeIdList,
      v133,
      v134,
      v135,
      v136,
      v137,
      v138);
    v139 = this->fields.userSvtEntity;
    if ( !v139 )
      goto LABEL_102;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = v139->fields.lv;
    v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v139->fields.limitCount, 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_102;
    CostumeList_21413440 = UserServantCollectionEntity__getCostumeList_21413440(userSvtCollectionEntity, lv, v142, 0LL);
    this->fields.costumeIds = CostumeList_21413440;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.costumeIds,
      (System_Int32_array **)CostumeList_21413440,
      v144,
      v145,
      v146,
      v147,
      v148,
      v149);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v150);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      0LL,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    v151 = this->fields.userSvtEntity;
    if ( !v151 )
      goto LABEL_102;
    v152 = UserServantEntity__getCommandCodeIdList(v151, 0LL);
    this->fields.commandCodeIdList = v152;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)v152,
      v153,
      v154,
      v155,
      v156,
      v157,
      v158);
    this->fields.costumeIds = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v159, v160, v161, v162, v163, v164);
    this->fields.costumeAndOtherIds = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.costumeAndOtherIds,
      0LL,
      v165,
      v166,
      v167,
      v168,
      v169,
      v170);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_102;
  v171 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  if ( !v171 )
    goto LABEL_102;
  v173 = *(_QWORD *)&v171->fields.battleVoice.fields.currentCryptoKey;
  v172 = *(_QWORD *)&v171->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v233.fields.currentCryptoKey = v173;
  *(_QWORD *)&v233.fields.fakeValue = v172;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v233, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v174, v175, v176, v177, v178, v179);
  this->fields.equipTargetInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v180, v181, v182, v183, v184, v185);
  v186 = this->fields.userSvtEntity;
  if ( !v186 )
    goto LABEL_102;
  IsLock = UserServantEntity__IsLock(v186, 0LL);
  v188 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v188 )
    goto LABEL_102;
  IsChoice = UserServantEntity__IsChoice(v188, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = IsChoice;
  if ( !svtEntity )
    goto LABEL_102;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    v194 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v194 )
      goto LABEL_102;
    v195 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v194,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v196 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_102;
    v197 = v196[2];
    v198 = (UserDeckMaster_o *)v195;
    v199 = enableTdSpeed;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.currentCryptoKey = v196[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v229.fields.fakeValue = v197;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v225 = v229;
    v200 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v225, 0LL);
    if ( !v198 )
      goto LABEL_102;
    IsServantEquip = UserDeckMaster__IsEquip(v198, v200, 0LL);
    v201 = IsServantEquip;
  }
  else
  {
    v199 = enableTdSpeed;
    v201 = 0;
  }
  v202 = this->fields.equipIdList;
  this->fields.isUse = v201;
  if ( v202 )
  {
    if ( !v202->max_length )
    {
      sub_B17100(IsServantEquip, v192, v193);
      sub_B170A0();
    }
    v203 = v202->m_Items[0];
  }
  else
  {
    v203 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v203, v193);
  v204 = this->fields.userSvtCollectionEntity;
  v205 = this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v204 != 0LL && v199;
  if ( !v205 )
    goto LABEL_102;
  if ( ServantEntity__IsNameHide(v205, 0LL) )
  {
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)*p_svtEntity, 0LL);
      goto LABEL_82;
    }
    goto LABEL_102;
  }
  IsNameTrue = 0;
LABEL_82:
  v213 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue && enableBattleVoice;
  this->fields.isDisplayRandomLimitCount = v213 != 0LL;
  if ( !v213 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_88;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v213, 0LL);
  v215 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v215 )
  {
LABEL_88:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_89;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v215, 0LL);
  v217 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v217 )
  {
LABEL_89:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_90;
  }
  v218 = BasicHelper__DecryptValue_19259816(v217->fields.limitCountSupport, 0LL);
  v219 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v218;
  if ( v219 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v219, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_90:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v206,
    v207,
    v208,
    v209,
    v210,
    v211);
  ServantStatusListViewItem__SetLimitCountInfo(this, this->fields.userSvtEntity, v221);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v222);
    byte_40F8215 = 1;
  }
  v224 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v224 = RandomLimitCountManager_TypeInfo;
  }
  if ( v224->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v223);
  ServantStatusListViewItem__ModifyInfo(this, v222);
}


void __fastcall ServantStatusListViewItem___ctor_36650904(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int128 v24; // q1
  int64_t v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x21
  __int64 v50; // x23
  __int64 v51; // x24
  int32_t v52; // w0
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  WebViewManager_o *v61; // x0
  WarQuestSelectionMaster_o *v62; // x0
  ServantLimitMaster_o *v63; // x23
  int32_t v64; // w0
  int32_t v65; // w24
  int32_t v66; // w0
  struct ServantLimitEntity_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  WebViewManager_o *v74; // x0
  WarQuestSelectionMaster_o *v75; // x0
  ServantCommentMaster_o *v76; // x23
  int32_t v77; // w0
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  int64_t UserId; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // q0
  int64_t v88; // x23
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  WebViewManager_o *v95; // x0
  WarQuestSelectionMaster_o *v96; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // q0
  UserServantCollectionMaster_o *v99; // x23
  int64_t v100; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v101; // x8
  int64_t v102; // x22
  __int64 v103; // x24
  __int64 v104; // x25
  int32_t v105; // w0
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x22
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  UserServantEntity_o *userSvtEntity; // x0
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  struct UserServantEntity_o *v122; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  int32_t v125; // w0
  struct System_Int32_array *CostumeList_21413440; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  const MethodInfo *v133; // x1
  UserServantEntity_o *v134; // x0
  struct System_Int32_array *v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  struct UserServantEntity_o *v154; // x8
  __int64 v155; // x22
  __int64 v156; // x23
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  UserServantEntity_o *v169; // x0
  bool IsLock; // w0
  UserServantEntity_o *v171; // x8
  const MethodInfo *v172; // x2
  struct UserServantCollectionEntity_o *v173; // x8
  ServantEntity_o *svtEntity; // x0
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  bool IsNameTrue; // w8
  struct UserServantEntity_o *v182; // x9
  int32_t v183; // w0
  UserServantEntity_o *v184; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v186; // x2
  const MethodInfo *v187; // x1
  const MethodInfo *v188; // x2
  RandomLimitCountManager_c *v189; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v190; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v191; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v192; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v193; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // 0:x0.16

  if ( (byte_410194B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_410194B = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_76;
  v24 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v193.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v193.fields.fakeValue = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v192 = v193;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v192, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_76;
  if ( v25 == userGameEntity->fields.userId )
  {
    this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
    this->fields.pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServant,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v40, v41, v42, v43, v44, v45);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_76;
  v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v51 = *(_QWORD *)&v48[5].fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v194.fields.currentCryptoKey = v51;
  *(_QWORD *)&v194.fields.fakeValue = v50;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v194, 0LL);
  if ( !v49 )
    goto LABEL_76;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v49,
                                       v52,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v61 )
    goto LABEL_76;
  v62 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v61,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_76;
  v63 = (ServantLimitMaster_o *)v62;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_76;
  v65 = v64;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_userSvtEntity)[6], 0LL);
  if ( !v63 )
    goto LABEL_76;
  v67 = ServantLimitMaster__GetEntity(v63, v65, v66, 0LL);
  this->fields.svtLimitEntity = v67;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v74 )
    goto LABEL_76;
  v75 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v74,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_76;
  v76 = (ServantCommentMaster_o *)v75;
  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_svtEntity)[1], 0LL);
  if ( !v76 )
    goto LABEL_76;
  EntityList = ServantCommentMaster__GetEntityList(v76, v77, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  this->fields.isConvertOverwriteImage = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v86 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_76;
  v87 = v86[4];
  v88 = UserId;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v193.fields.currentCryptoKey = v86[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v193.fields.fakeValue = v87;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v191 = v193;
  if ( v88 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v191, 0LL) )
  {
    v95 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v95 )
      goto LABEL_76;
    v96 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v95,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v97 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_76;
    v98 = v97[4];
    v99 = (UserServantCollectionMaster_o *)v96;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v193.fields.currentCryptoKey = v97[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v193.fields.fakeValue = v98;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v190 = v193;
    v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v190, 0LL);
    v101 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_76;
    v102 = v100;
    v104 = *(_QWORD *)&v101[5].fields.currentCryptoKey;
    v103 = *(_QWORD *)&v101[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v195.fields.currentCryptoKey = v104;
    *(_QWORD *)&v195.fields.fakeValue = v103;
    v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v195, 0LL);
    if ( !v99 )
      goto LABEL_76;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v99, v102, v105, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      (System_Int32_array **)EntityDefinitely,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_76;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(userSvtEntity, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)CommandCodeIdList,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
    v122 = this->fields.userSvtEntity;
    if ( !v122 )
      goto LABEL_76;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = v122->fields.lv;
    v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v122->fields.limitCount, 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_76;
    CostumeList_21413440 = UserServantCollectionEntity__getCostumeList_21413440(userSvtCollectionEntity, lv, v125, 0LL);
    this->fields.costumeIds = CostumeList_21413440;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.costumeIds,
      (System_Int32_array **)CostumeList_21413440,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v133);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v89, v90, v91, v92, v93, v94);
    v134 = this->fields.userSvtEntity;
    if ( !v134 )
      goto LABEL_76;
    v135 = UserServantEntity__getCommandCodeIdList(v134, 0LL);
    this->fields.commandCodeIdList = v135;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)v135,
      v136,
      v137,
      v138,
      v139,
      v140,
      v141);
    this->fields.costumeIds = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v142, v143, v144, v145, v146, v147);
    this->fields.costumeAndOtherIds = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.costumeAndOtherIds,
      0LL,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_76;
  v154 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  if ( !v154 )
    goto LABEL_76;
  v156 = *(_QWORD *)&v154->fields.battleVoice.fields.currentCryptoKey;
  v155 = *(_QWORD *)&v154->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v196.fields.currentCryptoKey = v156;
  *(_QWORD *)&v196.fields.fakeValue = v155;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v196, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v157, v158, v159, v160, v161, v162);
  this->fields.equipTargetInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v163, v164, v165, v166, v167, v168);
  v169 = this->fields.userSvtEntity;
  if ( !v169 )
    goto LABEL_76;
  IsLock = UserServantEntity__IsLock(v169, 0LL);
  v171 = this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !v171 )
    goto LABEL_76;
  this->fields.isChoice = UserServantEntity__IsChoice(v171, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v172);
  v173 = this->fields.userSvtCollectionEntity;
  svtEntity = this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v173 != 0LL;
  if ( !svtEntity )
    goto LABEL_76;
  if ( ServantEntity__IsNameHide(svtEntity, 0LL) )
  {
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)*p_svtEntity, 0LL);
      goto LABEL_60;
    }
LABEL_76:
    sub_B170D4();
  }
  IsNameTrue = 0;
LABEL_60:
  v182 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v182 )
  {
    v183 = BasicHelper__DecryptValue_19259816(v182->fields.limitCountSupport, 0LL);
    v184 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v183;
    if ( v184 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v184, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
  ServantStatusListViewItem__SetLimitCountInfo(this, this->fields.userSvtEntity, v186);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v187);
    byte_40F8215 = 1;
  }
  v189 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v189 = RandomLimitCountManager_TypeInfo;
  }
  if ( v189->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v188);
  ServantStatusListViewItem__ModifyInfo(this, v187);
}


void __fastcall ServantStatusListViewItem___ctor_36652712(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
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
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantCollectionEntity_o *v63; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x22
  __int64 v65; // x23
  __int64 v66; // x24
  int32_t v67; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  WebViewManager_o *v76; // x0
  WarQuestSelectionMaster_o *v77; // x0
  ServantLimitMaster_o *v78; // x23
  int32_t v79; // w0
  struct ServantLimitEntity_o *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  WebViewManager_o *v87; // x0
  WarQuestSelectionMaster_o *v88; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v89; // x8
  ServantCommentMaster_o *v90; // x22
  int32_t v91; // w0
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  UserServantCollectionEntity_o *v99; // x0
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  UserServantCollectionEntity_o *v107; // x0
  struct System_Int32_array *CostumeList; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  const MethodInfo *v115; // x1
  BalanceConfig_c *v116; // x0
  int32_t OtherImageLimitCount; // w0
  struct UserServantCollectionEntity_o *v118; // x8
  __int64 v119; // x22
  __int64 v120; // x23
  int32_t v121; // w0
  int32_t v122; // w22
  int32_t maxLimitCount; // w23
  struct UserServantCollectionEntity_o *v124; // x8
  __int64 v125; // x22
  __int64 v126; // x23
  int32_t v127; // w0
  int32_t v128; // w22
  int32_t v129; // w23
  int32_t CardImageLimitCount; // w0
  struct UserServantCollectionEntity_o *v131; // x8
  int32_t v132; // w0
  struct System_Int32_array *CardSelectList; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  struct UserServantCollectionEntity_o *v140; // x8
  int32_t v141; // w0
  int32_t ImageLimitCount; // w0
  struct UserServantCollectionEntity_o *v143; // x8
  int32_t v144; // w0
  struct System_Int32_array *SelectList; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  struct UserServantCollectionEntity_o *v152; // x8
  int32_t v153; // w0
  int32_t v154; // w0
  struct UserServantCollectionEntity_o *v155; // x8
  int32_t v156; // w0
  struct System_Int32_array *v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  UserServantCollectionEntity_o *v164; // x0
  struct System_Int32_array *CommandCardParam; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v173; // x8
  int32_t v174; // w0
  struct System_Int32_array *v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v183; // x8
  int32_t v184; // w0
  struct System_Int32_array *v185; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  const MethodInfo *v192; // x2
  struct UserServantCollectionEntity_o *v193; // x8
  int32_t svtCommonFlag; // w8
  UserServantCollectionEntity_o *v195; // x0
  struct UserServantCollectionEntity_o *v196; // x8
  const MethodInfo *v197; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16

  if ( (byte_410194C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userSvtCollectionEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_410194C = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_62;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v24, v25, v26, v27, v28, v29);
  }
  this->fields.userSvtEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v36, v37, v38, v39, v40, v41);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.servantLeaderInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v49, v50, v51, v52, v53, v54);
  this->fields.equipTargetInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v55, v56, v57, v58, v59, v60);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v63 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v198.fields.currentCryptoKey = v66;
  *(_QWORD *)&v198.fields.fakeValue = v65;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v198, 0LL);
  if ( !v64 )
    goto LABEL_62;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v64,
                                       v67,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v76 )
    goto LABEL_62;
  v77 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v76,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v78 = (ServantLimitMaster_o *)v77;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          (*p_userSvtCollectionEntity)->fields.svtId,
          0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  if ( !v78 )
    goto LABEL_62;
  v80 = ServantLimitMaster__GetEntity(v78, v79, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v80;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v87 )
    goto LABEL_62;
  v88 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v87,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v89 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_62;
  v90 = (ServantCommentMaster_o *)v88;
  v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v89[1], 0LL);
  if ( !v90 )
    goto LABEL_62;
  EntityList = ServantCommentMaster__GetEntityList(v90, v91, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  v99 = this->fields.userSvtCollectionEntity;
  if ( !v99 )
    goto LABEL_62;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList(v99, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v107 = this->fields.userSvtCollectionEntity;
  if ( !v107 )
    goto LABEL_62;
  CostumeList = UserServantCollectionEntity__getCostumeList(v107, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v115);
  if ( ConstantMaster__IsOtherImage(0LL) )
  {
    v116 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v116 = BalanceConfig_TypeInfo;
    }
    OtherImageLimitCount = v116->static_fields->OtherImageLimitCount;
    goto LABEL_36;
  }
  v118 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v120 = *(_QWORD *)&v118->fields.svtId.fields.currentCryptoKey;
  v119 = *(_QWORD *)&v118->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v199.fields.currentCryptoKey = v120;
  *(_QWORD *)&v199.fields.fakeValue = v119;
  v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v199, 0LL);
  if ( !*p_userSvtCollectionEntity )
LABEL_62:
    sub_B170D4();
  v122 = v121;
  maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  OtherImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v122, maxLimitCount, 1, 0, 0LL);
LABEL_36:
  v124 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = OtherImageLimitCount;
  if ( !v124 )
    goto LABEL_62;
  v126 = *(_QWORD *)&v124->fields.svtId.fields.currentCryptoKey;
  v125 = *(_QWORD *)&v124->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v200.fields.currentCryptoKey = v126;
  *(_QWORD *)&v200.fields.fakeValue = v125;
  v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v200, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v128 = v127;
  v129 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v128, v129, 1, 0, 0LL);
  v131 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = CardImageLimitCount;
  if ( !v131 )
    goto LABEL_62;
  v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v131->fields.svtId, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     v132,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  v140 = this->fields.userSvtCollectionEntity;
  if ( !v140 )
    goto LABEL_62;
  v141 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v140->fields.svtId, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v141, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  v143 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = ImageLimitCount;
  this->fields.maxDispLimitCount = ImageLimitCount;
  if ( !v143 )
    goto LABEL_62;
  v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v143->fields.svtId, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  SelectList = ImageLimitCount__GetSelectList(
                 v144,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v152 = this->fields.userSvtCollectionEntity;
  if ( !v152 )
    goto LABEL_62;
  v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v152->fields.svtId, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v154 = ImageLimitCount__GetImageLimitCount(v153, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  v155 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = v154;
  this->fields.commandCardLimitCount = v154;
  if ( !v155 )
    goto LABEL_62;
  v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v155->fields.svtId, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v157 = ImageLimitCount__GetSelectList(
           v156,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.commandCardSelectList = v157;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v157,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  v164 = this->fields.userSvtCollectionEntity;
  if ( !v164 )
    goto LABEL_62;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam(v164, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)CommandCardParam,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v173 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v173 )
    goto LABEL_62;
  v174 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v173->fields.svtId, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v175 = ImageLimitCount__GetCardSelectList(
           v174,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.iconSelectList = v175;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v175,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v183 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v183 )
    goto LABEL_62;
  v184 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v183->fields.svtId, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v185 = ImageLimitCount__GetSelectList(
           v184,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.portraitSelectList = v185;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v185,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  v193 = this->fields.userSvtCollectionEntity;
  if ( !v193 )
    goto LABEL_62;
  svtCommonFlag = v193->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v192);
  v195 = this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !v195 )
    goto LABEL_62;
  UserServantCollectionEntity__getCollectionStatus(
    v195,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v196 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v196 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v197);
}


void __fastcall ServantStatusListViewItem___ctor_36654396(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x24
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
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
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
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantCollectionEntity_o *v64; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v65; // x22
  __int64 v66; // x24
  __int64 v67; // x25
  int32_t v68; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  WebViewManager_o *v77; // x0
  WarQuestSelectionMaster_o *v78; // x0
  struct UserServantCollectionEntity_o *v79; // x8
  ServantLimitMaster_o *v80; // x23
  int32_t v81; // w0
  struct ServantLimitEntity_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  WebViewManager_o *v89; // x0
  WarQuestSelectionMaster_o *v90; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  ServantCommentMaster_o *v92; // x22
  int32_t v93; // w0
  struct ServantCommentEntity_array *EntityList_30493208; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  UserServantCollectionEntity_o *v101; // x0
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  UserServantCollectionEntity_o *v109; // x0
  struct System_Int32_array *CostumeList; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  const MethodInfo *v117; // x1
  struct UserServantCollectionEntity_o *v118; // x8
  int32_t v119; // w22
  int32_t CardImageLimitCount; // w0
  struct UserServantCollectionEntity_o *v121; // x8
  int32_t v122; // w0
  int32_t v123; // w0
  struct UserServantCollectionEntity_o *v124; // x8
  int32_t v125; // w0
  struct System_Int32_array *CardSelectList; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  struct UserServantCollectionEntity_o *v133; // x8
  int32_t v134; // w0
  int32_t ImageLimitCount; // w0
  struct UserServantCollectionEntity_o *v136; // x8
  int32_t v137; // w0
  struct System_Int32_array *SelectList; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  struct UserServantCollectionEntity_o *v145; // x8
  int32_t v146; // w0
  int32_t v147; // w0
  struct UserServantCollectionEntity_o *v148; // x8
  int32_t v149; // w0
  struct System_Int32_array *v150; // x0
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  UserServantCollectionEntity_o *v157; // x0
  struct System_Int32_array *CommandCardParam; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v166; // x8
  int32_t v167; // w0
  struct System_Int32_array *v168; // x0
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v176; // x8
  int32_t v177; // w0
  struct System_Int32_array *v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  const MethodInfo *v185; // x2
  struct UserServantCollectionEntity_o *v186; // x8
  int32_t svtCommonFlag; // w8
  UserServantCollectionEntity_o *v188; // x0
  struct UserServantCollectionEntity_o *v189; // x8
  const MethodInfo *v190; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16

  if ( (byte_410194D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, userSvtCollectionEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_410194D = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.isEnableServantQuest = isEnableServantQuest;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_37;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v25, v26, v27, v28, v29, v30);
  }
  this->fields.userSvtEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.servantLeaderInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v50, v51, v52, v53, v54, v55);
  this->fields.equipTargetInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v56, v57, v58, v59, v60, v61);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v64 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v65 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v67 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v191.fields.currentCryptoKey = v67;
  *(_QWORD *)&v191.fields.fakeValue = v66;
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v191, 0LL);
  if ( !v65 )
    goto LABEL_37;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v65,
                                       v68,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v77 )
    goto LABEL_37;
  v78 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v77,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v79 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v80 = (ServantLimitMaster_o *)v78;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v79->fields.svtId, 0LL);
  if ( !v80 )
    goto LABEL_37;
  v82 = ServantLimitMaster__GetEntity(v80, v81, limitCount, 0LL);
  this->fields.svtLimitEntity = v82;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v89 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v89 )
    goto LABEL_37;
  v90 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v89,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v91 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_37;
  v92 = (ServantCommentMaster_o *)v90;
  v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v91[1], 0LL);
  if ( !v92 )
    goto LABEL_37;
  EntityList_30493208 = ServantCommentMaster__GetEntityList_30493208(v92, v93, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList_30493208;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList_30493208,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  v101 = this->fields.userSvtCollectionEntity;
  if ( !v101 )
    goto LABEL_37;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList(v101, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v109 = this->fields.userSvtCollectionEntity;
  if ( !v109 )
    goto LABEL_37;
  CostumeList = UserServantCollectionEntity__getCostumeList(v109, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v117);
  v118 = this->fields.userSvtCollectionEntity;
  if ( !v118 )
    goto LABEL_37;
  v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v118->fields.svtId, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v119, limitCount, 1, 0, 0LL);
  v121 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = CardImageLimitCount;
  if ( !v121 )
    goto LABEL_37;
  v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v121->fields.svtId, 0LL);
  v123 = ImageLimitCount__GetCardImageLimitCount(v122, limitCount, 1, 0, 0LL);
  v124 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = v123;
  if ( !v124 )
    goto LABEL_37;
  v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v124->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v125, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v133 = this->fields.userSvtCollectionEntity;
  if ( !v133 )
    goto LABEL_37;
  v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v133->fields.svtId, 0LL);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v134, limitCount, 0LL);
  v136 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = ImageLimitCount;
  this->fields.maxDispLimitCount = ImageLimitCount;
  if ( !v136 )
    goto LABEL_37;
  v137 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v136->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v137, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  v145 = this->fields.userSvtCollectionEntity;
  if ( !v145 )
    goto LABEL_37;
  v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v145->fields.svtId, 0LL);
  v147 = ImageLimitCount__GetImageLimitCount(v146, limitCount, 0LL);
  v148 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = v147;
  this->fields.commandCardLimitCount = v147;
  if ( !v148 )
    goto LABEL_37;
  v149 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v148->fields.svtId, 0LL);
  v150 = ImageLimitCount__GetSelectList(v149, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v150;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v150,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  v157 = this->fields.userSvtCollectionEntity;
  if ( !v157 )
    goto LABEL_37;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam(v157, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)CommandCardParam,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v166 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v166 )
    goto LABEL_37;
  v167 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v166->fields.svtId, 0LL);
  v168 = ImageLimitCount__GetCardSelectList(v167, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v168;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v168,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v176 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v176 )
    goto LABEL_37;
  v177 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v176->fields.svtId, 0LL);
  v178 = ImageLimitCount__GetSelectList(v177, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v178;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v178,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  v186 = this->fields.userSvtCollectionEntity;
  if ( !v186 )
    goto LABEL_37;
  svtCommonFlag = v186->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v185);
  v188 = this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !v188 )
LABEL_37:
    sub_B170D4();
  UserServantCollectionEntity__getCollectionStatus(
    v188,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v189 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v189 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v190);
}


void __fastcall ServantStatusListViewItem___ctor_36655836(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x21
  __int64 v60; // x22
  __int64 v61; // x23
  int32_t v62; // w0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  WebViewManager_o *v71; // x0
  WarQuestSelectionMaster_o *v72; // x0
  ServantLimitMaster_o *v73; // x22
  int32_t v74; // w0
  struct ServantLimitEntity_o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  WebViewManager_o *v82; // x0
  WarQuestSelectionMaster_o *v83; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  ServantCommentMaster_o *v85; // x21
  int32_t v86; // w0
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  ServantLeaderInfo_o *v94; // x0
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  ServantLeaderInfo_o *v108; // x0
  int32_t CardImageLimitCount; // w0
  ServantLeaderInfo_o *v110; // x8
  int32_t MaxCardImageLimitCount; // w0
  struct ServantLeaderInfo_o *v112; // x8
  int32_t v113; // w0
  int32_t v114; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_28891828; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  ServantLeaderInfo_o *v124; // x0
  int32_t DispLimitCount; // w0
  ServantLeaderInfo_o *v126; // x8
  int32_t MaxDispLimitCount; // w0
  struct ServantLeaderInfo_o *v128; // x8
  int32_t v129; // w0
  struct System_Int32_array *SelectList_28891100; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  ServantLeaderInfo_o *v137; // x0
  int32_t CommandCardLimitCount; // w0
  ServantLeaderInfo_o *v139; // x8
  int32_t MaxCommandCardLimitCount; // w0
  struct ServantLeaderInfo_o *v141; // x8
  int32_t v142; // w0
  struct System_Int32_array *v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  struct ServantLeaderInfo_o *v156; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v158; // x0
  int32_t IconLimitCount; // w0
  ServantLeaderInfo_o *v160; // x8
  int32_t MaxIconLimitCount; // w0
  struct ServantLeaderInfo_o *v162; // x8
  int32_t v163; // w0
  struct System_Int32_array *v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  ServantLeaderInfo_o *v171; // x0
  int32_t PortraitLimitCount; // w0
  ServantLeaderInfo_o *v173; // x8
  int32_t MaxPortraitLimitCount; // w0
  struct ServantLeaderInfo_o *v175; // x8
  int32_t v176; // w0
  struct System_Int32_array *v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  const MethodInfo *v184; // x2
  struct ServantLeaderInfo_o *v185; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v187; // x21
  __int64 v188; // x22
  WebViewManager_o *v189; // x0
  WarQuestSelectionMaster_o *v190; // x0
  __int64 v191; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v192; // x21
  __int64 v193; // x22
  __int64 v194; // x23
  int32_t v195; // w0
  struct ServantEntity_o *v196; // x0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  WebViewManager_o *v203; // x0
  WarQuestSelectionMaster_o *v204; // x0
  __int64 v205; // x8
  ServantLimitMaster_o *v206; // x21
  int32_t v207; // w0
  __int64 v208; // x8
  struct ServantLimitEntity_o *v209; // x0
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  const MethodInfo *v216; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // 0:x0.16

  if ( (byte_410194E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, servantLeaderInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_410194E = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.userSvtEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantLeaderInfo,
    (System_Int32_array **)servantLeaderInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.equipTargetInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v50, v51, v52, v53, v54, v55);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = isEquipShowMode;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v58 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v61 = *(_QWORD *)&v58[3].fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58[3].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v217.fields.currentCryptoKey = v61;
  *(_QWORD *)&v217.fields.fakeValue = v60;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v217, 0LL);
  if ( !v59 )
    goto LABEL_63;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v59,
                                       v62,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v71 )
    goto LABEL_63;
  v72 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v71,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v73 = (ServantLimitMaster_o *)v72;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_servantLeaderInfo)[3], 0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  if ( !v73 )
    goto LABEL_63;
  v75 = ServantLimitMaster__GetEntity(v73, v74, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v75;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v82 )
    goto LABEL_63;
  v83 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v82,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_63;
  v85 = (ServantCommentMaster_o *)v83;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v84[1], 0LL);
  if ( !v85 )
    goto LABEL_63;
  EntityList = ServantCommentMaster__GetEntityList(v85, v86, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = this->fields.servantLeaderInfo;
  if ( !v94 )
    goto LABEL_63;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList(v94, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.costumeIds = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v102, v103, v104, v105, v106, v107);
  v108 = this->fields.servantLeaderInfo;
  if ( !v108 )
    goto LABEL_63;
  CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(v108, 0LL);
  v110 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = CardImageLimitCount;
  if ( !v110 )
    goto LABEL_63;
  MaxCardImageLimitCount = ServantLeaderInfo__getMaxCardImageLimitCount(v110, 0, 0LL);
  v112 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = MaxCardImageLimitCount;
  if ( !v112 )
    goto LABEL_63;
  v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v112->fields.svtId, 0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v114 = v113;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardSelectList_28891828 = ImageLimitCount__GetCardSelectList_28891828(v114, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_28891828;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList_28891828,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  v124 = this->fields.servantLeaderInfo;
  if ( !v124 )
    goto LABEL_63;
  DispLimitCount = ServantLeaderInfo__getDispLimitCount(v124, 0LL);
  v126 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = DispLimitCount;
  if ( !v126 )
    goto LABEL_63;
  MaxDispLimitCount = ServantLeaderInfo__getMaxDispLimitCount(v126, 0LL);
  v128 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = MaxDispLimitCount;
  if ( !v128 )
    goto LABEL_63;
  v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v128->fields.svtId, 0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  SelectList_28891100 = ImageLimitCount__GetSelectList_28891100(
                          v129,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_28891100;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList_28891100,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  v137 = this->fields.servantLeaderInfo;
  if ( !v137 )
    goto LABEL_63;
  CommandCardLimitCount = ServantLeaderInfo__getCommandCardLimitCount(v137, 0LL);
  v139 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = CommandCardLimitCount;
  if ( !v139 )
    goto LABEL_63;
  MaxCommandCardLimitCount = ServantLeaderInfo__getMaxCommandCardLimitCount(v139, 0LL);
  v141 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = MaxCommandCardLimitCount;
  if ( !v141 )
    goto LABEL_63;
  v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v141->fields.svtId, 0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v143 = ImageLimitCount__GetSelectList_28891100(
           v142,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.commandCardLimitCount,
           0,
           0LL);
  this->fields.commandCardSelectList = v143;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v143,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  v156 = this->fields.servantLeaderInfo;
  if ( !v156 )
    goto LABEL_63;
  commandCardParam = v156->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)commandCardParam,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v158 = this->fields.servantLeaderInfo;
  if ( !v158 )
    goto LABEL_63;
  IconLimitCount = ServantLeaderInfo__getIconLimitCount(v158, 0LL);
  v160 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = IconLimitCount;
  if ( !v160 )
    goto LABEL_63;
  MaxIconLimitCount = ServantLeaderInfo__getMaxIconLimitCount(v160, 0, 0LL);
  v162 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = MaxIconLimitCount;
  if ( !v162 )
    goto LABEL_63;
  v163 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v162->fields.svtId, 0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v164 = ImageLimitCount__GetCardSelectList_28891828(
           v163,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.iconLimitCount,
           0LL);
  this->fields.iconSelectList = v164;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v164,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  v171 = this->fields.servantLeaderInfo;
  if ( !v171 )
    goto LABEL_63;
  PortraitLimitCount = ServantLeaderInfo__getPortraitLimitCount(v171, 0LL);
  v173 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = PortraitLimitCount;
  if ( !v173 )
    goto LABEL_63;
  MaxPortraitLimitCount = ServantLeaderInfo__getMaxPortraitLimitCount(v173, 0LL);
  v175 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = MaxPortraitLimitCount;
  if ( !v175 )
    goto LABEL_63;
  v176 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v175->fields.svtId, 0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v177 = ImageLimitCount__GetSelectList_28891100(
           v176,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.portraitLimitCount,
           0,
           0LL);
  this->fields.portraitSelectList = v177;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v177,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v184);
  v185 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v185 )
    goto LABEL_63;
  equipTarget1 = v185->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v188 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v187 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v218.fields.currentCryptoKey = v188;
    *(_QWORD *)&v218.fields.fakeValue = v187;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v218, 0LL) >= 1 )
    {
      v189 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v189 )
      {
        v190 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)v189,
                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v191 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v191 )
          {
            v192 = (DataMasterBase_WarMaster__WarEntity__int__o *)v190;
            v194 = *(_QWORD *)(v191 + 56);
            v193 = *(_QWORD *)(v191 + 64);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v219.fields.currentCryptoKey = v194;
            *(_QWORD *)&v219.fields.fakeValue = v193;
            v195 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v219, 0LL);
            if ( v192 )
            {
              v196 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v192,
                                                 v195,
                                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = v196;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.equipServantEntity,
                (System_Int32_array **)v196,
                v197,
                v198,
                v199,
                v200,
                v201,
                v202);
              v203 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( v203 )
              {
                v204 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)v203,
                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v205 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v205 )
                  {
                    v206 = (ServantLimitMaster_o *)v204;
                    v207 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v205 + 56),
                             0LL);
                    if ( *p_servantLeaderInfo )
                    {
                      v208 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v208 )
                      {
                        if ( v206 )
                        {
                          v209 = ServantLimitMaster__GetEntity(v206, v207, *(_DWORD *)(v208 + 72), 0LL);
                          this->fields.equipSvtLimitEntity = v209;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)&this->fields.equipSvtLimitEntity,
                            (System_Int32_array **)v209,
                            v210,
                            v211,
                            v212,
                            v213,
                            v214,
                            v215);
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
      sub_B170D4();
    }
  }
LABEL_61:
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  ServantLeaderInfo__getEquipSkillInfo(
    (ServantLeaderInfo_o *)*p_servantLeaderInfo,
    &this->fields.equipSkillInfoList,
    0LL);
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v216);
}


void __fastcall ServantStatusListViewItem___ctor_36657548(
        ServantStatusListViewItem_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct EquipTargetInfo_o **p_equipTargetInfo; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EquipTargetInfo_o *v57; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x21
  __int64 v59; // x22
  __int64 v60; // x23
  int32_t v61; // w0
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  WebViewManager_o *v70; // x0
  WarQuestSelectionMaster_o *v71; // x0
  ServantLimitMaster_o *v72; // x22
  int32_t v73; // w0
  struct ServantLimitEntity_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  WebViewManager_o *v81; // x0
  WarQuestSelectionMaster_o *v82; // x0
  ServantCommentMaster_o *v83; // x20
  int32_t v84; // w0
  struct ServantCommentEntity_array *EntityList; // x0
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
  const MethodInfo *v140; // x2
  const MethodInfo *v141; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  if ( (byte_410194F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, equipTargetInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_410194F = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.userSvtEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.equipIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v36, v37, v38, v39, v40, v41);
  this->fields.servantLeaderInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipTargetInfo,
    (System_Int32_array **)equipTargetInfo,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = isNpcFollowerServantEquip;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v57 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_17;
  v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v142.fields.currentCryptoKey = v60;
  *(_QWORD *)&v142.fields.fakeValue = v59;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v142, 0LL);
  if ( !v58 )
    goto LABEL_17;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v58,
                                       v61,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v70 )
    goto LABEL_17;
  v71 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v70,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_17;
  v72 = (ServantLimitMaster_o *)v71;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_equipTargetInfo)->fields.svtId, 0LL);
  if ( !*p_equipTargetInfo
    || !v72
    || (v74 = ServantLimitMaster__GetEntity(v72, v73, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v74,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
          (System_Int32_array **)v74,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80),
        (v81 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v82 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v81,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v83 = (ServantCommentMaster_o *)v82,
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_svtEntity)[1], 0LL),
        !v83) )
  {
LABEL_17:
    sub_B170D4();
  }
  EntityList = ServantCommentMaster__GetEntityList(v83, v84, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.commandCodeIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v92, v93, v94, v95, v96, v97);
  this->fields.costumeIds = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v98, v99, v100, v101, v102, v103);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.cardSelectList, 0LL, v104, v105, v106, v107, v108, v109);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dispSelectList, 0LL, v110, v111, v112, v113, v114, v115);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    0LL,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  this->fields.commandCardParam = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.commandCardParam, 0LL, v122, v123, v124, v125, v126, v127);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.iconSelectList, 0LL, v128, v129, v130, v131, v132, v133);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.portraitSelectList, 0LL, v134, v135, v136, v137, v138, v139);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v140);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v141);
}


void __fastcall ServantStatusListViewItem___ctor_36658376(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CommandCodeEntity_o *v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4101950 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, commandCode);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4101950 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.userCommandCodeEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)commandCode,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_11;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v33 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v32 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v33;
  *(_QWORD *)&v42.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
  if ( !v31 )
    goto LABEL_11;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v31,
    (WarEntity_o **)&this->fields.commandCodeCommentEntity,
    v34,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    0LL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !v41 )
LABEL_11:
    sub_B170D4();
  CommandCodeEntity__GetSkillInfo(
    v41,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_36658772(
        ServantStatusListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int128 v22; // q1
  int64_t v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserCommandCodeEntity_o *v33; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x23
  int32_t v37; // w0
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  WebViewManager_o *v45; // x0
  WarQuestSelectionMaster_o *v46; // x0
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x21
  int32_t v49; // w0
  int64_t UserId; // x0
  UserCommandCodeEntity_o *v51; // x8
  __int128 v52; // q0
  int64_t v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WebViewManager_o *v60; // x0
  WarQuestSelectionMaster_o *v61; // x0
  UserCommandCodeEntity_o *v62; // x8
  __int128 v63; // q0
  UserCommandCodeCollectionMaster_o *v64; // x21
  int64_t v65; // x0
  UserCommandCodeEntity_o *v66; // x8
  int64_t v67; // x22
  __int64 v68; // x23
  __int64 v69; // x24
  int32_t v70; // w0
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  bool IsLock; // w0
  UserCommandCodeEntity_o *v74; // x8
  WebViewManager_o *v75; // x0
  WarQuestSelectionMaster_o *v76; // x0
  UserCommandCodeEntity_o *v77; // x8
  __int128 v78; // q0
  UserServantCommandCodeMaster_o *v79; // x20
  int64_t v80; // x0
  bool IsAttach; // w8
  UserCommandCodeEntity_o *v82; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  if ( (byte_4101951 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCode);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4101951 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_49;
  v22 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v86 = v87;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v86, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_49;
  if ( v23 != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v24, v25, v26, v27, v28, v29);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v33 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v36 = *(_QWORD *)&v33->fields.commandCodeId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v88.fields.currentCryptoKey = v36;
  *(_QWORD *)&v88.fields.fakeValue = v35;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v88, 0LL);
  if ( !v34 )
    goto LABEL_49;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v34,
                                           v37,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v45 )
    goto LABEL_49;
  v46 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v45,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_49;
  v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)v46;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userCommandCodeEntity->fields.commandCodeId,
          0LL);
  if ( !v48 )
    goto LABEL_49;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v48,
    (WarEntity_o **)&this->fields.commandCodeCommentEntity,
    v49,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v51 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v52 = *(_OWORD *)&v51->fields.userId.fields.fakeValue;
  v53 = UserId;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v51->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v52;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v85 = v87;
  if ( v53 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v85, 0LL) )
  {
    v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v60 )
    {
      v61 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v60,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v62 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v63 = *(_OWORD *)&v62->fields.userId.fields.fakeValue;
        v64 = (UserCommandCodeCollectionMaster_o *)v61;
        *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v62->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v87.fields.fakeValue = v63;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v84 = v87;
        v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v84, 0LL);
        v66 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v67 = v65;
          v69 = *(_QWORD *)&v66->fields.commandCodeId.fields.currentCryptoKey;
          v68 = *(_QWORD *)&v66->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v89.fields.currentCryptoKey = v69;
          *(_QWORD *)&v89.fields.fakeValue = v68;
          v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v89, 0LL);
          if ( v64 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v64, v67, v70, 0LL);
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_49:
    sub_B170D4();
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  EntityDefinitely = 0LL;
LABEL_39:
  sub_B16F98(
    (BattleServantConfConponent_o *)p_userCommandCodeCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  IsLock = UserCommandCodeEntity__IsLock(*p_userCommandCodeEntity, 0LL);
  v74 = this->fields.userCommandCodeEntity;
  this->fields.isLock = IsLock;
  if ( !v74 )
    goto LABEL_49;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v74, 0LL);
  v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v75 )
    goto LABEL_49;
  v76 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v75,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v77 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v78 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
  v79 = (UserServantCommandCodeMaster_o *)v76;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v78;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v83 = v87;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v83, 0LL);
  if ( !v79 )
    goto LABEL_49;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v79, v80, 0LL);
  v82 = this->fields.userCommandCodeEntity;
  this->fields.isUse = IsAttach;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !v82 )
    goto LABEL_49;
  UserCommandCodeEntity__GetSkillInfo(
    v82,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_36659908(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserCommandCodeCollectionEntity_o *v27; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x20
  __int64 v29; // x21
  __int64 v30; // x22
  int32_t v31; // w0
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WebViewManager_o *v39; // x0
  WarQuestSelectionMaster_o *v40; // x0
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x20
  int32_t v43; // w0
  UserCommandCodeCollectionEntity_o *v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4101952 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCodeCollection);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4101952 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_18;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v18, v19, v20, v21, v22, v23);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    (System_Int32_array **)userCommandCodeCollection,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v27 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_18;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v30 = *(_QWORD *)&v27->fields.commandCodeId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v30;
  *(_QWORD *)&v45.fields.fakeValue = v29;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v45, 0LL);
  if ( !v28 )
    goto LABEL_18;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v28,
                                           v31,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v39 )
    goto LABEL_18;
  v40 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v39,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)v40,
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                userCommandCodeCollectionEntity->fields.commandCodeId,
                0LL),
        !v42)
    || (DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v42,
          (WarEntity_o **)&this->fields.commandCodeCommentEntity,
          v43,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        v44 = this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        !v44) )
  {
LABEL_18:
    sub_B170D4();
  }
  UserCommandCodeCollectionEntity__GetSkillInfo(
    v44,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem__CreateCurrentLimitCountCache(
        ServantStatusListViewItem_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ServantStatusListViewItem_LimitCountCache_o *v7; // x22
  struct ServantStatusListViewItem_LimitCountCache_o **p_currentLimitCountCache; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  UserServantEntity_o *userSvtEntity; // x0
  int32_t CardImageLimitCount; // w0
  struct ServantStatusListViewItem_LimitCountCache_o *v18; // x22
  UserServantEntity_o *v19; // x0
  int32_t IconLimitCount; // w0
  struct ServantStatusListViewItem_LimitCountCache_o *v21; // x22
  UserServantEntity_o *v22; // x0
  int32_t CommandCardLimitCount; // w0
  struct ServantStatusListViewItem_LimitCountCache_o *v24; // x22
  UserServantEntity_o *v25; // x0
  int32_t DispLimitCount; // w0
  struct ServantStatusListViewItem_LimitCountCache_o *v27; // x21
  UserServantEntity_o *v28; // x0
  int32_t PortraitLimitCount; // w0

  if ( (byte_4101955 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_LimitCountCache_TypeInfo, ignoreRandomSettings);
    byte_4101955 = 1;
  }
  v7 = (ServantStatusListViewItem_LimitCountCache_o *)sub_B170CC(
                                                        ServantStatusListViewItem_LimitCountCache_TypeInfo,
                                                        ignoreRandomSettings,
                                                        method,
                                                        v3,
                                                        v4);
  ServantStatusListViewItem_LimitCountCache___ctor(v7, 0LL);
  p_currentLimitCountCache = &this->fields.currentLimitCountCache;
  this->fields.currentLimitCountCache = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentLimitCountCache,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity
      || (CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEntity, 1, 0LL), !currentLimitCountCache) )
    {
LABEL_29:
      sub_B170D4();
    }
  }
  else
  {
    CardImageLimitCount = this->fields.cardLimitCount;
    if ( !currentLimitCountCache )
      goto LABEL_29;
  }
  currentLimitCountCache->fields.cardLimitCount = CardImageLimitCount;
  v18 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    v19 = this->fields.userSvtEntity;
    if ( !v19 )
      goto LABEL_29;
    IconLimitCount = UserServantEntity__getIconLimitCount(v19, 1, 0LL);
    if ( !v18 )
      goto LABEL_29;
  }
  else
  {
    IconLimitCount = this->fields.iconLimitCount;
    if ( !v18 )
      goto LABEL_29;
  }
  v18->fields.iconLimitCount = IconLimitCount;
  v21 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    v22 = this->fields.userSvtEntity;
    if ( !v22 )
      goto LABEL_29;
    CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(v22, 1, 0LL);
    if ( !v21 )
      goto LABEL_29;
  }
  else
  {
    CommandCardLimitCount = this->fields.commandCardLimitCount;
    if ( !v21 )
      goto LABEL_29;
  }
  v21->fields.commandCardLimitCount = CommandCardLimitCount;
  v24 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    v25 = this->fields.userSvtEntity;
    if ( !v25 )
      goto LABEL_29;
    DispLimitCount = UserServantEntity__getDispLimitCount(v25, 1, 0LL);
    if ( !v24 )
      goto LABEL_29;
  }
  else
  {
    DispLimitCount = this->fields.dispLimitCount;
    if ( !v24 )
      goto LABEL_29;
  }
  v24->fields.dispLimitCount = DispLimitCount;
  v27 = *p_currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    v28 = this->fields.userSvtEntity;
    if ( !v28 )
      goto LABEL_29;
    PortraitLimitCount = UserServantEntity__getPortraitLimitCount(v28, 1, 0LL);
    if ( !v27 )
      goto LABEL_29;
  }
  else
  {
    PortraitLimitCount = this->fields.portraitLimitCount;
    if ( !v27 )
      goto LABEL_29;
  }
  v27->fields.portraitLimitCount = PortraitLimitCount;
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)lvList,
    (System_Int32_array **)appendPassiveSkillLvList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
  sub_B16F98(
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
  __int64 v11; // x1
  __int64 v12; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *svtEntity; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  FriendshipMaster_o *v17; // x24
  int32_t friendshipId; // w25
  __int64 v19; // x26
  __int64 v20; // x27
  int32_t v21; // w0
  struct ServantEntity_o *v22; // x8
  struct UserServantCollectionEntity_o *v23; // x9
  UserServantEntity_o *userSvtEntity; // x0
  ServantEntity_o *v25; // x0
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_410196B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FriendshipMaster___, rank);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_410196B = 1;
  }
  if ( this->fields.userSvtCollectionEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FriendshipMaster___);
      svtEntity = this->fields.svtEntity;
      if ( svtEntity )
      {
        userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v17 = (FriendshipMaster_o *)MasterData_WarQuestSelectionMaster;
          friendshipId = svtEntity->fields.friendshipId;
          v19 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v20 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v27.fields.currentCryptoKey = v19;
          *(_QWORD *)&v27.fields.fakeValue = v20;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
          v22 = this->fields.svtEntity;
          if ( v22 )
          {
            v23 = this->fields.userSvtCollectionEntity;
            if ( v23 )
            {
              if ( v17 )
              {
                FriendshipMaster__GetFriendshipRank(
                  v17,
                  friendshipId,
                  v21,
                  v23->fields.friendshipExceedCount + v22->fields.maxFriendshipRank,
                  rank,
                  max,
                  late,
                  fraction,
                  0LL);
                userSvtEntity = this->fields.userSvtEntity;
                if ( !userSvtEntity || UserServantEntity__IsAddFriendShipHeroine(userSvtEntity, 0LL) )
                  return 1;
                v25 = this->fields.svtEntity;
                if ( v25 )
                {
                  if ( ServantEntity__checkIsHeroineSvt(v25, 0LL) )
                    *late = -1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
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
  sub_B16F98(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusListViewItem__GetNpInfo_36667804(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x4
  ServantEntity_o *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x0
  ServantEntity_o *v11; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  TreasureDvcInfo_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_410196A & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_410196A = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_14;
    if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      if ( userSvtEntity )
        return UserServantEntity__getTreasureDeviceInfo(userSvtEntity, tdInfo, -1, dispLimitCount, 0, 0LL);
LABEL_14:
      sub_B170D4();
    }
    goto LABEL_13;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_13;
  v11 = this->fields.svtEntity;
  if ( !v11 )
    goto LABEL_14;
  if ( !ServantEntity__get_IsServant(v11, 0LL) )
  {
LABEL_13:
    v13 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, tdInfo, *(_QWORD *)&dispLimitCount, method, v4);
    TreasureDvcInfo___ctor(v13, 0LL);
    *tdInfo = v13;
    sub_B16F98((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    return 0;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_14;
  return UserServantCollectionEntity__getTreasureDeviceInfo(userSvtCollectionEntity, tdInfo, -1, dispLimitCount, 0LL);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array *passiveSkillIdList; // x8
  System_String_array *passiveSkillTitleMessageList; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array *passiveSkillExplanationMessageList; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  passiveSkillIdList = this->fields.passiveSkillIdList;
  *idList = passiveSkillIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)idList,
    (System_Int32_array **)passiveSkillIdList,
    titleList,
    explanationList,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
  *titleList = passiveSkillTitleMessageList;
  sub_B16F98(
    (BattleServantConfConponent_o *)titleList,
    (System_Int32_array **)passiveSkillTitleMessageList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  passiveSkillExplanationMessageList = this->fields.passiveSkillExplanationMessageList;
  *explanationList = passiveSkillExplanationMessageList;
  sub_B16F98(
    (BattleServantConfConponent_o *)explanationList,
    (System_Int32_array **)passiveSkillExplanationMessageList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_36667324(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  ServantEntity_o *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x0
  ServantEntity_o *v15; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  BalanceConfig_c *v17; // x0
  System_Int32_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x2
  System_String_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x2
  System_String_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4101969 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, idList);
    sub_B16FFC(&int___TypeInfo, v11);
    sub_B16FFC(&string___TypeInfo, v12);
    byte_4101969 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        UserServantEntity__getPassiveSkillInfo(userSvtEntity, idList, titleList, explanationList, dispLimitCount, 0LL);
        return;
      }
LABEL_17:
      sub_B170D4();
    }
    goto LABEL_13;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_13;
  v15 = this->fields.svtEntity;
  if ( !v15 )
    goto LABEL_17;
  if ( !ServantEntity__get_IsServant(v15, 0LL) )
  {
LABEL_13:
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    v18 = (System_Int32_array *)sub_B17014(
                                  int___TypeInfo,
                                  (unsigned int)v17->static_fields->SvtPassiveSkillListMax,
                                  titleList);
    *idList = v18;
    sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
    v26 = (System_String_array *)sub_B17014(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                   v25);
    *titleList = v26;
    sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    v34 = (System_String_array *)sub_B17014(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                   v33);
    *explanationList = v34;
    sub_B16F98(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    return;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_17;
  UserServantCollectionEntity__getPassiveSkillInfo(
    userSvtCollectionEntity,
    idList,
    titleList,
    explanationList,
    dispLimitCount,
    1,
    0LL);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SkillInfo_array *v8; // x8

  v8 = this->fields.skillInfoList;
  *skillInfoList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)skillInfoList,
    (System_Int32_array **)v8,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem__GetSkillInfo_36666944(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4101968 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&SkillInfo___TypeInfo, v7);
    byte_4101968 = 1;
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
      v10 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v10 = BalanceConfig_TypeInfo;
      }
      v11 = (SkillInfo_array *)sub_B17014(
                                 SkillInfo___TypeInfo,
                                 (unsigned int)v10->static_fields->SvtSkillListMax,
                                 *(_QWORD *)&dispLimitCount);
      *skillInfoList = v11;
      sub_B16F98(
        (BattleServantConfConponent_o *)skillInfoList,
        (System_Int32_array **)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
  }
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v28; // x1
  int32_t CommandCodeId; // w0
  int32_t name; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct ServantEntity_o *v36; // x8
  ServantLimitAddMaster_o *v37; // x23
  __int64 v38; // x26
  __int64 v39; // x27
  int32_t v40; // w0
  WebViewManager_o *v41; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x0
  WarEntity_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_o *age; // x1
  WebViewManager_o *v51; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x0
  WarEntity_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_o *v60; // x1
  LocalizationManager_c *v61; // x0
  __int64 *v62; // x8
  ServantLimitAddEntity_o *v64; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_410196C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, illust);
    sub_B16FFC(&Method_DataManager_GetMasterData_CvMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_IllustratorMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v18);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_14663/*"UNKNOWN_NAME_ILLUST"*/, v23);
    sub_B16FFC(&StringLiteral_9325/*"NO_ENTRY_NAME_ILLUST"*/, v24);
    sub_B16FFC(&StringLiteral_1/*""*/, v25);
    byte_410196C = 1;
  }
  entity = 0LL;
  v64 = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    CommandCodeId = ServantStatusListViewItem__get_CommandCodeId(this, v28);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_49;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            CommandCodeId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__) )
      goto LABEL_36;
    if ( !entity )
LABEL_49:
      sub_B170D4();
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v36 = this->fields.svtEntity;
    if ( !v36 )
      goto LABEL_49;
    v37 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
    v39 = *(_QWORD *)&v36->fields.id.fields.currentCryptoKey;
    v38 = *(_QWORD *)&v36->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v66.fields.currentCryptoKey = v39;
    *(_QWORD *)&v66.fields.fakeValue = v38;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v66, 0LL);
    if ( !v37 )
      goto LABEL_49;
    if ( ServantLimitAddMaster__TryGetEntity(v37, &v64, v40, currentCardLimitCount, 0LL) )
    {
      if ( !v64 )
        goto LABEL_49;
      cvId = ServantLimitAddEntity__GetOverwriteCvId(v64, cvId, 0LL);
    }
    if ( cvId >= 1 )
    {
      v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v41 )
        goto LABEL_49;
      v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v41,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CvMaster___);
      if ( !v42 )
        goto LABEL_49;
      v43 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v42,
              cvId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
      if ( v43 )
      {
        age = v43->fields.age;
        *voice = age;
        sub_B16F98((BattleServantConfConponent_o *)voice, (System_Int32_array **)age, v44, v45, v46, v47, v48, v49);
        *isPlayVoice = 1;
      }
    }
  }
  if ( name < 1 )
  {
    v61 = LocalizationManager_TypeInfo;
    if ( !name )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v62 = &StringLiteral_9325/*"NO_ENTRY_NAME_ILLUST"*/;
      goto LABEL_43;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_42:
      v62 = &StringLiteral_14663/*"UNKNOWN_NAME_ILLUST"*/;
LABEL_43:
      v60 = LocalizationManager__Get((System_String_o *)*v62, 0LL);
      *illust = v60;
      goto LABEL_44;
    }
LABEL_40:
    if ( !v61->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v61);
    goto LABEL_42;
  }
  v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v51 )
    goto LABEL_49;
  v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v51,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !v52 )
    goto LABEL_49;
  v53 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v52,
          name,
          (const MethodInfo_266F388 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v53 )
  {
LABEL_36:
    v61 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v60 = v53->fields.age;
  *illust = v60;
LABEL_44:
  sub_B16F98((BattleServantConfConponent_o *)illust, (System_Int32_array **)v60, v54, v55, v56, v57, v58, v59);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusListViewItem__IsUpdateServantParameters(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *CondTitle; // x0
  int32_t paramLimitCount; // w8
  bool result; // w0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_410196F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_410196F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  TreasureDvcInfo_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  ServantEntity_o *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v17; // x0
  UserServantEntity_o *v18; // x0
  bool TreasureDeviceInfo; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  ServantLeaderInfo_o *v21; // x0
  ServantLeaderInfo_o *v22; // x0
  ServantLeaderInfo_o *v23; // x0
  EquipTargetInfo_o *equipTargetInfo; // x0
  ServantEntity_o *v25; // x0
  ServantEntity_o *v26; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  ServantEntity_o *v28; // x0
  UserServantCollectionEntity_o *v29; // x0
  UserServantCollectionEntity_o *v30; // x0
  UserServantCollectionEntity_o *v31; // x0

  if ( (byte_4101956 & 1) == 0 )
  {
    sub_B16FFC(&TreasureDvcInfo_TypeInfo, method);
    byte_4101956 = 1;
  }
  this->fields.isTdResult = 0;
  v6 = (TreasureDvcInfo_o *)sub_B170CC(TreasureDvcInfo_TypeInfo, method, v2, v3, v4);
  TreasureDvcInfo___ctor(v6, 0LL);
  this->fields.tdInfo = v6;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tdInfo, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v13);
  if ( this->fields.userSvtEntity )
  {
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
      goto LABEL_33;
    if ( ServantEntity__get_IsServant(svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_33;
      UserServantEntity__getPassiveSkillInfo(
        userSvtEntity,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        ConvertOverwriteDispImageLimitCount,
        0LL);
      v17 = this->fields.userSvtEntity;
      if ( !v17 )
        goto LABEL_33;
      UserServantEntity__GetAppendPassiveSkillInfo(
        v17,
        &this->fields.appendPassiveSkillIdList,
        &this->fields.appendPassiveSkillTitleMessageList,
        &this->fields.appendPassiveSkillExplanationMessageList,
        &this->fields.appendPassiveSkillReleaseStateList,
        &this->fields.appendPassiveSkillLvList,
        0LL);
    }
    v18 = this->fields.userSvtEntity;
    if ( v18 )
    {
      TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(
                             v18,
                             &this->fields.tdInfo,
                             -1,
                             ConvertOverwriteDispImageLimitCount,
                             0,
                             0LL);
LABEL_16:
      this->fields.isTdResult = TreasureDeviceInfo;
      return;
    }
LABEL_33:
    sub_B170D4();
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &this->fields.skillInfoList, 0LL);
    v21 = this->fields.servantLeaderInfo;
    if ( v21 )
    {
      ServantLeaderInfo__getPassiveSkillInfo(
        v21,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        0LL);
      v22 = this->fields.servantLeaderInfo;
      if ( v22 )
      {
        ServantLeaderInfo__GetAppendPassiveSkillInfo(
          v22,
          &this->fields.appendPassiveSkillIdList,
          &this->fields.appendPassiveSkillTitleMessageList,
          &this->fields.appendPassiveSkillExplanationMessageList,
          &this->fields.appendPassiveSkillReleaseStateList,
          &this->fields.appendPassiveSkillLvList,
          0LL);
        v23 = this->fields.servantLeaderInfo;
        if ( v23 )
        {
          TreasureDeviceInfo = ServantLeaderInfo__getTreasureDeviceInfo(v23, &this->fields.tdInfo, 0LL);
          goto LABEL_16;
        }
      }
    }
    goto LABEL_33;
  }
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
  {
    EquipTargetInfo__getSkillInfo(equipTargetInfo, &this->fields.skillInfoList, 0LL);
    return;
  }
  if ( this->fields.userSvtCollectionEntity )
  {
    v25 = this->fields.svtEntity;
    if ( !v25 )
      goto LABEL_33;
    if ( ServantEntity__get_IsServant(v25, 0LL) )
      goto LABEL_25;
    v26 = this->fields.svtEntity;
    if ( !v26 )
      goto LABEL_33;
    if ( ServantEntity__get_IsServantEquip(v26, 0LL) )
    {
LABEL_25:
      userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
      if ( !userSvtCollectionEntity )
        goto LABEL_33;
      UserServantCollectionEntity__getSkillInfo(
        userSvtCollectionEntity,
        &this->fields.skillInfoList,
        -1,
        ConvertOverwriteDispImageLimitCount,
        -1,
        0LL);
    }
    v28 = this->fields.svtEntity;
    if ( !v28 )
      goto LABEL_33;
    if ( ServantEntity__get_IsServant(v28, 0LL) )
    {
      v29 = this->fields.userSvtCollectionEntity;
      if ( v29 )
      {
        UserServantCollectionEntity__getPassiveSkillInfo(
          v29,
          &this->fields.passiveSkillIdList,
          &this->fields.passiveSkillTitleMessageList,
          &this->fields.passiveSkillExplanationMessageList,
          ConvertOverwriteDispImageLimitCount,
          1,
          0LL);
        v30 = this->fields.userSvtCollectionEntity;
        if ( v30 )
        {
          UserServantCollectionEntity__GetAppendPassiveSkillInfo(
            v30,
            &this->fields.appendPassiveSkillIdList,
            &this->fields.appendPassiveSkillTitleMessageList,
            &this->fields.appendPassiveSkillExplanationMessageList,
            &this->fields.appendPassiveSkillReleaseStateList,
            &this->fields.appendPassiveSkillLvList,
            0LL);
          v31 = this->fields.userSvtCollectionEntity;
          if ( v31 )
          {
            TreasureDeviceInfo = UserServantCollectionEntity__getTreasureDeviceInfo(
                                   v31,
                                   &this->fields.tdInfo,
                                   -1,
                                   ConvertOverwriteDispImageLimitCount,
                                   0LL);
            goto LABEL_16;
          }
        }
      }
      goto LABEL_33;
    }
  }
}


void __fastcall ServantStatusListViewItem__RefreshLimitCountWithRandom(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  RandomLimitCountManager_c *v10; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v12; // x20
  _BOOL4 isEnableOwnRandomSetting; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // kr00_16
  __int64 v15; // x8
  __int64 v16; // x9
  const MethodInfo *v17; // x2
  int32_t v18; // w21
  BalanceConfig_c *v19; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t dispLimitCount; // w21
  struct ServantStatusListViewItem_LimitCountCache_o *v22; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4101953 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&OptionManager_TypeInfo, v7);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v8);
    sub_B16FFC(&UserServantEntity_TypeInfo, v9);
    byte_4101953 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v10 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v10 = RandomLimitCountManager_TypeInfo;
  }
  if ( v10->static_fields->enableRandomLimitCount )
  {
    if ( this->fields.isEnableOwnRandomSetting )
      goto LABEL_17;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetRandomLimitCountOwn(0LL) )
    {
LABEL_17:
      userSvtEntity = this->fields.userSvtEntity;
      v12 = sub_B170CC(UserServantEntity_TypeInfo, method, v2, v3, v4);
      UserServantEntity___ctor_21432252((UserServantEntity_o *)v12, userSvtEntity, 0LL);
      isEnableOwnRandomSetting = this->fields.isEnableOwnRandomSetting;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(isEnableOwnRandomSetting, 0LL);
      if ( !v12 )
        sub_B170D4();
      v15 = *(_QWORD *)(v12 + 80);
      v16 = *(_QWORD *)(v12 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v12 + 208) = v14;
      *(_QWORD *)&v23.fields.currentCryptoKey = v15;
      *(_QWORD *)&v23.fields.fakeValue = v16;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
      v19 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( v18 == v19->static_fields->ServantIdMashu1 )
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
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v12 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                              dispLimitCount,
                                                                              0LL);
        }
      }
      ServantStatusListViewItem__SetLimitCountInfo(this, (UserServantEntity_o *)v12, v17);
    }
    else
    {
      v22 = this->fields.currentLimitCountCache;
      if ( v22 )
      {
        this->fields.cardLimitCount = v22->fields.cardLimitCount;
        this->fields.iconLimitCount = v22->fields.iconLimitCount;
        this->fields.commandCardLimitCount = v22->fields.commandCardLimitCount;
        this->fields.dispLimitCount = v22->fields.dispLimitCount;
        this->fields.portraitLimitCount = v22->fields.portraitLimitCount;
      }
    }
  }
}


void __fastcall ServantStatusListViewItem__SetCostumeAndOtherIds(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantEntity_o *svtEntity; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  System_Int32_array **v17; // x1
  ServantEntity_o *v18; // x0
  ServantEntity_o *v19; // x0
  bool IsOtherImage; // w0
  __int64 v21; // x1
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v23; // x0
  System_Collections_Generic_List_int__o *v24; // x20
  struct System_Int32_array *v25; // x0
  struct System_Int32_array **v26; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Array_o *v33; // x0
  struct System_Int32_array *v34; // x0

  if ( (byte_4101970 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4101970 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_23;
  if ( !ServantEntity__IsBeast(svtEntity, 0LL) )
  {
    v18 = this->fields.svtEntity;
    if ( !v18 )
      goto LABEL_23;
    if ( !ServantEntity__get_IsServant(v18, 0LL) )
    {
      v19 = this->fields.svtEntity;
      if ( !v19 )
        goto LABEL_23;
      if ( !ServantEntity__get_IsServantCollection(v19, 0LL) )
        goto LABEL_5;
    }
    IsOtherImage = ConstantMaster__IsOtherImage(0LL);
    costumeIds = this->fields.costumeIds;
    if ( IsOtherImage )
    {
      v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v21,
                                                        v10,
                                                        v11,
                                                        v12);
      v24 = v23;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_49346956(
          v23,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
      else
        System_Collections_Generic_List_int____ctor(
          v23,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v24 )
      {
        System_Collections_Generic_List_int___Add(
          v24,
          BalanceConfig_TypeInfo->static_fields->OtherImageLimitCount,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        v34 = System_Collections_Generic_List_int___ToArray(
                v24,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
        this->fields.costumeAndOtherIds = v34;
        v17 = (System_Int32_array **)v34;
        p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v25 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, costumeIds->max_length, v10);
      this->fields.costumeAndOtherIds = v25;
      v26 = &this->fields.costumeAndOtherIds;
      sub_B16F98((BattleServantConfConponent_o *)v26, (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
      v33 = (System_Array_o *)*(v26 - 1);
      if ( v33 )
      {
        System_Array__CopyTo(v33, (System_Array_o *)*v26, 0, 0LL);
        return;
      }
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v17 = 0LL;
LABEL_22:
  sub_B16F98((BattleServantConfConponent_o *)p_costumeAndOtherIds, v17, v10, v11, v12, v13, v14, v15);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array **Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_equipUserSvtEntity; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  WebViewManager_o *v33; // x0
  WarQuestSelectionMaster_o *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v35; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x21
  __int64 v37; // x22
  __int64 v38; // x23
  int32_t v39; // w0
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WebViewManager_o *v47; // x0
  WarQuestSelectionMaster_o *v48; // x0
  ServantLimitMaster_o *v49; // x21
  int32_t v50; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v51; // x8
  int32_t v52; // w20
  int32_t v53; // w0
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UserServantEntity_o *v61; // x0
  struct System_Int64_array *v62; // x8
  PartyOrganizationListViewItem_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x2
  BalanceConfig_c *v77; // x0
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  v9 = this;
  if ( (byte_4101957 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, equipUserSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    this = (ServantStatusListViewItem_o *)sub_B16FFC(&SkillInfo___TypeInfo, v17);
    byte_4101957 = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_38;
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      equipUserSvtId,
                                      (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v9->fields.equipUserSvtEntity;
    v9->fields.equipUserSvtEntity = (struct UserServantEntity_o *)Entity;
    sub_B16F98((BattleServantConfConponent_o *)&v9->fields.equipUserSvtEntity, Entity, v22, v23, v24, v25, v26, v27);
    equipUserSvtEntity = v9->fields.equipUserSvtEntity;
    if ( !equipUserSvtEntity )
      goto LABEL_38;
    v30 = *(_QWORD *)&equipUserSvtEntity->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&equipUserSvtEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v85.fields.currentCryptoKey = v30;
    *(_QWORD *)&v85.fields.fakeValue = v29;
    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v85, 0LL);
    if ( (int)this >= 1 )
    {
      equipIdList = v9->fields.equipIdList;
      if ( !equipIdList )
        goto LABEL_15;
      if ( equipIdList->max_length )
      {
        equipIdList->m_Items[0] = equipUserSvtId;
LABEL_15:
        memberItem = v9->fields.memberItem;
        if ( memberItem )
          PartyOrganizationListViewItem__SetEquipUserServantId(memberItem, equipUserSvtId, 0LL);
        v9->fields.equipTargetId1 = equipUserSvtId;
        v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v33 )
        {
          v34 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v33,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
          v35 = *p_equipUserSvtEntity;
          if ( *p_equipUserSvtEntity )
          {
            v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)v34;
            v38 = *(_QWORD *)&v35[5].fields.currentCryptoKey;
            v37 = *(_QWORD *)&v35[5].fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v86.fields.currentCryptoKey = v38;
            *(_QWORD *)&v86.fields.fakeValue = v37;
            v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v86, 0LL);
            if ( v36 )
            {
              v40 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v36,
                                             v39,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v9->fields.equipServantEntity = (struct ServantEntity_o *)v40;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v9->fields.equipServantEntity,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46);
              v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( v47 )
              {
                v48 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)v47,
                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_equipUserSvtEntity )
                {
                  v49 = (ServantLimitMaster_o *)v48;
                  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                          (*p_equipUserSvtEntity)[5],
                          0LL);
                  v51 = *p_equipUserSvtEntity;
                  if ( *p_equipUserSvtEntity )
                  {
                    v52 = v50;
                    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51[6], 0LL);
                    if ( v49 )
                    {
                      v54 = (System_Int32_array **)ServantLimitMaster__GetEntity(v49, v52, v53, 0LL);
                      v9->fields.equipSvtLimitEntity = (struct ServantLimitEntity_o *)v54;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)&v9->fields.equipSvtLimitEntity,
                        v54,
                        v55,
                        v56,
                        v57,
                        v58,
                        v59,
                        v60);
                      v61 = v9->fields.equipUserSvtEntity;
                      if ( v61 )
                      {
                        UserServantEntity__getEquipSkillInfo(v61, &v9->fields.equipSkillInfoList, 1, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_38:
        sub_B170D4();
      }
LABEL_39:
      sub_B17100(this, equipUserSvtId, method);
      sub_B170A0();
    }
  }
  v62 = v9->fields.equipIdList;
  if ( v62 )
  {
    if ( !v62->max_length )
      goto LABEL_39;
    v62->m_Items[0] = 0LL;
  }
  v63 = v9->fields.memberItem;
  if ( v63 )
    PartyOrganizationListViewItem__SetEquipUserServantId(v63, 0LL, 0LL);
  v9->fields.equipTargetId1 = 0LL;
  v9->fields.equipUserSvtEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v9->fields.equipUserSvtEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v9->fields.equipServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v9->fields.equipServantEntity, 0LL, v64, v65, v66, v67, v68, v69);
  v9->fields.equipSvtLimitEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v9->fields.equipSvtLimitEntity, 0LL, v70, v71, v72, v73, v74, v75);
  v77 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v77 = BalanceConfig_TypeInfo;
  }
  v78 = (System_Int32_array **)sub_B17014(
                                 SkillInfo___TypeInfo,
                                 (unsigned int)v77->static_fields->SvtEquipSkillListMax,
                                 v76);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v78;
  sub_B16F98((BattleServantConfConponent_o *)&v9->fields.equipSkillInfoList, v78, v79, v80, v81, v82, v83, v84);
}


void __fastcall ServantStatusListViewItem__SetLimitCountInfo(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  int32_t v9; // w0
  System_Int32_array *costumeAndOtherIds; // x22
  int32_t v11; // w23
  struct System_Int32_array *CardSelectList; // x0
  struct System_Int32_array **p_cardSelectList; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t v20; // w21
  int32_t v21; // w0
  System_Int32_array **SelectList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t v29; // w21
  int32_t v30; // w0
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **CommandCardParam; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w21
  int32_t v46; // w0
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t v54; // w0
  __int64 v55; // x8
  int32_t v56; // w20
  int32_t v57; // w0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4101954 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, entity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4101954 = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0LL);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0LL);
    v7 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v65.fields.currentCryptoKey = v7;
    *(_QWORD *)&v65.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v65, 0LL);
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v11 = v9;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    CardSelectList = ImageLimitCount__GetCardSelectList(v8, v11, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    p_cardSelectList = &this->fields.cardSelectList;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_cardSelectList,
      (System_Int32_array **)CardSelectList,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    *((_DWORD *)p_cardSelectList + 2) = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 3) = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.svtId, 0LL);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.limitCount, 0LL);
    SelectList = (System_Int32_array **)ImageLimitCount__GetSelectList(v20, v21, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[2] = (struct System_Int32_array *)SelectList;
    sub_B16F98((BattleServantConfConponent_o *)(p_cardSelectList + 2), SelectList, v23, v24, v25, v26, v27, v28);
    *((_DWORD *)p_cardSelectList + 6) = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 7) = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.svtId, 0LL);
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.limitCount, 0LL);
    v31 = (System_Int32_array **)ImageLimitCount__GetSelectList(v29, v30, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[4] = (struct System_Int32_array *)v31;
    sub_B16F98((BattleServantConfConponent_o *)(p_cardSelectList + 4), v31, v32, v33, v34, v35, v36, v37);
    CommandCardParam = (System_Int32_array **)UserServantEntity__GetCommandCardParam(entity, 0LL);
    p_cardSelectList[5] = (struct System_Int32_array *)CommandCardParam;
    sub_B16F98((BattleServantConfConponent_o *)(p_cardSelectList + 5), CommandCardParam, v39, v40, v41, v42, v43, v44);
    *((_DWORD *)p_cardSelectList + 12) = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 13) = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.svtId, 0LL);
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.limitCount, 0LL);
    v47 = (System_Int32_array **)ImageLimitCount__GetCardSelectList(v45, v46, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[7] = (struct System_Int32_array *)v47;
    sub_B16F98((BattleServantConfConponent_o *)(p_cardSelectList + 7), v47, v48, v49, v50, v51, v52, v53);
    *((_DWORD *)p_cardSelectList + 16) = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 17) = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(entity->fields.svtId, 0LL);
    v55 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v66.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v56 = v54;
    *(_QWORD *)&v66.fields.currentCryptoKey = v55;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v66, 0LL);
    v58 = (System_Int32_array **)ImageLimitCount__GetSelectList(v56, v57, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[9] = (struct System_Int32_array *)v58;
    sub_B16F98((BattleServantConfConponent_o *)(p_cardSelectList + 9), v58, v59, v60, v61, v62, v63, v64);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  v4 = this;
  if ( (byte_4101967 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_B16FFC(&UserServantEntity_TypeInfo, *(_QWORD *)&index);
    byte_4101967 = 1;
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
        sub_B17100(this, *(_QWORD *)&index, method);
        sub_B170A0();
      }
      LIMIT_SUPPORT_NOT_ASSIGN = supportRandomLimitCountList->m_Items[index + 1];
LABEL_13:
      v4->fields.supportRandomLimitCount = LIMIT_SUPPORT_NOT_ASSIGN;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusListViewItem__UpdateServantComment(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantCommentMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantCommentEntity_array *EntityList_30493208; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  _DWORD *klass; // x8
  BattleServantConfConponent_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v20; // x20
  int max_length; // w9
  unsigned int v22; // w10
  unsigned int v23; // w21
  __int64 v24; // x0
  bool v25; // w21

  if ( (byte_410196E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    byte_410196E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  EntityList_30493208 = ServantCommentMaster__GetEntityList_30493208(
                          Master_WarQuestSelectionMaster,
                          svtId,
                          imageLimitCount,
                          0,
                          0,
                          0,
                          0LL);
  svtCommentEntityList = this->fields.svtCommentEntityList;
  p_svtCommentEntityList = (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList;
  klass = svtCommentEntityList;
  v20 = EntityList_30493208;
  if ( svtCommentEntityList )
  {
    if ( !EntityList_30493208 )
      goto LABEL_18;
    max_length = klass[6];
    if ( max_length != EntityList_30493208->max_length )
    {
LABEL_20:
      v25 = 1;
      goto LABEL_21;
    }
    if ( max_length >= 1 )
    {
      v22 = 0;
      do
      {
        if ( v22 >= klass[6] || (v23 = v22, v22 >= max_length) )
        {
          sub_B17100(EntityList_30493208, v10, v11);
          sub_B170A0();
        }
        v24 = *(_QWORD *)&klass[2 * v22 + 8];
        if ( !v24 )
          break;
        EntityList_30493208 = (ServantCommentEntity_array *)(*(__int64 (__fastcall **)(__int64, ServantCommentEntity_o *, _QWORD))(*(_QWORD *)v24 + 312LL))(
                                                              v24,
                                                              v20->m_Items[v22],
                                                              *(_QWORD *)(*(_QWORD *)v24 + 320LL));
        if ( ((unsigned __int8)EntityList_30493208 & 1) == 0 )
          goto LABEL_20;
        max_length = v20->max_length;
        v22 = v23 + 1;
        if ( (int)(v23 + 1) >= max_length )
          goto LABEL_19;
        klass = p_svtCommentEntityList->klass;
      }
      while ( p_svtCommentEntityList->klass );
LABEL_18:
      sub_B170D4();
    }
  }
LABEL_19:
  v25 = 0;
LABEL_21:
  p_svtCommentEntityList->klass = (BattleServantConfConponent_c *)v20;
  sub_B16F98(p_svtCommentEntityList, (System_Int32_array **)v20, v11, v12, v13, v14, v15, v16);
  return v25;
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
    sub_B170D4();
  return svtLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_Atk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8

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

  if ( (byte_4101959 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4101959 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.cardLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *memberItem; // x0
  int32_t result; // w0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( !this->fields.isConvertOverwriteImage )
    return this->fields.commandCardLimitCount;
  memberItem = this->fields.memberItem;
  if ( memberItem )
    return PartyOrganizationListViewItem__GetCommandCardLimitCount(memberItem, 0LL);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.commandCardLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.commandCardLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.commandCardLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *memberItem; // x0
  int32_t result; // w0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_4101965 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4101965 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL);
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
    sub_B170D4();
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
  RandomLimitCountManager_c *v3; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t ManualSetCommandCardLimit; // w0
  int32_t commandCardLimitCount; // w1
  bool v7; // w2
  UserServantEntity_o *v8; // x0

  if ( (byte_410195E & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_410195E = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !v3->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      commandCardLimitCount = this->fields.commandCardLimitCount;
      v8 = this->fields.userSvtEntity;
      v7 = 0;
      return UserServantEntity__IsModifyCommandCardLimitCount(v8, commandCardLimitCount, v7, 0LL);
    }
LABEL_19:
    sub_B170D4();
  }
  ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(this, method);
  if ( !userSvtEntity )
    goto LABEL_19;
  commandCardLimitCount = ManualSetCommandCardLimit;
  v7 = 1;
  v8 = userSvtEntity;
  return UserServantEntity__IsModifyCommandCardLimitCount(v8, commandCardLimitCount, v7, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t ManualSetDispLimitCount; // w0
  int32_t dispLimitCount; // w1
  bool v7; // w2
  UserServantEntity_o *v8; // x0

  if ( (byte_410195C & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_410195C = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !v3->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      dispLimitCount = this->fields.dispLimitCount;
      v8 = this->fields.userSvtEntity;
      v7 = 0;
      return UserServantEntity__IsModifyDispLimitCount(v8, dispLimitCount, v7, 0LL);
    }
LABEL_19:
    sub_B170D4();
  }
  ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(this, method);
  if ( !userSvtEntity )
    goto LABEL_19;
  dispLimitCount = ManualSetDispLimitCount;
  v7 = 1;
  v8 = userSvtEntity;
  return UserServantEntity__IsModifyDispLimitCount(v8, dispLimitCount, v7, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t ManualSetIconLimitCount; // w0
  int32_t iconLimitCount; // w1
  bool v7; // w2
  UserServantEntity_o *v8; // x0

  if ( (byte_4101960 & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_4101960 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !v3->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      iconLimitCount = this->fields.iconLimitCount;
      v8 = this->fields.userSvtEntity;
      v7 = 0;
      return UserServantEntity__IsModifyIconLimitCount(v8, iconLimitCount, v7, 0LL);
    }
LABEL_19:
    sub_B170D4();
  }
  ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(this, method);
  if ( !userSvtEntity )
    goto LABEL_19;
  iconLimitCount = ManualSetIconLimitCount;
  v7 = 1;
  v8 = userSvtEntity;
  return UserServantEntity__IsModifyIconLimitCount(v8, iconLimitCount, v7, 0LL);
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
  RandomLimitCountManager_c *v3; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t portraitLimitCount; // w1
  bool v7; // w2
  UserServantEntity_o *v8; // x0

  if ( (byte_4101962 & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_4101962 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !v3->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      portraitLimitCount = this->fields.portraitLimitCount;
      v8 = this->fields.userSvtEntity;
      v7 = 0;
      return UserServantEntity__IsModifyPortraitLimitCount(v8, portraitLimitCount, v7, 0LL);
    }
LABEL_19:
    sub_B170D4();
  }
  ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(this, method);
  if ( !userSvtEntity )
    goto LABEL_19;
  portraitLimitCount = ManualSetPortraitLimitCount;
  v7 = 1;
  v8 = userSvtEntity;
  return UserServantEntity__IsModifyPortraitLimitCount(v8, portraitLimitCount, v7, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsModifyRandomLimitCountSetting(
                              userSvtEntity,
                              this->fields.isEnableOwnRandomSetting,
                              this->fields.isEnableSupportRandomSetting,
                              0LL);
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

  if ( (byte_4101964 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4101964 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL) != this->fields.supportRandomLimitCount;
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

  if ( (byte_410195A & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_410195A = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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
    sub_B170D4();
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B170D4();
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_410195B & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    byte_410195B = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( !v4->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetRandomLimitCountOwn(0LL) )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B170D4();
    p_cardLimitCount = &currentLimitCountCache->fields.cardLimitCount;
  }
  else
  {
LABEL_19:
    p_cardLimitCount = &this->fields.cardLimitCount;
  }
  return *p_cardLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCommandCardLimit(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_commandCardLimitCount; // x8

  if ( (byte_410195F & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    byte_410195F = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( !v4->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetRandomLimitCountOwn(0LL) )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B170D4();
    p_commandCardLimitCount = &currentLimitCountCache->fields.commandCardLimitCount;
  }
  else
  {
LABEL_19:
    p_commandCardLimitCount = &this->fields.commandCardLimitCount;
  }
  return *p_commandCardLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_dispLimitCount; // x8

  if ( (byte_410195D & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    byte_410195D = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( !v4->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetRandomLimitCountOwn(0LL) )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B170D4();
    p_dispLimitCount = &currentLimitCountCache->fields.dispLimitCount;
  }
  else
  {
LABEL_19:
    p_dispLimitCount = &this->fields.dispLimitCount;
  }
  return *p_dispLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_iconLimitCount; // x8

  if ( (byte_4101961 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    byte_4101961 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( !v4->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetRandomLimitCountOwn(0LL) )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B170D4();
    p_iconLimitCount = &currentLimitCountCache->fields.iconLimitCount;
  }
  else
  {
LABEL_19:
    p_iconLimitCount = &this->fields.iconLimitCount;
  }
  return *p_iconLimitCount;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetPortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_portraitLimitCount; // x8

  if ( (byte_4101963 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v3);
    byte_4101963 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( !v4->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetRandomLimitCountOwn(0LL) )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B170D4();
    p_portraitLimitCount = &currentLimitCountCache->fields.portraitLimitCount;
  }
  else
  {
LABEL_19:
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
    sub_B170D4();
  return svtLimitEntity->fields.treasureDevice;
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
    sub_B170D4();
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

  if ( (byte_4101958 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4101958 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  _QWORD *p_klass; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  if ( (byte_410196D & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_410196D = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v8, 0LL);
  }
  else
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
      return servantLeaderInfo->fields.userId;
    p_klass = &this->fields.equipTargetInfo->klass;
    if ( !p_klass )
    {
      if ( !this->fields.isCollection )
        return 0LL;
      p_klass = &this->fields.userSvtCollectionEntity->klass;
      if ( !p_klass )
        sub_B170D4();
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
  __int64 v5; // x1
  RandomLimitCountManager_c *v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4101966 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, value);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    byte_4101966 = 1;
  }
  this->fields.isEnableOwnRandomSetting = value;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, value);
    byte_40F8215 = 1;
  }
  v6 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v6 = RandomLimitCountManager_TypeInfo;
  }
  if ( v6->static_fields->enableRandomLimitCount && !this->fields.isConvertOverwriteImage && this->fields.userSvtEntity )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( !OptionManager__GetRandomLimitCountOwn(0LL) && this->fields.isEnableOwnRandomSetting )
      ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 0, v8);
    ServantStatusListViewItem__RefreshLimitCountWithRandom(this, v7);
  }
}


void __fastcall ServantStatusListViewItem__set_IsEnableSupportRandomSetting(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnableSupportRandomSetting = value;
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