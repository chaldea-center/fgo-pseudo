// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        bool canMoveCombine,
        const MethodInfo *method)
{
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t Instance; // x0
  __int64 v36; // x1
  struct PartyOrganizationListViewItem_o *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  char v44; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v59; // q0
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct PartyOrganizationListViewItem_o *v76; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x21
  __int64 v80; // x22
  __int64 v81; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  ServantLimitMaster_o *v90; // x22
  int32_t v91; // w23
  struct ServantLimitEntity_o *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  ServantCommentMaster_o *v99; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // q1
  UserServantCollectionMaster_o *v109; // x22
  int64_t v110; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct PartyOrganizationListViewItem_o *v118; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_40906776; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  const MethodInfo *v136; // x1
  struct UserServantCollectionEntity_o *v137; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v139; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v141; // x8
  _BOOL8 IsChoice; // x0
  __int64 v143; // x1
  const MethodInfo *v144; // x2
  struct System_Int64_array *v145; // x8
  int64_t v146; // x1
  struct UserServantCollectionEntity_o *v147; // x8
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v155; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v157; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v159; // x8
  int32_t v160; // w0
  UserServantEntity_o *v161; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v163; // x2
  UserServantEntity_o *v164; // x0
  int32_t v165; // w0
  UserServantEntity_o *v166; // x8
  int32_t v167; // w0
  UserServantEntity_o *v168; // x1
  const MethodInfo *v169; // x1
  const MethodInfo *v170; // x2
  RandomLimitCountManager_c *v171; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16

  if ( (byte_4B12AA7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem, *(_QWORD *)&member);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B12AA7 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.partyItem, (int64_t)partyItem, v29, v30, v31, v32, v33, v34);
  if ( !partyItem )
    goto LABEL_73;
  v37 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.memberItem, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
  {
    v44 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    v44 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v44;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v46, v47, v48, v49, v50, v51);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_73;
  v59 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  memberItem = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v59;
  if ( !memberItem )
    goto LABEL_73;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServantEntity,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_73;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, (int64_t)EquipList, v64, v65, v66, v67, v68, v69);
  v76 = this->fields.memberItem;
  if ( !v76 )
    goto LABEL_73;
  questRestrictionInfo = v76->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v78 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v79 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v81 = *(_QWORD *)&v78[5].fields.currentCryptoKey;
  v80 = *(_QWORD *)&v78[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
  *(_QWORD *)&v174.fields.currentCryptoKey = v81;
  *(_QWORD *)&v174.fields.fakeValue = v80;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v174, 0LL);
  if ( !v79 )
    goto LABEL_73;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v79,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v84, v85, v86, v87, v88, v89);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v90 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v91 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v90 )
    goto LABEL_73;
  v92 = ServantLimitMaster__GetEntity(v90, v91, Instance, 0LL);
  this->fields.svtLimitEntity = v92;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v92, v93, v94, v95, v96, v97, v98);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_73;
  v99 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_svtEntity)[1], 0LL);
  if ( !v99 )
    goto LABEL_73;
  EntityList = ServantCommentMaster__GetEntityList(v99, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v107 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v108 = v107[4];
  v109 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v173.fields.currentCryptoKey = v107[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v173.fields.fakeValue = v108;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
  v172 = v173;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v172, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v110 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !v109 )
    goto LABEL_73;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v109, v110, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
    (int64_t)EntityDefinitely,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  v118 = this->fields.memberItem;
  if ( !v118 )
    goto LABEL_73;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v118->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_73;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_73;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_73;
  CostumeList_40906776 = UserServantCollectionEntity__getCostumeList_40906776(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_40906776;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.costumeIds,
    (int64_t)CostumeList_40906776,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v136);
  v137 = this->fields.userSvtCollectionEntity;
  if ( !v137 )
    goto LABEL_73;
  svtCommonFlag = v137->fields.svtCommonFlag;
  v139 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v139 )
    goto LABEL_73;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                   v139->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_73;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v141 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v141 )
    goto LABEL_73;
  IsChoice = UserServantEntity__IsChoice(v141, 0LL);
  v145 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v145 )
  {
    if ( !v145->max_length )
      sub_1BCAA44(IsChoice, v143);
    v146 = v145->m_Items[0];
  }
  else
  {
    v146 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v146, v144);
  v147 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v147 != 0LL;
  if ( !Instance )
LABEL_73:
    sub_1BCAA3C(Instance, v36);
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_48;
    }
    goto LABEL_73;
  }
  IsNameTrue = 0;
LABEL_48:
  v155 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v155 != 0LL;
  if ( v155 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v155, 0LL);
    v155 = (UserServantEntity_o *)*p_userSvtEntity;
    v157 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v157 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v157;
  if ( !v155 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_56;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v155, 0LL);
  v159 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v159 )
  {
LABEL_56:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_57;
  }
  v160 = BasicHelper__DecryptValue_41845724(v159->fields.limitCountSupport, 0LL);
  v161 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v160;
  if ( v161 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v161, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_57:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.supportRandomLimitCountList,
    (int64_t)RandomLimitCountList,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  v164 = this->fields.userSvtEntity;
  if ( v164 )
  {
    v165 = UserServantEntity__OwnRandomSettingSelectedButton(v164, 0LL);
    v166 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v165;
    if ( v166 )
    {
      v167 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v166, 0LL);
      v168 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_63;
    }
    v168 = 0LL;
  }
  else
  {
    v168 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v167 = 3;
LABEL_63:
  this->fields.supportRandomSettingButtonIndex = v167;
  ServantStatusListViewItem__SetLimitCountInfo(this, v168, v163);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v169);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v169, v170);
    byte_4B12177 = 1;
  }
  v171 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v169);
    v171 = RandomLimitCountManager_TypeInfo;
  }
  if ( v171->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v170);
  ServantStatusListViewItem__ModifyInfo(this, v169);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_33879168(
        ServantStatusListViewItem_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t Instance; // x0
  __int64 v32; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v54; // q0
  struct PartyOrganizationListViewItem_o *v55; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct PartyOrganizationListViewItem_o *v71; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v73; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x21
  __int64 v75; // x22
  __int64 v76; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  ServantLimitMaster_o *v85; // x22
  int32_t v86; // w23
  struct ServantLimitEntity_o *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  ServantCommentMaster_o *v94; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // q1
  UserServantCollectionMaster_o *v104; // x22
  int64_t v105; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  struct PartyOrganizationListViewItem_o *v113; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_40906776; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  const MethodInfo *v131; // x1
  struct UserServantCollectionEntity_o *v132; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v134; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v136; // x8
  _BOOL8 IsChoice; // x0
  __int64 v138; // x1
  const MethodInfo *v139; // x2
  struct System_Int64_array *v140; // x8
  int64_t v141; // x1
  struct UserServantCollectionEntity_o *v142; // x8
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v150; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v152; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v154; // x8
  int32_t v155; // w0
  UserServantEntity_o *v156; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v158; // x2
  UserServantEntity_o *v159; // x0
  int32_t v160; // w0
  UserServantEntity_o *v161; // x8
  int32_t v162; // w0
  UserServantEntity_o *v163; // x1
  const MethodInfo *v164; // x1
  const MethodInfo *v165; // x2
  RandomLimitCountManager_c *v166; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16

  if ( (byte_4B12AA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem, *(_QWORD *)&member);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B12AA8 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.warBoardPartyItem,
    (int64_t)partyItem,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.memberItem, (int64_t)MemberItem, v34, v35, v36, v37, v38, v39);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v41, v42, v43, v44, v45, v46);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v54 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v55 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v54;
  if ( !v55 )
    goto LABEL_68;
  userServantEntity = v55->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, (int64_t)EquipList, v59, v60, v61, v62, v63, v64);
  v71 = this->fields.memberItem;
  if ( !v71 )
    goto LABEL_68;
  questRestrictionInfo = v71->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v73 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v76 = *(_QWORD *)&v73[5].fields.currentCryptoKey;
  v75 = *(_QWORD *)&v73[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v169.fields.currentCryptoKey = v76;
  *(_QWORD *)&v169.fields.fakeValue = v75;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v169, 0LL);
  if ( !v74 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v74,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v79, v80, v81, v82, v83, v84);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v85 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v86 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v85 )
    goto LABEL_68;
  v87 = ServantLimitMaster__GetEntity(v85, v86, Instance, 0LL);
  this->fields.svtLimitEntity = v87;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v87, v88, v89, v90, v91, v92, v93);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v94 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_svtEntity)[1], 0LL);
  if ( !v94 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v94, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v102 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v103 = v102[4];
  v104 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v168.fields.currentCryptoKey = v102[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v168.fields.fakeValue = v103;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
  v167 = v168;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v167, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v105 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !v104 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v104, v105, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
    (int64_t)EntityDefinitely,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  v113 = this->fields.memberItem;
  if ( !v113 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v113->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_40906776 = UserServantCollectionEntity__getCostumeList_40906776(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_40906776;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.costumeIds,
    (int64_t)CostumeList_40906776,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v131);
  v132 = this->fields.userSvtCollectionEntity;
  if ( !v132 )
    goto LABEL_68;
  svtCommonFlag = v132->fields.svtCommonFlag;
  v134 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v134 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                   v134->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v136 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v136 )
    goto LABEL_68;
  IsChoice = UserServantEntity__IsChoice(v136, 0LL);
  v140 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v140 )
  {
    if ( !v140->max_length )
      sub_1BCAA44(IsChoice, v138);
    v141 = v140->m_Items[0];
  }
  else
  {
    v141 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v141, v139);
  v142 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v142 != 0LL;
  if ( !Instance )
    goto LABEL_68;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_43;
    }
LABEL_68:
    sub_1BCAA3C(Instance, v32);
  }
  IsNameTrue = 0;
LABEL_43:
  v150 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v150 != 0LL;
  if ( v150 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v150, 0LL);
    v150 = (UserServantEntity_o *)*p_userSvtEntity;
    v152 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v152 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v152;
  if ( !v150 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v150, 0LL);
  v154 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v154 )
  {
LABEL_51:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_52;
  }
  v155 = BasicHelper__DecryptValue_41845724(v154->fields.limitCountSupport, 0LL);
  v156 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v155;
  if ( v156 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v156, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.supportRandomLimitCountList,
    (int64_t)RandomLimitCountList,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  v159 = this->fields.userSvtEntity;
  if ( v159 )
  {
    v160 = UserServantEntity__OwnRandomSettingSelectedButton(v159, 0LL);
    v161 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v160;
    if ( v161 )
    {
      v162 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v161, 0LL);
      v163 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_58;
    }
    v163 = 0LL;
  }
  else
  {
    v163 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v162 = 3;
LABEL_58:
  this->fields.supportRandomSettingButtonIndex = v162;
  ServantStatusListViewItem__SetLimitCountInfo(this, v163, v158);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v164);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v164, v165);
    byte_4B12177 = 1;
  }
  v166 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v164);
    v166 = RandomLimitCountManager_TypeInfo;
  }
  if ( v166->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v165);
  ServantStatusListViewItem__ModifyInfo(this, v164);
}


