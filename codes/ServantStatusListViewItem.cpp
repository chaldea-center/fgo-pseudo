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
  int64_t Instance; // x0
  __int64 v24; // x1
  struct PartyOrganizationListViewItem_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t pushUserSvtId; // x9
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  struct System_Int64_array *EquipList; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct PartyOrganizationListViewItem_o *v63; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x20
  __int64 v67; // x22
  __int64 v68; // x23
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  ServantLimitMaster_o *v77; // x22
  int32_t v78; // w23
  struct ServantLimitEntity_o *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  ServantCommentMaster_o *v86; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v94; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // q1
  UserServantCollectionMaster_o *v96; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  int64_t v98; // x21
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  struct PartyOrganizationListViewItem_o *v106; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  int32_t lv; // w22
  struct System_Int32_array *CostumeList_21620056; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  const MethodInfo *v124; // x1
  struct UserServantCollectionEntity_o *v125; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v127; // x8
  int32_t v128; // w8
  struct System_Int64_array *equipIdList; // x9
  UserServantEntity_o *v130; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v132; // x2
  struct System_Int64_array *v133; // x8
  int64_t v134; // x1
  struct UserServantCollectionEntity_o *v135; // x8
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v143; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v145; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v147; // x8
  int32_t v148; // w0
  UserServantEntity_o *v149; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x1
  const MethodInfo *v153; // x2
  RandomLimitCountManager_c *v154; // x0
  __int64 v155; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16

  if ( (byte_418D163 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418D163 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_B2C2F8(
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
  v25 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberItem,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_65;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)EquipList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v63 = this->fields.memberItem;
  if ( !v63 )
    goto LABEL_65;
  questRestrictionInfo = v63->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v68 = *(_QWORD *)&v65[5].fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v158.fields.currentCryptoKey = v68;
  *(_QWORD *)&v158.fields.fakeValue = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v158, 0LL);
  if ( !v66 )
    goto LABEL_65;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v66,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v77 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v77 )
    goto LABEL_65;
  v79 = ServantLimitMaster__GetEntity(v77, v78, Instance, 0LL);
  this->fields.svtLimitEntity = v79;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_65;
  v86 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_svtEntity)[1], 0LL);
  if ( !v86 )
    goto LABEL_65;
  EntityList = ServantCommentMaster__GetEntityList(v86, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v94 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v95 = v94[4];
  v96 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.currentCryptoKey = v94[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.fakeValue = v95;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v156 = v157;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v156, 0LL);
  v97 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v98 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v97[5], 0LL);
  if ( !v96 )
    goto LABEL_65;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v96, v98, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v106 = this->fields.memberItem;
  if ( !v106 )
    goto LABEL_65;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v106->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_65;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_65;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_65;
  CostumeList_21620056 = UserServantCollectionEntity__getCostumeList_21620056(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_21620056;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList_21620056,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v124);
  v125 = this->fields.userSvtCollectionEntity;
  if ( !v125 )
    goto LABEL_65;
  svtCommonFlag = v125->fields.svtCommonFlag;
  v127 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v127 )
    goto LABEL_65;
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v127->fields.battleVoice, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v128;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_65;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v130 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v130 )
    goto LABEL_65;
  IsChoice = UserServantEntity__IsChoice(v130, 0LL);
  v133 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v133 )
  {
    if ( !v133->max_length )
    {
      v155 = sub_B2C460(IsChoice);
      sub_B2C400(v155, 0LL);
    }
    v134 = v133->m_Items[0];
  }
  else
  {
    v134 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v134, v132);
  v135 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v135 != 0LL;
  if ( !Instance )
    goto LABEL_65;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_45;
    }
LABEL_65:
    sub_B2C434(Instance, v24);
  }
  IsNameTrue = 0;
LABEL_45:
  v143 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v143 != 0LL;
  if ( !v143 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v143, 0LL);
  v145 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v145 )
  {
LABEL_51:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_52;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v145, 0LL);
  v147 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v147 )
  {
LABEL_52:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_53;
  }
  v148 = BasicHelper__DecryptValue_19216120(v147->fields.limitCountSupport, 0LL);
  v149 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v148;
  if ( v149 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v149, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_53:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  ServantStatusListViewItem__SetLimitCountInfo(this, this->fields.userSvtEntity, v151);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v152);
    byte_4185F2D = 1;
  }
  v154 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v154 = RandomLimitCountManager_TypeInfo;
  }
  if ( v154->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v153);
  ServantStatusListViewItem__ModifyInfo(this, v152);
}


void __fastcall ServantStatusListViewItem___ctor_34128236(
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
  int64_t Instance; // x0
  __int64 v24; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t pushUserSvtId; // x9
  struct PartyOrganizationListViewItem_o *v47; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  struct System_Int64_array *EquipList; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct PartyOrganizationListViewItem_o *v63; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x20
  __int64 v67; // x22
  __int64 v68; // x23
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  ServantLimitMaster_o *v77; // x22
  int32_t v78; // w23
  struct ServantLimitEntity_o *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  ServantCommentMaster_o *v86; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v94; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // q1
  UserServantCollectionMaster_o *v96; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  int64_t v98; // x21
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  struct PartyOrganizationListViewItem_o *v106; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  int32_t lv; // w22
  struct System_Int32_array *CostumeList_21620056; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  const MethodInfo *v124; // x1
  struct UserServantCollectionEntity_o *v125; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v127; // x8
  int32_t v128; // w8
  struct System_Int64_array *equipIdList; // x9
  UserServantEntity_o *v130; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v132; // x2
  struct System_Int64_array *v133; // x8
  int64_t v134; // x1
  struct UserServantCollectionEntity_o *v135; // x8
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v143; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v145; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v147; // x8
  int32_t v148; // w0
  UserServantEntity_o *v149; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x1
  const MethodInfo *v153; // x2
  RandomLimitCountManager_c *v154; // x0
  __int64 v155; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+20h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16

  if ( (byte_418D164 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418D164 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.memberItem,
    (System_Int32_array **)MemberItem,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)SelfUserGame,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_65;
  this->fields.favoriteUserSvtId = userGameEntity->fields.favoriteUserSvtId;
  pushUserSvtId = userGameEntity->fields.pushUserSvtId;
  v47 = this->fields.memberItem;
  this->fields.pushUserSvtId = pushUserSvtId;
  if ( !v47 )
    goto LABEL_65;
  userServantEntity = v47->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServantEntity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_65;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)EquipList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v63 = this->fields.memberItem;
  if ( !v63 )
    goto LABEL_65;
  questRestrictionInfo = v63->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v68 = *(_QWORD *)&v65[5].fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v158.fields.currentCryptoKey = v68;
  *(_QWORD *)&v158.fields.fakeValue = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v158, 0LL);
  if ( !v66 )
    goto LABEL_65;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v66,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v77 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v77 )
    goto LABEL_65;
  v79 = ServantLimitMaster__GetEntity(v77, v78, Instance, 0LL);
  this->fields.svtLimitEntity = v79;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_65;
  v86 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_svtEntity)[1], 0LL);
  if ( !v86 )
    goto LABEL_65;
  EntityList = ServantCommentMaster__GetEntityList(v86, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v94 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v95 = v94[4];
  v96 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.currentCryptoKey = v94[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v157.fields.fakeValue = v95;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v156 = v157;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v156, 0LL);
  v97 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_65;
  v98 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v97[5], 0LL);
  if ( !v96 )
    goto LABEL_65;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v96, v98, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v106 = this->fields.memberItem;
  if ( !v106 )
    goto LABEL_65;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v106->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_65;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_65;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_65;
  CostumeList_21620056 = UserServantCollectionEntity__getCostumeList_21620056(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_21620056;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList_21620056,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v124);
  v125 = this->fields.userSvtCollectionEntity;
  if ( !v125 )
    goto LABEL_65;
  svtCommonFlag = v125->fields.svtCommonFlag;
  v127 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v127 )
    goto LABEL_65;
  v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v127->fields.battleVoice, 0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v128;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_65;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v130 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v130 )
    goto LABEL_65;
  IsChoice = UserServantEntity__IsChoice(v130, 0LL);
  v133 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v133 )
  {
    if ( !v133->max_length )
    {
      v155 = sub_B2C460(IsChoice);
      sub_B2C400(v155, 0LL);
    }
    v134 = v133->m_Items[0];
  }
  else
  {
    v134 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v134, v132);
  v135 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v135 != 0LL;
  if ( !Instance )
    goto LABEL_65;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_45;
    }
LABEL_65:
    sub_B2C434(Instance, v24);
  }
  IsNameTrue = 0;
