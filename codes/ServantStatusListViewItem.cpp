void __fastcall ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        bool canMoveCombine,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t Instance; // x0
  __int64 v27; // x1
  struct PartyOrganizationListViewItem_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  char v35; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
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
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v50; // q0
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct PartyOrganizationListViewItem_o *v67; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v69; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x21
  __int64 v71; // x22
  __int64 v72; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  ServantLimitMaster_o *v81; // x22
  int32_t v82; // w23
  struct ServantLimitEntity_o *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  ServantCommentMaster_o *v90; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v98; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // q1
  UserServantCollectionMaster_o *v100; // x22
  int64_t v101; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct PartyOrganizationListViewItem_o *v109; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_41341356; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  const MethodInfo *v127; // x1
  struct UserServantCollectionEntity_o *v128; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v130; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v132; // x8
  _BOOL8 IsChoice; // x0
  __int64 v134; // x1
  const MethodInfo *v135; // x2
  struct System_Int64_array *v136; // x8
  int64_t v137; // x1
  struct UserServantCollectionEntity_o *v138; // x8
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v146; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v148; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v150; // x8
  int32_t v151; // w0
  UserServantEntity_o *v152; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v154; // x2
  UserServantEntity_o *v155; // x0
  int32_t v156; // w0
  UserServantEntity_o *v157; // x8
  int32_t v158; // w0
  UserServantEntity_o *v159; // x1
  const MethodInfo *v160; // x1
  const MethodInfo *v161; // x2
  RandomLimitCountManager_c *v162; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16

  if ( (byte_4BB0F07 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v18);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4BB0F07 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.partyItem, (int64_t)partyItem, v20, v21, v22, v23, v24, v25);
  if ( !partyItem )
    goto LABEL_73;
  v28 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v28;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.memberItem, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
  {
    v35 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    v35 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v35;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v37, v38, v39, v40, v41, v42);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_73;
  v50 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  memberItem = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v50;
  if ( !memberItem )
    goto LABEL_73;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServantEntity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_73;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipIdList, (int64_t)EquipList, v55, v56, v57, v58, v59, v60);
  v67 = this->fields.memberItem;
  if ( !v67 )
    goto LABEL_73;
  questRestrictionInfo = v67->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v69 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v72 = *(_QWORD *)&v69[5].fields.currentCryptoKey;
  v71 = *(_QWORD *)&v69[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v165.fields.currentCryptoKey = v72;
  *(_QWORD *)&v165.fields.fakeValue = v71;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v165, 0LL);
  if ( !v70 )
    goto LABEL_73;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v70,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v75, v76, v77, v78, v79, v80);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v81 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v82 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[6], 0LL);
  if ( !v81 )
    goto LABEL_73;
  v83 = ServantLimitMaster__GetEntity(v81, v82, Instance, 0LL);
  this->fields.svtLimitEntity = v83;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v83, v84, v85, v86, v87, v88, v89);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_73;
  v90 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_svtEntity)[1], 0LL);
  if ( !v90 )
    goto LABEL_73;
  EntityList = ServantCommentMaster__GetEntityList(v90, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v98 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v99 = v98[4];
  v100 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v164.fields.currentCryptoKey = v98[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v164.fields.fakeValue = v99;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v163 = v164;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v163, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v101 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[5], 0LL);
  if ( !v100 )
    goto LABEL_73;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v100, v101, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
    (int64_t)EntityDefinitely,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v109 = this->fields.memberItem;
  if ( !v109 )
    goto LABEL_73;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v109->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_73;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_73;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_73;
  CostumeList_41341356 = UserServantCollectionEntity__getCostumeList_41341356(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_41341356;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.costumeIds,
    (int64_t)CostumeList_41341356,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v127);
  v128 = this->fields.userSvtCollectionEntity;
  if ( !v128 )
    goto LABEL_73;
  svtCommonFlag = v128->fields.svtCommonFlag;
  v130 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v130 )
    goto LABEL_73;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                   v130->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_73;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v132 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v132 )
    goto LABEL_73;
  IsChoice = UserServantEntity__IsChoice(v132, 0LL);
  v136 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v136 )
  {
    if ( !v136->max_length )
      sub_1C13F88(IsChoice, v134);
    v137 = v136->m_Items[0];
  }
  else
  {
    v137 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v137, v135);
  v138 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v138 != 0LL;
  if ( !Instance )
LABEL_73:
    sub_1C13F80(Instance, v27);
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
  v146 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v146 != 0LL;
  if ( v146 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v146, 0LL);
    v146 = (UserServantEntity_o *)*p_userSvtEntity;
    v148 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v148 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v148;
  if ( !v146 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_56;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v146, 0LL);
  v150 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v150 )
  {
LABEL_56:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_57;
  }
  v151 = BasicHelper__DecryptValue_42285396(v150->fields.limitCountSupport, 0LL);
  v152 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v151;
  if ( v152 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v152, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_57:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.supportRandomLimitCountList,
    (int64_t)RandomLimitCountList,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  v155 = this->fields.userSvtEntity;
  if ( v155 )
  {
    v156 = UserServantEntity__OwnRandomSettingSelectedButton(v155, 0LL);
    v157 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v156;
    if ( v157 )
    {
      v158 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v157, 0LL);
      v159 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_63;
    }
    v159 = 0LL;
  }
  else
  {
    v159 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v158 = 3;
LABEL_63:
  this->fields.supportRandomSettingButtonIndex = v158;
  ServantStatusListViewItem__SetLimitCountInfo(this, v159, v154);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v160);
    byte_4BB05D4 = 1;
  }
  v162 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v162 = RandomLimitCountManager_TypeInfo;
  }
  if ( v162->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v161);
  ServantStatusListViewItem__ModifyInfo(this, v160);
}


void __fastcall ServantStatusListViewItem___ctor_34248644(
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t Instance; // x0
  __int64 v24; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
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
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v46; // q0
  struct PartyOrganizationListViewItem_o *v47; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
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
  struct PartyOrganizationListViewItem_o *v63; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // x21
  __int64 v67; // x22
  __int64 v68; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  ServantLimitMaster_o *v77; // x22
  int32_t v78; // w23
  struct ServantLimitEntity_o *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  ServantCommentMaster_o *v86; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v94; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // q1
  UserServantCollectionMaster_o *v96; // x22
  int64_t v97; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct PartyOrganizationListViewItem_o *v105; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_41341356; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  const MethodInfo *v123; // x1
  struct UserServantCollectionEntity_o *v124; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v126; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v128; // x8
  _BOOL8 IsChoice; // x0
  __int64 v130; // x1
  const MethodInfo *v131; // x2
  struct System_Int64_array *v132; // x8
  int64_t v133; // x1
  struct UserServantCollectionEntity_o *v134; // x8
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v142; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v144; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v146; // x8
  int32_t v147; // w0
  UserServantEntity_o *v148; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v150; // x2
  UserServantEntity_o *v151; // x0
  int32_t v152; // w0
  UserServantEntity_o *v153; // x8
  int32_t v154; // w0
  UserServantEntity_o *v155; // x1
  const MethodInfo *v156; // x1
  const MethodInfo *v157; // x2
  RandomLimitCountManager_c *v158; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_4BB0F08 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BB0F08 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.warBoardPartyItem,
    (int64_t)partyItem,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.memberItem, (int64_t)MemberItem, v26, v27, v28, v29, v30, v31);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v33, v34, v35, v36, v37, v38);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v46 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v47 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v46;
  if ( !v47 )
    goto LABEL_68;
  userServantEntity = v47->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServantEntity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipIdList, (int64_t)EquipList, v51, v52, v53, v54, v55, v56);
  v63 = this->fields.memberItem;
  if ( !v63 )
    goto LABEL_68;
  questRestrictionInfo = v63->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v66 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v68 = *(_QWORD *)&v65[5].fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v161.fields.currentCryptoKey = v68;
  *(_QWORD *)&v161.fields.fakeValue = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v161, 0LL);
  if ( !v66 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v66,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v71, v72, v73, v74, v75, v76);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v77 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v78 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[6], 0LL);
  if ( !v77 )
    goto LABEL_68;
  v79 = ServantLimitMaster__GetEntity(v77, v78, Instance, 0LL);
  this->fields.svtLimitEntity = v79;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v79, v80, v81, v82, v83, v84, v85);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v86 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_svtEntity)[1], 0LL);
  if ( !v86 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v86, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v94 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v95 = v94[4];
  v96 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v160.fields.currentCryptoKey = v94[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v160.fields.fakeValue = v95;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v159 = v160;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v159, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v97 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[5], 0LL);
  if ( !v96 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v96, v97, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
    (int64_t)EntityDefinitely,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  v105 = this->fields.memberItem;
  if ( !v105 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v105->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_41341356 = UserServantCollectionEntity__getCostumeList_41341356(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_41341356;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.costumeIds,
    (int64_t)CostumeList_41341356,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v123);
  v124 = this->fields.userSvtCollectionEntity;
  if ( !v124 )
    goto LABEL_68;
  svtCommonFlag = v124->fields.svtCommonFlag;
  v126 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v126 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                   v126->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v128 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v128 )
    goto LABEL_68;
  IsChoice = UserServantEntity__IsChoice(v128, 0LL);
  v132 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v132 )
  {
    if ( !v132->max_length )
      sub_1C13F88(IsChoice, v130);
    v133 = v132->m_Items[0];
  }
  else
  {
    v133 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v133, v131);
  v134 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v134 != 0LL;
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
    sub_1C13F80(Instance, v24);
  }
  IsNameTrue = 0;