void __fastcall ServantStatusListViewItem___ctor_33880808(
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
  bool v15; // w26
  bool v16; // w21
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t Instance; // x0
  __int64 v48; // x1
  bool v49; // w8
  __int128 v50; // q1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v71; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x24
  __int64 v73; // x26
  __int64 v74; // x27
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x24
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  ServantLimitMaster_o *v83; // x26
  int32_t v84; // w27
  struct ServantLimitEntity_o *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  ServantCommentMaster_o *v92; // x26
  int32_t v93; // w27
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v101; // x8
  __int64 v102; // x26
  __int64 v103; // x27
  int32_t v104; // w0
  bool IsConvertOverwriteImage; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // q0
  int64_t v108; // x25
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v115; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // q0
  UserServantCollectionMaster_o *v117; // x25
  bool v118; // w20
  bool v119; // w29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v120; // x8
  int64_t v121; // x26
  __int64 v122; // x27
  __int64 v123; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x25
  int32_t lv; // w26
  struct System_Int32_array *CostumeList_40906776; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  const MethodInfo *v148; // x1
  struct System_Int32_array *v149; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  struct UserServantCollectionEntity_o *v168; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v170; // x8
  __int64 v171; // x25
  __int64 v172; // x26
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  UserServantEntity_o *v185; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  __int64 v188; // x1
  const MethodInfo *v189; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v190; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // q0
  UserDeckMaster_o *v192; // x23
  bool v193; // w8
  struct System_Int64_array *v194; // x9
  int64_t v195; // x1
  struct UserServantCollectionEntity_o *v196; // x8
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v204; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v206; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v208; // x8
  int32_t v209; // w0
  UserServantEntity_o *v210; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v212; // x2
  UserServantEntity_o *v213; // x0
  int32_t v214; // w0
  UserServantEntity_o *v215; // x8
  int32_t v216; // w0
  UserServantEntity_o *v217; // x1
  const MethodInfo *v218; // x1
  const MethodInfo *v219; // x2
  RandomLimitCountManager_c *v220; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v221; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v222; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v223; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v224; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // 0:x0.16

  v15 = isEnableServantQuest;
  v16 = canMoveCombine;
  if ( (byte_4B12AA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant, equipIdList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    byte_4B12AA9 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v41, v42, v43, v44, v45, v46);
  this->fields.isEnableServantQuest = v15;
  this->fields._CanMoveCombine_k__BackingField = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v49 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
    v49 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v49;
  if ( !userServant )
    goto LABEL_103;
  v50 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v225.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v225.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
  v224 = v225;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v224, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_103;
  if ( Instance == userGameEntity->fields.userId )
  {
    *(_OWORD *)&this->fields.favoriteUserSvtId = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v51, v52, v53, v54, v55, v56);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServant,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.equipIdList = equipIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipIdList,
    (int64_t)equipIdList,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v71 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v74 = *(_QWORD *)&v71[5].fields.currentCryptoKey;
  v73 = *(_QWORD *)&v71[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
  *(_QWORD *)&v226.fields.currentCryptoKey = v74;
  *(_QWORD *)&v226.fields.fakeValue = v73;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v226, 0LL);
  if ( !v72 )
    goto LABEL_103;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v72,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v77, v78, v79, v80, v81, v82);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v83 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v84 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v83 )
    goto LABEL_103;
  v85 = ServantLimitMaster__GetEntity(v83, v84, Instance, 0LL);
  this->fields.svtLimitEntity = v85;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v85, v86, v87, v88, v89, v90, v91);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_103;
  v92 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v93 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[7], 0LL);
  if ( !v92 )
    goto LABEL_103;
  EntityList = ServantCommentMaster__GetEntityList(v92, v93, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  if ( questRestrictionInfo )
  {
    v101 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v103 = *(_QWORD *)&v101[5].fields.currentCryptoKey;
    v102 = *(_QWORD *)&v101[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
    *(_QWORD *)&v227.fields.currentCryptoKey = v103;
    *(_QWORD *)&v227.fields.fakeValue = v102;
    v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v227, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v104, 0LL);
  }
  else
  {
    IsConvertOverwriteImage = 0;
  }
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v48);
  Instance = NetworkManager__get_UserId(0LL);
  v106 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_103:
    sub_1BCAA3C(Instance, v48);
  v107 = v106[4];
  v108 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v225.fields.currentCryptoKey = v106[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v225.fields.fakeValue = v107;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
  v223 = v225;
  if ( v108 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v223, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v115 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v116 = v115[4];
    v117 = (UserServantCollectionMaster_o *)Instance;
    v118 = enableTdSpeed;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v225.fields.currentCryptoKey = v115[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v225.fields.fakeValue = v116;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
    v119 = enableBattleVoice;
    v222 = v225;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v222, 0LL);
    v120 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v121 = Instance;
    v123 = *(_QWORD *)&v120[5].fields.currentCryptoKey;
    v122 = *(_QWORD *)&v120[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
    *(_QWORD *)&v228.fields.currentCryptoKey = v123;
    *(_QWORD *)&v228.fields.fakeValue = v122;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v228, 0LL);
    if ( !v117 )
      goto LABEL_103;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v117, v121, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
      (int64_t)EntityDefinitely,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_103;
    enableBattleVoice = v119;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
      (int64_t)CommandCodeIdList,
      v132,
      v133,
      v134,
      v135,
      v136,
      v137);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_103;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    enableTdSpeed = v118;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_103;
    CostumeList_40906776 = UserServantCollectionEntity__getCostumeList_40906776(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_40906776;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.costumeIds,
      (int64_t)CostumeList_40906776,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v148);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
      0LL,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_103;
    v149 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v149;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
      (int64_t)v149,
      v150,
      v151,
      v152,
      v153,
      v154,
      v155);
    this->fields.costumeIds = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.costumeIds, 0LL, v156, v157, v158, v159, v160, v161);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.costumeAndOtherIds, 0LL, v162, v163, v164, v165, v166, v167);
  }
  v168 = this->fields.userSvtCollectionEntity;
  if ( !v168 )
    goto LABEL_103;
  svtCommonFlag = v168->fields.svtCommonFlag;
  v170 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v170 )
    goto LABEL_103;
  v172 = *(_QWORD *)&v170->fields.battleVoice.fields.currentCryptoKey;
  v171 = *(_QWORD *)&v170->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
  *(_QWORD *)&v229.fields.currentCryptoKey = v172;
  *(_QWORD *)&v229.fields.fakeValue = v171;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v229, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v173, v174, v175, v176, v177, v178);
  this->fields.equipTargetInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v179, v180, v181, v182, v183, v184);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_103;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v185 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v185 )
    goto LABEL_103;
  Instance = UserServantEntity__IsChoice(v185, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_103;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v190 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v191 = v190[2];
    v192 = (UserDeckMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v225.fields.currentCryptoKey = v190[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v225.fields.fakeValue = v191;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v48);
    v221 = v225;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v221, 0LL);
    if ( !v192 )
      goto LABEL_103;
    IsServantEquip = UserDeckMaster__IsEquip(v192, Instance, 0LL);
    v193 = IsServantEquip;
  }
  else
  {
    v193 = 0;
  }
  v194 = this->fields.equipIdList;
  this->fields.isUse = v193;
  if ( v194 )
  {
    if ( !v194->max_length )
      sub_1BCAA44(IsServantEquip, v188);
    v195 = v194->m_Items[0];
  }
  else
  {
    v195 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v195, v189);
  v196 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v196 != 0LL && enableTdSpeed;
  if ( !Instance )
    goto LABEL_103;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_78;
    }
    goto LABEL_103;
  }
  IsNameTrue = 0;
LABEL_78:
  v204 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v204 != 0LL;
  if ( v204 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v204, 0LL);
    v204 = (UserServantEntity_o *)*p_userSvtEntity;
    v206 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v206 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v206;
  if ( !v204 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_86;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v204, 0LL);
  v208 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v208 )
  {
LABEL_86:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_87;
  }
  v209 = BasicHelper__DecryptValue_41845724(v208->fields.limitCountSupport, 0LL);
  v210 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v209;
  if ( v210 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v210, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_87:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.supportRandomLimitCountList,
    (int64_t)RandomLimitCountList,
    v197,
    v198,
    v199,
    v200,
    v201,
    v202);
  v213 = this->fields.userSvtEntity;
  if ( v213 )
  {
    v214 = UserServantEntity__OwnRandomSettingSelectedButton(v213, 0LL);
    v215 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v214;
    if ( v215 )
    {
      v216 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v215, 0LL);
      v217 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_93;
    }
    v217 = 0LL;
  }
  else
  {
    v217 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v216 = 3;
LABEL_93:
  this->fields.supportRandomSettingButtonIndex = v216;
  ServantStatusListViewItem__SetLimitCountInfo(this, v217, v212);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v218);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v218, v219);
    byte_4B12177 = 1;
  }
  v220 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v218);
    v220 = RandomLimitCountManager_TypeInfo;
  }
  if ( v220->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v219);
  ServantStatusListViewItem__ModifyInfo(this, v218);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_33883144(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t Instance; // x0
  __int64 v34; // x1
  __int128 v35; // q1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x22
  __int64 v58; // x23
  __int64 v59; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  ServantLimitMaster_o *v68; // x23
  int32_t v69; // w24
  struct ServantLimitEntity_o *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  ServantCommentMaster_o *v77; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // q0
  int64_t v88; // x23
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v95; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // q0
  UserServantCollectionMaster_o *v97; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v98; // x8
  int64_t v99; // x24
  __int64 v100; // x25
  __int64 v101; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_40906776; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  const MethodInfo *v126; // x1
  struct System_Int32_array *v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  struct UserServantCollectionEntity_o *v146; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v148; // x8
  __int64 v149; // x23
  __int64 v150; // x24
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  UserServantEntity_o *v163; // x8
  const MethodInfo *v164; // x2
  struct UserServantCollectionEntity_o *v165; // x8
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v173; // x8
  int32_t v174; // w0
  UserServantEntity_o *v175; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v177; // x2
  UserServantEntity_o *v178; // x0
  int32_t v179; // w0
  UserServantEntity_o *v180; // x8
  int32_t v181; // w0
  UserServantEntity_o *v182; // x1
  const MethodInfo *v183; // x1
  const MethodInfo *v184; // x2
  RandomLimitCountManager_c *v185; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v187; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v188; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v189; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16

  if ( (byte_4B12AAA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant, isUse);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B12AAA = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v27, v28, v29, v30, v31, v32);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_73;
  v35 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v189.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v189.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
  v188 = v189;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v188, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_73;
  if ( Instance == userGameEntity->fields.userId )
  {
    *(_OWORD *)&this->fields.favoriteUserSvtId = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v36, v37, v38, v39, v40, v41);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServant,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v44, v45, v46, v47, v48, v49);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v50, v51, v52, v53, v54, v55);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v56 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v59 = *(_QWORD *)&v56[5].fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
  *(_QWORD *)&v190.fields.currentCryptoKey = v59;
  *(_QWORD *)&v190.fields.fakeValue = v58;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v190, 0LL);
  if ( !v57 )
    goto LABEL_73;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v57,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v62, v63, v64, v65, v66, v67);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v68 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v69 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userSvtEntity)[6], 0LL);
  if ( !v68 )
    goto LABEL_73;
  v70 = ServantLimitMaster__GetEntity(v68, v69, Instance, 0LL);
  this->fields.svtLimitEntity = v70;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v70, v71, v72, v73, v74, v75, v76);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_73;
  v77 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_svtEntity)[1], 0LL);
  if ( !v77 )
    goto LABEL_73;
  EntityList = ServantCommentMaster__GetEntityList(v77, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v85);
  Instance = NetworkManager__get_UserId(0LL);
  v86 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v87 = v86[4];
  v88 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v189.fields.currentCryptoKey = v86[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v189.fields.fakeValue = v87;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
  v187 = v189;
  if ( v88 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v187, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v95 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_73;
    v96 = v95[4];
    v97 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v189.fields.currentCryptoKey = v95[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v189.fields.fakeValue = v96;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
    v186 = v189;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v186, 0LL);
    v98 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_73;
    v99 = Instance;
    v101 = *(_QWORD *)&v98[5].fields.currentCryptoKey;
    v100 = *(_QWORD *)&v98[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
    *(_QWORD *)&v191.fields.currentCryptoKey = v101;
    *(_QWORD *)&v191.fields.fakeValue = v100;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v191, 0LL);
    if ( !v97 )
      goto LABEL_73;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v97, v99, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
      (int64_t)EntityDefinitely,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_73;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
      (int64_t)CommandCodeIdList,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_73;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_73;
    CostumeList_40906776 = UserServantCollectionEntity__getCostumeList_40906776(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_40906776;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.costumeIds,
      (int64_t)CostumeList_40906776,
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity, 0LL, v89, v90, v91, v92, v93, v94);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_73;
    v127 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v127;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
      (int64_t)v127,
      v128,
      v129,
      v130,
      v131,
      v132,
      v133);
    this->fields.costumeIds = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.costumeIds, 0LL, v134, v135, v136, v137, v138, v139);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.costumeAndOtherIds, 0LL, v140, v141, v142, v143, v144, v145);
  }
  v146 = this->fields.userSvtCollectionEntity;
  if ( !v146 )
    goto LABEL_73;
  svtCommonFlag = v146->fields.svtCommonFlag;
  v148 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v148 )
    goto LABEL_73;
  v150 = *(_QWORD *)&v148->fields.battleVoice.fields.currentCryptoKey;
  v149 = *(_QWORD *)&v148->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
  *(_QWORD *)&v192.fields.currentCryptoKey = v150;
  *(_QWORD *)&v192.fields.fakeValue = v149;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v192, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v151, v152, v153, v154, v155, v156);
  this->fields.equipTargetInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v157, v158, v159, v160, v161, v162);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_73;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v163 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v163 )
    goto LABEL_73;
  this->fields.isChoice = UserServantEntity__IsChoice(v163, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v164);
  v165 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v165 != 0LL;
  if ( !Instance )
    goto LABEL_73;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_53;
    }