LABEL_45:
  v143 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v143 != 0LL;
  if ( !v143 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v143, 0LL);
  v145 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v145 )
  {
LABEL_51:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_52;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v145, 0LL);
  v147 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v147 )
  {
LABEL_52:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_53;
  }
  v148 = BasicHelper__DecryptValue_19216120(v147->fields.limitCountSupport, 0LL);
  v149 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v148;
  if ( v149 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v149, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_53:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  ServantStatusListViewItem__SetLimitCountInfo(this, this->fields.userSvtEntity, v151);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v152);
    byte_4185F2D = 1;
  }
  v154 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v154 = RandomLimitCountManager_TypeInfo;
  }
  if ( v154->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v153);
  ServantStatusListViewItem__ModifyInfo(this, v152);
}


void __fastcall ServantStatusListViewItem___ctor_34129844(
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
  int64_t Instance; // x0
  __int64 v34; // x1
  __int128 v35; // q1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x24
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x23
  __int64 v58; // x26
  __int64 v59; // x27
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  ServantLimitMaster_o *v68; // x26
  int32_t v69; // w27
  struct ServantLimitEntity_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  ServantCommentMaster_o *v77; // x26
  int32_t v78; // w27
  struct ServantCommentEntity_array *EntityList_29249908; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v86; // x8
  __int64 v87; // x26
  __int64 v88; // x27
  int32_t v89; // w0
  bool IsConvertOverwriteImage; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // q0
  int64_t v93; // x25
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v100; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // q0
  UserServantCollectionMaster_o *v102; // x25
  bool v103; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v104; // x8
  int64_t v105; // x26
  __int64 v106; // x27
  __int64 v107; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x25
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x26
  int32_t lv; // w27
  struct System_Int32_array *CostumeList_21620056; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  const MethodInfo *v133; // x1
  struct System_Int32_array *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  struct UserServantEntity_o *v153; // x8
  __int64 v154; // x25
  __int64 v155; // x26
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  UserServantEntity_o *v168; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  const MethodInfo *v171; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v172; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // q0
  UserDeckMaster_o *v174; // x22
  bool v175; // w20
  bool v176; // w8
  struct System_Int64_array *v177; // x9
  int64_t v178; // x1
  struct UserServantCollectionEntity_o *v179; // x8
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  bool IsNameTrue; // w8
  UserServantEntity_o *v187; // x0
  bool IsEnableOwnRandomLimitCount; // w0
  UserServantEntity_o *v189; // x8
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v191; // x8
  int32_t v192; // w0
  UserServantEntity_o *v193; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v195; // x2
  const MethodInfo *v196; // x1
  const MethodInfo *v197; // x2
  RandomLimitCountManager_c *v198; // x0
  __int64 v199; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v200; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v201; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v202; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v203; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v208; // 0:x0.16

  if ( (byte_418D165 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_418D165 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
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
  v35 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v204.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v204.fields.fakeValue = v35;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v203 = v204;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v203, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_102;
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v36, v37, v38, v39, v40, v41);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServant,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.equipIdList = equipIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipIdList,
    (System_Int32_array **)equipIdList,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_102;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v56 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_102;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v59 = *(_QWORD *)&v56[5].fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v205.fields.currentCryptoKey = v59;
  *(_QWORD *)&v205.fields.fakeValue = v58;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v205, 0LL);
  if ( !v57 )
    goto LABEL_102;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v57,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_102;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_102;
  v68 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_102;
  v69 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v68 )
    goto LABEL_102;
  v70 = ServantLimitMaster__GetEntity(v68, v69, Instance, 0LL);
  this->fields.svtLimitEntity = v70;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_102;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_102;
  v77 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_102;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[7], 0LL);
  if ( !v77 )
    goto LABEL_102;
  EntityList_29249908 = ServantCommentMaster__GetEntityList_29249908(v77, v78, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList_29249908;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList_29249908,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  if ( questRestrictionInfo )
  {
    v86 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_102;
    v88 = *(_QWORD *)&v86[5].fields.currentCryptoKey;
    v87 = *(_QWORD *)&v86[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v206.fields.currentCryptoKey = v88;
    *(_QWORD *)&v206.fields.fakeValue = v87;
    v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v206, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v89, 0LL);
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
  v91 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_102:
    sub_B2C434(Instance, v34);
  v92 = v91[4];
  v93 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v204.fields.currentCryptoKey = v91[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v204.fields.fakeValue = v92;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v202 = v204;
  if ( v93 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v202, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_102;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v100 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_102;
    v101 = v100[4];
    v102 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v204.fields.currentCryptoKey = v100[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v204.fields.fakeValue = v101;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v103 = enableBattleVoice;
    v201 = v204;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v201, 0LL);
    v104 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_102;
    v105 = Instance;
    v107 = *(_QWORD *)&v104[5].fields.currentCryptoKey;
    v106 = *(_QWORD *)&v104[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v207.fields.currentCryptoKey = v107;
    *(_QWORD *)&v207.fields.fakeValue = v106;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v207, 0LL);
    if ( !v102 )
      goto LABEL_102;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v102, v105, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      (System_Int32_array **)EntityDefinitely,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_102;
    enableBattleVoice = v103;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)CommandCodeIdList,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_102;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_102;
    CostumeList_21620056 = UserServantCollectionEntity__getCostumeList_21620056(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_21620056;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.costumeIds,
      (System_Int32_array **)CostumeList_21620056,
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v94, v95, v96, v97, v98, v99);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_102;
    v134 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v134;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)v134,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
    this->fields.costumeIds = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v141, v142, v143, v144, v145, v146);
    this->fields.costumeAndOtherIds = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.costumeAndOtherIds,
      0LL,
      v147,
      v148,
      v149,
      v150,
      v151,
      v152);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_102;
  v153 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  if ( !v153 )
    goto LABEL_102;
  v155 = *(_QWORD *)&v153->fields.battleVoice.fields.currentCryptoKey;
  v154 = *(_QWORD *)&v153->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v208.fields.currentCryptoKey = v155;
  *(_QWORD *)&v208.fields.fakeValue = v154;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v208, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v156, v157, v158, v159, v160, v161);
  this->fields.equipTargetInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v162, v163, v164, v165, v166, v167);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_102;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v168 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v168 )
    goto LABEL_102;
  Instance = UserServantEntity__IsChoice(v168, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_102;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_102;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v172 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_102;
    v173 = v172[2];
    v174 = (UserDeckMaster_o *)Instance;
    v175 = enableTdSpeed;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v204.fields.currentCryptoKey = v172[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v204.fields.fakeValue = v173;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v200 = v204;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v200, 0LL);
    if ( !v174 )
      goto LABEL_102;
    IsServantEquip = UserDeckMaster__IsEquip(v174, Instance, 0LL);
    v176 = IsServantEquip;
  }
  else
  {
    v175 = enableTdSpeed;
    v176 = 0;
  }
  v177 = this->fields.equipIdList;
  this->fields.isUse = v176;
  if ( v177 )
  {
    if ( !v177->max_length )
    {
      v199 = sub_B2C460(IsServantEquip);
      sub_B2C400(v199, 0LL);
    }
    v178 = v177->m_Items[0];
  }
  else
  {
    v178 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v178, v171);
  v179 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v179 != 0LL && v175;
  if ( !Instance )
    goto LABEL_102;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_82;
    }
    goto LABEL_102;
  }
  IsNameTrue = 0;
LABEL_82:
  v187 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue && enableBattleVoice;
  this->fields.isDisplayRandomLimitCount = v187 != 0LL;
  if ( !v187 )
  {
    this->fields.isEnableOwnRandomSetting = 0;
    goto LABEL_88;
  }
  IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v187, 0LL);
  v189 = this->fields.userSvtEntity;
  this->fields.isEnableOwnRandomSetting = IsEnableOwnRandomLimitCount;
  if ( !v189 )
  {
LABEL_88:
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_89;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v189, 0LL);
  v191 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v191 )
  {
LABEL_89:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_90;
  }
  v192 = BasicHelper__DecryptValue_19216120(v191->fields.limitCountSupport, 0LL);
  v193 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v192;
  if ( v193 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v193, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_90:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  ServantStatusListViewItem__SetLimitCountInfo(this, this->fields.userSvtEntity, v195);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v196);
    byte_4185F2D = 1;
  }
  v198 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v198 = RandomLimitCountManager_TypeInfo;
  }
  if ( v198->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v197);
  ServantStatusListViewItem__ModifyInfo(this, v196);
}