LABEL_43:
  v142 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v142 != 0LL;
  if ( v142 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v142, 0LL);
    v142 = (UserServantEntity_o *)*p_userSvtEntity;
    v144 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v144 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v144;
  if ( !v142 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v142, 0LL);
  v146 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v146 )
  {
LABEL_51:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_52;
  }
  v147 = BasicHelper__DecryptValue_42285396(v146->fields.limitCountSupport, 0LL);
  v148 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v147;
  if ( v148 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v148, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.supportRandomLimitCountList,
    (int64_t)RandomLimitCountList,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  v151 = this->fields.userSvtEntity;
  if ( v151 )
  {
    v152 = UserServantEntity__OwnRandomSettingSelectedButton(v151, 0LL);
    v153 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v152;
    if ( v153 )
    {
      v154 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v153, 0LL);
      v155 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_58;
    }
    v155 = 0LL;
  }
  else
  {
    v155 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v154 = 3;
LABEL_58:
  this->fields.supportRandomSettingButtonIndex = v154;
  ServantStatusListViewItem__SetLimitCountInfo(this, v155, v150);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v156);
    byte_4BB05D4 = 1;
  }
  v158 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v158 = RandomLimitCountManager_TypeInfo;
  }
  if ( v158->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v157);
  ServantStatusListViewItem__ModifyInfo(this, v156);
}


void __fastcall ServantStatusListViewItem___ctor_34250284(
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t Instance; // x0
  __int64 v37; // x1
  bool v38; // w8
  __int128 v39; // q1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v60; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x24
  __int64 v62; // x26
  __int64 v63; // x27
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x24
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  ServantLimitMaster_o *v72; // x26
  int32_t v73; // w27
  struct ServantLimitEntity_o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  ServantCommentMaster_o *v81; // x26
  int32_t v82; // w27
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v90; // x8
  __int64 v91; // x26
  __int64 v92; // x27
  int32_t v93; // w0
  bool IsConvertOverwriteImage; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v95; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // q0
  __int64 v97; // x25
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v104; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // q0
  UserServantCollectionMaster_o *v106; // x25
  bool v107; // w20
  bool v108; // w29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v109; // x8
  int64_t v110; // x26
  __int64 v111; // x27
  __int64 v112; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x25
  int32_t lv; // w26
  struct System_Int32_array *CostumeList_41341356; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  const MethodInfo *v137; // x1
  struct System_Int32_array *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  struct UserServantCollectionEntity_o *v157; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v159; // x8
  __int64 v160; // x25
  __int64 v161; // x26
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  UserServantEntity_o *v174; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  __int64 v177; // x1
  const MethodInfo *v178; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v179; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // q0
  UserDeckMaster_o *v181; // x23
  bool v182; // w8
  struct System_Int64_array *v183; // x9
  int64_t v184; // x1
  struct UserServantCollectionEntity_o *v185; // x8
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v193; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v195; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v197; // x8
  int32_t v198; // w0
  UserServantEntity_o *v199; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v201; // x2
  UserServantEntity_o *v202; // x0
  int32_t v203; // w0
  UserServantEntity_o *v204; // x8
  int32_t v205; // w0
  UserServantEntity_o *v206; // x1
  const MethodInfo *v207; // x1
  const MethodInfo *v208; // x2
  RandomLimitCountManager_c *v209; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v210; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v211; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v212; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v213; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v214; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16

  v15 = isEnableServantQuest;
  v16 = canMoveCombine;
  if ( (byte_4BB0F09 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserDeckMaster___, v19);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C13D24(&NetworkManager_TypeInfo, v22);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v25);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_4BB0F09 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v30, v31, v32, v33, v34, v35);
  this->fields.isEnableServantQuest = v15;
  this->fields._CanMoveCombine_k__BackingField = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v38 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
    v38 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v38;
  if ( !userServant )
    goto LABEL_107;
  v39 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v214.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v214.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v213 = v214;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v213, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_107;
  if ( Instance == userGameEntity->fields.userId )
  {
    *(_OWORD *)&this->fields.favoriteUserSvtId = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v40, v41, v42, v43, v44, v45);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServant,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.equipIdList = equipIdList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.equipIdList,
    (int64_t)equipIdList,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v60 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_107;
  v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v63 = *(_QWORD *)&v60[5].fields.currentCryptoKey;
  v62 = *(_QWORD *)&v60[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v215.fields.currentCryptoKey = v63;
  *(_QWORD *)&v215.fields.fakeValue = v62;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v215, 0LL);
  if ( !v61 )
    goto LABEL_107;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v61,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v66, v67, v68, v69, v70, v71);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_107;
  v72 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_107;
  v73 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[6], 0LL);
  if ( !v72 )
    goto LABEL_107;
  v74 = ServantLimitMaster__GetEntity(v72, v73, Instance, 0LL);
  this->fields.svtLimitEntity = v74;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_107;
  v81 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_107;
  v82 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[7], 0LL);
  if ( !v81 )
    goto LABEL_107;
  EntityList = ServantCommentMaster__GetEntityList(v81, v82, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  if ( questRestrictionInfo )
  {
    v90 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_107;
    v92 = *(_QWORD *)&v90[5].fields.currentCryptoKey;
    v91 = *(_QWORD *)&v90[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v216.fields.currentCryptoKey = v92;
    *(_QWORD *)&v216.fields.fakeValue = v91;
    v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v216, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v93, 0LL);
  }
  else
  {
    IsConvertOverwriteImage = 0;
  }
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v37);
    byte_4BAF1E5 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v95 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_107:
    sub_1C13F80(Instance, v37);
  v96 = v95[4];
  v97 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v214.fields.currentCryptoKey = v95[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v214.fields.fakeValue = v96;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v212 = v214;
  if ( v97 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v212, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v104 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_107;
    v105 = v104[4];
    v106 = (UserServantCollectionMaster_o *)Instance;
    v107 = enableTdSpeed;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v214.fields.currentCryptoKey = v104[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v214.fields.fakeValue = v105;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v108 = enableBattleVoice;
    v211 = v214;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v211, 0LL);
    v109 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_107;
    v110 = Instance;
    v112 = *(_QWORD *)&v109[5].fields.currentCryptoKey;
    v111 = *(_QWORD *)&v109[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v217.fields.currentCryptoKey = v112;
    *(_QWORD *)&v217.fields.fakeValue = v111;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v217, 0LL);
    if ( !v106 )
      goto LABEL_107;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v106, v110, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
      (int64_t)EntityDefinitely,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_107;
    enableBattleVoice = v108;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
      (int64_t)CommandCodeIdList,
      v121,
      v122,
      v123,
      v124,
      v125,
      v126);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_107;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    enableTdSpeed = v107;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_107;
    CostumeList_41341356 = UserServantCollectionEntity__getCostumeList_41341356(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_41341356;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.costumeIds,
      (int64_t)CostumeList_41341356,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v137);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
      0LL,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_107;
    v138 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v138;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
      (int64_t)v138,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    this->fields.costumeIds = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.costumeIds, 0LL, v145, v146, v147, v148, v149, v150);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.costumeAndOtherIds, 0LL, v151, v152, v153, v154, v155, v156);
  }
  v157 = this->fields.userSvtCollectionEntity;
  if ( !v157 )
    goto LABEL_107;
  svtCommonFlag = v157->fields.svtCommonFlag;
  v159 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v159 )
    goto LABEL_107;
  v161 = *(_QWORD *)&v159->fields.battleVoice.fields.currentCryptoKey;
  v160 = *(_QWORD *)&v159->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v218.fields.currentCryptoKey = v161;
  *(_QWORD *)&v218.fields.fakeValue = v160;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v218, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v162, v163, v164, v165, v166, v167);
  this->fields.equipTargetInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v168, v169, v170, v171, v172, v173);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_107;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v174 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v174 )
    goto LABEL_107;
  Instance = UserServantEntity__IsChoice(v174, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_107;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_107;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v179 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_107;
    v180 = v179[2];
    v181 = (UserDeckMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v214.fields.currentCryptoKey = v179[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v214.fields.fakeValue = v180;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v210 = v214;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v210, 0LL);
    if ( !v181 )
      goto LABEL_107;
    IsServantEquip = UserDeckMaster__IsEquip(v181, Instance, 0LL);
    v182 = IsServantEquip;
  }
  else
  {
    v182 = 0;
  }
  v183 = this->fields.equipIdList;
  this->fields.isUse = v182;
  if ( v183 )
  {
    if ( !v183->max_length )
      sub_1C13F88(IsServantEquip, v177);
    v184 = v183->m_Items[0];
  }
  else
  {
    v184 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v184, v178);
  v185 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v185 != 0LL && enableTdSpeed;
  if ( !Instance )
    goto LABEL_107;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_82;
    }
    goto LABEL_107;
  }
  IsNameTrue = 0;