LABEL_73:
    sub_1BCAA3C(Instance, v34);
  }
  IsNameTrue = 0;
LABEL_53:
  v173 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v173 )
  {
    v174 = BasicHelper__DecryptValue_41845724(v173->fields.limitCountSupport, 0LL);
    v175 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v174;
    if ( v175 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v175, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.supportRandomLimitCountList,
    (int64_t)RandomLimitCountList,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  v178 = this->fields.userSvtEntity;
  if ( v178 )
  {
    v179 = UserServantEntity__OwnRandomSettingSelectedButton(v178, 0LL);
    v180 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v179;
    if ( v180 )
    {
      v181 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v180, 0LL);
      v182 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_64;
    }
    v182 = 0LL;
  }
  else
  {
    v182 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v181 = 3;
LABEL_64:
  this->fields.supportRandomSettingButtonIndex = v181;
  ServantStatusListViewItem__SetLimitCountInfo(this, v182, v177);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v183);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v183, v184);
    byte_4B12177 = 1;
  }
  v185 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v183);
    v185 = RandomLimitCountManager_TypeInfo;
  }
  if ( v185->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v184);
  ServantStatusListViewItem__ModifyInfo(this, v183);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_33884940(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v8; // w23
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct UserServantCollectionEntity_o *v70; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x22
  __int64 v72; // x23
  __int64 v73; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  ServantLimitMaster_o *v82; // x23
  struct ServantLimitEntity_o *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v90; // x8
  ServantCommentMaster_o *v91; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Int32_array *CostumeList; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  const MethodInfo *v113; // x1
  BalanceConfig_c *v114; // x0
  struct UserServantCollectionEntity_o *v115; // x8
  __int64 v116; // x22
  __int64 v117; // x23
  int32_t v118; // w22
  int32_t maxLimitCount; // w23
  struct UserServantCollectionEntity_o *v120; // x8
  __int64 v121; // x22
  __int64 v122; // x23
  int32_t v123; // w22
  int32_t v124; // w23
  struct UserServantCollectionEntity_o *v125; // x8
  struct System_Int32_array *CardSelectList; // x0
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct UserServantCollectionEntity_o *v133; // x8
  struct UserServantCollectionEntity_o *v134; // x8
  struct System_Int32_array *SelectList; // x0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct UserServantCollectionEntity_o *v142; // x8
  struct UserServantCollectionEntity_o *v143; // x8
  struct System_Int32_array *v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v159; // x8
  struct System_Int32_array *v160; // x0
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v168; // x8
  struct System_Int32_array *v169; // x0
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  const MethodInfo *v176; // x2
  struct UserServantCollectionEntity_o *v177; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v179; // x8
  const MethodInfo *v180; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16

  v8 = isEnableServantQuest;
  if ( (byte_4B12AAB & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userSvtCollectionEntity, isEnableServantQuest);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B12AAB = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v25, v26, v27, v28, v29, v30);
  this->fields.isEnableServantQuest = v8;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_56;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v33, v34, v35, v36, v37, v38);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
    (int64_t)userSvtCollectionEntity,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v58, v59, v60, v61, v62, v63);
  this->fields.equipTargetInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v64, v65, v66, v67, v68, v69);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v70 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v73 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v181.fields.currentCryptoKey = v73;
  *(_QWORD *)&v181.fields.fakeValue = v72;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v181, 0LL);
  if ( !v71 )
    goto LABEL_56;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v71,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v76, v77, v78, v79, v80, v81);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v82 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  if ( !v82 )
    goto LABEL_56;
  v83 = ServantLimitMaster__GetEntity(v82, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v83;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v83, v84, v85, v86, v87, v88, v89);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v90 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_56;
  v91 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v90[1], 0LL);
  if ( !v91 )
    goto LABEL_56;
  EntityList = ServantCommentMaster__GetEntityList(v91, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.costumeIds,
    (int64_t)CostumeList,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v113);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v114 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v32);
      v114 = BalanceConfig_TypeInfo;
    }
    Instance = (DataManager_o *)(unsigned int)v114->static_fields->OtherImageLimitCount;
    goto LABEL_32;
  }
  v115 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v117 = *(_QWORD *)&v115->fields.svtId.fields.currentCryptoKey;
  v116 = *(_QWORD *)&v115->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v182.fields.currentCryptoKey = v117;
  *(_QWORD *)&v182.fields.fakeValue = v116;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v182, 0LL);
  if ( !*p_userSvtCollectionEntity )
LABEL_56:
    sub_1BCAA3C(Instance, v32);
  v118 = (int)Instance;
  maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v32);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v118, maxLimitCount, 1, 0, 0LL);