void __fastcall ServantStatusListViewItem___ctor_34132124(
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
  int64_t Instance; // x0
  __int64 v25; // x1
  __int128 v26; // q1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x21
  __int64 v49; // x23
  __int64 v50; // x24
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  ServantLimitMaster_o *v59; // x23
  int32_t v60; // w24
  struct ServantLimitEntity_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  ServantCommentMaster_o *v68; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // q0
  int64_t v78; // x23
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // q0
  UserServantCollectionMaster_o *v87; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v88; // x8
  int64_t v89; // x22
  __int64 v90; // x24
  __int64 v91; // x25
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x22
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_21620056; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  const MethodInfo *v117; // x1
  struct System_Int32_array *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct UserServantEntity_o *v137; // x8
  __int64 v138; // x22
  __int64 v139; // x23
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  UserServantEntity_o *v152; // x8
  const MethodInfo *v153; // x2
  struct UserServantCollectionEntity_o *v154; // x8
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  bool IsNameTrue; // w8
  struct UserServantEntity_o *v162; // x9
  int32_t v163; // w0
  UserServantEntity_o *v164; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v166; // x2
  const MethodInfo *v167; // x1
  const MethodInfo *v168; // x2
  RandomLimitCountManager_c *v169; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  if ( (byte_418D166 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418D166 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
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
  v26 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v173.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v173.fields.fakeValue = v26;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v172 = v173;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v172, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_76;
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v27, v28, v29, v30, v31, v32);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtEntity,
    (System_Int32_array **)userServant,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v35, v36, v37, v38, v39, v40);
  this->fields.questRestrictionInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v41, v42, v43, v44, v45, v46);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_76;
  v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v50 = *(_QWORD *)&v47[5].fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v174.fields.currentCryptoKey = v50;
  *(_QWORD *)&v174.fields.fakeValue = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v174, 0LL);
  if ( !v48 )
    goto LABEL_76;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v48,
                                       Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_76;
  v59 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_76;
  v60 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userSvtEntity)[6], 0LL);
  if ( !v59 )
    goto LABEL_76;
  v61 = ServantLimitMaster__GetEntity(v59, v60, Instance, 0LL);
  this->fields.svtLimitEntity = v61;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_76;
  v68 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_svtEntity)[1], 0LL);
  if ( !v68 )
    goto LABEL_76;
  EntityList = ServantCommentMaster__GetEntityList(v68, Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields.isConvertOverwriteImage = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v76 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_76;
  v77 = v76[4];
  v78 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v173.fields.currentCryptoKey = v76[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v173.fields.fakeValue = v77;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v171 = v173;
  if ( v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v171, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_76;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v85 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_76;
    v86 = v85[4];
    v87 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v173.fields.currentCryptoKey = v85[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v173.fields.fakeValue = v86;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v170 = v173;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v170, 0LL);
    v88 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_76;
    v89 = Instance;
    v91 = *(_QWORD *)&v88[5].fields.currentCryptoKey;
    v90 = *(_QWORD *)&v88[5].fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v175.fields.currentCryptoKey = v91;
    *(_QWORD *)&v175.fields.fakeValue = v90;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v175, 0LL);
    if ( !v87 )
      goto LABEL_76;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v87, v89, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
      (System_Int32_array **)EntityDefinitely,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_76;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)CommandCodeIdList,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_76;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_76;
    CostumeList_21620056 = UserServantCollectionEntity__getCostumeList_21620056(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_21620056;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.costumeIds,
      (System_Int32_array **)CostumeList_21620056,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v117);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v79, v80, v81, v82, v83, v84);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_76;
    v118 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v118;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
      (System_Int32_array **)v118,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
    this->fields.costumeIds = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v125, v126, v127, v128, v129, v130);
    this->fields.costumeAndOtherIds = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.costumeAndOtherIds,
      0LL,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_76;
  v137 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  if ( !v137 )
    goto LABEL_76;
  v139 = *(_QWORD *)&v137->fields.battleVoice.fields.currentCryptoKey;
  v138 = *(_QWORD *)&v137->fields.battleVoice.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v176.fields.currentCryptoKey = v139;
  *(_QWORD *)&v176.fields.fakeValue = v138;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v176, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v140, v141, v142, v143, v144, v145);
  this->fields.equipTargetInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v146, v147, v148, v149, v150, v151);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_76;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v152 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v152 )
    goto LABEL_76;
  this->fields.isChoice = UserServantEntity__IsChoice(v152, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v153);
  v154 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v154 != 0LL;
  if ( !Instance )
    goto LABEL_76;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_60;
    }
LABEL_76:
    sub_B2C434(Instance, v25);
  }
  IsNameTrue = 0;
LABEL_60:
  v162 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v162 )
  {
    v163 = BasicHelper__DecryptValue_19216120(v162->fields.limitCountSupport, 0LL);
    v164 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v163;
    if ( v164 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v164, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportRandomLimitCountList,
    (System_Int32_array **)RandomLimitCountList,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  ServantStatusListViewItem__SetLimitCountInfo(this, this->fields.userSvtEntity, v166);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v167);
    byte_4185F2D = 1;
  }
  v169 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v169 = RandomLimitCountManager_TypeInfo;
  }
  if ( v169->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v168);
  ServantStatusListViewItem__ModifyInfo(this, v167);
}


void __fastcall ServantStatusListViewItem___ctor_34133932(
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
  DataManager_o *Instance; // x0
  __int64 v25; // x1
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
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UserServantCollectionEntity_o *v63; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x22
  __int64 v65; // x23
  __int64 v66; // x24
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  ServantLimitMaster_o *v75; // x23
  struct ServantLimitEntity_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  ServantCommentMaster_o *v84; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  struct System_Int32_array *CostumeList; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  const MethodInfo *v106; // x1
  BalanceConfig_c *v107; // x0
  struct UserServantCollectionEntity_o *v108; // x8
  __int64 v109; // x22
  __int64 v110; // x23
  int32_t v111; // w22
  int32_t maxLimitCount; // w23
  struct UserServantCollectionEntity_o *v113; // x8
  __int64 v114; // x22
  __int64 v115; // x23
  int32_t v116; // w22
  int32_t v117; // w23
  struct UserServantCollectionEntity_o *v118; // x8
  struct System_Int32_array *CardSelectList; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  struct UserServantCollectionEntity_o *v126; // x8
  struct UserServantCollectionEntity_o *v127; // x8
  struct System_Int32_array *SelectList; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  struct UserServantCollectionEntity_o *v135; // x8
  struct UserServantCollectionEntity_o *v136; // x8
  struct System_Int32_array *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v152; // x8
  struct System_Int32_array *v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v161; // x8
  struct System_Int32_array *v162; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  const MethodInfo *v169; // x2
  struct UserServantCollectionEntity_o *v170; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v172; // x8
  const MethodInfo *v173; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  if ( (byte_418D167 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userSvtCollectionEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418D167 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.userSvtEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v32, v33, v34, v35, v36, v37);
  this->fields.questRestrictionInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v38, v39, v40, v41, v42, v43);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.servantLeaderInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.equipTargetInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v57, v58, v59, v60, v61, v62);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v63 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v174.fields.currentCryptoKey = v66;
  *(_QWORD *)&v174.fields.fakeValue = v65;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v174, 0LL);
  if ( !v64 )
    goto LABEL_62;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v64,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v75 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  if ( !v75 )
    goto LABEL_62;
  v76 = ServantLimitMaster__GetEntity(v75, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v76;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v83 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_62;
  v84 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v83[1], 0LL);
  if ( !v84 )
    goto LABEL_62;
  EntityList = ServantCommentMaster__GetEntityList(v84, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v106);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v107 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v107 = BalanceConfig_TypeInfo;
    }
    Instance = (DataManager_o *)(unsigned int)v107->static_fields->OtherImageLimitCount;
    goto LABEL_36;
  }
  v108 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v110 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
  v109 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v175.fields.currentCryptoKey = v110;
  *(_QWORD *)&v175.fields.fakeValue = v109;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v175, 0LL);
  if ( !*p_userSvtCollectionEntity )
LABEL_62:
    sub_B2C434(Instance, v25);
  v111 = (int)Instance;
  maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v111, maxLimitCount, 1, 0, 0LL);