LABEL_82:
  v193 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v193 != 0LL;
  if ( v193 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v193, 0LL);
    v193 = (UserServantEntity_o *)*p_userSvtEntity;
    v195 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v195 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v195;
  if ( !v193 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_90;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v193, 0LL);
  v197 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v197 )
  {
LABEL_90:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_91;
  }
  v198 = BasicHelper__DecryptValue_42285396(v197->fields.limitCountSupport, 0LL);
  v199 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v198;
  if ( v199 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v199, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_91:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.supportRandomLimitCountList,
    (int64_t)RandomLimitCountList,
    v186,
    v187,
    v188,
    v189,
    v190,
    v191);
  v202 = this->fields.userSvtEntity;
  if ( v202 )
  {
    v203 = UserServantEntity__OwnRandomSettingSelectedButton(v202, 0LL);
    v204 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v203;
    if ( v204 )
    {
      v205 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v204, 0LL);
      v206 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_97;
    }
    v206 = 0LL;
  }
  else
  {
    v206 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v205 = 3;
LABEL_97:
  this->fields.supportRandomSettingButtonIndex = v205;
  ServantStatusListViewItem__SetLimitCountInfo(this, v206, v201);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v207);
    byte_4BB05D4 = 1;
  }
  v209 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v209 = RandomLimitCountManager_TypeInfo;
  }
  if ( v209->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v208);
  ServantStatusListViewItem__ModifyInfo(this, v207);
}


void __fastcall ServantStatusListViewItem___ctor_34252668(
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
  ServantStatusListViewItem_Fields *p_fields; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t Instance; // x0
  __int64 v25; // x1
  __int128 v26; // q1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x22
  __int64 v49; // x23
  __int64 v50; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  ServantLimitMaster_o *v59; // x23
  int32_t v60; // w24
  struct ServantLimitEntity_o *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  ServantCommentMaster_o *v68; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // q0
  __int64 v78; // x23
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // q0
  UserServantCollectionMaster_o *v87; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v88; // x8
  int64_t v89; // x24
  __int64 v90; // x25
  __int64 v91; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
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
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_41341356; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  const MethodInfo *v116; // x1
  struct System_Int32_array *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  struct UserServantCollectionEntity_o *v136; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v138; // x8
  __int64 v139; // x23
  __int64 v140; // x24
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  UserServantEntity_o *v153; // x8
  const MethodInfo *v154; // x2
  struct UserServantCollectionEntity_o *v155; // x8
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v163; // x8
  int32_t v164; // w0
  UserServantEntity_o *v165; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v167; // x2
  UserServantEntity_o *v168; // x0
  int32_t v169; // w0
  UserServantEntity_o *v170; // x8
  int32_t v171; // w0
  UserServantEntity_o *v172; // x1
  const MethodInfo *v173; // x1
  const MethodInfo *v174; // x2
  RandomLimitCountManager_c *v175; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16

  if ( (byte_4BB0F0A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C13D24(&NetworkManager_TypeInfo, v11);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BB0F0A = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v18, v19, v20, v21, v22, v23);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_77;
  v26 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v179.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v179.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v178 = v179;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v178, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_77;
  if ( Instance == userGameEntity->fields.userId )
  {
    *(_OWORD *)&this->fields.favoriteUserSvtId = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v27, v28, v29, v30, v31, v32);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
    (int64_t)userServant,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.equipIdList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v35, v36, v37, v38, v39, v40);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v41, v42, v43, v44, v45, v46);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v50 = *(_QWORD *)&v47[5].fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v180.fields.currentCryptoKey = v50;
  *(_QWORD *)&v180.fields.fakeValue = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v180, 0LL);
  if ( !v48 )
    goto LABEL_77;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v48,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v53, v54, v55, v56, v57, v58);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v59 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v60 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_userSvtEntity)[6], 0LL);
  if ( !v59 )
    goto LABEL_77;
  v61 = ServantLimitMaster__GetEntity(v59, v60, Instance, 0LL);
  this->fields.svtLimitEntity = v61;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v61, v62, v63, v64, v65, v66, v67);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_77;
  v68 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608((*p_svtEntity)[1], 0LL);
  if ( !v68 )
    goto LABEL_77;
  EntityList = ServantCommentMaster__GetEntityList(v68, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v25);
    byte_4BAF1E5 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v76 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v77 = v76[4];
  v78 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.currentCryptoKey = v76[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.fakeValue = v77;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v177 = v179;
  if ( v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v177, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v85 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v86 = v85[4];
    v87 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.currentCryptoKey = v85[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v179.fields.fakeValue = v86;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v176 = v179;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v176, 0LL);
    v88 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v89 = Instance;
    v91 = *(_QWORD *)&v88[5].fields.currentCryptoKey;
    v90 = *(_QWORD *)&v88[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v181.fields.currentCryptoKey = v91;
    *(_QWORD *)&v181.fields.fakeValue = v90;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v181, 0LL);
    if ( !v87 )
      goto LABEL_77;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v87, v89, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
      (int64_t)EntityDefinitely,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
      (int64_t)CommandCodeIdList,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_77;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_77;
    CostumeList_41341356 = UserServantCollectionEntity__getCostumeList_41341356(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_41341356;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.costumeIds,
      (int64_t)CostumeList_41341356,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v116);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity, 0LL, v79, v80, v81, v82, v83, v84);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    v117 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v117;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
      (int64_t)v117,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
    this->fields.costumeIds = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.costumeIds, 0LL, v124, v125, v126, v127, v128, v129);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.costumeAndOtherIds, 0LL, v130, v131, v132, v133, v134, v135);
  }
  v136 = this->fields.userSvtCollectionEntity;
  if ( !v136 )
    goto LABEL_77;
  svtCommonFlag = v136->fields.svtCommonFlag;
  v138 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v138 )
    goto LABEL_77;
  v140 = *(_QWORD *)&v138->fields.battleVoice.fields.currentCryptoKey;
  v139 = *(_QWORD *)&v138->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v182.fields.currentCryptoKey = v140;
  *(_QWORD *)&v182.fields.fakeValue = v139;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v182, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v141, v142, v143, v144, v145, v146);
  this->fields.equipTargetInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v147, v148, v149, v150, v151, v152);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_77;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v153 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v153 )
    goto LABEL_77;
  this->fields.isChoice = UserServantEntity__IsChoice(v153, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v154);
  v155 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v155 != 0LL;
  if ( !Instance )
    goto LABEL_77;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_57;
    }
LABEL_77:
    sub_1C13F80(Instance, v25);
  }
  IsNameTrue = 0;
LABEL_57:
  v163 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v163 )
  {
    v164 = BasicHelper__DecryptValue_42285396(v163->fields.limitCountSupport, 0LL);
    v165 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v164;
    if ( v165 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v165, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.supportRandomLimitCountList,
    (int64_t)RandomLimitCountList,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  v168 = this->fields.userSvtEntity;
  if ( v168 )
  {
    v169 = UserServantEntity__OwnRandomSettingSelectedButton(v168, 0LL);
    v170 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v169;
    if ( v170 )
    {
      v171 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v170, 0LL);
      v172 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_68;
    }
    v172 = 0LL;
  }
  else
  {
    v172 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v171 = 3;
LABEL_68:
  this->fields.supportRandomSettingButtonIndex = v171;
  ServantStatusListViewItem__SetLimitCountInfo(this, v172, v167);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v173);
    byte_4BB05D4 = 1;
  }
  v175 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v175 = RandomLimitCountManager_TypeInfo;
  }
  if ( v175->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v174);
  ServantStatusListViewItem__ModifyInfo(this, v173);
}


void __fastcall ServantStatusListViewItem___ctor_34254512(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v8; // w23
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
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
  struct UserServantCollectionEntity_o *v63; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x22
  __int64 v65; // x23
  __int64 v66; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  ServantLimitMaster_o *v75; // x23
  struct ServantLimitEntity_o *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  ServantCommentMaster_o *v84; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct System_Int32_array *CostumeList; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
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
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct UserServantCollectionEntity_o *v126; // x8
  struct UserServantCollectionEntity_o *v127; // x8
  struct System_Int32_array *SelectList; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  struct UserServantCollectionEntity_o *v135; // x8
  struct UserServantCollectionEntity_o *v136; // x8
  struct System_Int32_array *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v152; // x8
  struct System_Int32_array *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v161; // x8
  struct System_Int32_array *v162; // x0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  const MethodInfo *v169; // x2
  struct UserServantCollectionEntity_o *v170; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v172; // x8
  const MethodInfo *v173; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  v8 = isEnableServantQuest;
  if ( (byte_4BB0F0B & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, userSvtCollectionEntity);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v13);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BB0F0B = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v18, v19, v20, v21, v22, v23);
  this->fields.isEnableServantQuest = v8;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_56;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v26, v27, v28, v29, v30, v31);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.equipIdList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v32, v33, v34, v35, v36, v37);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v38, v39, v40, v41, v42, v43);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
    (int64_t)userSvtCollectionEntity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.servantLeaderInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.equipTargetInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v57, v58, v59, v60, v61, v62);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v63 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v174.fields.currentCryptoKey = v66;
  *(_QWORD *)&v174.fields.fakeValue = v65;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v174, 0LL);
  if ( !v64 )
    goto LABEL_56;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v64,
             (int32_t)Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v69, v70, v71, v72, v73, v74);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v75 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  if ( !v75 )
    goto LABEL_56;
  v76 = ServantLimitMaster__GetEntity(v75, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v76;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v76, v77, v78, v79, v80, v81, v82);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v83 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_56;
  v84 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v83[1], 0LL);
  if ( !v84 )
    goto LABEL_56;
  EntityList = ServantCommentMaster__GetEntityList(v84, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.costumeIds,
    (int64_t)CostumeList,
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v107 = BalanceConfig_TypeInfo;
    }
    Instance = (DataManager_o *)(unsigned int)v107->static_fields->OtherImageLimitCount;
    goto LABEL_32;
  }
  v108 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v110 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
  v109 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v175.fields.currentCryptoKey = v110;
  *(_QWORD *)&v175.fields.fakeValue = v109;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v175, 0LL);
  if ( !*p_userSvtCollectionEntity )