LABEL_32:
  v120 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v120 )
    goto LABEL_56;
  v122 = *(_QWORD *)&v120->fields.svtId.fields.currentCryptoKey;
  v121 = *(_QWORD *)&v120->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v183.fields.currentCryptoKey = v122;
  *(_QWORD *)&v183.fields.fakeValue = v121;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v183, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v123 = (int)Instance;
  v124 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v32);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v123, v124, 1, 0, 0LL);
  v125 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v125 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v125->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cardSelectList,
    (int64_t)CardSelectList,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v133 = this->fields.userSvtCollectionEntity;
  if ( !v133 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v133->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v134 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v134 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v134->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dispSelectList,
    (int64_t)SelectList,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  v142 = this->fields.userSvtCollectionEntity;
  if ( !v142 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v142->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v143 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v143 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v143->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v144 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.commandCardSelectList = v144;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
    (int64_t)v144,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCardParam,
    (int64_t)CommandCardParam,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v159 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v159 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v159->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v160 = ImageLimitCount__GetCardSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.iconSelectList = v160;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.iconSelectList,
    (int64_t)v160,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v168 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v168 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v168->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v169 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.portraitSelectList = v169;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.portraitSelectList,
    (int64_t)v169,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v177 = this->fields.userSvtCollectionEntity;
  if ( !v177 )
    goto LABEL_56;
  svtCommonFlag = v177->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v176);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
    goto LABEL_56;
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v179 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v179 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v180);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_33886580(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v10; // w24
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct UserServantCollectionEntity_o *v70; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x22
  __int64 v72; // x24
  __int64 v73; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct UserServantCollectionEntity_o *v82; // x8
  ServantLimitMaster_o *v83; // x23
  struct ServantLimitEntity_o *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  ServantCommentMaster_o *v92; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Int32_array *CostumeList; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  const MethodInfo *v114; // x1
  struct UserServantCollectionEntity_o *v115; // x8
  __int64 v116; // x1
  int32_t v117; // w22
  struct UserServantCollectionEntity_o *v118; // x8
  int32_t v119; // w0
  struct UserServantCollectionEntity_o *v120; // x8
  int32_t v121; // w0
  struct System_Int32_array *CardSelectList; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  struct UserServantCollectionEntity_o *v129; // x8
  int32_t v130; // w0
  struct UserServantCollectionEntity_o *v131; // x8
  int32_t v132; // w0
  struct System_Int32_array *SelectList; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct UserServantCollectionEntity_o *v140; // x8
  int32_t v141; // w0
  struct UserServantCollectionEntity_o *v142; // x8
  int32_t v143; // w0
  struct System_Int32_array *v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v159; // x8
  int32_t v160; // w0
  struct System_Int32_array *v161; // x0
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v169; // x8
  int32_t v170; // w0
  struct System_Int32_array *v171; // x0
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  const MethodInfo *v178; // x2
  struct UserServantCollectionEntity_o *v179; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v181; // x8
  const MethodInfo *v182; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16

  v10 = isEnableServantQuest;
  if ( (byte_4B12AAC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantCommentMaster___,
      userSvtCollectionEntity,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B12AAC = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v25, v26, v27, v28, v29, v30);
  this->fields.isEnableServantQuest = v10;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v33, v34, v35, v36, v37, v38);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
    (int64_t)userSvtCollectionEntity,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v58, v59, v60, v61, v62, v63);
  this->fields.equipTargetInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v64, v65, v66, v67, v68, v69);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v70 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v73 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v183.fields.currentCryptoKey = v73;
  *(_QWORD *)&v183.fields.fakeValue = v72;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v183, 0LL);
  if ( !v71 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v71,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v76, v77, v78, v79, v80, v81);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v82 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v83 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v82->fields.svtId,
                                0LL);
  if ( !v83 )
    goto LABEL_35;
  v84 = ServantLimitMaster__GetEntity(v83, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v84;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v84, v85, v86, v87, v88, v89, v90);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v91 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v92 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v91[1], 0LL);
  if ( !v92 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v92, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.costumeIds,
    (int64_t)CostumeList,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v114);
  v115 = this->fields.userSvtCollectionEntity;
  if ( !v115 )
    goto LABEL_35;
  v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v115->fields.svtId, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v116);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v117, limitCount, 1, 0, 0LL);
  v118 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v118 )
    goto LABEL_35;
  v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v118->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v119, limitCount, 1, 0, 0LL);
  v120 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v120 )
    goto LABEL_35;
  v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v120->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v121, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cardSelectList,
    (int64_t)CardSelectList,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  v129 = this->fields.userSvtCollectionEntity;
  if ( !v129 )
    goto LABEL_35;
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v129->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v130, limitCount, 0LL);
  v131 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v131 )
    goto LABEL_35;
  v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v131->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v132, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dispSelectList,
    (int64_t)SelectList,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  v140 = this->fields.userSvtCollectionEntity;
  if ( !v140 )
    goto LABEL_35;
  v141 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v140->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v141, limitCount, 0LL);
  v142 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v142 )
    goto LABEL_35;
  v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v142->fields.svtId, 0LL);
  v144 = ImageLimitCount__GetSelectList(v143, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v144;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
    (int64_t)v144,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCardParam,
    (int64_t)CommandCardParam,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v159 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v159 )
    goto LABEL_35;
  v160 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v159->fields.svtId, 0LL);
  v161 = ImageLimitCount__GetCardSelectList(v160, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v161;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.iconSelectList,
    (int64_t)v161,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v169 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v169 )
    goto LABEL_35;
  v170 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v169->fields.svtId, 0LL);
  v171 = ImageLimitCount__GetSelectList(v170, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v171;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.portraitSelectList,
    (int64_t)v171,
    v172,
    v173,
    v174,
    v175,
    v176,
    v177);
  v179 = this->fields.userSvtCollectionEntity;
  if ( !v179 )
    goto LABEL_35;
  svtCommonFlag = v179->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v178);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_35:
    sub_1BCAA3C(Instance, v32);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v181 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v181 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v182);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_33888004(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  bool v6; // w22
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  DataManager_o *Instance; // x0
  __int64 v63; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x21
  __int64 v66; // x22
  __int64 v67; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  ServantLimitMaster_o *v76; // x22
  struct ServantLimitEntity_o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  ServantCommentMaster_o *v85; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  ServantLeaderInfo_o *v106; // x8
  struct ServantLeaderInfo_o *v107; // x8
  int32_t v108; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_38408460; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  ServantLeaderInfo_o *v118; // x8
  struct ServantLeaderInfo_o *v119; // x8
  struct System_Int32_array *SelectList_38407644; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  ServantLeaderInfo_o *v127; // x8
  struct ServantLeaderInfo_o *v128; // x8
  struct System_Int32_array *v129; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct ServantLeaderInfo_o *v142; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v144; // x8
  struct ServantLeaderInfo_o *v145; // x8
  struct System_Int32_array *v146; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  ServantLeaderInfo_o *v153; // x8
  struct ServantLeaderInfo_o *v154; // x8
  struct System_Int32_array *v155; // x0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  const MethodInfo *v162; // x2
  struct ServantLeaderInfo_o *v163; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v165; // x21
  __int64 v166; // x22
  __int64 v167; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v168; // x21
  __int64 v169; // x22
  __int64 v170; // x23
  Il2CppObject *v171; // x0
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  __int64 v178; // x8
  ServantLimitMaster_o *v179; // x21
  __int64 v180; // x8
  struct ServantLimitEntity_o *v181; // x0
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  const MethodInfo *v188; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4B12AAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, servantLeaderInfo, isEquipShowMode);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B12AAD = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.userSvtEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity, 0LL, v43, v44, v45, v46, v47, v48);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo,
    (int64_t)servantLeaderInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.equipTargetInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v56, v57, v58, v59, v60, v61);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v64 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v67 = *(_QWORD *)&v64[3].fields.currentCryptoKey;
  v66 = *(_QWORD *)&v64[3].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
  *(_QWORD *)&v189.fields.currentCryptoKey = v67;
  *(_QWORD *)&v189.fields.fakeValue = v66;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v189, 0LL);
  if ( !v65 )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v65,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v70, v71, v72, v73, v74, v75);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v76 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  if ( !v76 )
    goto LABEL_59;
  v77 = ServantLimitMaster__GetEntity(v76, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v77;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v77, v78, v79, v80, v81, v82, v83);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_59;
  v85 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84[1], 0LL);
  if ( !v85 )
    goto LABEL_59;
  EntityList = ServantCommentMaster__GetEntityList(v85, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  this->fields.costumeIds = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.costumeIds, 0LL, v100, v101, v102, v103, v104, v105);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v106 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v106 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v106, 0, 0LL);
  v107 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v107 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v107->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v108 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v63);
  CardSelectList_38408460 = ImageLimitCount__GetCardSelectList_38408460(v108, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_38408460;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cardSelectList,
    (int64_t)CardSelectList_38408460,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v118 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)Instance;
  if ( !v118 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v118, 0LL);
  v119 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v119 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v119->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  SelectList_38407644 = ImageLimitCount__GetSelectList_38407644(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_38407644;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dispSelectList,
    (int64_t)SelectList_38407644,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v127 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v127 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v127, 0LL);
  v128 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  if ( !v128 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v128->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v129 = ImageLimitCount__GetSelectList_38407644(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.commandCardLimitCount,
           0,
           0LL);
  this->fields.commandCardSelectList = v129;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
    (int64_t)v129,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v142 = this->fields.servantLeaderInfo;
  if ( !v142 )
    goto LABEL_59;
  commandCardParam = v142->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCardParam,
    (int64_t)commandCardParam,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v144 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)Instance;
  if ( !v144 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v144, 0, 0LL);
  v145 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)Instance;
  if ( !v145 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v145->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v146 = ImageLimitCount__GetCardSelectList_38408460(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.iconLimitCount,
           0LL);
  this->fields.iconSelectList = v146;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.iconSelectList,
    (int64_t)v146,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v153 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)Instance;
  if ( !v153 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v153, 0LL);
  v154 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)Instance;
  if ( !v154 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                v154->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v155 = ImageLimitCount__GetSelectList_38407644(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.portraitLimitCount,
           0,
           0LL);
  this->fields.portraitSelectList = v155;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.portraitSelectList,
    (int64_t)v155,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v162);
  v163 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v163 )
    goto LABEL_59;
  equipTarget1 = v163->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v166 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v165 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
    *(_QWORD *)&v190.fields.currentCryptoKey = v166;
    *(_QWORD *)&v190.fields.fakeValue = v165;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v190, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v167 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v167 )
          {
            v168 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v170 = *(_QWORD *)(v167 + 56);
            v169 = *(_QWORD *)(v167 + 64);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
            *(_QWORD *)&v191.fields.currentCryptoKey = v170;
            *(_QWORD *)&v191.fields.fakeValue = v169;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v191, 0LL);
            if ( v168 )
            {
              v171 = DataMasterBase_object__object__int___GetEntity(
                       v168,
                       (int32_t)Instance,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v171;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.equipServantEntity,
                (int64_t)v171,
                v172,
                v173,
                v174,
                v175,
                v176,
                v177);
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v178 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v178 )
                  {
                    v179 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v178 + 56),
                                                  0LL);
                    if ( *p_servantLeaderInfo )
                    {
                      v180 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v180 )
                      {
                        if ( v179 )
                        {
                          v181 = ServantLimitMaster__GetEntity(v179, (int32_t)Instance, *(_DWORD *)(v180 + 72), 0LL);
                          this->fields.equipSvtLimitEntity = v181;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)&this->fields.equipSvtLimitEntity,
                            (int64_t)v181,
                            v182,
                            v183,
                            v184,
                            v185,
                            v186,
                            v187);
                          goto LABEL_57;
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
LABEL_59:
      sub_1BCAA3C(Instance, v63);
    }
  }
LABEL_57:
  Instance = (DataManager_o *)*p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  ServantLeaderInfo__getEquipSkillInfo((ServantLeaderInfo_o *)Instance, &this->fields.equipSkillInfoList, 0LL);
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v188);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_33889692(
        ServantStatusListViewItem_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
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
  __int64 v15; // x1
  __int64 v16; // x2
  bool v17; // w22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct EquipTargetInfo_o **p_equipTargetInfo; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  Il2CppObject *Instance; // x0
  __int64 v62; // x1
  struct EquipTargetInfo_o *v63; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x21
  __int64 v65; // x22
  __int64 v66; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  ServantLimitMaster_o *v75; // x22
  struct ServantLimitEntity_o *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  ServantCommentMaster_o *v83; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  const MethodInfo *v139; // x2
  const MethodInfo *v140; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_4B12AAE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, equipTargetInfo, isNpcFollowerServantEquip);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B12AAE = 1;
  }
  v17 = isNpcFollowerServantEquip;
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.userSvtEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v24, v25, v26, v27, v28, v29);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v30, v31, v32, v33, v34, v35);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v36, v37, v38, v39, v40, v41);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v48, v49, v50, v51, v52, v53);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipTargetInfo,
    (int64_t)equipTargetInfo,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v17;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v63 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62);
  *(_QWORD *)&v141.fields.currentCryptoKey = v66;
  *(_QWORD *)&v141.fields.fakeValue = v65;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v141, 0LL);
  if ( !v64 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v64,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v69, v70, v71, v72, v73, v74);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v75 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                               (*p_equipTargetInfo)->fields.svtId,
                               0LL);
  if ( !*p_equipTargetInfo
    || !v75
    || (v76 = ServantLimitMaster__GetEntity(v75, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v76,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.svtLimitEntity,
          (int64_t)v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v83 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                     (*p_svtEntity)[1],
                                     0LL),
        !v83) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v62);
  }
  EntityList = ServantCommentMaster__GetEntityList(v83, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this->fields.commandCodeIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.commandCodeIdList, 0LL, v91, v92, v93, v94, v95, v96);
  this->fields.costumeIds = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.costumeIds, 0LL, v97, v98, v99, v100, v101, v102);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cardSelectList, 0LL, v103, v104, v105, v106, v107, v108);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispSelectList, 0LL, v109, v110, v111, v112, v113, v114);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
    0LL,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  this->fields.commandCardParam = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.commandCardParam, 0LL, v121, v122, v123, v124, v125, v126);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconSelectList, 0LL, v127, v128, v129, v130, v131, v132);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.portraitSelectList, 0LL, v133, v134, v135, v136, v137, v138);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v139);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v140);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem___ctor_33890520(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B12AAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, commandCode, isUse);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B12AAF = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.userCommandCodeEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
    (int64_t)commandCode,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v36 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v35 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v43.fields.currentCryptoKey = v36;
  *(_QWORD *)&v43.fields.fakeValue = v35;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v43, 0LL);
  if ( !v34 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v34,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeCollectionEntity,
    0LL,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(Instance, v32);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_33890896(
        ServantStatusListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t Instance; // x0
  __int64 v32; // x1
  __int128 v33; // q1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  Il2CppObject *Entity; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v53; // x21
  __int64 v54; // x1
  struct UserCommandCodeEntity_o *v55; // x8
  __int128 v56; // q0
  int64_t v57; // x21
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct UserCommandCodeEntity_o *v64; // x8
  __int128 v65; // q0
  UserCommandCodeCollectionMaster_o *v66; // x21
  struct UserCommandCodeEntity_o *v67; // x8
  int64_t v68; // x22
  __int64 v69; // x23
  __int64 v70; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v73; // x8
  struct UserCommandCodeEntity_o *v74; // x8
  __int128 v75; // q0
  UserServantCommandCodeMaster_o *v76; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4B12AB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCode, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__,
      v13,
      v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B12AB0 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v25, v26, v27, v28, v29, v30);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_42;
  v33 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
  v81 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v81, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_42;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v34, v35, v36, v37, v38, v39);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity,
    (int64_t)userCommandCode,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v41 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v44 = *(_QWORD *)&v41->fields.commandCodeId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
  *(_QWORD *)&v83.fields.currentCryptoKey = v44;
  *(_QWORD *)&v83.fields.fakeValue = v43;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL);
  if ( !v42 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v42,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
    (int64_t)Entity,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_42;
  v53 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v53 )
    goto LABEL_42;
  DataMasterBase_object__object__int___TryGetEntity(
    v53,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v54);
  Instance = NetworkManager__get_UserId(0LL);
  v55 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v56 = *(_OWORD *)&v55->fields.userId.fields.fakeValue;
  v57 = Instance;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v55->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
  v80 = v82;
  if ( v57 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v80, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v64 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v65 = *(_OWORD *)&v64->fields.userId.fields.fakeValue;
        v66 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v64->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v82.fields.fakeValue = v65;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
        v79 = v82;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v79, 0LL);
        v67 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v68 = Instance;
          v70 = *(_QWORD *)&v67->fields.commandCodeId.fields.currentCryptoKey;
          v69 = *(_QWORD *)&v67->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
          *(_QWORD *)&v84.fields.currentCryptoKey = v70;
          *(_QWORD *)&v84.fields.fakeValue = v69;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84, 0LL);
          if ( v66 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v66, v68, Instance, 0LL);
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_33;
          }
        }
      }
    }