LABEL_36:
  v113 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v113 )
    goto LABEL_62;
  v115 = *(_QWORD *)&v113->fields.svtId.fields.currentCryptoKey;
  v114 = *(_QWORD *)&v113->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v176.fields.currentCryptoKey = v115;
  *(_QWORD *)&v176.fields.fakeValue = v114;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v176, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v116 = (int)Instance;
  v117 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v116, v117, 1, 0, 0LL);
  v118 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v118 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v118->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  v126 = this->fields.userSvtCollectionEntity;
  if ( !v126 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v126->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v127 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v127 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v127->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  v135 = this->fields.userSvtCollectionEntity;
  if ( !v135 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v135->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v136 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v136 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v136->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v137 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.commandCardSelectList = v137;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_62;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)CommandCardParam,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v152 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v152 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v152->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v153 = ImageLimitCount__GetCardSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.iconSelectList = v153;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v153,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v161 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v161 )
    goto LABEL_62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v161->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_62;
  v162 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.portraitSelectList = v162;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v162,
    v163,
    v164,
    v165,
    v166,
    v167,
    v168);
  v170 = this->fields.userSvtCollectionEntity;
  if ( !v170 )
    goto LABEL_62;
  svtCommonFlag = v170->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v169);
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
  v172 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v172 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v173);
}


void __fastcall ServantStatusListViewItem___ctor_34135616(
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
  DataManager_o *Instance; // x0
  __int64 v26; // x1
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
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
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
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct UserServantCollectionEntity_o *v64; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v65; // x22
  __int64 v66; // x24
  __int64 v67; // x25
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct UserServantCollectionEntity_o *v76; // x8
  ServantLimitMaster_o *v77; // x23
  struct ServantLimitEntity_o *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  ServantCommentMaster_o *v86; // x22
  struct ServantCommentEntity_array *EntityList_29249908; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct System_Int32_array *CostumeList; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  const MethodInfo *v108; // x1
  struct UserServantCollectionEntity_o *v109; // x8
  int32_t v110; // w22
  struct UserServantCollectionEntity_o *v111; // x8
  int32_t v112; // w0
  struct UserServantCollectionEntity_o *v113; // x8
  int32_t v114; // w0
  struct System_Int32_array *CardSelectList; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  struct UserServantCollectionEntity_o *v122; // x8
  int32_t v123; // w0
  struct UserServantCollectionEntity_o *v124; // x8
  int32_t v125; // w0
  struct System_Int32_array *SelectList; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  struct UserServantCollectionEntity_o *v133; // x8
  int32_t v134; // w0
  struct UserServantCollectionEntity_o *v135; // x8
  int32_t v136; // w0
  struct System_Int32_array *v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v152; // x8
  int32_t v153; // w0
  struct System_Int32_array *v154; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v162; // x8
  int32_t v163; // w0
  struct System_Int32_array *v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  const MethodInfo *v171; // x2
  struct UserServantCollectionEntity_o *v172; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v174; // x8
  const MethodInfo *v175; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  if ( (byte_418D168 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, userSvtCollectionEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418D168 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v27, v28, v29, v30, v31, v32);
  }
  this->fields.userSvtEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.questRestrictionInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity,
    (System_Int32_array **)userSvtCollectionEntity,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.servantLeaderInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v52, v53, v54, v55, v56, v57);
  this->fields.equipTargetInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v58, v59, v60, v61, v62, v63);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v64 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v65 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v67 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v176.fields.currentCryptoKey = v67;
  *(_QWORD *)&v176.fields.fakeValue = v66;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v176, 0LL);
  if ( !v65 )
    goto LABEL_37;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v65,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v76 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_37;
  v77 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v76->fields.svtId,
                                0LL);
  if ( !v77 )
    goto LABEL_37;
  v78 = ServantLimitMaster__GetEntity(v77, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v78;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v85 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_37;
  v86 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v85[1], 0LL);
  if ( !v86 )
    goto LABEL_37;
  EntityList_29249908 = ServantCommentMaster__GetEntityList_29249908(v86, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList_29249908;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList_29249908,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.costumeIds,
    (System_Int32_array **)CostumeList,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v108);
  v109 = this->fields.userSvtCollectionEntity;
  if ( !v109 )
    goto LABEL_37;
  v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v109->fields.svtId, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v110, limitCount, 1, 0, 0LL);
  v111 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v111 )
    goto LABEL_37;
  v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v111->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v112, limitCount, 1, 0, 0LL);
  v113 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v113 )
    goto LABEL_37;
  v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v113->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v114, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v122 = this->fields.userSvtCollectionEntity;
  if ( !v122 )
    goto LABEL_37;
  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v122->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v123, limitCount, 0LL);
  v124 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v124 )
    goto LABEL_37;
  v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v124->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v125, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v133 = this->fields.userSvtCollectionEntity;
  if ( !v133 )
    goto LABEL_37;
  v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v133->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v134, limitCount, 0LL);
  v135 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v135 )
    goto LABEL_37;
  v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v135->fields.svtId, 0LL);
  v137 = ImageLimitCount__GetSelectList(v136, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v137;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_37;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)CommandCardParam,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v152 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v152 )
    goto LABEL_37;
  v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v152->fields.svtId, 0LL);
  v154 = ImageLimitCount__GetCardSelectList(v153, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v154;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v154,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v162 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v162 )
    goto LABEL_37;
  v163 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v162->fields.svtId, 0LL);
  v164 = ImageLimitCount__GetSelectList(v163, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v164;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v164,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  v172 = this->fields.userSvtCollectionEntity;
  if ( !v172 )
    goto LABEL_37;
  svtCommonFlag = v172->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v171);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_37:
    sub_B2C434(Instance, v26);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v174 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v174 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v175);
}


void __fastcall ServantStatusListViewItem___ctor_34137056(
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
  DataManager_o *Instance; // x0
  __int64 v57; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x21
  __int64 v60; // x22
  __int64 v61; // x23
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  ServantLimitMaster_o *v70; // x22
  struct ServantLimitEntity_o *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  ServantCommentMaster_o *v79; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  ServantLeaderInfo_o *v100; // x8
  struct ServantLeaderInfo_o *v101; // x8
  int32_t v102; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_27366176; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  ServantLeaderInfo_o *v112; // x8
  struct ServantLeaderInfo_o *v113; // x8
  struct System_Int32_array *SelectList_27365448; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  ServantLeaderInfo_o *v121; // x8
  struct ServantLeaderInfo_o *v122; // x8
  struct System_Int32_array *v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  struct ServantLeaderInfo_o *v136; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v138; // x8
  struct ServantLeaderInfo_o *v139; // x8
  struct System_Int32_array *v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  ServantLeaderInfo_o *v147; // x8
  struct ServantLeaderInfo_o *v148; // x8
  struct System_Int32_array *v149; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  const MethodInfo *v156; // x2
  struct ServantLeaderInfo_o *v157; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v159; // x21
  __int64 v160; // x22
  __int64 v161; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v162; // x21
  __int64 v163; // x22
  __int64 v164; // x23
  struct ServantEntity_o *v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  __int64 v172; // x8
  ServantLimitMaster_o *v173; // x21
  __int64 v174; // x8
  struct ServantLimitEntity_o *v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  const MethodInfo *v182; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16

  if ( (byte_418D169 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, servantLeaderInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418D169 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.userSvtEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.questRestrictionInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantLeaderInfo,
    (System_Int32_array **)servantLeaderInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.equipTargetInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipTargetInfo, 0LL, v50, v51, v52, v53, v54, v55);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = isEquipShowMode;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v58 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v61 = *(_QWORD *)&v58[3].fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58[3].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v183.fields.currentCryptoKey = v61;
  *(_QWORD *)&v183.fields.fakeValue = v60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v183, 0LL);
  if ( !v59 )
    goto LABEL_63;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v59,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v70 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  if ( !v70 )
    goto LABEL_63;
  v71 = ServantLimitMaster__GetEntity(v70, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v71;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
    (System_Int32_array **)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v78 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_63;
  v79 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v78[1], 0LL);
  if ( !v79 )
    goto LABEL_63;
  EntityList = ServantCommentMaster__GetEntityList(v79, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  this->fields.costumeIds = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v94, v95, v96, v97, v98, v99);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v100 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v100 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v100, 0, 0LL);
  v101 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v101 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v101->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v102 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardSelectList_27366176 = ImageLimitCount__GetCardSelectList_27366176(v102, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_27366176;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cardSelectList,
    (System_Int32_array **)CardSelectList_27366176,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v112 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)Instance;
  if ( !v112 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v112, 0LL);
  v113 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v113 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v113->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  SelectList_27365448 = ImageLimitCount__GetSelectList_27365448(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_27365448;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dispSelectList,
    (System_Int32_array **)SelectList_27365448,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v121 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v121 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v121, 0LL);
  v122 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  if ( !v122 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v122->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v123 = ImageLimitCount__GetSelectList_27365448(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.commandCardLimitCount,
           0,
           0LL);
  this->fields.commandCardSelectList = v123;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    (System_Int32_array **)v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v136 = this->fields.servantLeaderInfo;
  if ( !v136 )
    goto LABEL_63;
  commandCardParam = v136->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)commandCardParam,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v138 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)Instance;
  if ( !v138 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v138, 0, 0LL);
  v139 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)Instance;
  if ( !v139 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v139->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v140 = ImageLimitCount__GetCardSelectList_27366176(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.iconLimitCount,
           0LL);
  this->fields.iconSelectList = v140;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconSelectList,
    (System_Int32_array **)v140,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v147 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)Instance;
  if ( !v147 )
    goto LABEL_63;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v147, 0LL);
  v148 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)Instance;
  if ( !v148 )
    goto LABEL_63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                v148->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_63;
  v149 = ImageLimitCount__GetSelectList_27365448(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.portraitLimitCount,
           0,
           0LL);
  this->fields.portraitSelectList = v149;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.portraitSelectList,
    (System_Int32_array **)v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v156);
  v157 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v157 )
    goto LABEL_63;
  equipTarget1 = v157->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v160 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v159 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v184.fields.currentCryptoKey = v160;
    *(_QWORD *)&v184.fields.fakeValue = v159;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v184, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v161 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v161 )
          {
            v162 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            v164 = *(_QWORD *)(v161 + 56);
            v163 = *(_QWORD *)(v161 + 64);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v185.fields.currentCryptoKey = v164;
            *(_QWORD *)&v185.fields.fakeValue = v163;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v185, 0LL);
            if ( v162 )
            {
              v165 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v162,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = v165;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.equipServantEntity,
                (System_Int32_array **)v165,
                v166,
                v167,
                v168,
                v169,
                v170,
                v171);
              Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              Instance,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v172 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v172 )
                  {
                    v173 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v172 + 56),
                                                  0LL);
                    if ( *p_servantLeaderInfo )
                    {
                      v174 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v174 )
                      {
                        if ( v173 )
                        {
                          v175 = ServantLimitMaster__GetEntity(v173, (int32_t)Instance, *(_DWORD *)(v174 + 72), 0LL);
                          this->fields.equipSvtLimitEntity = v175;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)&this->fields.equipSvtLimitEntity,
                            (System_Int32_array **)v175,
                            v176,
                            v177,
                            v178,
                            v179,
                            v180,
                            v181);
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
      sub_B2C434(Instance, v57);
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
  ServantStatusListViewItem__ModifyInfo(this, v182);
}