LABEL_56:
    sub_1C13F80(Instance, v25);
  v111 = (int)Instance;
  maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v111, maxLimitCount, 1, 0, 0LL);
LABEL_32:
  v113 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v113 )
    goto LABEL_56;
  v115 = *(_QWORD *)&v113->fields.svtId.fields.currentCryptoKey;
  v114 = *(_QWORD *)&v113->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v176.fields.currentCryptoKey = v115;
  *(_QWORD *)&v176.fields.fakeValue = v114;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v176, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v116 = (int)Instance;
  v117 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v116, v117, 1, 0, 0LL);
  v118 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v118 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v118->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.cardSelectList,
    (int64_t)CardSelectList,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  v126 = this->fields.userSvtCollectionEntity;
  if ( !v126 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v126->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v127 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v127 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v127->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dispSelectList,
    (int64_t)SelectList,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  v135 = this->fields.userSvtCollectionEntity;
  if ( !v135 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v135->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v136 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v136 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v136->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v137 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.commandCardSelectList = v137;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
    (int64_t)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCardParam,
    (int64_t)CommandCardParam,
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
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v152->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v153 = ImageLimitCount__GetCardSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.iconSelectList = v153;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.iconSelectList,
    (int64_t)v153,
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
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v161->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v162 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.portraitSelectList = v162;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.portraitSelectList,
    (int64_t)v162,
    v163,
    v164,
    v165,
    v166,
    v167,
    v168);
  v170 = this->fields.userSvtCollectionEntity;
  if ( !v170 )
    goto LABEL_56;
  svtCommonFlag = v170->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v169);
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
  v172 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v172 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v173);
}


void __fastcall ServantStatusListViewItem___ctor_34256152(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v10; // w24
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
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
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
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
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct UserServantCollectionEntity_o *v64; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x22
  __int64 v66; // x24
  __int64 v67; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct UserServantCollectionEntity_o *v76; // x8
  ServantLimitMaster_o *v77; // x23
  struct ServantLimitEntity_o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v85; // x8
  ServantCommentMaster_o *v86; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct System_Int32_array *CostumeList; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  const MethodInfo *v108; // x1
  struct UserServantCollectionEntity_o *v109; // x8
  int32_t v110; // w22
  struct UserServantCollectionEntity_o *v111; // x8
  int32_t v112; // w0
  struct UserServantCollectionEntity_o *v113; // x8
  int32_t v114; // w0
  struct System_Int32_array *CardSelectList; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct UserServantCollectionEntity_o *v122; // x8
  int32_t v123; // w0
  struct UserServantCollectionEntity_o *v124; // x8
  int32_t v125; // w0
  struct System_Int32_array *SelectList; // x0
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct UserServantCollectionEntity_o *v133; // x8
  int32_t v134; // w0
  struct UserServantCollectionEntity_o *v135; // x8
  int32_t v136; // w0
  struct System_Int32_array *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v152; // x8
  int32_t v153; // w0
  struct System_Int32_array *v154; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v162; // x8
  int32_t v163; // w0
  struct System_Int32_array *v164; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  const MethodInfo *v171; // x2
  struct UserServantCollectionEntity_o *v172; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v174; // x8
  const MethodInfo *v175; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  v10 = isEnableServantQuest;
  if ( (byte_4BB0F0C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, userSvtCollectionEntity);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v14);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BB0F0C = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v19, v20, v21, v22, v23, v24);
  this->fields.isEnableServantQuest = v10;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v27, v28, v29, v30, v31, v32);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.equipIdList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity,
    (int64_t)userSvtCollectionEntity,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.servantLeaderInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v52, v53, v54, v55, v56, v57);
  this->fields.equipTargetInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v58, v59, v60, v61, v62, v63);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v64 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v67 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v176.fields.currentCryptoKey = v67;
  *(_QWORD *)&v176.fields.fakeValue = v66;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v176, 0LL);
  if ( !v65 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v65,
             (int32_t)Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v70, v71, v72, v73, v74, v75);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v76 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v77 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v76->fields.svtId,
                                0LL);
  if ( !v77 )
    goto LABEL_35;
  v78 = ServantLimitMaster__GetEntity(v77, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v78;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v78, v79, v80, v81, v82, v83, v84);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v85 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v86 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v85[1], 0LL);
  if ( !v86 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v86, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.costumeIds,
    (int64_t)CostumeList,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v108);
  v109 = this->fields.userSvtCollectionEntity;
  if ( !v109 )
    goto LABEL_35;
  v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v109->fields.svtId, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v110, limitCount, 1, 0, 0LL);
  v111 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v111 )
    goto LABEL_35;
  v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v111->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v112, limitCount, 1, 0, 0LL);
  v113 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v113 )
    goto LABEL_35;
  v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v113->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v114, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.cardSelectList,
    (int64_t)CardSelectList,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v122 = this->fields.userSvtCollectionEntity;
  if ( !v122 )
    goto LABEL_35;
  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v122->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v123, limitCount, 0LL);
  v124 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v124 )
    goto LABEL_35;
  v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v124->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v125, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dispSelectList,
    (int64_t)SelectList,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v133 = this->fields.userSvtCollectionEntity;
  if ( !v133 )
    goto LABEL_35;
  v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v133->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v134, limitCount, 0LL);
  v135 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v135 )
    goto LABEL_35;
  v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v135->fields.svtId, 0LL);
  v137 = ImageLimitCount__GetSelectList(v136, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v137;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
    (int64_t)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCardParam,
    (int64_t)CommandCardParam,
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
    goto LABEL_35;
  v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v152->fields.svtId, 0LL);
  v154 = ImageLimitCount__GetCardSelectList(v153, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v154;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.iconSelectList,
    (int64_t)v154,
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
    goto LABEL_35;
  v163 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v162->fields.svtId, 0LL);
  v164 = ImageLimitCount__GetSelectList(v163, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v164;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.portraitSelectList,
    (int64_t)v164,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  v172 = this->fields.userSvtCollectionEntity;
  if ( !v172 )
    goto LABEL_35;
  svtCommonFlag = v172->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v171);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_35:
    sub_1C13F80(Instance, v26);
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