LABEL_42:
    sub_1BCAA3C(Instance, v32);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  EntityDefinitely = 0LL;
LABEL_33:
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_userCommandCodeCollectionEntity,
    (int64_t)EntityDefinitely,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v73 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v73 )
    goto LABEL_42;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v73, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v74 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v75 = *(_OWORD *)&v74->fields.id.fields.fakeValue;
  v76 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v74->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v75;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
  v78 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v78, 0LL);
  if ( !v76 )
    goto LABEL_42;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v76, Instance, 0LL);
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isUse = IsAttach;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
    goto LABEL_42;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_33891972(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
        const MethodInfo *method)
{
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v32; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x20
  __int64 v34; // x21
  __int64 v35; // x22
  Il2CppObject *Entity; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B12AB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCodeCollection, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B12AB1 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v17, v18, v19, v20, v21, v22);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, 0LL, v25, v26, v27, v28, v29, v30);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeCollectionEntity,
    (int64_t)userCommandCodeCollection,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v32 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v35 = *(_QWORD *)&v32->fields.commandCodeId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v45.fields.currentCryptoKey = v35;
  *(_QWORD *)&v45.fields.fakeValue = v34;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
  if ( !v33 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v33,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
    (int64_t)Entity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v44)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v44,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v24);
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
  __int64 v3; // x3
  ServantStatusListViewItem_LimitCountCache_o *v6; // x22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v14; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v16; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *v17; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v18; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v19; // x21

  if ( (byte_4B12AB4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItem_LimitCountCache_TypeInfo, ignoreRandomSettings, method);
    byte_4B12AB4 = 1;
  }
  v6 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1BCAA2C(
                                                        ServantStatusListViewItem_LimitCountCache_TypeInfo,
                                                        ignoreRandomSettings,
                                                        method,
                                                        v3);
  ServantStatusListViewItem_LimitCountCache___ctor(v6, 0LL);
  this->fields.currentLimitCountCache = v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentLimitCountCache,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
    v16 = 0LL;
  else
    v16 = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getCardImageLimitCount(userSvtEntity, 1, 0LL);
    if ( !currentLimitCountCache )
      goto LABEL_22;
    currentLimitCountCache->fields.cardLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v17 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 1, 0LL);
    if ( !v17 )
      goto LABEL_22;
    v17->fields.iconLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v18 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getCommandCardLimitCount(userSvtEntity, 1, 0LL);
    if ( !v18 )
      goto LABEL_22;
    v18->fields.commandCardLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v19 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(userSvtEntity, 1, 0LL);
    if ( !v19 )
      goto LABEL_22;
    v19->fields.dispLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    currentLimitCountCache = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getPortraitLimitCount(userSvtEntity, 1, 0LL);
    if ( !currentLimitCountCache )
      goto LABEL_22;
  }
  else
  {
    if ( !v16 || (v16->fields.cardLimitCount = this->fields.cardLimitCount, !currentLimitCountCache) )
LABEL_22:
      sub_1BCAA3C(userSvtEntity, v14);
    currentLimitCountCache->fields.iconLimitCount = this->fields.iconLimitCount;
    currentLimitCountCache->fields.commandCardLimitCount = this->fields.commandCardLimitCount;
    currentLimitCountCache->fields.dispLimitCount = this->fields.dispLimitCount;
    LODWORD(userSvtEntity) = this->fields.portraitLimitCount;
  }
  currentLimitCountCache->fields.portraitLimitCount = (int)userSvtEntity;
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
  PartyListViewItem_o *v7; // x7
  System_Int32_array *appendPassiveSkillIdList; // x8
  System_String_array *appendPassiveSkillTitleMessageList; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_array *appendPassiveSkillExplanationMessageList; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Boolean_array *appendPassiveSkillReleaseStateList; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Int32_array *appendPassiveSkillLvList; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  *idList = appendPassiveSkillIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)idList,
    (int64_t)appendPassiveSkillIdList,
    (int64_t)titleList,
    (int32_t)explanationList,
    (System_String_o *)releaseStateList,
    (BattleSetupInfo_o *)lvList,
    (FollowerInfo_o *)method,
    v7);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)titleList,
    (int64_t)appendPassiveSkillTitleMessageList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)explanationList,
    (int64_t)appendPassiveSkillExplanationMessageList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)releaseStateList,
    (int64_t)appendPassiveSkillReleaseStateList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_1BCA784((PartyOrganizationUtility_o *)lvList, (int64_t)appendPassiveSkillLvList, v36, v37, v38, v39, v40, v41);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(this, checkTransform);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SkillInfo_array *equipSkillInfoList; // x8

  equipSkillInfoList = this->fields.equipSkillInfoList;
  *skillInfoList = equipSkillInfoList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)skillInfoList,
    (int64_t)equipSkillInfoList,
    (int64_t)method,
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x28
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct ServantEntity_o *svtEntity; // x8
  struct UserServantCollectionEntity_o *v19; // x9
  FriendshipMaster_o *v20; // x24
  int32_t friendshipId; // w25
  __int64 v22; // x26
  __int64 v23; // x27
  struct ServantEntity_o *v24; // x8
  struct UserServantCollectionEntity_o *v25; // x9
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B12ACB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FriendshipMaster___, rank, max);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B12ACB = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
  {
    *rank = 0;
    *max = 0;
    *late = 0;
    *fraction = 0.0;
    return userSvtCollectionEntity != 0LL;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_19;
  v19 = this->fields.userSvtCollectionEntity;
  if ( !v19 )
    goto LABEL_19;
  v20 = (FriendshipMaster_o *)Instance;
  friendshipId = svtEntity->fields.friendshipId;
  v22 = *(_QWORD *)&v19->fields.friendship.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v19->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v28.fields.currentCryptoKey = v22;
  *(_QWORD *)&v28.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
  v24 = this->fields.svtEntity;
  if ( !v24 )
    goto LABEL_19;
  v25 = this->fields.userSvtCollectionEntity;
  if ( !v25 || !v20 )
    goto LABEL_19;
  FriendshipMaster__GetFriendshipRank(
    v20,
    friendshipId,
    (int32_t)Instance,
    v25->fields.friendshipExceedCount + v24->fields.maxFriendshipRank,
    rank,
    max,
    late,
    fraction,
    0LL);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity || UserServantEntity__IsAddFriendShipHeroine(userSvtEntity, 0LL) )
    return userSvtCollectionEntity != 0LL;
  Instance = (DataManager_o *)this->fields.svtEntity;
  if ( !Instance )
LABEL_19:
    sub_1BCAA3C(Instance, v17);
  if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
    *late = -1;
  return userSvtCollectionEntity != 0LL;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TreasureDvcInfo_o *v8; // x8

  v8 = this->fields.tdInfo;
  *tdInfo = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v8, (int64_t)method, v3, v4, v5, v6, v7);
  return this->fields.isTdResult;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusListViewItem__GetNpInfo_33900300(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B12ACA & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, *(_QWORD *)&dispLimitCount);
    byte_4B12ACA = 1;
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
      sub_1BCAA3C(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, *(_QWORD *)&dispLimitCount, method);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Int32_array *transformedPassiveSkillIdList; // x1
  System_String_array *transformedPassiveSkillTitleMessageList; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_array **p_transformedPassiveSkillExplanationMessageList; // x8
  System_Int32_array *passiveSkillIdList; // x1
  System_String_array *passiveSkillTitleMessageList; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_array *v35; // x1

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
  {
    transformedPassiveSkillIdList = this->fields.transformedPassiveSkillIdList;
    *idList = transformedPassiveSkillIdList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)idList,
      (int64_t)transformedPassiveSkillIdList,
      (int64_t)titleList,
      (int32_t)explanationList,
      (System_String_o *)checkTransform,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)titleList,
      (int64_t)transformedPassiveSkillTitleMessageList,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.transformedPassiveSkillExplanationMessageList;
  }
  else
  {
    passiveSkillIdList = this->fields.passiveSkillIdList;
    *idList = passiveSkillIdList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)idList,
      (int64_t)passiveSkillIdList,
      (int64_t)titleList,
      (int32_t)explanationList,
      (System_String_o *)checkTransform,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)titleList,
      (int64_t)passiveSkillTitleMessageList,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v35 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v35, v20, v21, v22, v23, v24, v25);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_33899804(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x23
  BalanceConfig_c *v19; // x0
  System_Int32_array *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_array *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B12AC9 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, idList, titleList);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    byte_4B12AC9 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
LABEL_17:
      sub_1BCAA3C(svtEntity, idList);
    }
    goto LABEL_14;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_14;
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_17;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
LABEL_14:
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, idList);
      v19 = BalanceConfig_TypeInfo;
    }
    v20 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v19->static_fields->SvtPassiveSkillListMax);
    *idList = v20;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    v27 = (System_String_array *)sub_1BCA888(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v27;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v27, v28, v29, v30, v31, v32, v33);
    v34 = (System_String_array *)sub_1BCA888(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v34;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v34, v35, v36, v37, v38, v39, v40);
    return;
  }
  svtEntity = this->fields.userSvtCollectionEntity;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SkillInfo_array **p_transformedSkillInfoList; // x9
  SkillInfo_array *v10; // x1

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    p_transformedSkillInfoList = &this->fields.transformedSkillInfoList;
  else
    p_transformedSkillInfoList = &this->fields.skillInfoList;
  v10 = *p_transformedSkillInfoList;
  *skillInfoList = *p_transformedSkillInfoList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)skillInfoList,
    (int64_t)v10,
    checkTransform,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem__GetSkillInfo_33899392(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UserServantEntity_o *userSvtEntity; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  BalanceConfig_c *v11; // x0
  SkillInfo_array *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B12AC8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, *(_QWORD *)&dispLimitCount);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v7, v8);
    byte_4B12AC8 = 1;
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
      v11 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, skillInfoList);
        v11 = BalanceConfig_TypeInfo;
      }
      v12 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v11->static_fields->SvtSkillListMax);
      *skillInfoList = v12;
      sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TreasureDvcInfo_o *transformedTdInfo; // x8

  transformedTdInfo = this->fields.transformedTdInfo;
  *tdInfo = transformedTdInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)transformedTdInfo, (int64_t)method, v3, v4, v5, v6, v7);
}