void __fastcall ServantStatusListViewItem___ctor_34138768(
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
  DataManager_o *Instance; // x0
  __int64 v56; // x1
  struct EquipTargetInfo_o *v57; // x8
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
  struct ServantLimitEntity_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  ServantCommentMaster_o *v77; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  const MethodInfo *v133; // x2
  const MethodInfo *v134; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  if ( (byte_418D16A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, equipTargetInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418D16A = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.userSvtEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtEntity, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.questRestrictionInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userSvtCollectionEntity, 0LL, v36, v37, v38, v39, v40, v41);
  this->fields.servantLeaderInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantLeaderInfo, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_B2C2F8(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v57 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_17;
  v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v135.fields.currentCryptoKey = v60;
  *(_QWORD *)&v135.fields.fakeValue = v59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v135, 0LL);
  if ( !v58 )
    goto LABEL_17;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v58,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtEntity,
    (System_Int32_array **)Entity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_17;
  v69 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                (*p_equipTargetInfo)->fields.svtId,
                                0LL);
  if ( !*p_equipTargetInfo
    || !v69
    || (v70 = ServantLimitMaster__GetEntity(v69, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v70,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.svtLimitEntity,
          (System_Int32_array **)v70,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v77 = (ServantCommentMaster_o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      (*p_svtEntity)[1],
                                      0LL),
        !v77) )
  {
LABEL_17:
    sub_B2C434(Instance, v56);
  }
  EntityList = ServantCommentMaster__GetEntityList(v77, (int32_t)Instance, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtCommentEntityList,
    (System_Int32_array **)EntityList,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  this->fields.commandCodeIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v85, v86, v87, v88, v89, v90);
  this->fields.costumeIds = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.costumeIds, 0LL, v91, v92, v93, v94, v95, v96);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.cardSelectList, 0LL, v97, v98, v99, v100, v101, v102);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dispSelectList, 0LL, v103, v104, v105, v106, v107, v108);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCardSelectList,
    0LL,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  this->fields.commandCardParam = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.commandCardParam, 0LL, v115, v116, v117, v118, v119, v120);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.iconSelectList, 0LL, v121, v122, v123, v124, v125, v126);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.portraitSelectList, 0LL, v127, v128, v129, v130, v131, v132);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v133);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v134);
}


void __fastcall ServantStatusListViewItem___ctor_34139596(
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
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_418D16B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, commandCode);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418D16B = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.userCommandCodeEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)commandCode,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_11;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v33 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v32 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v33;
  *(_QWORD *)&v40.fields.fakeValue = v32;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
  if ( !v31 )
    goto LABEL_11;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v31,
    (WarEntity_o **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_24E412C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    0LL,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_11:
    sub_B2C434(Instance, v29);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_34139992(
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
  int64_t Instance; // x0
  __int64 v23; // x1
  __int128 v24; // q1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v32; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x21
  __int64 v34; // x22
  __int64 v35; // x23
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x21
  struct UserCommandCodeEntity_o *v45; // x8
  __int128 v46; // q0
  int64_t v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct UserCommandCodeEntity_o *v54; // x8
  __int128 v55; // q0
  UserCommandCodeCollectionMaster_o *v56; // x21
  struct UserCommandCodeEntity_o *v57; // x8
  int64_t v58; // x22
  __int64 v59; // x23
  __int64 v60; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v63; // x8
  struct UserCommandCodeEntity_o *v64; // x8
  __int128 v65; // q0
  UserServantCommandCodeMaster_o *v66; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_418D16C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCode);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418D16C = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
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
  v24 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v71 = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v71, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_49;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v25, v26, v27, v28, v29, v30);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v32 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v35 = *(_QWORD *)&v32->fields.commandCodeId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v35;
  *(_QWORD *)&v73.fields.fakeValue = v34;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v73, 0LL);
  if ( !v33 )
    goto LABEL_49;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v33,
                                           Instance,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_49;
  v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v44 )
    goto LABEL_49;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v44,
    (WarEntity_o **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_24E412C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  v45 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v46 = *(_OWORD *)&v45->fields.userId.fields.fakeValue;
  v47 = Instance;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v45->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v46;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v70 = v72;
  if ( v47 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v70, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v54 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v55 = *(_OWORD *)&v54->fields.userId.fields.fakeValue;
        v56 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v54->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v72.fields.fakeValue = v55;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v69 = v72;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v69, 0LL);
        v57 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v58 = Instance;
          v60 = *(_QWORD *)&v57->fields.commandCodeId.fields.currentCryptoKey;
          v59 = *(_QWORD *)&v57->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v74.fields.currentCryptoKey = v60;
          *(_QWORD *)&v74.fields.fakeValue = v59;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v74, 0LL);
          if ( v56 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v56, v58, Instance, 0LL);
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_39;
          }
        }
      }
    }
LABEL_49:
    sub_B2C434(Instance, v23);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  EntityDefinitely = 0LL;
LABEL_39:
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_userCommandCodeCollectionEntity,
    (System_Int32_array **)EntityDefinitely,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v63 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v63 )
    goto LABEL_49;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v63, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v64 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_49;
  v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
  v66 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v65;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v68, 0LL);
  if ( !v66 )
    goto LABEL_49;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v66, Instance, 0LL);
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