void __fastcall ServantStatusListViewItem___ctor_34257576(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  bool v6; // w22
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
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
  DataManager_o *Instance; // x0
  __int64 v57; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x21
  __int64 v60; // x22
  __int64 v61; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  ServantLimitMaster_o *v70; // x22
  struct ServantLimitEntity_o *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  ServantCommentMaster_o *v79; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
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
  ServantLeaderInfo_o *v100; // x8
  struct ServantLeaderInfo_o *v101; // x8
  int32_t v102; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_38837840; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  ServantLeaderInfo_o *v112; // x8
  struct ServantLeaderInfo_o *v113; // x8
  struct System_Int32_array *SelectList_38837024; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  ServantLeaderInfo_o *v121; // x8
  struct ServantLeaderInfo_o *v122; // x8
  struct System_Int32_array *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  struct ServantLeaderInfo_o *v136; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v138; // x8
  struct ServantLeaderInfo_o *v139; // x8
  struct System_Int32_array *v140; // x0
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  ServantLeaderInfo_o *v147; // x8
  struct ServantLeaderInfo_o *v148; // x8
  struct System_Int32_array *v149; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  const MethodInfo *v156; // x2
  struct ServantLeaderInfo_o *v157; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v159; // x21
  __int64 v160; // x22
  __int64 v161; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v162; // x21
  __int64 v163; // x22
  __int64 v164; // x23
  Il2CppObject *v165; // x0
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  __int64 v172; // x8
  ServantLimitMaster_o *v173; // x21
  __int64 v174; // x8
  struct ServantLimitEntity_o *v175; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  const MethodInfo *v182; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4BB0F0D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, servantLeaderInfo);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BB0F0D = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.userSvtEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo,
    (int64_t)servantLeaderInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.equipTargetInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipTargetInfo, 0LL, v50, v51, v52, v53, v54, v55);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v58 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v61 = *(_QWORD *)&v58[3].fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58[3].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v183.fields.currentCryptoKey = v61;
  *(_QWORD *)&v183.fields.fakeValue = v60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v183, 0LL);
  if ( !v59 )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v59,
             (int32_t)Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v64, v65, v66, v67, v68, v69);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v70 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  if ( !v70 )
    goto LABEL_59;
  v71 = ServantLimitMaster__GetEntity(v70, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v71;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtLimitEntity, (int64_t)v71, v72, v73, v74, v75, v76, v77);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v78 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_59;
  v79 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v78[1], 0LL);
  if ( !v79 )
    goto LABEL_59;
  EntityList = ServantCommentMaster__GetEntityList(v79, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeIdList,
    (int64_t)CommandCodeIdList,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  this->fields.costumeIds = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.costumeIds, 0LL, v94, v95, v96, v97, v98, v99);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v100 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v100 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v100, 0, 0LL);
  v101 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v101 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v101->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v102 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList_38837840 = ImageLimitCount__GetCardSelectList_38837840(v102, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_38837840;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.cardSelectList,
    (int64_t)CardSelectList_38837840,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v112 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)Instance;
  if ( !v112 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v112, 0LL);
  v113 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v113 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v113->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  SelectList_38837024 = ImageLimitCount__GetSelectList_38837024(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_38837024;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.dispSelectList,
    (int64_t)SelectList_38837024,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v121 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v121 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v121, 0LL);
  v122 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  if ( !v122 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v122->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v123 = ImageLimitCount__GetSelectList_38837024(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.commandCardLimitCount,
           0,
           0LL);
  this->fields.commandCardSelectList = v123;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
    (int64_t)v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  v136 = this->fields.servantLeaderInfo;
  if ( !v136 )
    goto LABEL_59;
  commandCardParam = v136->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCardParam,
    (int64_t)commandCardParam,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v138 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)Instance;
  if ( !v138 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v138, 0, 0LL);
  v139 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)Instance;
  if ( !v139 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v139->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v140 = ImageLimitCount__GetCardSelectList_38837840(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.iconLimitCount,
           0LL);
  this->fields.iconSelectList = v140;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.iconSelectList,
    (int64_t)v140,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v147 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)Instance;
  if ( !v147 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v147, 0LL);
  v148 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)Instance;
  if ( !v148 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                v148->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v149 = ImageLimitCount__GetSelectList_38837024(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.portraitLimitCount,
           0,
           0LL);
  this->fields.portraitSelectList = v149;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.portraitSelectList,
    (int64_t)v149,
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
    goto LABEL_59;
  equipTarget1 = v157->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v160 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v159 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v184.fields.currentCryptoKey = v160;
    *(_QWORD *)&v184.fields.fakeValue = v159;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v184, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v161 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v161 )
          {
            v162 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v164 = *(_QWORD *)(v161 + 56);
            v163 = *(_QWORD *)(v161 + 64);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v185.fields.currentCryptoKey = v164;
            *(_QWORD *)&v185.fields.fakeValue = v163;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v185, 0LL);
            if ( v162 )
            {
              v165 = DataMasterBase_object__object__int___GetEntity(
                       v162,
                       (int32_t)Instance,
                       (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v165;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&this->fields.equipServantEntity,
                (int64_t)v165,
                v166,
                v167,
                v168,
                v169,
                v170,
                v171);
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v172 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v172 )
                  {
                    v173 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
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
                          sub_1C13CC8(
                            (PartyOrganizationUtility_o *)&this->fields.equipSvtLimitEntity,
                            (int64_t)v175,
                            v176,
                            v177,
                            v178,
                            v179,
                            v180,
                            v181);
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
      sub_1C13F80(Instance, v57);
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
  ServantStatusListViewItem__ModifyInfo(this, v182);
}


void __fastcall ServantStatusListViewItem___ctor_34259264(
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
  bool v12; // w22
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
  struct EquipTargetInfo_o **p_equipTargetInfo; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  Il2CppObject *Instance; // x0
  __int64 v57; // x1
  struct EquipTargetInfo_o *v58; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x21
  __int64 v60; // x22
  __int64 v61; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  ServantLimitMaster_o *v70; // x22
  struct ServantLimitEntity_o *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  ServantCommentMaster_o *v78; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  const MethodInfo *v134; // x2
  const MethodInfo *v135; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16

  if ( (byte_4BB0F0E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, equipTargetInfo);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BB0F0E = 1;
  }
  v12 = isNpcFollowerServantEquip;
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.userSvtEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEntity, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.servantLeaderInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantLeaderInfo, 0LL, v43, v44, v45, v46, v47, v48);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.equipTargetInfo,
    (int64_t)equipTargetInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v12;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  v58 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v61 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v136.fields.currentCryptoKey = v61;
  *(_QWORD *)&v136.fields.fakeValue = v60;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v136, 0LL);
  if ( !v59 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v59,
             (int32_t)Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.svtEntity, (int64_t)Entity, v64, v65, v66, v67, v68, v69);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v70 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                               (*p_equipTargetInfo)->fields.svtId,
                               0LL);
  if ( !*p_equipTargetInfo
    || !v70
    || (v71 = ServantLimitMaster__GetEntity(v70, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v71,
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.svtLimitEntity,
          (int64_t)v71,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v78 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                     (*p_svtEntity)[1],
                                     0LL),
        !v78) )
  {
LABEL_16:
    sub_1C13F80(Instance, v57);
  }
  EntityList = ServantCommentMaster__GetEntityList(v78, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.svtCommentEntityList,
    (int64_t)EntityList,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.commandCodeIdList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.commandCodeIdList, 0LL, v86, v87, v88, v89, v90, v91);
  this->fields.costumeIds = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.costumeIds, 0LL, v92, v93, v94, v95, v96, v97);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.cardSelectList, 0LL, v98, v99, v100, v101, v102, v103);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dispSelectList, 0LL, v104, v105, v106, v107, v108, v109);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
    0LL,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  this->fields.commandCardParam = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.commandCardParam, 0LL, v116, v117, v118, v119, v120, v121);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconSelectList, 0LL, v122, v123, v124, v125, v126, v127);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.portraitSelectList, 0LL, v128, v129, v130, v131, v132, v133);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v134);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v135);
}


void __fastcall ServantStatusListViewItem___ctor_34260092(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4BB0F0F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, commandCode);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB0F0F = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.userCommandCodeEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
    (int64_t)commandCode,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v33 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v32 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v33;
  *(_QWORD *)&v40.fields.fakeValue = v32;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v40, 0LL);
  if ( !v31 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v31,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_3238670 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeCollectionEntity,
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
LABEL_10:
    sub_1C13F80(Instance, v29);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_34260468(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t Instance; // x0
  __int64 v23; // x1
  __int128 v24; // q1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v32; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x21
  __int64 v34; // x22
  __int64 v35; // x23
  Il2CppObject *Entity; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x21
  struct UserCommandCodeEntity_o *v45; // x8
  __int128 v46; // q0
  __int64 v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4BB0F10 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCode);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v9);
    sub_1C13D24(&NetworkManager_TypeInfo, v10);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BB0F10 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v16, v17, v18, v19, v20, v21);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_46;
  v24 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v71 = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v71, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_46;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v25, v26, v27, v28, v29, v30);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity,
    (int64_t)userCommandCode,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v32 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v35 = *(_QWORD *)&v32->fields.commandCodeId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v73.fields.currentCryptoKey = v35;
  *(_QWORD *)&v73.fields.fakeValue = v34;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v73, 0LL);
  if ( !v33 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v33,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
    (int64_t)Entity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_46;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v44 )
    goto LABEL_46;
  DataMasterBase_object__object__int___TryGetEntity(
    v44,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_3238670 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v23);
    byte_4BAF1E5 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v45 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v46 = *(_OWORD *)&v45->fields.userId.fields.fakeValue;
  v47 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v45->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v70 = v72;
  if ( v47 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v70, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v54 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v55 = *(_OWORD *)&v54->fields.userId.fields.fakeValue;
        v56 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v54->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v72.fields.fakeValue = v55;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v69 = v72;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v69, 0LL);
        v57 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v58 = Instance;
          v60 = *(_QWORD *)&v57->fields.commandCodeId.fields.currentCryptoKey;
          v59 = *(_QWORD *)&v57->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v74.fields.currentCryptoKey = v60;
          *(_QWORD *)&v74.fields.fakeValue = v59;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v74, 0LL);
          if ( v56 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v56, v58, Instance, 0LL);
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_46:
    sub_1C13F80(Instance, v23);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  EntityDefinitely = 0LL;
LABEL_37:
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)p_userCommandCodeCollectionEntity,
    (int64_t)EntityDefinitely,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v63 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v63 )
    goto LABEL_46;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v63, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v64 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
  v66 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v72.fields.fakeValue = v65;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v68 = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v68, 0LL);
  if ( !v66 )
    goto LABEL_46;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v66, Instance, 0LL);
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isUse = IsAttach;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
    goto LABEL_46;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_34261592(
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x20
  __int64 v29; // x21
  __int64 v30; // x22
  Il2CppObject *Entity; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4BB0F11 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCodeCollection);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB0F11 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)SelfUserGame, v12, v13, v14, v15, v16, v17);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, 0LL, v20, v21, v22, v23, v24, v25);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeCollectionEntity,
    (int64_t)userCommandCodeCollection,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v27 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v30 = *(_QWORD *)&v27->fields.commandCodeId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&v27->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v30;
  *(_QWORD *)&v40.fields.fakeValue = v29;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v40, 0LL);
  if ( !v28 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v28,
             (int32_t)Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity,
    (int64_t)Entity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v39)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v39,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_3238670 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1C13F80(Instance, v19);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v13; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v15; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *v16; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v17; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v18; // x21

  if ( (byte_4BB0F14 & 1) == 0 )
  {
    sub_1C13D24(&ServantStatusListViewItem_LimitCountCache_TypeInfo, ignoreRandomSettings);
    byte_4BB0F14 = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1C13F70(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0LL);
  this->fields.currentLimitCountCache = v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.currentLimitCountCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
    v15 = 0LL;
  else
    v15 = this->fields.currentLimitCountCache;
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
    v16 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 1, 0LL);
    if ( !v16 )
      goto LABEL_22;
    v16->fields.iconLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v17 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getCommandCardLimitCount(userSvtEntity, 1, 0LL);
    if ( !v17 )
      goto LABEL_22;
    v17->fields.commandCardLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v18 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(userSvtEntity, 1, 0LL);
    if ( !v18 )
      goto LABEL_22;
    v18->fields.dispLimitCount = (int)userSvtEntity;
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
    if ( !v15 || (v15->fields.cardLimitCount = this->fields.cardLimitCount, !currentLimitCountCache) )