bool __fastcall ServantStatusListViewItem__GetVoiceInfo(
        ServantStatusListViewItem_o *this,
        System_String_o **illust,
        System_String_o **voice,
        bool *isPlayVoice,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  ServantLimitAddMaster_o *Master_object; // x0
  __int64 v41; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v43; // x1
  int32_t illustratorId; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v49; // x8
  ServantLimitAddMaster_o *v50; // x23
  __int64 v51; // x26
  __int64 v52; // x27
  Il2CppObject *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_String_o *monitor; // x1
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_String_o *v69; // x1
  __int64 *v70; // x8
  ServantLimitAddEntity_o *v72; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4B12ACC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, illust, voice);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CvMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_IllustratorMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v22, v23);
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__,
      v24,
      v25);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v26, v27);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&StringLiteral_14973/*"UNKNOWN_NAME_ILLUST"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_9431/*"NO_ENTRY_NAME_ILLUST"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v38, v39);
    byte_4B12ACC = 1;
  }
  v72 = 0LL;
  entity = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)voice,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)voice,
    (int32_t)isPlayVoice,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  *isPlayVoice = 0;
  if ( !this->fields.commandCodeEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( svtEntity )
    {
      currentCardLimitCount = this->fields.currentCardLimitCount;
      illustratorId = svtEntity->fields.illustratorId;
      cvId = svtEntity->fields.cvId;
      if ( (currentCardLimitCount & 0x80000000) != 0 )
      {
        cardLimitCount = this->fields.cardLimitCount;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v41);
        currentCardLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v49 = this->fields.svtEntity;
      if ( v49 )
      {
        v50 = Master_object;
        v52 = *(_QWORD *)&v49->fields.id.fields.currentCryptoKey;
        v51 = *(_QWORD *)&v49->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
        *(_QWORD *)&v74.fields.currentCryptoKey = v52;
        *(_QWORD *)&v74.fields.fakeValue = v51;
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                     v74,
                                                     0LL);
        if ( v50 )
        {
          if ( ServantLimitAddMaster__TryGetEntity(v50, &v72, (int32_t)Master_object, currentCardLimitCount, 0LL) )
          {
            Master_object = (ServantLimitAddMaster_o *)v72;
            if ( !v72 )
              goto LABEL_44;
            cvId = ServantLimitAddEntity__GetOverwriteCvId(v72, cvId, 0LL);
          }
          if ( cvId < 1 )
            goto LABEL_28;
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v53 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v53 )
              {
                monitor = (System_String_o *)v53[1].monitor;
                *voice = monitor;
                sub_1BCA784((PartyOrganizationUtility_o *)voice, (int64_t)monitor, v54, v55, v56, v57, v58, v59);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1BCAA3C(Master_object, v41);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v43);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    illustratorId = -1;
LABEL_34:
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( !illustratorId )
        goto LABEL_38;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
      if ( !illustratorId )
      {
LABEL_38:
        v70 = &StringLiteral_9431/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_42:
        v69 = LocalizationManager__Get((System_String_o *)*v70, 0LL);
        *illust = v69;
        goto LABEL_43;
      }
    }
LABEL_41:
    v70 = &StringLiteral_14973/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v61 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v61 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
    goto LABEL_41;
  }
  v69 = (System_String_o *)v61[1].monitor;
  *illust = v69;
LABEL_43:
  sub_1BCA784((PartyOrganizationUtility_o *)illust, (int64_t)v69, v63, v64, v65, v66, v67, v68);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_String_o *CondTitle; // x0
  int32_t paramLimitCount; // w8
  bool result; // w0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12ACF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantLimitAddMaster___,
      *(_QWORD *)&svtId,
      *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B12ACF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(Instance, v12);
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
  __int64 v5; // x1
  __int64 v6; // x2
  TreasureDvcInfo_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x22
  bool TreasureDeviceInfo; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *equipTargetInfo; // x0

  if ( (byte_4B12AB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method, v2);
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, v5, v6);
    byte_4B12AB5 = 1;
  }
  this->fields.isTdResult = 0;
  v7 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, method, v2, v3);
  TreasureDvcInfo___ctor(v7, 0LL);
  this->fields.tdInfo = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tdInfo, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v14);
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
            goto LABEL_17;
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
        goto LABEL_18;
      }
      if ( !this->fields.userSvtCollectionEntity )
        goto LABEL_18;
      svtEntity = this->fields.svtEntity;
      if ( svtEntity )
      {
        if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_26;
        svtEntity = this->fields.svtEntity;
        if ( !svtEntity )
          goto LABEL_34;
        if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
        {
LABEL_26:
          svtEntity = this->fields.userSvtCollectionEntity;
          if ( !svtEntity )
            goto LABEL_34;
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
            goto LABEL_18;
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
                goto LABEL_17;
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(svtEntity, v15);
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
    goto LABEL_34;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          goto LABEL_10;
        }
      }
    }
    goto LABEL_34;
  }
LABEL_10:
  svtEntity = this->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_34;
  TreasureDeviceInfo = UserServantEntity__getTreasureDeviceInfo(
                         (UserServantEntity_o *)svtEntity,
                         &this->fields.tdInfo,
                         -1,
                         ConvertOverwriteDispImageLimitCount,
                         0,
                         0LL);
LABEL_17:
  this->fields.isTdResult = TreasureDeviceInfo;
LABEL_18:
  ServantStatusListViewItem__SetTransformData(this, v15);
}


void __fastcall ServantStatusListViewItem__RefreshLimitCountWithRandom(
        ServantStatusListViewItem_o *this,
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
  RandomLimitCountManager_c *v11; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v13; // x20
  __int64 v14; // x1
  int32_t ownRandomSettingButtonIndex; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // kr00_16
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int32_t v21; // w21
  BalanceConfig_c *v22; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t dispLimitCount; // w21
  struct ServantStatusListViewItem_LimitCountCache_o *v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B12AB2 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v9, v10);
    byte_4B12AB2 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v11 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v11 = RandomLimitCountManager_TypeInfo;
  }
  if ( v11->static_fields->enableRandomLimitCount )
  {
    if ( this->fields.isEnableOwnRandomSetting )
    {
      userSvtEntity = this->fields.userSvtEntity;
      v13 = sub_1BCAA2C(UserServantEntity_TypeInfo, method, v2, v3);
      UserServantEntity___ctor_40923816((UserServantEntity_o *)v13, userSvtEntity, 0LL);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0LL);
      if ( !v13 )
        sub_1BCAA3C(*(_QWORD *)&v16.fields.currentCryptoKey, *(_QWORD *)&v16.fields.fakeValue);
      v17 = *(_QWORD *)(v13 + 80);
      v18 = *(_QWORD *)(v13 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v13 + 208) = v16;
      *(_QWORD *)&v26.fields.currentCryptoKey = v17;
      *(_QWORD *)&v26.fields.fakeValue = v18;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
      v22 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
        v22 = BalanceConfig_TypeInfo;
      }
      if ( v21 == v22->static_fields->ServantIdMashu1 )
      {
        currentLimitCountCache = this->fields.currentLimitCountCache;
        if ( currentLimitCountCache )
        {
          dispLimitCount = currentLimitCountCache->fields.dispLimitCount;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v13 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                              dispLimitCount,
                                                                              0LL);
        }
      }
      ServantStatusListViewItem__SetLimitCountInfo(this, (UserServantEntity_o *)v13, v20);
    }
    else
    {
      v25 = this->fields.currentLimitCountCache;
      if ( v25 )
      {
        this->fields.cardLimitCount = v25->fields.cardLimitCount;
        this->fields.iconLimitCount = v25->fields.iconLimitCount;
        this->fields.commandCardLimitCount = v25->fields.commandCardLimitCount;
        this->fields.dispLimitCount = v25->fields.dispLimitCount;
        this->fields.portraitLimitCount = v25->fields.portraitLimitCount;
      }
    }
  }
}


void __fastcall ServantStatusListViewItem__SetCostumeAndOtherIds(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  ServantEntity_o *svtEntity; // x0
  int64_t v17; // x2
  __int64 v18; // x3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  int64_t v24; // x1
  bool IsOtherImage; // w0
  __int64 v26; // x1
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v28; // x0
  System_Collections_Generic_List_int__o *v29; // x20
  struct System_Int32_array *v30; // x0
  struct System_Int32_array **v31; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  struct System_Int32_array *v41; // x0

  if ( (byte_4B12AD0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    byte_4B12AD0 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_26;
  if ( !ServantEntity__IsBeastNotPlayable(svtEntity, 0LL) )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_26;
    if ( !ServantEntity__get_IsServant(svtEntity, 0LL) )
    {
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_26;
      if ( !ServantEntity__get_IsServantCollection(svtEntity, 0LL) )
        goto LABEL_5;
    }
    IsOtherImage = ConstantMaster__IsOtherImage(0LL);
    costumeIds = this->fields.costumeIds;
    if ( IsOtherImage )
    {
      v28 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v26,
                                                        v17,
                                                        v18);
      v29 = v28;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_56116492(
          v28,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
      else
        System_Collections_Generic_List_int____ctor(
          v28,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v29 )
      {
        items = v29->fields._items;
        method = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&svtEntity->fields.starRate + 864LL);
        v39 = Method_System_Collections_Generic_List_int__Add__;
        ++v29->fields._version;
        if ( items )
        {
          size = v29->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v29,
              (int32_t)method,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v29->fields._size = size + 1;
            items->m_Items[size + 1] = (int)method;
          }
          v41 = System_Collections_Generic_List_int___ToArray(
                  v29,
                  (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
          this->fields.costumeAndOtherIds = v41;
          v24 = (int64_t)v41;
          p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
          goto LABEL_25;
        }
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v30 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v30;
      v31 = &this->fields.costumeAndOtherIds;
      sub_1BCA784((PartyOrganizationUtility_o *)v31, (int64_t)v30, v32, v33, v34, v35, v36, v37);
      svtEntity = (ServantEntity_o *)*(v31 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v31, 0, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1BCAA3C(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v24 = 0LL;
LABEL_25:
  sub_1BCA784((PartyOrganizationUtility_o *)p_costumeAndOtherIds, v24, v17, v18, v19, v20, v21, v22);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantStatusListViewItem_o *v9; // x19
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
  __int64 v26; // x1
  __int64 v27; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_equipUserSvtEntity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x8
  __int64 v30; // x22
  __int64 v31; // x23
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v34; // x8
  ServantStatusListViewItem_o *v35; // x21
  __int64 v36; // x22
  __int64 v37; // x23
  Il2CppObject *Entity; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  ServantStatusListViewItem_o *v45; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  int32_t v47; // w20
  ServantLimitEntity_o *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Int64_array *v55; // x8
  PartyOrganizationListViewItem_o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x1
  BalanceConfig_c *v70; // x0
  int64_t v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  v9 = this;
  if ( (byte_4B12AB6 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, equipUserSvtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    this = (ServantStatusListViewItem_o *)sub_1BCA7E0(&SkillInfo___TypeInfo, v26, v27);
    byte_4B12AB6 = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, equipUserSvtId);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v9->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v9->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v29 = *p_equipUserSvtEntity;
      if ( !*p_equipUserSvtEntity )
        goto LABEL_38;
      v31 = *(_QWORD *)&v29[5].fields.currentCryptoKey;
      v30 = *(_QWORD *)&v29[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipUserSvtId);
      *(_QWORD *)&v78.fields.currentCryptoKey = v31;
      *(_QWORD *)&v78.fields.fakeValue = v30;
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v78,
                                              0LL);
      if ( (int)this >= 1 )
      {
        equipIdList = v9->fields.equipIdList;
        if ( !equipIdList )
          goto LABEL_16;
        if ( equipIdList->max_length )
        {
          equipIdList->m_Items[0] = equipUserSvtId;
LABEL_16:
          memberItem = v9->fields.memberItem;
          if ( memberItem )
            PartyOrganizationListViewItem__SetEquipUserServantId(memberItem, equipUserSvtId, 0LL);
          v9->fields.equipTargetId1 = equipUserSvtId;
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
            v34 = *p_equipUserSvtEntity;
            if ( *p_equipUserSvtEntity )
            {
              v35 = this;
              v37 = *(_QWORD *)&v34[5].fields.currentCryptoKey;
              v36 = *(_QWORD *)&v34[5].fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipUserSvtId);
              *(_QWORD *)&v79.fields.currentCryptoKey = v37;
              *(_QWORD *)&v79.fields.fakeValue = v36;
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                      v79,
                                                      0LL);
              if ( v35 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v35,
                           (int32_t)this,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v9->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v9->fields.equipServantEntity,
                  (int64_t)Entity,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v45 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0LL);
                    v46 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v47 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                              v46[6],
                                                              0LL);
                      if ( v45 )
                      {
                        v48 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v45, v47, (int32_t)this, 0LL);
                        v9->fields.equipSvtLimitEntity = v48;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&v9->fields.equipSvtLimitEntity,
                          (int64_t)v48,
                          v49,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54);
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
LABEL_38:
          sub_1BCAA3C(this, equipUserSvtId);
        }
LABEL_39:
        sub_1BCAA44(this, equipUserSvtId);
      }
    }
  }
  v55 = v9->fields.equipIdList;
  if ( v55 )
  {
    if ( !v55->max_length )
      goto LABEL_39;
    v55->m_Items[0] = 0LL;
  }
  v56 = v9->fields.memberItem;
  if ( v56 && !v56->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v56, 0LL, 0LL);
  v9->fields.equipTargetId1 = 0LL;
  v9->fields.equipUserSvtEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.equipUserSvtEntity, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  v9->fields.equipServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.equipServantEntity, 0LL, v57, v58, v59, v60, v61, v62);
  v9->fields.equipSvtLimitEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.equipSvtLimitEntity, 0LL, v63, v64, v65, v66, v67, v68);
  v70 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v69);
    v70 = BalanceConfig_TypeInfo;
  }
  v71 = sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)v70->static_fields->SvtEquipSkillListMax);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v71;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.equipSkillInfoList, v71, v72, v73, v74, v75, v76, v77);
}


void __fastcall ServantStatusListViewItem__SetLimitCountInfo(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w21
  int32_t v11; // w0
  __int64 v12; // x1
  System_Int32_array *costumeAndOtherIds; // x22
  int32_t v14; // w23
  struct System_Int32_array *CardSelectList; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int32_t v22; // w21
  int32_t v23; // w0
  struct System_Int32_array *SelectList; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t v31; // w22
  int32_t v32; // w0
  struct System_Int32_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int32_t v47; // w22
  int32_t v48; // w0
  struct System_Int32_array *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t v58; // w20
  int32_t v59; // w0
  struct System_Int32_array *v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4B12AB3 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, entity, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B12AB3 = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0LL);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0LL);
    v9 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    *(_QWORD *)&v67.fields.currentCryptoKey = v9;
    *(_QWORD *)&v67.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v14 = v11;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v12);
    CardSelectList = ImageLimitCount__GetCardSelectList(v10, v14, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.cardSelectList,
      (int64_t)CardSelectList,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(entity->fields.svtId, 0LL);
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(entity->fields.limitCount, 0LL);
    SelectList = ImageLimitCount__GetSelectList(v22, v23, this->fields.costumeIds, 0LL);
    this->fields.dispSelectList = SelectList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.dispSelectList,
      (int64_t)SelectList,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(entity->fields.svtId, 0LL);
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(entity->fields.limitCount, 0LL);
    v33 = ImageLimitCount__GetSelectList(v31, v32, this->fields.costumeIds, 0LL);
    this->fields.commandCardSelectList = v33;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
      (int64_t)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0LL);
    this->fields.commandCardParam = CommandCardParam;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.commandCardParam,
      (int64_t)CommandCardParam,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(entity->fields.svtId, 0LL);
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(entity->fields.limitCount, 0LL);
    v49 = ImageLimitCount__GetCardSelectList(v47, v48, this->fields.costumeIds, 0LL);
    this->fields.iconSelectList = v49;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconSelectList, (int64_t)v49, v50, v51, v52, v53, v54, v55);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(entity->fields.svtId, 0LL);
    v57 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v68.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v58 = v56;
    *(_QWORD *)&v68.fields.currentCryptoKey = v57;
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v68, 0LL);
    v60 = ImageLimitCount__GetSelectList(v58, v59, this->fields.costumeIds, 0LL);
    this->fields.portraitSelectList = v60;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.portraitSelectList,
      (int64_t)v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
}


void __fastcall ServantStatusListViewItem__SetRandomSettingByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( index <= 2 )
    this->fields.ownRandomSettingButtonIndex = index;
  else
    this->fields.supportRandomSettingButtonIndex = index;
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

  v4 = this;
  if ( (byte_4B12AC7 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1BCA7E0(&UserServantEntity_TypeInfo, *(_QWORD *)&index, method);
    byte_4B12AC7 = 1;
  }
  if ( index == -1 )
  {
    LIMIT_SUPPORT_NOT_ASSIGN = UserServantEntity_TypeInfo->static_fields->LIMIT_SUPPORT_NOT_ASSIGN;
LABEL_10:
    v4->fields.supportRandomLimitCount = LIMIT_SUPPORT_NOT_ASSIGN;
    return;
  }
  supportRandomLimitCountList = v4->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    max_length = supportRandomLimitCountList->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1BCAA44(this, *(_QWORD *)&index);
      LIMIT_SUPPORT_NOT_ASSIGN = supportRandomLimitCountList->m_Items[index + 1];
      goto LABEL_10;
    }
  }
}


void __fastcall ServantStatusListViewItem__SetTransformData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
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
  ServantEntity_o *svtEntity; // x0
  __int64 v21; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v23; // x1
  void *SvtId; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  ServantTransformEntity_o *v32; // x8
  struct System_String_o *befTitle; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_String_o *aftTitle; // x1
  __int64 v41; // x1
  Il2CppObject *v42; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  Il2CppObject *v50; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v52; // x22
  const MethodInfo *v53; // x1
  ServantLimitEntity_o *v54; // x20
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t lv; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  struct EquipTargetInfo_o *equipTargetInfo; // x9
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  _DWORD *v65; // x21
  int32_t atkMax; // w24
  int32_t atkBase; // w25
  int v68; // w23
  CheckCombineResStatus_c *v69; // x0
  _DWORD *v70; // x9
  int32_t LOT_RATE; // w8
  int32_t v72; // w23
  int32_t adjustAtk; // w24
  struct ServantLeaderInfo_o *v74; // x10
  BalanceConfig_c *v75; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v77; // w8
  int32_t StatusUpAdjustHp; // w10
  UserServantEntity_o *v79; // x0
  UserServantEntity_o *v80; // x22
  int32_t v81; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  ServantLeaderInfo_o *v83; // x0
  ServantLeaderInfo_o *v84; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12AD1 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CheckCombineResStatus_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantExpMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTransformMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18, v19);
    byte_4B12AD1 = 1;
  }
  entity = 0LL;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = (void *)ServantStatusListViewItem__get_SvtId(this, v23);
    if ( !Master_object )
      goto LABEL_57;
    SvtId = (void *)ServantTransformMaster__TryGetEntity(
                      (ServantTransformMaster_o *)Master_object,
                      &entity,
                      (int32_t)SvtId,
                      this->fields.dispLimitCount + 1,
                      0LL);
    if ( ((unsigned __int8)SvtId & 1) != 0 )
    {
      v32 = entity;
      if ( !entity )
        goto LABEL_57;
      this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
      this->fields._TransformedServantDispLimitCount_k__BackingField = v32->fields.aftDispLimitCount - 1;
      befTitle = v32->fields.befTitle;
      this->fields.transformNameBefore = befTitle;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.transformNameBefore,
        (int64_t)befTitle,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      if ( !entity )
        goto LABEL_57;
      aftTitle = entity->fields.aftTitle;
      this->fields.transformNameAfter = aftTitle;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.transformNameAfter,
        (int64_t)aftTitle,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      this->fields._IsTransformServant_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
      SvtId = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !SvtId )
        goto LABEL_57;
      v42 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
              this->fields._TransformedSvtId_k__BackingField,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
      this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v42;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields._TransformedServant_k__BackingField,
        (int64_t)v42,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      v50 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
      TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
      v52 = (ServantLimitMaster_o *)v50;
      SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v53);
      if ( !v52 )
        goto LABEL_57;
      v54 = ServantLimitMaster__GetEntity(v52, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0LL);
      SvtId = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantExpMaster___);
      if ( !*p_TransformedServant_k__BackingField )
        goto LABEL_57;
      userSvtEntity = this->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        lv = userSvtEntity->fields.lv;
      }
      else
      {
        servantLeaderInfo = this->fields.servantLeaderInfo;
        if ( servantLeaderInfo )
        {
          lv = servantLeaderInfo->fields.lv;
        }
        else
        {
          equipTargetInfo = this->fields.equipTargetInfo;
          if ( equipTargetInfo )
            lv = equipTargetInfo->fields.lv;
          else
            lv = this->fields.isCollection ? this->fields.collectionLv : 0;
        }
      }
      if ( !SvtId )
        goto LABEL_57;
      SvtId = ServantExpMaster__GetEntity(
                (ServantExpMaster_o *)SvtId,
                (*p_TransformedServant_k__BackingField)->fields.expType,
                lv,
                0LL);
      if ( !v54 )
        goto LABEL_57;
      v65 = SvtId;
      if ( !SvtId )
        goto LABEL_57;
      atkBase = v54->fields.atkBase;
      atkMax = v54->fields.atkMax;
      v68 = *((_DWORD *)SvtId + 7);
      v69 = CheckCombineResStatus_TypeInfo;
      if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo, v25);
        v69 = CheckCombineResStatus_TypeInfo;
      }
      v70 = this->fields.userSvtEntity;
      LOT_RATE = v69->static_fields->LOT_RATE;
      v72 = v68 * (atkMax - atkBase) / LOT_RATE + v54->fields.atkBase;
      this->fields.transformedAtk = v72;
      if ( v70 )
      {
        adjustAtk = v70[68];
      }
      else
      {
        v74 = this->fields.servantLeaderInfo;
        if ( v74 )
          adjustAtk = v74->fields.adjustAtk;
        else
          adjustAtk = 0;
      }
      v75 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
        v75 = BalanceConfig_TypeInfo;
        v70 = this->fields.userSvtEntity;
        LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
      }
      static_fields = v75->static_fields;
      this->fields.transformedAtk = v72 + static_fields->StatusUpAdjustAtk * adjustAtk;
      v77 = v65[7] * (v54->fields.hpMax - v54->fields.hpBase) / LOT_RATE + v54->fields.hpBase;
      if ( v70 )
      {
        LODWORD(v70) = v70[69];
      }
      else
      {
        v70 = this->fields.servantLeaderInfo;
        if ( v70 )
          LODWORD(v70) = v70[22];
      }
      StatusUpAdjustHp = static_fields->StatusUpAdjustHp;
      this->fields.transformedServantLimitEntity = v54;
      this->fields.transformedHp = v77 + StatusUpAdjustHp * (_DWORD)v70;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.transformedServantLimitEntity,
        (int64_t)v54,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      v79 = this->fields.userSvtEntity;
      if ( v79 )
      {
        UserServantEntity__GetTransformedSkillInfo(
          v79,
          &this->fields.transformedSkillInfoList,
          this->fields._TransformedSvtId_k__BackingField,
          -1,
          this->fields._TransformedServantDispLimitCount_k__BackingField,
          1,
          0,
          -1,
          0LL);
        v80 = this->fields.userSvtEntity;
        v81 = this->fields._TransformedSvtId_k__BackingField;
        TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
        SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( SvtId )
        {
          if ( v80 )
          {
            UserServantEntity__GetTransformedPassiveSkillInfo(
              v80,
              &this->fields.transformedPassiveSkillIdList,
              &this->fields.transformedPassiveSkillTitleMessageList,
              &this->fields.transformedPassiveSkillExplanationMessageList,
              v81,
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
LABEL_57:
        sub_1BCAA3C(SvtId, v25);
      }
      v83 = this->fields.servantLeaderInfo;
      if ( v83 )
      {
        ServantLeaderInfo__GetTransformedSkillInfo(
          v83,
          &this->fields.transformedSkillInfoList,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_57;
        ServantLeaderInfo__GetTransformedPassiveSkillInfo(
          (ServantLeaderInfo_o *)SvtId,
          &this->fields.transformedPassiveSkillIdList,
          &this->fields.transformedPassiveSkillTitleMessageList,
          &this->fields.transformedPassiveSkillExplanationMessageList,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_57;
        ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
          (ServantLeaderInfo_o *)SvtId,
          &this->fields.transformedTdInfo,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_57;
        SvtId = (void *)ServantLeaderInfo__get_TransformedAtk((ServantLeaderInfo_o *)SvtId, 0LL);
        v84 = this->fields.servantLeaderInfo;
        this->fields.transformedAtk = (int)SvtId;
        if ( !v84 )
          goto LABEL_57;
        this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v84, 0LL);
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
            goto LABEL_57;
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
            goto LABEL_57;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusListViewItem__UpdateServantComment(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  ServantCommentEntity_array *Master_object; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  _DWORD *klass; // x8
  PartyOrganizationUtility_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  int64_t v20; // x20
  int v21; // w9
  unsigned int v22; // w10
  unsigned int v23; // w21
  char v24; // w21

  if ( (byte_4B12ACE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B12ACE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = ServantCommentMaster__GetEntityList(
                    (ServantCommentMaster_o *)Master_object,
                    svtId,
                    imageLimitCount,
                    0,
                    0,
                    0,
                    0LL);
  svtCommentEntityList = this->fields.svtCommentEntityList;
  p_svtCommentEntityList = (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList;
  klass = svtCommentEntityList;
  v20 = (int64_t)Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_18:
    v24 = 0;
    goto LABEL_21;
  }
  if ( !Master_object )
LABEL_17:
    sub_1BCAA3C(Master_object, v10);
  v21 = klass[6];
  if ( v21 != Master_object->max_length )
  {
    v24 = 1;
    goto LABEL_21;
  }
  if ( v21 < 1 )
    goto LABEL_18;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= klass[6] || (v23 = v22, v22 >= v21) )
      sub_1BCAA44(Master_object, v10);
    Master_object = *(ServantCommentEntity_array **)&klass[2 * v22 + 8];
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, _QWORD, Il2CppMethodPointer))Master_object->obj.klass->vtable[0].method)(
                                                    Master_object,
                                                    *(_QWORD *)(v20 + 8LL * (int)v22 + 32),
                                                    Master_object->obj.klass->vtable[1].methodPtr);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      break;
    v21 = *(_DWORD *)(v20 + 24);
    v22 = v23 + 1;
    if ( (int)(v23 + 1) >= v21 )
      break;
    klass = p_svtCommentEntityList->klass;
    if ( !p_svtCommentEntityList->klass )
      goto LABEL_17;
  }
  v24 = (unsigned __int8)Master_object ^ 1;
LABEL_21:
  p_svtCommentEntityList->klass = (PartyOrganizationUtility_c *)v20;
  sub_1BCA784(p_svtCommentEntityList, v20, v11, v12, v13, v14, v15, v16);
  return v24 & 1;
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B12AB8 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B12AB8 = 1;
  }
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    return 0;
  v6 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.cardLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusListViewItem_o *v3; // x19
  struct ServantEntity_o *TransformedServant_k__BackingField; // x8
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  int32_t limitMax; // w21
  int32_t LimitCountByDispLimit; // w0
  int32_t result; // w0
  PartyOrganizationListViewItem_o *memberItem; // x0
  UserServantEntity_o *userSvtEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  v3 = this;
  if ( (byte_4B12ABE & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    byte_4B12ABE = 1;
  }
  if ( v3->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v3->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1BCAA3C(this, method);
    TransformedServantDispLimitCount_k__BackingField = v3->fields._TransformedServantDispLimitCount_k__BackingField;
    limitMax = TransformedServant_k__BackingField->fields.limitMax;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(
                              TransformedServantDispLimitCount_k__BackingField,
                              limitMax,
                              0LL);
    return ImageLimitCount__GetImageLimitCount(v3->fields._TransformedSvtId_k__BackingField, LimitCountByDispLimit, 0LL);
  }
  else
  {
    if ( !v3->fields.isConvertOverwriteImage )
      return v3->fields.commandCardLimitCount;
    memberItem = v3->fields.memberItem;
    if ( memberItem )
      return PartyOrganizationListViewItem__GetCommandCardLimitCount(memberItem, 0LL);
    userSvtEntity = v3->fields.userSvtEntity;
    if ( !userSvtEntity )
      return v3->fields.commandCardLimitCount;
    questRestrictionInfo = v3->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      return v3->fields.commandCardLimitCount;
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userSvtEntity, 0LL);
    if ( (result & 0x80000000) != 0 )
      return v3->fields.commandCardLimitCount;
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4B12AC5 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B12AC5 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    v6 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v10.fields.currentCryptoKey = v6;
    *(_QWORD *)&v10.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  RandomLimitCountManager_c *ManualSetCommandCardLimit; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t commandCardLimitCount; // w1
  bool v7; // w2
  UserServantEntity_o *v8; // x0

  if ( (byte_4B12ABD & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12ABD = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  ManualSetCommandCardLimit = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    ManualSetCommandCardLimit = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !ManualSetCommandCardLimit->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      commandCardLimitCount = this->fields.commandCardLimitCount;
      v8 = this->fields.userSvtEntity;
      v7 = 0;
      return UserServantEntity__IsModifyCommandCardLimitCount(v8, commandCardLimitCount, v7, 0LL);
    }
LABEL_17:
    sub_1BCAA3C(ManualSetCommandCardLimit, method);
  }
  ManualSetCommandCardLimit = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                                             this,
                                                             method);
  if ( !userSvtEntity )
    goto LABEL_17;
  commandCardLimitCount = (int)ManualSetCommandCardLimit;
  v7 = 1;
  v8 = userSvtEntity;
  return UserServantEntity__IsModifyCommandCardLimitCount(v8, commandCardLimitCount, v7, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RandomLimitCountManager_c *ManualSetDispLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t dispLimitCount; // w1
  bool v7; // w2
  UserServantEntity_o *v8; // x0

  if ( (byte_4B12ABB & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12ABB = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  ManualSetDispLimitCount = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    ManualSetDispLimitCount = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !ManualSetDispLimitCount->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      dispLimitCount = this->fields.dispLimitCount;
      v8 = this->fields.userSvtEntity;
      v7 = 0;
      return UserServantEntity__IsModifyDispLimitCount(v8, dispLimitCount, v7, 0LL);
    }
LABEL_17:
    sub_1BCAA3C(ManualSetDispLimitCount, method);
  }
  ManualSetDispLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_17;
  dispLimitCount = (int)ManualSetDispLimitCount;
  v7 = 1;
  v8 = userSvtEntity;
  return UserServantEntity__IsModifyDispLimitCount(v8, dispLimitCount, v7, 0LL);
}


bool __fastcall ServantStatusListViewItem__get_IsModifyIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RandomLimitCountManager_c *ManualSetIconLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t iconLimitCount; // w1
  bool v7; // w2
  UserServantEntity_o *v8; // x0

  if ( (byte_4B12AC0 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12AC0 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  ManualSetIconLimitCount = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    ManualSetIconLimitCount = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !ManualSetIconLimitCount->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      iconLimitCount = this->fields.iconLimitCount;
      v8 = this->fields.userSvtEntity;
      v7 = 0;
      return UserServantEntity__IsModifyIconLimitCount(v8, iconLimitCount, v7, 0LL);
    }
LABEL_17:
    sub_1BCAA3C(ManualSetIconLimitCount, method);
  }
  ManualSetIconLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_17;
  iconLimitCount = (int)ManualSetIconLimitCount;
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
  __int64 v2; // x2
  RandomLimitCountManager_c *ManualSetPortraitLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t portraitLimitCount; // w1
  bool v7; // w2
  UserServantEntity_o *v8; // x0

  if ( (byte_4B12AC2 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12AC2 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  ManualSetPortraitLimitCount = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    ManualSetPortraitLimitCount = RandomLimitCountManager_TypeInfo;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !ManualSetPortraitLimitCount->static_fields->enableRandomLimitCount )
  {
    if ( userSvtEntity )
    {
      portraitLimitCount = this->fields.portraitLimitCount;
      v8 = this->fields.userSvtEntity;
      v7 = 0;
      return UserServantEntity__IsModifyPortraitLimitCount(v8, portraitLimitCount, v7, 0LL);
    }
LABEL_17:
    sub_1BCAA3C(ManualSetPortraitLimitCount, method);
  }
  ManualSetPortraitLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetPortraitLimitCount(
                                                               this,
                                                               method);
  if ( !userSvtEntity )
    goto LABEL_17;
  portraitLimitCount = (int)ManualSetPortraitLimitCount;
  v7 = 1;
  v8 = userSvtEntity;
  return UserServantEntity__IsModifyPortraitLimitCount(v8, portraitLimitCount, v7, 0LL);
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
  __int64 v2; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B12AC4 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B12AC4 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return 0;
  v6 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL) != this->fields.supportRandomLimitCount;
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
  __int64 v2; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B12AB9 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B12AB9 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v11.fields.currentCryptoKey = v6;
    *(_QWORD *)&v11.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11, 0LL);
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
    sub_1BCAA3C(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1BCAA3C(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4B12ABA & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12ABA = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1BCAA3C(v4, method);
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
  __int64 v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_commandCardLimitCount; // x8

  if ( (byte_4B12ABF & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12ABF = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1BCAA3C(v4, method);
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
  __int64 v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_dispLimitCount; // x8

  if ( (byte_4B12ABC & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12ABC = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1BCAA3C(v4, method);
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
  __int64 v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_iconLimitCount; // x8

  if ( (byte_4B12AC1 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12AC1 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1BCAA3C(v4, method);
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
  __int64 v2; // x2
  RandomLimitCountManager_c *v4; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_portraitLimitCount; // x8

  if ( (byte_4B12AC3 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12AC3 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B12177 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1BCAA3C(v4, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  struct ServantEntity_o *svtEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B12AB7 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B12AB7 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    return 0;
  v6 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedAgility(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BCAA3C(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedDefense(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BCAA3C(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedLuck(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BCAA3C(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedMagic(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BCAA3C(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedNp(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BCAA3C(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedPower(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BCAA3C(this, method);
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
  if ( (svtCommonFlag & 4) != 0 )
    return 2;
  return 1;
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
  __int64 v2; // x2
  ServantStatusListViewItem_o *v3; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  _QWORD *p_klass; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B12ACD & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1BCA7E0(
                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                            method,
                                            v2);
    byte_4B12ACD = 1;
  }
  userSvtEntity = v3->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v5 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v10.fields.fakeValue = v5;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    v9 = v10;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL);
  }
  else
  {
    servantLeaderInfo = v3->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
      return servantLeaderInfo->fields.userId;
    p_klass = &v3->fields.equipTargetInfo->klass;
    if ( !p_klass )
    {
      if ( !v3->fields.isCollection )
        return 0LL;
      p_klass = &v3->fields.userSvtCollectionEntity->klass;
      if ( !p_klass )
        sub_1BCAA3C(this, method);
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
  bool v4; // w21
  RandomLimitCountManager_c *v5; // x0

  v4 = value;
  if ( (byte_4B12AC6 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, value, method);
    byte_4B12AC6 = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, value);
  if ( !byte_4B12177 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, value, method);
    byte_4B12177 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, value);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TransformedServant_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TransformedServant_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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