void __fastcall ServantStatusListViewItem___ctor_34141128(
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v27; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x20
  __int64 v29; // x21
  __int64 v30; // x22
  struct CommandCodeEntity_o *Entity; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_418D16D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCodeCollection);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418D16D = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_fields = &this->fields;
  this->fields.userGameEntity = SelfUserGame;
  sub_B2C2F8(
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v20, v21, v22, v23, v24, v25);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeCollectionEntity,
    (System_Int32_array **)userCommandCodeCollection,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v27 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_18;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v30 = *(_QWORD *)&v27->fields.commandCodeId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v30;
  *(_QWORD *)&v40.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
  if ( !v28 )
    goto LABEL_18;
  Entity = (struct CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v28,
                                           (int32_t)Instance,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeEntity,
    (System_Int32_array **)Entity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v39)
    || (DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v39,
          (WarEntity_o **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_24E412C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        !Instance) )
  {
LABEL_18:
    sub_B2C434(Instance, v19);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418D170 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_LimitCountCache_TypeInfo, ignoreRandomSettings);
    byte_418D170 = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_B2C42C(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0LL);
  p_currentLimitCountCache = &this->fields.currentLimitCountCache;
  this->fields.currentLimitCountCache = v5;
  sub_B2C2F8(
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
      sub_B2C434(userSvtEntity, v13);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct ServantEntity_o *svtEntity; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  FriendshipMaster_o *v17; // x24
  int32_t friendshipId; // w25
  __int64 v19; // x26
  __int64 v20; // x27
  struct ServantEntity_o *v21; // x8
  struct UserServantCollectionEntity_o *v22; // x9
  UserServantEntity_o *userSvtEntity; // x0
  bool result; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_418D186 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FriendshipMaster___, rank);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418D186 = 1;
  }
  if ( this->fields.userSvtCollectionEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FriendshipMaster___);
      svtEntity = this->fields.svtEntity;
      if ( svtEntity )
      {
        userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
        if ( userSvtCollectionEntity )
        {
          v17 = (FriendshipMaster_o *)Instance;
          friendshipId = svtEntity->fields.friendshipId;
          v19 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.currentCryptoKey;
          v20 = *(_QWORD *)&userSvtCollectionEntity->fields.friendship.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v25.fields.currentCryptoKey = v19;
          *(_QWORD *)&v25.fields.fakeValue = v20;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v25, 0LL);
          v21 = this->fields.svtEntity;
          if ( v21 )
          {
            v22 = this->fields.userSvtCollectionEntity;
            if ( v22 )
            {
              if ( v17 )
              {
                FriendshipMaster__GetFriendshipRank(
                  v17,
                  friendshipId,
                  (int32_t)Instance,
                  v22->fields.friendshipExceedCount + v21->fields.maxFriendshipRank,
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
    sub_B2C434(Instance, v14);
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
  sub_B2C2F8(
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


bool __fastcall ServantStatusListViewItem__GetNpInfo_34149024(
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

  if ( (byte_418D185 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_418D185 = 1;
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
      sub_B2C434(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_B2C2F8((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)explanationList,
    (System_Int32_array **)passiveSkillExplanationMessageList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_34148544(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  UserServantEntity_o *svtEntity; // x0
  BalanceConfig_c *v14; // x0
  System_Int32_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_418D184 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, idList);
    sub_B2C35C(&int___TypeInfo, v11);
    sub_B2C35C(&string___TypeInfo, v12);
    byte_418D184 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = this->fields.userSvtEntity;
      if ( svtEntity )
      {
        UserServantEntity__getPassiveSkillInfo(svtEntity, idList, titleList, explanationList, dispLimitCount, 0LL);
        return;
      }
LABEL_17:
      sub_B2C434(svtEntity, idList);
    }
    goto LABEL_13;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_13;
  svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_17;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
LABEL_13:
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v15 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
    *idList = v15;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
    v22 = (System_String_array *)sub_B2C374(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v22;
    sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
    v29 = (System_String_array *)sub_B2C374(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v29;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)explanationList,
      (System_Int32_array **)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    return;
  }
  svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
  if ( !svtEntity )
    goto LABEL_17;
  UserServantCollectionEntity__getPassiveSkillInfo(
    (UserServantCollectionEntity_o *)svtEntity,
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)skillInfoList,
    (System_Int32_array **)v8,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo_34148164(
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

  if ( (byte_418D183 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&SkillInfo___TypeInfo, v7);
    byte_418D183 = 1;
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
      v11 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
      *skillInfoList = v11;
      sub_B2C2F8(
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
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v29; // x1
  int32_t name; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v35; // x8
  ServantLimitAddMaster_o *v36; // x23
  __int64 v37; // x26
  __int64 v38; // x27
  WarEntity_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_o *age; // x1
  WarEntity_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_o *v54; // x1
  LocalizationManager_c *v55; // x0
  __int64 *v56; // x8
  ServantLimitAddEntity_o *v58; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_418D187 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, illust);
    sub_B2C35C(&Method_DataManager_GetMasterData_CvMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_IllustratorMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v18);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&StringLiteral_14723/*"UNKNOWN_NAME_ILLUST"*/, v23);
    sub_B2C35C(&StringLiteral_9355/*"NO_ENTRY_NAME_ILLUST"*/, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    byte_418D187 = 1;
  }
  entity = 0LL;
  v58 = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    Instance = (DataManager_o *)ServantStatusListViewItem__get_CommandCodeId(this, v29);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  &entity,
                                  (int32_t)Instance,
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_36;
    if ( !entity )
LABEL_49:
      sub_B2C434(Instance, v27);
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
    Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v35 = this->fields.svtEntity;
    if ( !v35 )
      goto LABEL_49;
    v36 = (ServantLimitAddMaster_o *)Instance;
    v38 = *(_QWORD *)&v35->fields.id.fields.currentCryptoKey;
    v37 = *(_QWORD *)&v35->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v60.fields.currentCryptoKey = v38;
    *(_QWORD *)&v60.fields.fakeValue = v37;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v60, 0LL);
    if ( !v36 )
      goto LABEL_49;
    if ( ServantLimitAddMaster__TryGetEntity(v36, &v58, (int32_t)Instance, currentCardLimitCount, 0LL) )
    {
      Instance = (DataManager_o *)v58;
      if ( !v58 )
        goto LABEL_49;
      cvId = ServantLimitAddEntity__GetOverwriteCvId(v58, cvId, 0LL);
    }
    if ( cvId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CvMaster___);
      if ( !Instance )
        goto LABEL_49;
      v39 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
              cvId,
              (const MethodInfo_24E40D0 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
      if ( v39 )
      {
        age = v39->fields.age;
        *voice = age;
        sub_B2C2F8((BattleServantConfConponent_o *)voice, (System_Int32_array **)age, v40, v41, v42, v43, v44, v45);
        *isPlayVoice = 1;
      }
    }
  }
  if ( name < 1 )
  {
    v55 = LocalizationManager_TypeInfo;
    if ( !name )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v56 = &StringLiteral_9355/*"NO_ENTRY_NAME_ILLUST"*/;
      goto LABEL_43;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
LABEL_42:
      v56 = &StringLiteral_14723/*"UNKNOWN_NAME_ILLUST"*/;
LABEL_43:
      v54 = LocalizationManager__Get((System_String_o *)*v56, 0LL);
      *illust = v54;
      goto LABEL_44;
    }
LABEL_40:
    if ( !v55->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v55);
    goto LABEL_42;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Instance )
    goto LABEL_49;
  v47 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          name,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v47 )
  {
LABEL_36:
    v55 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v54 = v47->fields.age;
  *illust = v54;
LABEL_44:
  sub_B2C2F8((BattleServantConfConponent_o *)illust, (System_Int32_array **)v54, v48, v49, v50, v51, v52, v53);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  System_String_o *CondTitle; // x0
  int32_t paramLimitCount; // w8
  bool result; // w0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418D18A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418D18A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B2C434(Instance, v10);
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
  __int64 v11; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  UserServantEntity_o *svtEntity; // x0
  bool TreasureDeviceInfo; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *equipTargetInfo; // x0

  if ( (byte_418D171 & 1) == 0 )
  {
    sub_B2C35C(&TreasureDvcInfo_TypeInfo, method);
    byte_418D171 = 1;
  }
  this->fields.isTdResult = 0;
  v3 = (TreasureDvcInfo_o *)sub_B2C42C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v3, 0LL);
  this->fields.tdInfo = v3;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.tdInfo, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v10);
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
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_33;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = this->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_33;
      UserServantEntity__getPassiveSkillInfo(
        svtEntity,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        ConvertOverwriteDispImageLimitCount,
        0LL);
      svtEntity = this->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_33;
      UserServantEntity__GetAppendPassiveSkillInfo(
        svtEntity,
        &this->fields.appendPassiveSkillIdList,
        &this->fields.appendPassiveSkillTitleMessageList,
        &this->fields.appendPassiveSkillExplanationMessageList,
        &this->fields.appendPassiveSkillReleaseStateList,
        &this->fields.appendPassiveSkillLvList,
        0LL);
    }
    svtEntity = this->fields.userSvtEntity;
    if ( svtEntity )
    {
      TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(
                             svtEntity,
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
    sub_B2C434(svtEntity, v11);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &this->fields.skillInfoList, 0LL);
    svtEntity = (UserServantEntity_o *)this->fields.servantLeaderInfo;
    if ( svtEntity )
    {
      ServantLeaderInfo__getPassiveSkillInfo(
        (ServantLeaderInfo_o *)svtEntity,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        0LL);
      svtEntity = (UserServantEntity_o *)this->fields.servantLeaderInfo;
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
        svtEntity = (UserServantEntity_o *)this->fields.servantLeaderInfo;
        if ( svtEntity )
        {
          TreasureDeviceInfo = ServantLeaderInfo__getTreasureDeviceInfo(
                                 (ServantLeaderInfo_o *)svtEntity,
                                 &this->fields.tdInfo,
                                 0LL);
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
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_33;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
      goto LABEL_25;
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_33;
    if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
    {
LABEL_25:
      svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
      if ( !svtEntity )
        goto LABEL_33;
      UserServantCollectionEntity__getSkillInfo(
        (UserServantCollectionEntity_o *)svtEntity,
        &this->fields.skillInfoList,
        -1,
        ConvertOverwriteDispImageLimitCount,
        -1,
        0LL);
    }
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_33;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
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
        svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
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
          svtEntity = (UserServantEntity_o *)this->fields.userSvtCollectionEntity;
          if ( svtEntity )
          {
            TreasureDeviceInfo = UserServantCollectionEntity__getTreasureDeviceInfo(
                                   (UserServantCollectionEntity_o *)svtEntity,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  RandomLimitCountManager_c *v7; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v9; // x20
  _BOOL4 isEnableOwnRandomSetting; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // kr00_16
  __int64 v12; // x8
  __int64 v13; // x9
  const MethodInfo *v14; // x2
  int32_t v15; // w21
  BalanceConfig_c *v16; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t dispLimitCount; // w21
  struct ServantStatusListViewItem_LimitCountCache_o *v19; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_418D16E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&OptionManager_TypeInfo, v4);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v5);
    sub_B2C35C(&UserServantEntity_TypeInfo, v6);
    byte_418D16E = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
  }
  v7 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v7 = RandomLimitCountManager_TypeInfo;
  }
  if ( v7->static_fields->enableRandomLimitCount )
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
      v9 = sub_B2C42C(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21638868((UserServantEntity_o *)v9, userSvtEntity, 0LL);
      isEnableOwnRandomSetting = this->fields.isEnableOwnRandomSetting;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(isEnableOwnRandomSetting, 0LL);
      if ( !v9 )
        sub_B2C434(*(_QWORD *)&v11.fields.currentCryptoKey, *(_QWORD *)&v11.fields.fakeValue);
      v12 = *(_QWORD *)(v9 + 80);
      v13 = *(_QWORD *)(v9 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v9 + 208) = v11;
      *(_QWORD *)&v20.fields.currentCryptoKey = v12;
      *(_QWORD *)&v20.fields.fakeValue = v13;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
      v16 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      if ( v15 == v16->static_fields->ServantIdMashu1 )
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
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v9 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                             dispLimitCount,
                                                                             0LL);
        }
      }
      ServantStatusListViewItem__SetLimitCountInfo(this, (UserServantEntity_o *)v9, v14);
    }
    else
    {
      v19 = this->fields.currentLimitCountCache;
      if ( v19 )
      {
        this->fields.cardLimitCount = v19->fields.cardLimitCount;
        this->fields.iconLimitCount = v19->fields.iconLimitCount;
        this->fields.commandCardLimitCount = v19->fields.commandCardLimitCount;
        this->fields.dispLimitCount = v19->fields.dispLimitCount;
        this->fields.portraitLimitCount = v19->fields.portraitLimitCount;
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
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v20; // x0
  System_Collections_Generic_List_int__o *v21; // x20
  struct System_Int32_array *v22; // x0
  struct System_Int32_array **v23; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Int32_array *v30; // x0

  if ( (byte_418D18B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_418D18B = 1;
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
      v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      v21 = v20;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_49702036(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
      else
        System_Collections_Generic_List_int____ctor(
          v20,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v21 )
      {
        System_Collections_Generic_List_int___Add(
          v21,
          BalanceConfig_TypeInfo->static_fields->OtherImageLimitCount,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        v30 = System_Collections_Generic_List_int___ToArray(
                v21,
                (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
        this->fields.costumeAndOtherIds = v30;
        v17 = (System_Int32_array **)v30;
        p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v22 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v22;
      v23 = &this->fields.costumeAndOtherIds;
      sub_B2C2F8((BattleServantConfConponent_o *)v23, (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
      svtEntity = (ServantEntity_o *)*(v23 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v23, 0, 0LL);
        return;
      }
    }
LABEL_23:
    sub_B2C434(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v17 = 0LL;
LABEL_22:
  sub_B2C2F8((BattleServantConfConponent_o *)p_costumeAndOtherIds, v17, v10, v11, v12, v13, v14, v15);
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x23
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  ServantLimitMaster_o *v44; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  int32_t v46; // w20
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct System_Int64_array *v54; // x8
  PartyOrganizationListViewItem_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  BalanceConfig_c *v68; // x0
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  v9 = this;
  if ( (byte_418D172 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, equipUserSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    this = (ServantStatusListViewItem_o *)sub_B2C35C(&SkillInfo___TypeInfo, v17);
    byte_418D172 = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_38;
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      equipUserSvtId,
                                      (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v9->fields.equipUserSvtEntity;
    v9->fields.equipUserSvtEntity = (struct UserServantEntity_o *)Entity;
    sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.equipUserSvtEntity, Entity, v22, v23, v24, v25, v26, v27);
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
    *(_QWORD *)&v77.fields.currentCryptoKey = v30;
    *(_QWORD *)&v77.fields.fakeValue = v29;
    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77, 0LL);
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
          v33 = *p_equipUserSvtEntity;
          if ( *p_equipUserSvtEntity )
          {
            v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            v36 = *(_QWORD *)&v33[5].fields.currentCryptoKey;
            v35 = *(_QWORD *)&v33[5].fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v78.fields.currentCryptoKey = v36;
            *(_QWORD *)&v78.fields.fakeValue = v35;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v78, 0LL);
            if ( v34 )
            {
              v37 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v34,
                                             (int32_t)Instance,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v9->fields.equipServantEntity = (struct ServantEntity_o *)v37;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v9->fields.equipServantEntity,
                v37,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              Instance,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_equipUserSvtEntity )
                {
                  v44 = (ServantLimitMaster_o *)Instance;
                  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                (*p_equipUserSvtEntity)[5],
                                                0LL);
                  v45 = *p_equipUserSvtEntity;
                  if ( *p_equipUserSvtEntity )
                  {
                    v46 = (int)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v45[6],
                                                  0LL);
                    if ( v44 )
                    {
                      v47 = (System_Int32_array **)ServantLimitMaster__GetEntity(v44, v46, (int32_t)Instance, 0LL);
                      v9->fields.equipSvtLimitEntity = (struct ServantLimitEntity_o *)v47;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)&v9->fields.equipSvtLimitEntity,
                        v47,
                        v48,
                        v49,
                        v50,
                        v51,
                        v52,
                        v53);
                      Instance = (DataManager_o *)v9->fields.equipUserSvtEntity;
                      if ( Instance )
                      {
                        UserServantEntity__getEquipSkillInfo(
                          (UserServantEntity_o *)Instance,
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
LABEL_38:
        sub_B2C434(Instance, v19);
      }
LABEL_39:
      v76 = sub_B2C460(this);
      sub_B2C400(v76, 0LL);
    }
  }
  v54 = v9->fields.equipIdList;
  if ( v54 )
  {
    if ( !v54->max_length )
      goto LABEL_39;
    v54->m_Items[0] = 0LL;
  }
  v55 = v9->fields.memberItem;
  if ( v55 )
    PartyOrganizationListViewItem__SetEquipUserServantId(v55, 0LL, 0LL);
  v9->fields.equipTargetId1 = 0LL;
  v9->fields.equipUserSvtEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.equipUserSvtEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v9->fields.equipServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.equipServantEntity, 0LL, v56, v57, v58, v59, v60, v61);
  v9->fields.equipSvtLimitEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.equipSvtLimitEntity, 0LL, v62, v63, v64, v65, v66, v67);
  v68 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v68 = BalanceConfig_TypeInfo;
  }
  v69 = (System_Int32_array **)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)v68->static_fields->SvtEquipSkillListMax);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v69;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.equipSkillInfoList, v69, v70, v71, v72, v73, v74, v75);
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

  if ( (byte_418D16F & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, entity);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_418D16F = 1;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v65, 0LL);
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.limitCount, 0LL);
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
    sub_B2C2F8(
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
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.svtId, 0LL);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.limitCount, 0LL);
    SelectList = (System_Int32_array **)ImageLimitCount__GetSelectList(v20, v21, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[2] = (struct System_Int32_array *)SelectList;
    sub_B2C2F8((BattleServantConfConponent_o *)(p_cardSelectList + 2), SelectList, v23, v24, v25, v26, v27, v28);
    *((_DWORD *)p_cardSelectList + 6) = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 7) = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.svtId, 0LL);
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.limitCount, 0LL);
    v31 = (System_Int32_array **)ImageLimitCount__GetSelectList(v29, v30, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[4] = (struct System_Int32_array *)v31;
    sub_B2C2F8((BattleServantConfConponent_o *)(p_cardSelectList + 4), v31, v32, v33, v34, v35, v36, v37);
    CommandCardParam = (System_Int32_array **)UserServantEntity__GetCommandCardParam(entity, 0LL);
    p_cardSelectList[5] = (struct System_Int32_array *)CommandCardParam;
    sub_B2C2F8((BattleServantConfConponent_o *)(p_cardSelectList + 5), CommandCardParam, v39, v40, v41, v42, v43, v44);
    *((_DWORD *)p_cardSelectList + 12) = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 13) = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.svtId, 0LL);
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.limitCount, 0LL);
    v47 = (System_Int32_array **)ImageLimitCount__GetCardSelectList(v45, v46, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[7] = (struct System_Int32_array *)v47;
    sub_B2C2F8((BattleServantConfConponent_o *)(p_cardSelectList + 7), v47, v48, v49, v50, v51, v52, v53);
    *((_DWORD *)p_cardSelectList + 16) = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    *((_DWORD *)p_cardSelectList + 17) = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(entity->fields.svtId, 0LL);
    v55 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v66.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v56 = v54;
    *(_QWORD *)&v66.fields.currentCryptoKey = v55;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v66, 0LL);
    v58 = (System_Int32_array **)ImageLimitCount__GetSelectList(v56, v57, *(p_cardSelectList - 3), 0LL);
    p_cardSelectList[9] = (struct System_Int32_array *)v58;
    sub_B2C2F8((BattleServantConfConponent_o *)(p_cardSelectList + 9), v58, v59, v60, v61, v62, v63, v64);
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
  __int64 v9; // x0

  v4 = this;
  if ( (byte_418D182 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_B2C35C(&UserServantEntity_TypeInfo, *(_QWORD *)&index);
    byte_418D182 = 1;
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
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
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
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  _DWORD *klass; // x8
  BattleServantConfConponent_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  __int64 v19; // x20
  int v20; // w9
  unsigned int v21; // w10
  unsigned int v22; // w21
  bool v23; // w21
  __int64 v25; // x0

  if ( (byte_418D189 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    byte_418D189 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = (__int64)ServantCommentMaster__GetEntityList_29249908(
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
  v19 = Master_WarQuestSelectionMaster;
  if ( svtCommentEntityList )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_18;
    v20 = klass[6];
    if ( v20 != *(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
    {
LABEL_20:
      v23 = 1;
      goto LABEL_21;
    }
    if ( v20 >= 1 )
    {
      v21 = 0;
      do
      {
        if ( v21 >= klass[6] || (v22 = v21, v21 >= v20) )
        {
          v25 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v25, 0LL);
        }
        Master_WarQuestSelectionMaster = *(_QWORD *)&klass[2 * v21 + 8];
        if ( !Master_WarQuestSelectionMaster )
          break;
        Master_WarQuestSelectionMaster = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)Master_WarQuestSelectionMaster
                                                                                            + 312LL))(
                                           Master_WarQuestSelectionMaster,
                                           *(_QWORD *)(v19 + 8LL * (int)v21 + 32),
                                           *(_QWORD *)(*(_QWORD *)Master_WarQuestSelectionMaster + 320LL));
        if ( (Master_WarQuestSelectionMaster & 1) == 0 )
          goto LABEL_20;
        v20 = *(_DWORD *)(v19 + 24);
        v21 = v22 + 1;
        if ( (int)(v22 + 1) >= v20 )
          goto LABEL_19;
        klass = p_svtCommentEntityList->klass;
      }
      while ( p_svtCommentEntityList->klass );
LABEL_18:
      sub_B2C434(Master_WarQuestSelectionMaster, v9);
    }
  }
LABEL_19:
  v23 = 0;
LABEL_21:
  p_svtCommentEntityList->klass = (BattleServantConfConponent_c *)v19;
  sub_B2C2F8(p_svtCommentEntityList, (System_Int32_array **)v19, v10, v11, v12, v13, v14, v15);
  return v23;
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
    sub_B2C434(this, method);
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

  if ( (byte_418D174 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418D174 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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

  if ( (byte_418D180 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418D180 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL);
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
    sub_B2C434(0LL, method);
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
  RandomLimitCountManager_c *ManualSetCommandCardLimit; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t commandCardLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_418D179 & 1) == 0 )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_418D179 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
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
    sub_B2C434(ManualSetCommandCardLimit, method);
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

  if ( (byte_418D177 & 1) == 0 )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_418D177 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
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
    sub_B2C434(ManualSetDispLimitCount, method);
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

  if ( (byte_418D17B & 1) == 0 )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_418D17B = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
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
    sub_B2C434(ManualSetIconLimitCount, method);
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

  if ( (byte_418D17D & 1) == 0 )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_418D17D = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
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
    sub_B2C434(ManualSetPortraitLimitCount, method);
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

  if ( (byte_418D17F & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418D17F = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL) != this->fields.supportRandomLimitCount;
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

  if ( (byte_418D175 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418D175 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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
    sub_B2C434(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_B2C434(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RandomLimitCountManager_c *RandomLimitCountOwn; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_418D176 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_418D176 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
  }
  RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  }
  if ( !RandomLimitCountOwn->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  RandomLimitCountOwn = (RandomLimitCountManager_c *)OptionManager__GetRandomLimitCountOwn(0LL);
  if ( ((unsigned __int8)RandomLimitCountOwn & 1) != 0 )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B2C434(RandomLimitCountOwn, method);
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
  RandomLimitCountManager_c *RandomLimitCountOwn; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_commandCardLimitCount; // x8

  if ( (byte_418D17A & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_418D17A = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
  }
  RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  }
  if ( !RandomLimitCountOwn->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  RandomLimitCountOwn = (RandomLimitCountManager_c *)OptionManager__GetRandomLimitCountOwn(0LL);
  if ( ((unsigned __int8)RandomLimitCountOwn & 1) != 0 )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B2C434(RandomLimitCountOwn, method);
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
  RandomLimitCountManager_c *RandomLimitCountOwn; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_dispLimitCount; // x8

  if ( (byte_418D178 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_418D178 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
  }
  RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  }
  if ( !RandomLimitCountOwn->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  RandomLimitCountOwn = (RandomLimitCountManager_c *)OptionManager__GetRandomLimitCountOwn(0LL);
  if ( ((unsigned __int8)RandomLimitCountOwn & 1) != 0 )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B2C434(RandomLimitCountOwn, method);
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
  RandomLimitCountManager_c *RandomLimitCountOwn; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_iconLimitCount; // x8

  if ( (byte_418D17C & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_418D17C = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
  }
  RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  }
  if ( !RandomLimitCountOwn->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  RandomLimitCountOwn = (RandomLimitCountManager_c *)OptionManager__GetRandomLimitCountOwn(0LL);
  if ( ((unsigned __int8)RandomLimitCountOwn & 1) != 0 )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B2C434(RandomLimitCountOwn, method);
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
  RandomLimitCountManager_c *RandomLimitCountOwn; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_portraitLimitCount; // x8

  if ( (byte_418D17E & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    byte_418D17E = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
  }
  RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountOwn = RandomLimitCountManager_TypeInfo;
  }
  if ( !RandomLimitCountOwn->static_fields->enableRandomLimitCount )
    goto LABEL_19;
  if ( this->fields.isEnableOwnRandomSetting )
    goto LABEL_17;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  RandomLimitCountOwn = (RandomLimitCountManager_c *)OptionManager__GetRandomLimitCountOwn(0LL);
  if ( ((unsigned __int8)RandomLimitCountOwn & 1) != 0 )
  {
LABEL_17:
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_B2C434(RandomLimitCountOwn, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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

  if ( (byte_418D173 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418D173 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL);
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
  if ( (byte_418D188 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418D188 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v8, 0LL);
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
        sub_B2C434(this, method);
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

  if ( (byte_418D181 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, value);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v5);
    byte_418D181 = 1;
  }
  this->fields.isEnableOwnRandomSetting = value;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, value);
    byte_4185F2D = 1;
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