LABEL_22:
      sub_1C13F80(userSvtEntity, v13);
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
  sub_1C13CC8(
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
  sub_1C13CC8(
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
  sub_1C13CC8(
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
  sub_1C13CC8(
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
  sub_1C13CC8((PartyOrganizationUtility_o *)lvList, (int64_t)appendPassiveSkillLvList, v36, v37, v38, v39, v40, v41);
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
      sub_1C13F80(this, checkTransform);
  }
  return TransformedServant_k__BackingField->fields.cardIds;
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
  sub_1C13CC8(
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
  __int64 v12; // x1
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x28
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct ServantEntity_o *svtEntity; // x8
  struct UserServantCollectionEntity_o *v17; // x9
  FriendshipMaster_o *v18; // x24
  int32_t friendshipId; // w25
  __int64 v20; // x26
  __int64 v21; // x27
  struct ServantEntity_o *v22; // x8
  struct UserServantCollectionEntity_o *v23; // x9
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4BB0F2B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_FriendshipMaster___, rank);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4BB0F2B = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_FriendshipMaster___);
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_19;
  v17 = this->fields.userSvtCollectionEntity;
  if ( !v17 )
    goto LABEL_19;
  v18 = (FriendshipMaster_o *)Instance;
  friendshipId = svtEntity->fields.friendshipId;
  v20 = *(_QWORD *)&v17->fields.friendship.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v17->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v20;
  *(_QWORD *)&v26.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v26, 0LL);
  v22 = this->fields.svtEntity;
  if ( !v22 )
    goto LABEL_19;
  v23 = this->fields.userSvtCollectionEntity;
  if ( !v23 || !v18 )
    goto LABEL_19;
  FriendshipMaster__GetFriendshipRank(
    v18,
    friendshipId,
    (int32_t)Instance,
    v23->fields.friendshipExceedCount + v22->fields.maxFriendshipRank,
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
    sub_1C13F80(Instance, v15);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)tdInfo, (int64_t)v8, (int64_t)method, v3, v4, v5, v6, v7);
  return this->fields.isTdResult;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo_34269920(
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

  if ( (byte_4BB0F2A & 1) == 0 )
  {
    sub_1C13D24(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4BB0F2A = 1;
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
      sub_1C13F80(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1C13F70(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1C13CC8((PartyOrganizationUtility_o *)tdInfo, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
    sub_1C13CC8(
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
    sub_1C13CC8(
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
    sub_1C13CC8(
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
    sub_1C13CC8(
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
  sub_1C13CC8((PartyOrganizationUtility_o *)explanationList, (int64_t)v35, v20, v21, v22, v23, v24, v25);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_34269424(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x23
  BalanceConfig_c *v16; // x0
  System_Int32_array *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_array *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_String_array *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BB0F29 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, idList);
    sub_1C13D24(&int___TypeInfo, v11);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_1C13D24(&string___TypeInfo, v13);
    byte_4BB0F29 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      sub_1C13F80(svtEntity, idList);
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
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v17 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
    *idList = v17;
    sub_1C13CC8((PartyOrganizationUtility_o *)idList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    v24 = (System_String_array *)sub_1C13DCC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v24;
    sub_1C13CC8((PartyOrganizationUtility_o *)titleList, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    v31 = (System_String_array *)sub_1C13DCC(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v31;
    sub_1C13CC8((PartyOrganizationUtility_o *)explanationList, (int64_t)v31, v32, v33, v34, v35, v36, v37);
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)skillInfoList,
    (int64_t)v10,
    checkTransform,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo_34269012(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UserServantEntity_o *userSvtEntity; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  BalanceConfig_c *v10; // x0
  SkillInfo_array *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB0F28 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1C13D24(&SkillInfo___TypeInfo, v7);
    byte_4BB0F28 = 1;
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
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v10 = BalanceConfig_TypeInfo;
      }
      v11 = (SkillInfo_array *)sub_1C13DCC(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
      *skillInfoList = v11;
      sub_1C13CC8((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)tdInfo, (int64_t)transformedTdInfo, (int64_t)method, v3, v4, v5, v6, v7);
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
  ServantLimitAddMaster_o *Master_object; // x0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v29; // x1
  int32_t illustratorId; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v35; // x8
  ServantLimitAddMaster_o *v36; // x23
  __int64 v37; // x26
  __int64 v38; // x27
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_o *monitor; // x1
  Il2CppObject *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x1
  __int64 *v55; // x8
  ServantLimitAddEntity_o *v57; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4BB0F2C & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, illust);
    sub_1C13D24(&Method_DataManager_GetMasterData_CvMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_IllustratorMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v14);
    sub_1C13D24(&DataManager_TypeInfo, v15);
    sub_1C13D24(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__, v16);
    sub_1C13D24(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v17);
    sub_1C13D24(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v18);
    sub_1C13D24(&ImageLimitCount_TypeInfo, v19);
    sub_1C13D24(&LocalizationManager_TypeInfo, v20);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C13D24(&StringLiteral_15046/*"UNIT_ENEMY"*/, v23);
    sub_1C13D24(&StringLiteral_9477/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/, v24);
    sub_1C13D24(&StringLiteral_1/*""*/, v25);
    byte_4BB0F2C = 1;
  }
  v57 = 0LL;
  entity = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C13CC8(
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
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        currentCardLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v35 = this->fields.svtEntity;
      if ( v35 )
      {
        v36 = Master_object;
        v38 = *(_QWORD *)&v35->fields.id.fields.currentCryptoKey;
        v37 = *(_QWORD *)&v35->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v59.fields.currentCryptoKey = v38;
        *(_QWORD *)&v59.fields.fakeValue = v37;
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                     v59,
                                                     0LL);
        if ( v36 )
        {
          if ( ServantLimitAddMaster__TryGetEntity(v36, &v57, (int32_t)Master_object, currentCardLimitCount, 0LL) )
          {
            Master_object = (ServantLimitAddMaster_o *)v57;
            if ( !v57 )
              goto LABEL_44;
            cvId = ServantLimitAddEntity__GetOverwriteCvId(v57, cvId, 0LL);
          }
          if ( cvId < 1 )
            goto LABEL_28;
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v39 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_3238624 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v39 )
              {
                monitor = (System_String_o *)v39[1].monitor;
                *voice = monitor;
                sub_1C13CC8((PartyOrganizationUtility_o *)voice, (int64_t)monitor, v40, v41, v42, v43, v44, v45);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1C13F80(Master_object, v27);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v29);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_3238670 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !illustratorId )
      {
LABEL_38:
        v55 = &StringLiteral_9477/*"NOT_SEND_TRACK_EVENT_AT_WAR_IDS"*/;
LABEL_42:
        v54 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
        *illust = v54;
        goto LABEL_43;
      }
    }
LABEL_41:
    v55 = &StringLiteral_15046/*"UNIT_ENEMY"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v47 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_3238624 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v47 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_41;
  }
  v54 = (System_String_o *)v47[1].monitor;
  *illust = v54;
LABEL_43:
  sub_1C13CC8((PartyOrganizationUtility_o *)illust, (int64_t)v54, v48, v49, v50, v51, v52, v53);
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
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB0F2F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB0F2F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1C13F80(Instance, v10);
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
  __int64 v3; // x1
  TreasureDvcInfo_o *v4; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x22
  bool TreasureDeviceInfo; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *equipTargetInfo; // x0

  if ( (byte_4BB0F15 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_1C13D24(&TreasureDvcInfo_TypeInfo, v3);
    byte_4BB0F15 = 1;
  }
  this->fields.isTdResult = 0;
  v4 = (TreasureDvcInfo_o *)sub_1C13F70(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v4, 0LL);
  this->fields.tdInfo = v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.tdInfo, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v11);
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
    sub_1C13F80(svtEntity, v12);
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
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  ServantStatusListViewItem__SetTransformData(this, v12);
}


void __fastcall ServantStatusListViewItem__RefreshLimitCountWithRandom(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  RandomLimitCountManager_c *v6; // x0
  UserServantEntity_o *userSvtEntity; // x21
  __int64 v8; // x20
  int32_t ownRandomSettingButtonIndex; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // kr00_16
  __int64 v11; // x8
  __int64 v12; // x9
  const MethodInfo *v13; // x2
  int32_t v14; // w21
  BalanceConfig_c *v15; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t dispLimitCount; // w21
  struct ServantStatusListViewItem_LimitCountCache_o *v18; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BB0F12 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, v4);
    sub_1C13D24(&UserServantEntity_TypeInfo, v5);
    byte_4BB0F12 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  v6 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v6 = RandomLimitCountManager_TypeInfo;
  }
  if ( v6->static_fields->enableRandomLimitCount )
  {
    if ( this->fields.isEnableOwnRandomSetting )
    {
      userSvtEntity = this->fields.userSvtEntity;
      v8 = sub_1C13F70(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41357996((UserServantEntity_o *)v8, userSvtEntity, 0LL);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0LL);
      if ( !v8 )
        sub_1C13F80(*(_QWORD *)&v10.fields.currentCryptoKey, *(_QWORD *)&v10.fields.fakeValue);
      v11 = *(_QWORD *)(v8 + 80);
      v12 = *(_QWORD *)(v8 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 208) = v10;
      *(_QWORD *)&v19.fields.currentCryptoKey = v11;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v19, 0LL);
      v15 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      if ( v14 == v15->static_fields->ServantIdMashu1 )
      {
        currentLimitCountCache = this->fields.currentLimitCountCache;
        if ( currentLimitCountCache )
        {
          dispLimitCount = currentLimitCountCache->fields.dispLimitCount;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                             dispLimitCount,
                                                                             0LL);
        }
      }
      ServantStatusListViewItem__SetLimitCountInfo(this, (UserServantEntity_o *)v8, v13);
    }
    else
    {
      v18 = this->fields.currentLimitCountCache;
      if ( v18 )
      {
        this->fields.cardLimitCount = v18->fields.cardLimitCount;
        this->fields.iconLimitCount = v18->fields.iconLimitCount;
        this->fields.commandCardLimitCount = v18->fields.commandCardLimitCount;
        this->fields.dispLimitCount = v18->fields.dispLimitCount;
        this->fields.portraitLimitCount = v18->fields.portraitLimitCount;
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  int64_t v17; // x1
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v20; // x0
  System_Collections_Generic_List_int__o *v21; // x20
  struct System_Int32_array *v22; // x0
  struct System_Int32_array **v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  struct System_Int32_array *v33; // x0

  if ( (byte_4BB0F30 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&int___TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor___77417304, v7);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4BB0F30 = 1;
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
      v20 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
      v21 = v20;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_56687228(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_360FA7C *)Method_System_Collections_Generic_List_int___ctor___77417304);
      else
        System_Collections_Generic_List_int____ctor(
          v20,
          (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v21 )
      {
        items = v21->fields._items;
        method = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&svtEntity->fields.starRate + 864LL);
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v21->fields._version;
        if ( items )
        {
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              (int32_t)method,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = size + 1;
            items->m_Items[size + 1] = (int)method;
          }
          v33 = System_Collections_Generic_List_int___ToArray(
                  v21,
                  (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
          this->fields.costumeAndOtherIds = v33;
          v17 = (int64_t)v33;
          p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
          goto LABEL_25;
        }
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v22 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v22;
      v23 = &this->fields.costumeAndOtherIds;
      sub_1C13CC8((PartyOrganizationUtility_o *)v23, (int64_t)v22, v24, v25, v26, v27, v28, v29);
      svtEntity = (ServantEntity_o *)*(v23 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v23, 0, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1C13F80(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v17 = 0LL;
LABEL_25:
  sub_1C13CC8((PartyOrganizationUtility_o *)p_costumeAndOtherIds, v17, v10, v11, v12, v13, v14, v15);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_equipUserSvtEntity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  __int64 v21; // x22
  __int64 v22; // x23
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v25; // x8
  ServantStatusListViewItem_o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  Il2CppObject *Entity; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  ServantStatusListViewItem_o *v36; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  int32_t v38; // w20
  ServantLimitEntity_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Int64_array *v46; // x8
  PartyOrganizationListViewItem_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  BalanceConfig_c *v60; // x0
  int64_t v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v9 = this;
  if ( (byte_4BB0F16 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, equipUserSvtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_1C13D24(&DataManager_TypeInfo, v13);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    this = (ServantStatusListViewItem_o *)sub_1C13D24(&SkillInfo___TypeInfo, v18);
    byte_4BB0F16 = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v9->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v9->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_323ABCC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v20 = *p_equipUserSvtEntity;
      if ( !*p_equipUserSvtEntity )
        goto LABEL_38;
      v22 = *(_QWORD *)&v20[5].fields.currentCryptoKey;
      v21 = *(_QWORD *)&v20[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v68.fields.currentCryptoKey = v22;
      *(_QWORD *)&v68.fields.fakeValue = v21;
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                              v68,
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
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
            v25 = *p_equipUserSvtEntity;
            if ( *p_equipUserSvtEntity )
            {
              v26 = this;
              v28 = *(_QWORD *)&v25[5].fields.currentCryptoKey;
              v27 = *(_QWORD *)&v25[5].fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v69.fields.currentCryptoKey = v28;
              *(_QWORD *)&v69.fields.fakeValue = v27;
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                      v69,
                                                      0LL);
              if ( v26 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v26,
                           (int32_t)this,
                           (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v9->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&v9->fields.equipServantEntity,
                  (int64_t)Entity,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v36 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0LL);
                    v37 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v38 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                              v37[6],
                                                              0LL);
                      if ( v36 )
                      {
                        v39 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v36, v38, (int32_t)this, 0LL);
                        v9->fields.equipSvtLimitEntity = v39;
                        sub_1C13CC8(
                          (PartyOrganizationUtility_o *)&v9->fields.equipSvtLimitEntity,
                          (int64_t)v39,
                          v40,
                          v41,
                          v42,
                          v43,
                          v44,
                          v45);
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
          sub_1C13F80(this, equipUserSvtId);
        }
LABEL_39:
        sub_1C13F88(this, equipUserSvtId);
      }
    }
  }
  v46 = v9->fields.equipIdList;
  if ( v46 )
  {
    if ( !v46->max_length )
      goto LABEL_39;
    v46->m_Items[0] = 0LL;
  }
  v47 = v9->fields.memberItem;
  if ( v47 && !v47->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v47, 0LL, 0LL);
  v9->fields.equipTargetId1 = 0LL;
  v9->fields.equipUserSvtEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v9->fields.equipUserSvtEntity, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  v9->fields.equipServantEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v9->fields.equipServantEntity, 0LL, v48, v49, v50, v51, v52, v53);
  v9->fields.equipSvtLimitEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v9->fields.equipSvtLimitEntity, 0LL, v54, v55, v56, v57, v58, v59);
  v60 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
  }
  v61 = sub_1C13DCC(SkillInfo___TypeInfo, (unsigned int)v60->static_fields->SvtEquipSkillListMax);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v61;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v9->fields.equipSkillInfoList, v61, v62, v63, v64, v65, v66, v67);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w21
  int32_t v20; // w0
  struct System_Int32_array *SelectList; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t v28; // w22
  int32_t v29; // w0
  struct System_Int32_array *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int32_t v44; // w22
  int32_t v45; // w0
  struct System_Int32_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t v55; // w20
  int32_t v56; // w0
  struct System_Int32_array *v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4BB0F13 & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, entity);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4BB0F13 = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0LL);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0LL);
    v7 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v64.fields.currentCryptoKey = v7;
    *(_QWORD *)&v64.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v64, 0LL);
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v11 = v9;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardSelectList = ImageLimitCount__GetCardSelectList(v8, v11, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.cardSelectList,
      (int64_t)CardSelectList,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(entity->fields.svtId, 0LL);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(entity->fields.limitCount, 0LL);
    SelectList = ImageLimitCount__GetSelectList(v19, v20, this->fields.costumeIds, 0LL);
    this->fields.dispSelectList = SelectList;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.dispSelectList,
      (int64_t)SelectList,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(entity->fields.svtId, 0LL);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(entity->fields.limitCount, 0LL);
    v30 = ImageLimitCount__GetSelectList(v28, v29, this->fields.costumeIds, 0LL);
    this->fields.commandCardSelectList = v30;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.commandCardSelectList,
      (int64_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0LL);
    this->fields.commandCardParam = CommandCardParam;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.commandCardParam,
      (int64_t)CommandCardParam,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(entity->fields.svtId, 0LL);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(entity->fields.limitCount, 0LL);
    v46 = ImageLimitCount__GetCardSelectList(v44, v45, this->fields.costumeIds, 0LL);
    this->fields.iconSelectList = v46;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.iconSelectList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(entity->fields.svtId, 0LL);
    v54 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v55 = v53;
    *(_QWORD *)&v65.fields.currentCryptoKey = v54;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v65, 0LL);
    v57 = ImageLimitCount__GetSelectList(v55, v56, this->fields.costumeIds, 0LL);
    this->fields.portraitSelectList = v57;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.portraitSelectList,
      (int64_t)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
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
  if ( (byte_4BB0F27 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C13D24(&UserServantEntity_TypeInfo, *(_QWORD *)&index);
    byte_4BB0F27 = 1;
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
        sub_1C13F88(this, *(_QWORD *)&index);
      LIMIT_SUPPORT_NOT_ASSIGN = supportRandomLimitCountList->m_Items[index + 1];
      goto LABEL_10;
    }
  }
}


void __fastcall ServantStatusListViewItem__SetTransformData(
        ServantStatusListViewItem_o *this,
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
  ServantEntity_o *svtEntity; // x0
  Il2CppObject *Master_object; // x20
  const MethodInfo *v13; // x1
  void *SvtId; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  ServantTransformEntity_o *v22; // x8
  struct System_String_o *befTitle; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_String_o *aftTitle; // x1
  Il2CppObject *v31; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v41; // x22
  const MethodInfo *v42; // x1
  ServantLimitEntity_o *v43; // x20
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t lv; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  struct EquipTargetInfo_o *equipTargetInfo; // x9
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  _DWORD *v54; // x21
  int32_t atkMax; // w24
  int32_t atkBase; // w25
  int v57; // w23
  CheckCombineResStatus_c *v58; // x0
  _DWORD *v59; // x9
  int32_t LOT_RATE; // w8
  int32_t v61; // w23
  int32_t adjustAtk; // w24
  struct ServantLeaderInfo_o *v63; // x10
  BalanceConfig_c *v64; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v66; // w8
  int32_t StatusUpAdjustHp; // w10
  UserServantEntity_o *v68; // x0
  UserServantEntity_o *v69; // x22
  int32_t v70; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  ServantLeaderInfo_o *v72; // x0
  ServantLeaderInfo_o *v73; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB0F31 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&CheckCombineResStatus_TypeInfo, v3);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantExpMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantTransformMaster___, v7);
    sub_1C13D24(&DataManager_TypeInfo, v8);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    byte_4BB0F31 = 1;
  }
  entity = 0LL;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = (void *)ServantStatusListViewItem__get_SvtId(this, v13);
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
      v22 = entity;
      if ( !entity )
        goto LABEL_57;
      this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
      this->fields._TransformedServantDispLimitCount_k__BackingField = v22->fields.aftDispLimitCount - 1;
      befTitle = v22->fields.befTitle;
      this->fields.transformNameBefore = befTitle;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.transformNameBefore,
        (int64_t)befTitle,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( !entity )
        goto LABEL_57;
      aftTitle = entity->fields.aftTitle;
      this->fields.transformNameAfter = aftTitle;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.transformNameAfter,
        (int64_t)aftTitle,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      this->fields._IsTransformServant_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SvtId = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !SvtId )
        goto LABEL_57;
      v31 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
              this->fields._TransformedSvtId_k__BackingField,
              (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
      this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v31;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields._TransformedServant_k__BackingField,
        (int64_t)v31,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v39 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
      v41 = (ServantLimitMaster_o *)v39;
      SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v42);
      if ( !v41 )
        goto LABEL_57;
      v43 = ServantLimitMaster__GetEntity(v41, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0LL);
      SvtId = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantExpMaster___);
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
      if ( !v43 )
        goto LABEL_57;
      v54 = SvtId;
      if ( !SvtId )
        goto LABEL_57;
      atkBase = v43->fields.atkBase;
      atkMax = v43->fields.atkMax;
      v57 = *((_DWORD *)SvtId + 7);
      v58 = CheckCombineResStatus_TypeInfo;
      if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
        v58 = CheckCombineResStatus_TypeInfo;
      }
      v59 = this->fields.userSvtEntity;
      LOT_RATE = v58->static_fields->LOT_RATE;
      v61 = v57 * (atkMax - atkBase) / LOT_RATE + v43->fields.atkBase;
      this->fields.transformedAtk = v61;
      if ( v59 )
      {
        adjustAtk = v59[68];
      }
      else
      {
        v63 = this->fields.servantLeaderInfo;
        if ( v63 )
          adjustAtk = v63->fields.adjustAtk;
        else
          adjustAtk = 0;
      }
      v64 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v64 = BalanceConfig_TypeInfo;
        v59 = this->fields.userSvtEntity;
        LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
      }
      static_fields = v64->static_fields;
      this->fields.transformedAtk = v61 + static_fields->StatusUpAdjustAtk * adjustAtk;
      v66 = v54[7] * (v43->fields.hpMax - v43->fields.hpBase) / LOT_RATE + v43->fields.hpBase;
      if ( v59 )
      {
        LODWORD(v59) = v59[69];
      }
      else
      {
        v59 = this->fields.servantLeaderInfo;
        if ( v59 )
          LODWORD(v59) = v59[22];
      }
      StatusUpAdjustHp = static_fields->StatusUpAdjustHp;
      this->fields.transformedServantLimitEntity = v43;
      this->fields.transformedHp = v66 + StatusUpAdjustHp * (_DWORD)v59;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.transformedServantLimitEntity,
        (int64_t)v43,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      v68 = this->fields.userSvtEntity;
      if ( v68 )
      {
        UserServantEntity__GetTransformedSkillInfo(
          v68,
          &this->fields.transformedSkillInfoList,
          this->fields._TransformedSvtId_k__BackingField,
          -1,
          this->fields._TransformedServantDispLimitCount_k__BackingField,
          1,
          0,
          -1,
          0LL);
        v69 = this->fields.userSvtEntity;
        v70 = this->fields._TransformedSvtId_k__BackingField;
        TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
        SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( SvtId )
        {
          if ( v69 )
          {
            UserServantEntity__GetTransformedPassiveSkillInfo(
              v69,
              &this->fields.transformedPassiveSkillIdList,
              &this->fields.transformedPassiveSkillTitleMessageList,
              &this->fields.transformedPassiveSkillExplanationMessageList,
              v70,
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
        sub_1C13F80(SvtId, v15);
      }
      v72 = this->fields.servantLeaderInfo;
      if ( v72 )
      {
        ServantLeaderInfo__GetTransformedSkillInfo(
          v72,
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
        v73 = this->fields.servantLeaderInfo;
        this->fields.transformedAtk = (int)SvtId;
        if ( !v73 )
          goto LABEL_57;
        this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v73, 0LL);
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
  ServantCommentEntity_array *Master_object; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  _DWORD *klass; // x8
  PartyOrganizationUtility_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  int64_t v19; // x20
  int v20; // w9
  unsigned int v21; // w10
  unsigned int v22; // w21
  char v23; // w21

  if ( (byte_4BB0F2E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    byte_4BB0F2E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
  v19 = (int64_t)Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_18:
    v23 = 0;
    goto LABEL_21;
  }
  if ( !Master_object )
LABEL_17:
    sub_1C13F80(Master_object, v9);
  v20 = klass[6];
  if ( v20 != Master_object->max_length )
  {
    v23 = 1;
    goto LABEL_21;
  }
  if ( v20 < 1 )
    goto LABEL_18;
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= klass[6] || (v22 = v21, v21 >= v20) )
      sub_1C13F88(Master_object, v9);
    Master_object = *(ServantCommentEntity_array **)&klass[2 * v21 + 8];
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, _QWORD, Il2CppMethodPointer))Master_object->obj.klass->vtable[0].method)(
                                                    Master_object,
                                                    *(_QWORD *)(v19 + 8LL * (int)v21 + 32),
                                                    Master_object->obj.klass->vtable[1].methodPtr);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      break;
    v20 = *(_DWORD *)(v19 + 24);
    v21 = v22 + 1;
    if ( (int)(v22 + 1) >= v20 )
      break;
    klass = p_svtCommentEntityList->klass;
    if ( !p_svtCommentEntityList->klass )
      goto LABEL_17;
  }
  v23 = (unsigned __int8)Master_object ^ 1;
LABEL_21:
  p_svtCommentEntityList->klass = (PartyOrganizationUtility_c *)v19;
  sub_1C13CC8(p_svtCommentEntityList, v19, v10, v11, v12, v13, v14, v15);
  return v23 & 1;
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB0F18 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB0F18 = 1;
  }
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    return 0;
  v5 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v7, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41625188(questRestrictionInfo, userSvtEntity, 0LL);
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
  if ( (byte_4BB0F1E & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C13D24(&ImageLimitCount_TypeInfo, method);
    byte_4BB0F1E = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1C13F80(this, method);
    TransformedServantDispLimitCount_k__BackingField = v2->fields._TransformedServantDispLimitCount_k__BackingField;
    limitMax = TransformedServant_k__BackingField->fields.limitMax;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41625188(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41625188(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41625188(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41625188(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB0F25 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB0F25 = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    v5 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v5;
    *(_QWORD *)&v9.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v9, 0LL);
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
    sub_1C13F80(0LL, method);
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

  if ( (byte_4BB0F1D & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F1D = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  ManualSetCommandCardLimit = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
LABEL_17:
    sub_1C13F80(ManualSetCommandCardLimit, method);
  }
  ManualSetCommandCardLimit = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                                             this,
                                                             method);
  if ( !userSvtEntity )
    goto LABEL_17;
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

  if ( (byte_4BB0F1B & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F1B = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  ManualSetDispLimitCount = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
LABEL_17:
    sub_1C13F80(ManualSetDispLimitCount, method);
  }
  ManualSetDispLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_17;
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

  if ( (byte_4BB0F20 & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F20 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  ManualSetIconLimitCount = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
LABEL_17:
    sub_1C13F80(ManualSetIconLimitCount, method);
  }
  ManualSetIconLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_17;
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

  if ( (byte_4BB0F22 & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F22 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  ManualSetPortraitLimitCount = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
LABEL_17:
    sub_1C13F80(ManualSetPortraitLimitCount, method);
  }
  ManualSetPortraitLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetPortraitLimitCount(
                                                               this,
                                                               method);
  if ( !userSvtEntity )
    goto LABEL_17;
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

  if ( (byte_4BB0F24 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB0F24 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return 0;
  v5 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  v4 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v7, 0LL) != this->fields.supportRandomLimitCount;
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

  if ( (byte_4BB0F19 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB0F19 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v5;
    *(_QWORD *)&v10.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v10, 0LL);
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
    sub_1C13F80(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C13F80(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4BB0F1A & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F1A = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1C13F80(v3, method);
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

  if ( (byte_4BB0F1F & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F1F = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1C13F80(v3, method);
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

  if ( (byte_4BB0F1C & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F1C = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1C13F80(v3, method);
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

  if ( (byte_4BB0F21 & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F21 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1C13F80(v3, method);
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

  if ( (byte_4BB0F23 & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB0F23 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, method);
    byte_4BB05D4 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount && this->fields.isEnableOwnRandomSetting )
  {
    currentLimitCountCache = this->fields.currentLimitCountCache;
    if ( !currentLimitCountCache )
      sub_1C13F80(v3, method);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB0F17 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4BB0F17 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    return 0;
  v5 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v7, 0LL);
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedAgility(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C13F80(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedDefense(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C13F80(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedLuck(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C13F80(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedMagic(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C13F80(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedNp(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C13F80(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedPower(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C13F80(this, method);
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
  ServantStatusListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  _QWORD *p_klass; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4BB0F2D & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4BB0F2D = 1;
  }
  userSvtEntity = v2->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v4 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v9.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v8 = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v8, 0LL);
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
        sub_1C13F80(this, method);
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
  if ( (byte_4BB0F26 & 1) == 0 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, value);
    byte_4BB0F26 = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4BB05D4 )
  {
    sub_1C13D24(&RandomLimitCountManager_TypeInfo, value);
    byte_4BB05D4 = 1;
  }
  v5 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TransformedServant_k__BackingField = value;
  sub_1C13CC8(
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