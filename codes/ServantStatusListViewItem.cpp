void __fastcall ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int64_t Instance; // x0
  __int64 v14; // x1
  struct PartyOrganizationListViewItem_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  char v18; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v25; // q0
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  struct PartyOrganizationListViewItem_o *v34; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x21
  __int64 v38; // x22
  __int64 v39; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  ServantLimitMaster_o *v44; // x22
  int32_t v45; // w23
  struct ServantLimitEntity_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  ServantCommentMaster_o *v49; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // q1
  UserServantCollectionMaster_o *v55; // x22
  int64_t v56; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct PartyOrganizationListViewItem_o *v60; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_40175344; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  const MethodInfo *v70; // x1
  struct UserServantCollectionEntity_o *v71; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v73; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v75; // x8
  _BOOL8 IsChoice; // x0
  __int64 v77; // x1
  const MethodInfo *v78; // x2
  struct System_Int64_array *v79; // x8
  int64_t v80; // x1
  struct UserServantCollectionEntity_o *v81; // x8
  int32_t v82; // w2
  int32_t v83; // w3
  bool IsNameTrue; // w9
  UserServantEntity_o *v85; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v87; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v89; // x8
  int32_t v90; // w0
  UserServantEntity_o *v91; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v93; // x2
  UserServantEntity_o *v94; // x0
  int32_t v95; // w0
  UserServantEntity_o *v96; // x8
  int32_t v97; // w0
  UserServantEntity_o *v98; // x1
  const MethodInfo *v99; // x1
  const MethodInfo *v100; // x2
  RandomLimitCountManager_c *v101; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_4A5756F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5756F = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v11, v12);
  if ( !partyItem )
    goto LABEL_73;
  v15 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberItem, (int32_t)v15, v16, v17);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
  {
    v18 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    v18 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v18;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v20, v21);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_73;
  v25 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  memberItem = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v25;
  if ( !memberItem )
    goto LABEL_73;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v22, v23);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_73;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v30, v31);
  v34 = this->fields.memberItem;
  if ( !v34 )
    goto LABEL_73;
  questRestrictionInfo = v34->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v32,
    v33);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v36 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v39 = *(_QWORD *)&v36[5].fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v104.fields.currentCryptoKey = v39;
  *(_QWORD *)&v104.fields.fakeValue = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v104, 0LL);
  if ( !v37 )
    goto LABEL_73;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v37,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v44 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v45 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[6], 0LL);
  if ( !v44 )
    goto LABEL_73;
  v46 = ServantLimitMaster__GetEntity(v44, v45, Instance, 0LL);
  this->fields.svtLimitEntity = v46;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v46, v47, v48);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_73;
  v49 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_svtEntity)[1], 0LL);
  if ( !v49 )
    goto LABEL_73;
  EntityList = ServantCommentMaster__GetEntityList(v49, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v51, v52);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v53 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v54 = v53[4];
  v55 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v103.fields.currentCryptoKey = v53[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v103.fields.fakeValue = v54;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v102 = v103;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v102, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v56 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !v55 )
    goto LABEL_73;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v55, v56, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v58,
    v59);
  v60 = this->fields.memberItem;
  if ( !v60 )
    goto LABEL_73;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v60->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_73;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v62,
    v63);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_73;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_73;
  CostumeList_40175344 = UserServantCollectionEntity__getCostumeList_40175344(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_40175344;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_40175344, v68, v69);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v70);
  v71 = this->fields.userSvtCollectionEntity;
  if ( !v71 )
    goto LABEL_73;
  svtCommonFlag = v71->fields.svtCommonFlag;
  v73 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v73 )
    goto LABEL_73;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                   v73->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_73;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v75 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v75 )
    goto LABEL_73;
  IsChoice = UserServantEntity__IsChoice(v75, 0LL);
  v79 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v79 )
  {
    if ( !v79->max_length )
      sub_1B88814(IsChoice, v77);
    v80 = v79->m_Items[0];
  }
  else
  {
    v80 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v80, v78);
  v81 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v81 != 0LL;
  if ( !Instance )
LABEL_73:
    sub_1B8880C(Instance, v14);
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
  v85 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v85 != 0LL;
  if ( v85 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v85, 0LL);
    v85 = (UserServantEntity_o *)*p_userSvtEntity;
    v87 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v87 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v87;
  if ( !v85 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_56;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v85, 0LL);
  v89 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v89 )
  {
LABEL_56:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_57;
  }
  v90 = BasicHelper__DecryptValue_41109412(v89->fields.limitCountSupport, 0LL);
  v91 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v90;
  if ( v91 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v91, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_57:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v82,
    v83);
  v94 = this->fields.userSvtEntity;
  if ( v94 )
  {
    v95 = UserServantEntity__OwnRandomSettingSelectedButton(v94, 0LL);
    v96 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v95;
    if ( v96 )
    {
      v97 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v96, 0LL);
      v98 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_63;
    }
    v98 = 0LL;
  }
  else
  {
    v98 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v97 = 3;
LABEL_63:
  this->fields.supportRandomSettingButtonIndex = v97;
  ServantStatusListViewItem__SetLimitCountInfo(this, v98, v93);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
  }
  v101 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v101 = RandomLimitCountManager_TypeInfo;
  }
  if ( v101->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v100);
  ServantStatusListViewItem__ModifyInfo(this, v99);
}


void __fastcall ServantStatusListViewItem___ctor_32649840(
        ServantStatusListViewItem_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int64_t Instance; // x0
  __int64 v12; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v22; // q0
  struct PartyOrganizationListViewItem_o *v23; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct PartyOrganizationListViewItem_o *v31; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  ServantLimitMaster_o *v41; // x22
  int32_t v42; // w23
  struct ServantLimitEntity_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  ServantCommentMaster_o *v46; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // q1
  UserServantCollectionMaster_o *v52; // x22
  int64_t v53; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct PartyOrganizationListViewItem_o *v57; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_40175344; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  const MethodInfo *v67; // x1
  struct UserServantCollectionEntity_o *v68; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v70; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v72; // x8
  _BOOL8 IsChoice; // x0
  __int64 v74; // x1
  const MethodInfo *v75; // x2
  struct System_Int64_array *v76; // x8
  int64_t v77; // x1
  struct UserServantCollectionEntity_o *v78; // x8
  int32_t v79; // w2
  int32_t v80; // w3
  bool IsNameTrue; // w9
  UserServantEntity_o *v82; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v84; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v86; // x8
  int32_t v87; // w0
  UserServantEntity_o *v88; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v90; // x2
  UserServantEntity_o *v91; // x0
  int32_t v92; // w0
  UserServantEntity_o *v93; // x8
  int32_t v94; // w0
  UserServantEntity_o *v95; // x1
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x2
  RandomLimitCountManager_c *v98; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_4A57570 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57570 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.warBoardPartyItem, (int32_t)partyItem, v9, v10);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberItem, (int32_t)MemberItem, v14, v15);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v17, v18);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v22 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v23 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v22;
  if ( !v23 )
    goto LABEL_68;
  userServantEntity = v23->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v19, v20);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v27, v28);
  v31 = this->fields.memberItem;
  if ( !v31 )
    goto LABEL_68;
  questRestrictionInfo = v31->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v29,
    v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v33 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v36 = *(_QWORD *)&v33[5].fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v101.fields.currentCryptoKey = v36;
  *(_QWORD *)&v101.fields.fakeValue = v35;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v101, 0LL);
  if ( !v34 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v34,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v39, v40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v41 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v42 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[6], 0LL);
  if ( !v41 )
    goto LABEL_68;
  v43 = ServantLimitMaster__GetEntity(v41, v42, Instance, 0LL);
  this->fields.svtLimitEntity = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v43, v44, v45);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v46 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_svtEntity)[1], 0LL);
  if ( !v46 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v46, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v48, v49);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v50 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v51 = v50[4];
  v52 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v100.fields.currentCryptoKey = v50[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v100.fields.fakeValue = v51;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v99 = v100;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v99, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v53 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !v52 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v52, v53, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v55,
    v56);
  v57 = this->fields.memberItem;
  if ( !v57 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v57->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v59,
    v60);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_40175344 = UserServantCollectionEntity__getCostumeList_40175344(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_40175344;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_40175344, v65, v66);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v67);
  v68 = this->fields.userSvtCollectionEntity;
  if ( !v68 )
    goto LABEL_68;
  svtCommonFlag = v68->fields.svtCommonFlag;
  v70 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v70 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                   v70->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v72 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v72 )
    goto LABEL_68;
  IsChoice = UserServantEntity__IsChoice(v72, 0LL);
  v76 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v76 )
  {
    if ( !v76->max_length )
      sub_1B88814(IsChoice, v74);
    v77 = v76->m_Items[0];
  }
  else
  {
    v77 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v77, v75);
  v78 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v78 != 0LL;
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
    sub_1B8880C(Instance, v12);
  }
  IsNameTrue = 0;
LABEL_43:
  v82 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v82 != 0LL;
  if ( v82 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v82, 0LL);
    v82 = (UserServantEntity_o *)*p_userSvtEntity;
    v84 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v84 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v84;
  if ( !v82 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v82, 0LL);
  v86 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v86 )
  {
LABEL_51:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_52;
  }
  v87 = BasicHelper__DecryptValue_41109412(v86->fields.limitCountSupport, 0LL);
  v88 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v87;
  if ( v88 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v88, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v79,
    v80);
  v91 = this->fields.userSvtEntity;
  if ( v91 )
  {
    v92 = UserServantEntity__OwnRandomSettingSelectedButton(v91, 0LL);
    v93 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v92;
    if ( v93 )
    {
      v94 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v93, 0LL);
      v95 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_58;
    }
    v95 = 0LL;
  }
  else
  {
    v95 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v94 = 3;
LABEL_58:
  this->fields.supportRandomSettingButtonIndex = v94;
  ServantStatusListViewItem__SetLimitCountInfo(this, v95, v90);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
  }
  v98 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v98 = RandomLimitCountManager_TypeInfo;
  }
  if ( v98->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v97);
  ServantStatusListViewItem__ModifyInfo(this, v96);
}


void __fastcall ServantStatusListViewItem___ctor_32651480(
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t Instance; // x0
  __int64 v22; // x1
  bool v23; // w8
  __int128 v24; // q1
  int32_t v25; // w2
  int32_t v26; // w3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x24
  __int64 v35; // x26
  __int64 v36; // x27
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x24
  int32_t v39; // w2
  int32_t v40; // w3
  ServantLimitMaster_o *v41; // x26
  int32_t v42; // w27
  struct ServantLimitEntity_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  ServantCommentMaster_o *v46; // x26
  int32_t v47; // w27
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v51; // x8
  __int64 v52; // x26
  __int64 v53; // x27
  int32_t v54; // w0
  bool IsConvertOverwriteImage; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // q0
  int64_t v58; // x25
  int32_t v59; // w2
  int32_t v60; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v61; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // q0
  UserServantCollectionMaster_o *v63; // x25
  bool v64; // w20
  bool v65; // w29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  int64_t v67; // x26
  __int64 v68; // x27
  __int64 v69; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x25
  int32_t lv; // w26
  struct System_Int32_array *CostumeList_40175344; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  const MethodInfo *v82; // x1
  struct System_Int32_array *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w2
  int32_t v87; // w3
  int32_t v88; // w2
  int32_t v89; // w3
  struct UserServantCollectionEntity_o *v90; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v92; // x8
  __int64 v93; // x25
  __int64 v94; // x26
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w2
  int32_t v98; // w3
  UserServantEntity_o *v99; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  __int64 v102; // x1
  const MethodInfo *v103; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v104; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // q0
  UserDeckMaster_o *v106; // x23
  bool v107; // w8
  struct System_Int64_array *v108; // x9
  int64_t v109; // x1
  struct UserServantCollectionEntity_o *v110; // x8
  int32_t v111; // w2
  int32_t v112; // w3
  bool IsNameTrue; // w9
  UserServantEntity_o *v114; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v116; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v118; // x8
  int32_t v119; // w0
  UserServantEntity_o *v120; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v122; // x2
  UserServantEntity_o *v123; // x0
  int32_t v124; // w0
  UserServantEntity_o *v125; // x8
  int32_t v126; // w0
  UserServantEntity_o *v127; // x1
  const MethodInfo *v128; // x1
  const MethodInfo *v129; // x2
  RandomLimitCountManager_c *v130; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  v15 = isEnableServantQuest;
  v16 = canMoveCombine;
  if ( (byte_4A57571 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57571 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v19, v20);
  this->fields.isEnableServantQuest = v15;
  this->fields._CanMoveCombine_k__BackingField = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v23 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
    v23 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v23;
  if ( !userServant )
    goto LABEL_103;
  v24 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v135.fields.fakeValue = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v134 = v135;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v134, 0LL);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v25, v26);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v25, v26);
  this->fields.equipIdList = equipIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)equipIdList, v29, v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v31,
    v32);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v33 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v36 = *(_QWORD *)&v33[5].fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v136.fields.currentCryptoKey = v36;
  *(_QWORD *)&v136.fields.fakeValue = v35;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v136, 0LL);
  if ( !v34 )
    goto LABEL_103;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v34,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v39, v40);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v41 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v42 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[6], 0LL);
  if ( !v41 )
    goto LABEL_103;
  v43 = ServantLimitMaster__GetEntity(v41, v42, Instance, 0LL);
  this->fields.svtLimitEntity = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v43, v44, v45);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_103;
  v46 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v47 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[7], 0LL);
  if ( !v46 )
    goto LABEL_103;
  EntityList = ServantCommentMaster__GetEntityList(v46, v47, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v49, v50);
  if ( questRestrictionInfo )
  {
    v51 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v53 = *(_QWORD *)&v51[5].fields.currentCryptoKey;
    v52 = *(_QWORD *)&v51[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v137.fields.currentCryptoKey = v53;
    *(_QWORD *)&v137.fields.fakeValue = v52;
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v137, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v54, 0LL);
  }
  else
  {
    IsConvertOverwriteImage = 0;
  }
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v56 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_103:
    sub_1B8880C(Instance, v22);
  v57 = v56[4];
  v58 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.currentCryptoKey = v56[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.fakeValue = v57;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v133 = v135;
  if ( v58 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v133, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v61 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v62 = v61[4];
    v63 = (UserServantCollectionMaster_o *)Instance;
    v64 = enableTdSpeed;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.currentCryptoKey = v61[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.fakeValue = v62;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v65 = enableBattleVoice;
    v132 = v135;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v132, 0LL);
    v66 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v67 = Instance;
    v69 = *(_QWORD *)&v66[5].fields.currentCryptoKey;
    v68 = *(_QWORD *)&v66[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v138.fields.currentCryptoKey = v69;
    *(_QWORD *)&v138.fields.fakeValue = v68;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v138, 0LL);
    if ( !v63 )
      goto LABEL_103;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v63, v67, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
      (int32_t)EntityDefinitely,
      v71,
      v72);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_103;
    enableBattleVoice = v65;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v74,
      v75);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_103;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    enableTdSpeed = v64;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_103;
    CostumeList_40175344 = UserServantCollectionEntity__getCostumeList_40175344(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_40175344;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_40175344, v80, v81);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v82);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity, 0, v59, v60);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_103;
    v83 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v83;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, (int32_t)v83, v84, v85);
    this->fields.costumeIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, 0, v86, v87);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeAndOtherIds, 0, v88, v89);
  }
  v90 = this->fields.userSvtCollectionEntity;
  if ( !v90 )
    goto LABEL_103;
  svtCommonFlag = v90->fields.svtCommonFlag;
  v92 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v92 )
    goto LABEL_103;
  v94 = *(_QWORD *)&v92->fields.battleVoice.fields.currentCryptoKey;
  v93 = *(_QWORD *)&v92->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v139.fields.currentCryptoKey = v94;
  *(_QWORD *)&v139.fields.fakeValue = v93;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v139, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v95, v96);
  this->fields.equipTargetInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v97, v98);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_103;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v99 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v99 )
    goto LABEL_103;
  Instance = UserServantEntity__IsChoice(v99, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_103;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v104 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v105 = v104[2];
    v106 = (UserDeckMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.currentCryptoKey = v104[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v135.fields.fakeValue = v105;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v131 = v135;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v131, 0LL);
    if ( !v106 )
      goto LABEL_103;
    IsServantEquip = UserDeckMaster__IsEquip(v106, Instance, 0LL);
    v107 = IsServantEquip;
  }
  else
  {
    v107 = 0;
  }
  v108 = this->fields.equipIdList;
  this->fields.isUse = v107;
  if ( v108 )
  {
    if ( !v108->max_length )
      sub_1B88814(IsServantEquip, v102);
    v109 = v108->m_Items[0];
  }
  else
  {
    v109 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v109, v103);
  v110 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v110 != 0LL && enableTdSpeed;
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
  v114 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v114 != 0LL;
  if ( v114 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v114, 0LL);
    v114 = (UserServantEntity_o *)*p_userSvtEntity;
    v116 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v116 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v116;
  if ( !v114 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_86;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v114, 0LL);
  v118 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v118 )
  {
LABEL_86:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_87;
  }
  v119 = BasicHelper__DecryptValue_41109412(v118->fields.limitCountSupport, 0LL);
  v120 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v119;
  if ( v120 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v120, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_87:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v111,
    v112);
  v123 = this->fields.userSvtEntity;
  if ( v123 )
  {
    v124 = UserServantEntity__OwnRandomSettingSelectedButton(v123, 0LL);
    v125 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v124;
    if ( v125 )
    {
      v126 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v125, 0LL);
      v127 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_93;
    }
    v127 = 0LL;
  }
  else
  {
    v127 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v126 = 3;
LABEL_93:
  this->fields.supportRandomSettingButtonIndex = v126;
  ServantStatusListViewItem__SetLimitCountInfo(this, v127, v122);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
  }
  v130 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v130 = RandomLimitCountManager_TypeInfo;
  }
  if ( v130->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v129);
  ServantStatusListViewItem__ModifyInfo(this, v128);
}


void __fastcall ServantStatusListViewItem___ctor_32653816(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int64_t Instance; // x0
  __int64 v12; // x1
  __int128 v13; // q1
  int32_t v14; // w2
  int32_t v15; // w3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  ServantLimitMaster_o *v30; // x23
  int32_t v31; // w24
  struct ServantLimitEntity_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  ServantCommentMaster_o *v35; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // q0
  int64_t v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // q0
  UserServantCollectionMaster_o *v46; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  int64_t v48; // x24
  __int64 v49; // x25
  __int64 v50; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_40175344; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  const MethodInfo *v63; // x1
  struct System_Int32_array *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3
  struct UserServantCollectionEntity_o *v71; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v73; // x8
  __int64 v74; // x23
  __int64 v75; // x24
  int32_t v76; // w2
  int32_t v77; // w3
  int32_t v78; // w2
  int32_t v79; // w3
  UserServantEntity_o *v80; // x8
  const MethodInfo *v81; // x2
  struct UserServantCollectionEntity_o *v82; // x8
  int32_t v83; // w2
  int32_t v84; // w3
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v86; // x8
  int32_t v87; // w0
  UserServantEntity_o *v88; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v90; // x2
  UserServantEntity_o *v91; // x0
  int32_t v92; // w0
  UserServantEntity_o *v93; // x8
  int32_t v94; // w0
  UserServantEntity_o *v95; // x1
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x2
  RandomLimitCountManager_c *v98; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_4A57572 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57572 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v9, v10);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_73;
  v13 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v102.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v101 = v102;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v101, 0LL);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v14, v15);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v14, v15);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v18, v19);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v20, v21);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v25 = *(_QWORD *)&v22[5].fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v25;
  *(_QWORD *)&v103.fields.fakeValue = v24;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v103, 0LL);
  if ( !v23 )
    goto LABEL_73;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v23,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v28, v29);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v30 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v31 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userSvtEntity)[6], 0LL);
  if ( !v30 )
    goto LABEL_73;
  v32 = ServantLimitMaster__GetEntity(v30, v31, Instance, 0LL);
  this->fields.svtLimitEntity = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v32, v33, v34);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_73;
  v35 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_svtEntity)[1], 0LL);
  if ( !v35 )
    goto LABEL_73;
  EntityList = ServantCommentMaster__GetEntityList(v35, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v37, v38);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v39 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v40 = v39[4];
  v41 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v102.fields.currentCryptoKey = v39[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v102.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v100 = v102;
  if ( v41 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v100, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v44 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_73;
    v45 = v44[4];
    v46 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v102.fields.currentCryptoKey = v44[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v102.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v99 = v102;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v99, 0LL);
    v47 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_73;
    v48 = Instance;
    v50 = *(_QWORD *)&v47[5].fields.currentCryptoKey;
    v49 = *(_QWORD *)&v47[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v104.fields.currentCryptoKey = v50;
    *(_QWORD *)&v104.fields.fakeValue = v49;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v104, 0LL);
    if ( !v46 )
      goto LABEL_73;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v46, v48, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
      (int32_t)EntityDefinitely,
      v52,
      v53);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_73;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v55,
      v56);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_73;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_73;
    CostumeList_40175344 = UserServantCollectionEntity__getCostumeList_40175344(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_40175344;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_40175344, v61, v62);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v63);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity, 0, v42, v43);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_73;
    v64 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v64;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, (int32_t)v64, v65, v66);
    this->fields.costumeIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, 0, v67, v68);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeAndOtherIds, 0, v69, v70);
  }
  v71 = this->fields.userSvtCollectionEntity;
  if ( !v71 )
    goto LABEL_73;
  svtCommonFlag = v71->fields.svtCommonFlag;
  v73 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v73 )
    goto LABEL_73;
  v75 = *(_QWORD *)&v73->fields.battleVoice.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v73->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v105.fields.currentCryptoKey = v75;
  *(_QWORD *)&v105.fields.fakeValue = v74;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v105, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v76, v77);
  this->fields.equipTargetInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v78, v79);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_73;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v80 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v80 )
    goto LABEL_73;
  this->fields.isChoice = UserServantEntity__IsChoice(v80, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v81);
  v82 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v82 != 0LL;
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
    sub_1B8880C(Instance, v12);
  }
  IsNameTrue = 0;
LABEL_53:
  v86 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v86 )
  {
    v87 = BasicHelper__DecryptValue_41109412(v86->fields.limitCountSupport, 0LL);
    v88 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v87;
    if ( v88 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v88, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v83,
    v84);
  v91 = this->fields.userSvtEntity;
  if ( v91 )
  {
    v92 = UserServantEntity__OwnRandomSettingSelectedButton(v91, 0LL);
    v93 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v92;
    if ( v93 )
    {
      v94 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v93, 0LL);
      v95 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_64;
    }
    v95 = 0LL;
  }
  else
  {
    v95 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v94 = 3;
LABEL_64:
  this->fields.supportRandomSettingButtonIndex = v94;
  ServantStatusListViewItem__SetLimitCountInfo(this, v95, v90);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
  }
  v98 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v98 = RandomLimitCountManager_TypeInfo;
  }
  if ( v98->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v97);
  ServantStatusListViewItem__ModifyInfo(this, v96);
}


void __fastcall ServantStatusListViewItem___ctor_32655612(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v8; // w23
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct UserServantCollectionEntity_o *v28; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x22
  __int64 v30; // x23
  __int64 v31; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  ServantLimitMaster_o *v36; // x23
  struct ServantLimitEntity_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v40; // x8
  ServantCommentMaster_o *v41; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Int32_array *CostumeList; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  const MethodInfo *v51; // x1
  BalanceConfig_c *v52; // x0
  struct UserServantCollectionEntity_o *v53; // x8
  __int64 v54; // x22
  __int64 v55; // x23
  int32_t v56; // w22
  int32_t maxLimitCount; // w23
  struct UserServantCollectionEntity_o *v58; // x8
  __int64 v59; // x22
  __int64 v60; // x23
  int32_t v61; // w22
  int32_t v62; // w23
  struct UserServantCollectionEntity_o *v63; // x8
  struct System_Int32_array *CardSelectList; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  struct UserServantCollectionEntity_o *v67; // x8
  struct UserServantCollectionEntity_o *v68; // x8
  struct System_Int32_array *SelectList; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  struct UserServantCollectionEntity_o *v72; // x8
  struct UserServantCollectionEntity_o *v73; // x8
  struct System_Int32_array *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v81; // x8
  struct System_Int32_array *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v86; // x8
  struct System_Int32_array *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  const MethodInfo *v90; // x2
  struct UserServantCollectionEntity_o *v91; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v93; // x8
  const MethodInfo *v94; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  v8 = isEnableServantQuest;
  if ( (byte_4A57573 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57573 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v11, v12);
  this->fields.isEnableServantQuest = v8;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_56;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v15, v16);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v15, v16);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v17, v18);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v19, v20);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v22,
    v23);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v24, v25);
  this->fields.equipTargetInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v26, v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v28 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v31 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v95.fields.currentCryptoKey = v31;
  *(_QWORD *)&v95.fields.fakeValue = v30;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v95, 0LL);
  if ( !v29 )
    goto LABEL_56;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v29,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v34, v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v36 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  if ( !v36 )
    goto LABEL_56;
  v37 = ServantLimitMaster__GetEntity(v36, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v37, v38, v39);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v40 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_56;
  v41 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40[1], 0LL);
  if ( !v41 )
    goto LABEL_56;
  EntityList = ServantCommentMaster__GetEntityList(v41, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v43, v44);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v46,
    v47);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v49, v50);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v51);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v52 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    Instance = (DataManager_o *)(unsigned int)v52->static_fields->OtherImageLimitCount;
    goto LABEL_32;
  }
  v53 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v55 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v96.fields.currentCryptoKey = v55;
  *(_QWORD *)&v96.fields.fakeValue = v54;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v96, 0LL);
  if ( !*p_userSvtCollectionEntity )
LABEL_56:
    sub_1B8880C(Instance, v14);
  v56 = (int)Instance;
  maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v56, maxLimitCount, 1, 0, 0LL);
LABEL_32:
  v58 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v58 )
    goto LABEL_56;
  v60 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v97.fields.currentCryptoKey = v60;
  *(_QWORD *)&v97.fields.fakeValue = v59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v97, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v61 = (int)Instance;
  v62 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v61, v62, 1, 0, 0LL);
  v63 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v63 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v63->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v65, v66);
  v67 = this->fields.userSvtCollectionEntity;
  if ( !v67 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v67->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v68 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v68 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v68->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v70, v71);
  v72 = this->fields.userSvtCollectionEntity;
  if ( !v72 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v72->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v73 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v73 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v73->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v74 = ImageLimitCount__GetSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.commandCardSelectList = v74;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, (int32_t)v74, v75, v76);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v78, v79);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v81 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v81 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v81->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v82 = ImageLimitCount__GetCardSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.iconSelectList = v82;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, (int32_t)v82, v83, v84);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v86 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v86 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v86->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v87 = ImageLimitCount__GetSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.portraitSelectList = v87;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, (int32_t)v87, v88, v89);
  v91 = this->fields.userSvtCollectionEntity;
  if ( !v91 )
    goto LABEL_56;
  svtCommonFlag = v91->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v90);
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
  v93 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v93 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v94);
}


void __fastcall ServantStatusListViewItem___ctor_32657252(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v10; // w24
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  struct UserServantCollectionEntity_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x22
  __int64 v32; // x24
  __int64 v33; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  struct UserServantCollectionEntity_o *v38; // x8
  ServantLimitMaster_o *v39; // x23
  struct ServantLimitEntity_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v43; // x8
  ServantCommentMaster_o *v44; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Int32_array *CostumeList; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  const MethodInfo *v54; // x1
  struct UserServantCollectionEntity_o *v55; // x8
  int32_t v56; // w22
  struct UserServantCollectionEntity_o *v57; // x8
  int32_t v58; // w0
  struct UserServantCollectionEntity_o *v59; // x8
  int32_t v60; // w0
  struct System_Int32_array *CardSelectList; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  struct UserServantCollectionEntity_o *v64; // x8
  int32_t v65; // w0
  struct UserServantCollectionEntity_o *v66; // x8
  int32_t v67; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  struct UserServantCollectionEntity_o *v71; // x8
  int32_t v72; // w0
  struct UserServantCollectionEntity_o *v73; // x8
  int32_t v74; // w0
  struct System_Int32_array *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v82; // x8
  int32_t v83; // w0
  struct System_Int32_array *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v88; // x8
  int32_t v89; // w0
  struct System_Int32_array *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  const MethodInfo *v93; // x2
  struct UserServantCollectionEntity_o *v94; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v96; // x8
  const MethodInfo *v97; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  v10 = isEnableServantQuest;
  if ( (byte_4A57574 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57574 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v13, v14);
  this->fields.isEnableServantQuest = v10;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v17, v18);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v17, v18);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v19, v20);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v21, v22);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v24,
    v25);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v26, v27);
  this->fields.equipTargetInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v28, v29);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v98.fields.currentCryptoKey = v33;
  *(_QWORD *)&v98.fields.fakeValue = v32;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v98, 0LL);
  if ( !v31 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v36, v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v38 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v39 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v38->fields.svtId,
                                0LL);
  if ( !v39 )
    goto LABEL_35;
  v40 = ServantLimitMaster__GetEntity(v39, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v40, v41, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v43 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v44 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43[1], 0LL);
  if ( !v44 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v44, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v46, v47);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v49,
    v50);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v52, v53);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v54);
  v55 = this->fields.userSvtCollectionEntity;
  if ( !v55 )
    goto LABEL_35;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55->fields.svtId, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v56, limitCount, 1, 0, 0LL);
  v57 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v57 )
    goto LABEL_35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v57->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v58, limitCount, 1, 0, 0LL);
  v59 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v59 )
    goto LABEL_35;
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v59->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v60, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v62, v63);
  v64 = this->fields.userSvtCollectionEntity;
  if ( !v64 )
    goto LABEL_35;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v65, limitCount, 0LL);
  v66 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v66 )
    goto LABEL_35;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v66->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v67, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v69, v70);
  v71 = this->fields.userSvtCollectionEntity;
  if ( !v71 )
    goto LABEL_35;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v71->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v72, limitCount, 0LL);
  v73 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v73 )
    goto LABEL_35;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v73->fields.svtId, 0LL);
  v75 = ImageLimitCount__GetSelectList(v74, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v75;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, (int32_t)v75, v76, v77);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v79, v80);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v82 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v82 )
    goto LABEL_35;
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v82->fields.svtId, 0LL);
  v84 = ImageLimitCount__GetCardSelectList(v83, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v84;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, (int32_t)v84, v85, v86);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v88 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v88 )
    goto LABEL_35;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v88->fields.svtId, 0LL);
  v90 = ImageLimitCount__GetSelectList(v89, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v90;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, (int32_t)v90, v91, v92);
  v94 = this->fields.userSvtCollectionEntity;
  if ( !v94 )
    goto LABEL_35;
  svtCommonFlag = v94->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v93);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_35:
    sub_1B8880C(Instance, v16);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v96 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v96 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v97);
}


void __fastcall ServantStatusListViewItem___ctor_32658676(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  bool v6; // w22
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  ServantLimitMaster_o *v32; // x22
  struct ServantLimitEntity_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x8
  ServantCommentMaster_o *v37; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  ServantLeaderInfo_o *v46; // x8
  struct ServantLeaderInfo_o *v47; // x8
  int32_t v48; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_37694772; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  ServantLeaderInfo_o *v54; // x8
  struct ServantLeaderInfo_o *v55; // x8
  struct System_Int32_array *SelectList_37693956; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  ServantLeaderInfo_o *v59; // x8
  struct ServantLeaderInfo_o *v60; // x8
  struct System_Int32_array *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  struct ServantLeaderInfo_o *v66; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v68; // x8
  struct ServantLeaderInfo_o *v69; // x8
  struct System_Int32_array *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  ServantLeaderInfo_o *v73; // x8
  struct ServantLeaderInfo_o *v74; // x8
  struct System_Int32_array *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  const MethodInfo *v78; // x2
  struct ServantLeaderInfo_o *v79; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v81; // x21
  __int64 v82; // x22
  __int64 v83; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x21
  __int64 v85; // x22
  __int64 v86; // x23
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x8
  ServantLimitMaster_o *v91; // x21
  __int64 v92; // x8
  struct ServantLimitEntity_o *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  const MethodInfo *v96; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4A57575 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57575 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v7, v8);
  this->fields.userSvtEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v9, v10);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v11, v12);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v13, v14);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity, 0, v15, v16);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)servantLeaderInfo,
    v18,
    v19);
  this->fields.equipTargetInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v20, v21);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v27 = *(_QWORD *)&v24[3].fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24[3].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v97.fields.currentCryptoKey = v27;
  *(_QWORD *)&v97.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v97, 0LL);
  if ( !v25 )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v25,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v30, v31);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v32 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  if ( !v32 )
    goto LABEL_59;
  v33 = ServantLimitMaster__GetEntity(v32, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v33, v34, v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v36 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_59;
  v37 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36[1], 0LL);
  if ( !v37 )
    goto LABEL_59;
  EntityList = ServantCommentMaster__GetEntityList(v37, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v39, v40);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v42,
    v43);
  this->fields.costumeIds = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, 0, v44, v45);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v46 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v46 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v46, 0, 0LL);
  v47 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v47 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v47->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v48 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList_37694772 = ImageLimitCount__GetCardSelectList_37694772(v48, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_37694772;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList,
    (int32_t)CardSelectList_37694772,
    v52,
    v53);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v54 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)Instance;
  if ( !v54 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v54, 0LL);
  v55 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v55 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v55->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  SelectList_37693956 = ImageLimitCount__GetSelectList_37693956(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_37693956;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, (int32_t)SelectList_37693956, v57, v58);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v59 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v59 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v59, 0LL);
  v60 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  if ( !v60 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v60->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v61 = ImageLimitCount__GetSelectList_37693956(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.commandCardLimitCount,
          0,
          0LL);
  this->fields.commandCardSelectList = v61;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, (int32_t)v61, v62, v63);
  v66 = this->fields.servantLeaderInfo;
  if ( !v66 )
    goto LABEL_59;
  commandCardParam = v66->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, (int32_t)commandCardParam, v64, v65);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v68 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)Instance;
  if ( !v68 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v68, 0, 0LL);
  v69 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)Instance;
  if ( !v69 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v69->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v70 = ImageLimitCount__GetCardSelectList_37694772(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.iconLimitCount,
          0LL);
  this->fields.iconSelectList = v70;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, (int32_t)v70, v71, v72);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v73 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)Instance;
  if ( !v73 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v73, 0LL);
  v74 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)Instance;
  if ( !v74 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                v74->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v75 = ImageLimitCount__GetSelectList_37693956(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.portraitLimitCount,
          0,
          0LL);
  this->fields.portraitSelectList = v75;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, (int32_t)v75, v76, v77);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v78);
  v79 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v79 )
    goto LABEL_59;
  equipTarget1 = v79->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v82 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v81 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v98.fields.currentCryptoKey = v82;
    *(_QWORD *)&v98.fields.fakeValue = v81;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v98, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v83 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v83 )
          {
            v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v86 = *(_QWORD *)(v83 + 56);
            v85 = *(_QWORD *)(v83 + 64);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v99.fields.currentCryptoKey = v86;
            *(_QWORD *)&v99.fields.fakeValue = v85;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v99, 0LL);
            if ( v84 )
            {
              v87 = DataMasterBase_object__object__int___GetEntity(
                      v84,
                      (int32_t)Instance,
                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v87;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v87, v88, v89);
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v90 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v90 )
                  {
                    v91 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v90 + 56),
                                                  0LL);
                    if ( *p_servantLeaderInfo )
                    {
                      v92 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v92 )
                      {
                        if ( v91 )
                        {
                          v93 = ServantLimitMaster__GetEntity(v91, (int32_t)Instance, *(_DWORD *)(v92 + 72), 0LL);
                          this->fields.equipSvtLimitEntity = v93;
                          sub_1B88554(
                            (ServantStatusBattleListViewItem_o *)&this->fields.equipSvtLimitEntity,
                            (int32_t)v93,
                            v94,
                            v95);
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
      sub_1B8880C(Instance, v23);
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
  ServantStatusListViewItem__ModifyInfo(this, v96);
}


void __fastcall ServantStatusListViewItem___ctor_32660364(
        ServantStatusListViewItem_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        const MethodInfo *method)
{
  bool v7; // w22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  struct EquipTargetInfo_o **p_equipTargetInfo; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  struct EquipTargetInfo_o *v25; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x21
  __int64 v27; // x22
  __int64 v28; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  ServantLimitMaster_o *v33; // x22
  struct ServantLimitEntity_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  ServantCommentMaster_o *v37; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4A57576 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57576 = 1;
  }
  v7 = isNpcFollowerServantEquip;
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v8, v9);
  this->fields.userSvtEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v10, v11);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v12, v13);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v14, v15);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity, 0, v16, v17);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v18, v19);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, (int32_t)equipTargetInfo, v21, v22);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v7;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v25 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v28;
  *(_QWORD *)&v59.fields.fakeValue = v27;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v59, 0LL);
  if ( !v26 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v26,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v31, v32);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v33 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                               (*p_equipTargetInfo)->fields.svtId,
                               0LL);
  if ( !*p_equipTargetInfo
    || !v33
    || (v34 = ServantLimitMaster__GetEntity(v33, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v34,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v34, v35, v36),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v37 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                     (*p_svtEntity)[1],
                                     0LL),
        !v37) )
  {
LABEL_16:
    sub_1B8880C(Instance, v24);
  }
  EntityList = ServantCommentMaster__GetEntityList(v37, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v39, v40);
  this->fields.commandCodeIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v41, v42);
  this->fields.costumeIds = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, 0, v43, v44);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList, 0, v45, v46);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, 0, v47, v48);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, 0, v49, v50);
  this->fields.commandCardParam = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, 0, v51, v52);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, 0, v53, v54);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, 0, v55, v56);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v57);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v58);
}


void __fastcall ServantStatusListViewItem___ctor_32661192(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A57577 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57577 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v7, v8);
  this->fields.userCommandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeEntity, 0, v9, v10);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)commandCode, v11, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v18 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  if ( !v16 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v16,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_311D988 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeCollectionEntity, 0, v19, v20);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_1B8880C(Instance, v14);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_32661568(
        ServantStatusListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  int64_t Instance; // x0
  __int64 v10; // x1
  __int128 v11; // q1
  int32_t v12; // w2
  int32_t v13; // w3
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  Il2CppObject *Entity; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  struct UserCommandCodeEntity_o *v24; // x8
  __int128 v25; // q0
  int64_t v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct UserCommandCodeEntity_o *v29; // x8
  __int128 v30; // q0
  UserCommandCodeCollectionMaster_o *v31; // x21
  struct UserCommandCodeEntity_o *v32; // x8
  int64_t v33; // x22
  __int64 v34; // x23
  __int64 v35; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x0
  int32_t v37; // w1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v39; // x8
  struct UserCommandCodeEntity_o *v40; // x8
  __int128 v41; // q0
  UserServantCommandCodeMaster_o *v42; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4A57578 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57578 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v7, v8);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_42;
  v11 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v47 = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v47, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_42;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v12, v13);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCode,
    v12,
    v13);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v15 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v18 = *(_QWORD *)&v15->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v18;
  *(_QWORD *)&v49.fields.fakeValue = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v49, 0LL);
  if ( !v16 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v16,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v20, v21);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_42;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v23 )
    goto LABEL_42;
  DataMasterBase_object__object__int___TryGetEntity(
    v23,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_311D988 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v24 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v25 = *(_OWORD *)&v24->fields.userId.fields.fakeValue;
  v26 = Instance;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v24->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v48;
  if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v46, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v29 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v30 = *(_OWORD *)&v29->fields.userId.fields.fakeValue;
        v31 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v29->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v45 = v48;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v45, 0LL);
        v32 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v33 = Instance;
          v35 = *(_QWORD *)&v32->fields.commandCodeId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&v32->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v50.fields.currentCryptoKey = v35;
          *(_QWORD *)&v50.fields.fakeValue = v34;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50, 0LL);
          if ( v31 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v31, v33, Instance, 0LL);
            v37 = (int)EntityDefinitely;
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_33;
          }
        }
      }
    }
LABEL_42:
    sub_1B8880C(Instance, v10);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  v37 = 0;
LABEL_33:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_userCommandCodeCollectionEntity, v37, v27, v28);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v39 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v39 )
    goto LABEL_42;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v39, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v40 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v41 = *(_OWORD *)&v40->fields.id.fields.fakeValue;
  v42 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v40->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v48.fields.fakeValue = v41;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v44 = v48;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v44, 0LL);
  if ( !v42 )
    goto LABEL_42;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v42, Instance, 0LL);
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


void __fastcall ServantStatusListViewItem___ctor_32662644(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  Il2CppObject *Entity; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A57579 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57579 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v7, v8);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v11, v12);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v11,
    v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v14 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = *(_QWORD *)&v14->fields.commandCodeId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&v14->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v17;
  *(_QWORD *)&v23.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
  if ( !v15 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v15,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v19, v20);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v22)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v22,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_311D988 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1B8880C(Instance, v10);
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
  int32_t v6; // w2
  int32_t v7; // w3
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v9; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v11; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *v12; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v13; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v14; // x21

  if ( (byte_4A5757C & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItem_LimitCountCache_TypeInfo);
    byte_4A5757C = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1B887FC(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0LL);
  this->fields.currentLimitCountCache = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentLimitCountCache, (int32_t)v5, v6, v7);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
    v11 = 0LL;
  else
    v11 = this->fields.currentLimitCountCache;
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
    v12 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 1, 0LL);
    if ( !v12 )
      goto LABEL_22;
    v12->fields.iconLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v13 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getCommandCardLimitCount(userSvtEntity, 1, 0LL);
    if ( !v13 )
      goto LABEL_22;
    v13->fields.commandCardLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v14 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(userSvtEntity, 1, 0LL);
    if ( !v14 )
      goto LABEL_22;
    v14->fields.dispLimitCount = (int)userSvtEntity;
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
    if ( !v11 || (v11->fields.cardLimitCount = this->fields.cardLimitCount, !currentLimitCountCache) )
LABEL_22:
      sub_1B8880C(userSvtEntity, v9);
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
  System_Int32_array *appendPassiveSkillIdList; // x8
  System_String_array *appendPassiveSkillTitleMessageList; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_array *appendPassiveSkillExplanationMessageList; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_Boolean_array *appendPassiveSkillReleaseStateList; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Int32_array *appendPassiveSkillLvList; // x1
  int32_t v23; // w2
  int32_t v24; // w3

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  *idList = appendPassiveSkillIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)idList,
    (int32_t)appendPassiveSkillIdList,
    (int32_t)titleList,
    (int32_t)explanationList);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, (int32_t)appendPassiveSkillTitleMessageList, v14, v15);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)explanationList,
    (int32_t)appendPassiveSkillExplanationMessageList,
    v17,
    v18);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)releaseStateList,
    (int32_t)appendPassiveSkillReleaseStateList,
    v20,
    v21);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)lvList, (int32_t)appendPassiveSkillLvList, v23, v24);
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
      sub_1B8880C(this, checkTransform);
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
  SkillInfo_array *equipSkillInfoList; // x8

  equipSkillInfoList = this->fields.equipSkillInfoList;
  *skillInfoList = equipSkillInfoList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)equipSkillInfoList, (int32_t)method, v3);
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
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x28
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct ServantEntity_o *svtEntity; // x8
  struct UserServantCollectionEntity_o *v15; // x9
  FriendshipMaster_o *v16; // x24
  int32_t friendshipId; // w25
  __int64 v18; // x26
  __int64 v19; // x27
  struct ServantEntity_o *v20; // x8
  struct UserServantCollectionEntity_o *v21; // x9
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4A57593 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57593 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_19;
  v15 = this->fields.userSvtCollectionEntity;
  if ( !v15 )
    goto LABEL_19;
  v16 = (FriendshipMaster_o *)Instance;
  friendshipId = svtEntity->fields.friendshipId;
  v18 = *(_QWORD *)&v15->fields.friendship.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v15->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v18;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  v20 = this->fields.svtEntity;
  if ( !v20 )
    goto LABEL_19;
  v21 = this->fields.userSvtCollectionEntity;
  if ( !v21 || !v16 )
    goto LABEL_19;
  FriendshipMaster__GetFriendshipRank(
    v16,
    friendshipId,
    (int32_t)Instance,
    v21->fields.friendshipExceedCount + v20->fields.maxFriendshipRank,
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
    sub_1B8880C(Instance, v13);
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
  TreasureDvcInfo_o *v4; // x8

  v4 = this->fields.tdInfo;
  *tdInfo = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isTdResult;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo_32670972(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A57592 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A57592 = 1;
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
      sub_1B8880C(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v9, v10, v11);
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
        bool checkTransform,
        const MethodInfo *method)
{
  System_Int32_array *transformedPassiveSkillIdList; // x1
  System_String_array *transformedPassiveSkillTitleMessageList; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_array **p_transformedPassiveSkillExplanationMessageList; // x8
  System_Int32_array *passiveSkillIdList; // x1
  System_String_array *passiveSkillTitleMessageList; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_array *v21; // x1

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
  {
    transformedPassiveSkillIdList = this->fields.transformedPassiveSkillIdList;
    *idList = transformedPassiveSkillIdList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)idList,
      (int32_t)transformedPassiveSkillIdList,
      (int32_t)titleList,
      (int32_t)explanationList);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)titleList,
      (int32_t)transformedPassiveSkillTitleMessageList,
      v12,
      v13);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.transformedPassiveSkillExplanationMessageList;
  }
  else
  {
    passiveSkillIdList = this->fields.passiveSkillIdList;
    *idList = passiveSkillIdList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)idList,
      (int32_t)passiveSkillIdList,
      (int32_t)titleList,
      (int32_t)explanationList);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, (int32_t)passiveSkillTitleMessageList, v19, v20);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v21 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v21, v14, v15);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_32670476(
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A57591 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    byte_4A57591 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      sub_1B8880C(svtEntity, idList);
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
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v13->static_fields->SvtPassiveSkillListMax);
    *idList = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)idList, (int32_t)v14, v15, v16);
    v17 = (System_String_array *)sub_1B88658(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v17, v18, v19);
    v20 = (System_String_array *)sub_1B88658(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v20, v21, v22);
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


void __fastcall ServantStatusListViewItem__GetSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        bool checkTransform,
        const MethodInfo *method)
{
  SkillInfo_array **p_transformedSkillInfoList; // x9
  SkillInfo_array *v6; // x1

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    p_transformedSkillInfoList = &this->fields.transformedSkillInfoList;
  else
    p_transformedSkillInfoList = &this->fields.skillInfoList;
  v6 = *p_transformedSkillInfoList;
  *skillInfoList = *p_transformedSkillInfoList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v6, checkTransform, (int32_t)method);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo_32670064(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A57590 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&SkillInfo___TypeInfo);
    byte_4A57590 = 1;
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
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      v10 = (SkillInfo_array *)sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
      *skillInfoList = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v10, v11, v12);
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
  TreasureDvcInfo_o *transformedTdInfo; // x8

  transformedTdInfo = this->fields.transformedTdInfo;
  *tdInfo = transformedTdInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)transformedTdInfo, (int32_t)method, v3);
}


bool __fastcall ServantStatusListViewItem__GetVoiceInfo(
        ServantStatusListViewItem_o *this,
        System_String_o **illust,
        System_String_o **voice,
        bool *isPlayVoice,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v12; // x1
  int32_t illustratorId; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v18; // x8
  ServantLimitAddMaster_o *v19; // x23
  __int64 v20; // x26
  __int64 v21; // x27
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *monitor; // x1
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x1
  __int64 *v30; // x8
  System_String_o *v31; // x0
  ServantLimitAddEntity_o *v33; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A57594 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_IllustratorMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_14808/*"UNKNOWN_NAME_ILLUST"*/);
    sub_1B885B0(&StringLiteral_9299/*"NO_ENTRY_NAME_ILLUST"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57594 = 1;
  }
  v33 = 0LL;
  entity = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)voice,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)voice,
    (int32_t)isPlayVoice);
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
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v18 = this->fields.svtEntity;
      if ( v18 )
      {
        v19 = Master_object;
        v21 = *(_QWORD *)&v18->fields.id.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v18->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v21;
        *(_QWORD *)&v35.fields.fakeValue = v20;
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                     v35,
                                                     0LL);
        if ( v19 )
        {
          if ( ServantLimitAddMaster__TryGetEntity(v19, &v33, (int32_t)Master_object, currentCardLimitCount, 0LL) )
          {
            Master_object = (ServantLimitAddMaster_o *)v33;
            if ( !v33 )
              goto LABEL_44;
            cvId = ServantLimitAddEntity__GetOverwriteCvId(v33, cvId, 0LL);
          }
          if ( cvId < 1 )
            goto LABEL_28;
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v22 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_311D934 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v22 )
              {
                monitor = (System_String_o *)v22[1].monitor;
                *voice = monitor;
                sub_1B88554((ServantStatusBattleListViewItem_o *)voice, (int32_t)monitor, v23, v24);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1B8880C(Master_object, v10);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v12);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_311D988 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
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
        v30 = &StringLiteral_9299/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_42:
        v31 = LocalizationManager__Get((System_String_o *)*v30, 0LL);
        LODWORD(v29) = (_DWORD)v31;
        *illust = v31;
        goto LABEL_43;
      }
    }
LABEL_41:
    v30 = &StringLiteral_14808/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v26 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v26 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_41;
  }
  v29 = (System_String_o *)v26[1].monitor;
  *illust = v29;
LABEL_43:
  sub_1B88554((ServantStatusBattleListViewItem_o *)illust, (int32_t)v29, v27, v28);
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
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A57597 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57597 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B8880C(Instance, v8);
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
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x22
  bool TreasureDeviceInfo; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *equipTargetInfo; // x0

  if ( (byte_4A5757D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A5757D = 1;
  }
  this->fields.isTdResult = 0;
  v3 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v3, 0LL);
  this->fields.tdInfo = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tdInfo, (int32_t)v3, v4, v5);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v6);
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
    sub_1B8880C(svtEntity, v7);
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
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  ServantStatusListViewItem__SetTransformData(this, v7);
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

  if ( (byte_4A5757A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5757A = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
  }
  v3 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v3 = RandomLimitCountManager_TypeInfo;
  }
  if ( v3->static_fields->enableRandomLimitCount )
  {
    if ( this->fields.isEnableOwnRandomSetting )
    {
      userSvtEntity = this->fields.userSvtEntity;
      v5 = sub_1B887FC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_40192384((UserServantEntity_o *)v5, userSvtEntity, 0LL);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0LL);
      if ( !v5 )
        sub_1B8880C(*(_QWORD *)&v7.fields.currentCryptoKey, *(_QWORD *)&v7.fields.fakeValue);
      v8 = *(_QWORD *)(v5 + 80);
      v9 = *(_QWORD *)(v5 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 208) = v7;
      *(_QWORD *)&v16.fields.currentCryptoKey = v8;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
      v12 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
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
  int32_t v4; // w2
  int32_t v5; // w3
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  int32_t v7; // w1
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v10; // x0
  System_Collections_Generic_List_int__o *v11; // x20
  struct System_Int32_array *v12; // x0
  struct System_Int32_array **v13; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Int32_array *v19; // x0

  if ( (byte_4A57598 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A57598 = 1;
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
      v10 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      v11 = v10;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_55443684(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
      else
        System_Collections_Generic_List_int____ctor(
          v10,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v11 )
      {
        items = v11->fields._items;
        method = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&svtEntity->fields.starRate + 856LL);
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              (int32_t)method,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = (int)method;
          }
          v19 = System_Collections_Generic_List_int___ToArray(
                  v11,
                  (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
          this->fields.costumeAndOtherIds = v19;
          v7 = (int)v19;
          p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
          goto LABEL_25;
        }
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v12 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v12;
      v13 = &this->fields.costumeAndOtherIds;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v13, (int32_t)v12, v14, v15);
      svtEntity = (ServantEntity_o *)*(v13 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v13, 0, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B8880C(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v7 = 0;
LABEL_25:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_costumeAndOtherIds, v7, v4, v5);
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
  ServantStatusListViewItem_o *v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_equipUserSvtEntity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v7; // x8
  __int64 v8; // x22
  __int64 v9; // x23
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v12; // x8
  ServantStatusListViewItem_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusListViewItem_o *v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  int32_t v21; // w20
  ServantLimitEntity_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Int64_array *v25; // x8
  PartyOrganizationListViewItem_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  BalanceConfig_c *v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v5 = this;
  if ( (byte_4A5757E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantStatusListViewItem_o *)sub_1B885B0(&SkillInfo___TypeInfo);
    byte_4A5757E = 1;
  }
  if ( equipUserSvtId >= 1 && v5->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v5->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v5->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = *p_equipUserSvtEntity;
      if ( !*p_equipUserSvtEntity )
        goto LABEL_38;
      v9 = *(_QWORD *)&v7[5].fields.currentCryptoKey;
      v8 = *(_QWORD *)&v7[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v35.fields.currentCryptoKey = v9;
      *(_QWORD *)&v35.fields.fakeValue = v8;
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v35,
                                              0LL);
      if ( (int)this >= 1 )
      {
        equipIdList = v5->fields.equipIdList;
        if ( !equipIdList )
          goto LABEL_16;
        if ( equipIdList->max_length )
        {
          equipIdList->m_Items[0] = equipUserSvtId;
LABEL_16:
          memberItem = v5->fields.memberItem;
          if ( memberItem )
            PartyOrganizationListViewItem__SetEquipUserServantId(memberItem, equipUserSvtId, 0LL);
          v5->fields.equipTargetId1 = equipUserSvtId;
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
            v12 = *p_equipUserSvtEntity;
            if ( *p_equipUserSvtEntity )
            {
              v13 = this;
              v15 = *(_QWORD *)&v12[5].fields.currentCryptoKey;
              v14 = *(_QWORD *)&v12[5].fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v36.fields.currentCryptoKey = v15;
              *(_QWORD *)&v36.fields.fakeValue = v14;
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                      v36,
                                                      0LL);
              if ( v13 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                           (int32_t)this,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v5->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&v5->fields.equipServantEntity,
                  (int32_t)Entity,
                  v17,
                  v18);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v19 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0LL);
                    v20 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v21 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                              v20[6],
                                                              0LL);
                      if ( v19 )
                      {
                        v22 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v19, v21, (int32_t)this, 0LL);
                        v5->fields.equipSvtLimitEntity = v22;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&v5->fields.equipSvtLimitEntity,
                          (int32_t)v22,
                          v23,
                          v24);
                        this = (ServantStatusListViewItem_o *)v5->fields.equipUserSvtEntity;
                        if ( this )
                        {
                          UserServantEntity__getEquipSkillInfo(
                            (UserServantEntity_o *)this,
                            &v5->fields.equipSkillInfoList,
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
          sub_1B8880C(this, equipUserSvtId);
        }
LABEL_39:
        sub_1B88814(this, equipUserSvtId);
      }
    }
  }
  v25 = v5->fields.equipIdList;
  if ( v25 )
  {
    if ( !v25->max_length )
      goto LABEL_39;
    v25->m_Items[0] = 0LL;
  }
  v26 = v5->fields.memberItem;
  if ( v26 && !v26->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v26, 0LL, 0LL);
  v5->fields.equipTargetId1 = 0LL;
  v5->fields.equipUserSvtEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  v5->fields.equipServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.equipServantEntity, 0, v27, v28);
  v5->fields.equipSvtLimitEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.equipSvtLimitEntity, 0, v29, v30);
  v31 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  v32 = sub_1B88658(SkillInfo___TypeInfo, (unsigned int)v31->static_fields->SvtEquipSkillListMax);
  v5->fields.equipSkillInfoList = (struct SkillInfo_array *)v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.equipSkillInfoList, v32, v33, v34);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w21
  int32_t v15; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w22
  int32_t v20; // w0
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w22
  int32_t v28; // w0
  struct System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t v34; // w20
  int32_t v35; // w0
  struct System_Int32_array *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A5757B & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5757B = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0LL);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0LL);
    v6 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = v6;
    *(_QWORD *)&v39.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v10 = v8;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardSelectList = ImageLimitCount__GetCardSelectList(v7, v10, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v12, v13);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(entity->fields.svtId, 0LL);
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(entity->fields.limitCount, 0LL);
    SelectList = ImageLimitCount__GetSelectList(v14, v15, this->fields.costumeIds, 0LL);
    this->fields.dispSelectList = SelectList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v17, v18);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(entity->fields.svtId, 0LL);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(entity->fields.limitCount, 0LL);
    v21 = ImageLimitCount__GetSelectList(v19, v20, this->fields.costumeIds, 0LL);
    this->fields.commandCardSelectList = v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, (int32_t)v21, v22, v23);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0LL);
    this->fields.commandCardParam = CommandCardParam;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v25,
      v26);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(entity->fields.svtId, 0LL);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(entity->fields.limitCount, 0LL);
    v29 = ImageLimitCount__GetCardSelectList(v27, v28, this->fields.costumeIds, 0LL);
    this->fields.iconSelectList = v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, (int32_t)v29, v30, v31);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(entity->fields.svtId, 0LL);
    v33 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v34 = v32;
    *(_QWORD *)&v40.fields.currentCryptoKey = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
    v36 = ImageLimitCount__GetSelectList(v34, v35, this->fields.costumeIds, 0LL);
    this->fields.portraitSelectList = v36;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, (int32_t)v36, v37, v38);
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
  if ( (byte_4A5758F & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5758F = 1;
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
        sub_1B88814(this, *(_QWORD *)&index);
      LIMIT_SUPPORT_NOT_ASSIGN = supportRandomLimitCountList->m_Items[index + 1];
      goto LABEL_10;
    }
  }
}


void __fastcall ServantStatusListViewItem__SetTransformData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  void *SvtId; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ServantTransformEntity_o *v10; // x8
  struct System_String_o *befTitle; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_o *aftTitle; // x1
  Il2CppObject *v15; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v21; // x22
  const MethodInfo *v22; // x1
  ServantLimitEntity_o *v23; // x20
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t lv; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  struct EquipTargetInfo_o *equipTargetInfo; // x9
  int32_t v28; // w2
  int32_t v29; // w3
  _DWORD *v30; // x21
  int32_t atkMax; // w24
  int32_t atkBase; // w25
  int v33; // w23
  CheckCombineResStatus_c *v34; // x0
  _DWORD *v35; // x9
  int32_t LOT_RATE; // w8
  int32_t v37; // w23
  int32_t adjustAtk; // w24
  struct ServantLeaderInfo_o *v39; // x10
  BalanceConfig_c *v40; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v42; // w8
  int32_t StatusUpAdjustHp; // w10
  UserServantEntity_o *v44; // x0
  UserServantEntity_o *v45; // x22
  int32_t v46; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  ServantLeaderInfo_o *v48; // x0
  ServantLeaderInfo_o *v49; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A57599 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CheckCombineResStatus_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A57599 = 1;
  }
  entity = 0LL;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = (void *)ServantStatusListViewItem__get_SvtId(this, v5);
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
      v10 = entity;
      if ( !entity )
        goto LABEL_57;
      this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
      this->fields._TransformedServantDispLimitCount_k__BackingField = v10->fields.aftDispLimitCount - 1;
      befTitle = v10->fields.befTitle;
      this->fields.transformNameBefore = befTitle;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.transformNameBefore, (int32_t)befTitle, v8, v9);
      if ( !entity )
        goto LABEL_57;
      aftTitle = entity->fields.aftTitle;
      this->fields.transformNameAfter = aftTitle;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.transformNameAfter, (int32_t)aftTitle, v12, v13);
      this->fields._IsTransformServant_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SvtId = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !SvtId )
        goto LABEL_57;
      v15 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
              this->fields._TransformedSvtId_k__BackingField,
              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
      this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v15;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields._TransformedServant_k__BackingField,
        (int32_t)v15,
        v17,
        v18);
      v19 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
      v21 = (ServantLimitMaster_o *)v19;
      SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v22);
      if ( !v21 )
        goto LABEL_57;
      v23 = ServantLimitMaster__GetEntity(v21, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0LL);
      SvtId = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExpMaster___);
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
      if ( !v23 )
        goto LABEL_57;
      v30 = SvtId;
      if ( !SvtId )
        goto LABEL_57;
      atkBase = v23->fields.atkBase;
      atkMax = v23->fields.atkMax;
      v33 = *((_DWORD *)SvtId + 7);
      v34 = CheckCombineResStatus_TypeInfo;
      if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
        v34 = CheckCombineResStatus_TypeInfo;
      }
      v35 = this->fields.userSvtEntity;
      LOT_RATE = v34->static_fields->LOT_RATE;
      v37 = v33 * (atkMax - atkBase) / LOT_RATE + v23->fields.atkBase;
      this->fields.transformedAtk = v37;
      if ( v35 )
      {
        adjustAtk = v35[68];
      }
      else
      {
        v39 = this->fields.servantLeaderInfo;
        if ( v39 )
          adjustAtk = v39->fields.adjustAtk;
        else
          adjustAtk = 0;
      }
      v40 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v40 = BalanceConfig_TypeInfo;
        v35 = this->fields.userSvtEntity;
        LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
      }
      static_fields = v40->static_fields;
      this->fields.transformedAtk = v37 + static_fields->StatusUpAdjustAtk * adjustAtk;
      v42 = v30[7] * (v23->fields.hpMax - v23->fields.hpBase) / LOT_RATE + v23->fields.hpBase;
      if ( v35 )
      {
        LODWORD(v35) = v35[69];
      }
      else
      {
        v35 = this->fields.servantLeaderInfo;
        if ( v35 )
          LODWORD(v35) = v35[22];
      }
      StatusUpAdjustHp = static_fields->StatusUpAdjustHp;
      this->fields.transformedServantLimitEntity = v23;
      this->fields.transformedHp = v42 + StatusUpAdjustHp * (_DWORD)v35;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.transformedServantLimitEntity,
        (int32_t)v23,
        v28,
        v29);
      v44 = this->fields.userSvtEntity;
      if ( v44 )
      {
        UserServantEntity__GetTransformedSkillInfo(
          v44,
          &this->fields.transformedSkillInfoList,
          this->fields._TransformedSvtId_k__BackingField,
          -1,
          this->fields._TransformedServantDispLimitCount_k__BackingField,
          1,
          0,
          -1,
          0LL);
        v45 = this->fields.userSvtEntity;
        v46 = this->fields._TransformedSvtId_k__BackingField;
        TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
        SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( SvtId )
        {
          if ( v45 )
          {
            UserServantEntity__GetTransformedPassiveSkillInfo(
              v45,
              &this->fields.transformedPassiveSkillIdList,
              &this->fields.transformedPassiveSkillTitleMessageList,
              &this->fields.transformedPassiveSkillExplanationMessageList,
              v46,
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
        sub_1B8880C(SvtId, v7);
      }
      v48 = this->fields.servantLeaderInfo;
      if ( v48 )
      {
        ServantLeaderInfo__GetTransformedSkillInfo(
          v48,
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
        v49 = this->fields.servantLeaderInfo;
        this->fields.transformedAtk = (int)SvtId;
        if ( !v49 )
          goto LABEL_57;
        this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v49, 0LL);
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


bool __fastcall ServantStatusListViewItem__UpdateServantComment(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ServantCommentEntity_array *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  _DWORD *klass; // x8
  ServantStatusBattleListViewItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v14; // x20
  int max_length; // w9
  unsigned int v16; // w10
  unsigned int v17; // w21
  char v18; // w21

  if ( (byte_4A57596 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A57596 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
  p_svtCommentEntityList = (ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList;
  klass = svtCommentEntityList;
  v14 = Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_18:
    v18 = 0;
    goto LABEL_21;
  }
  if ( !Master_object )
LABEL_17:
    sub_1B8880C(Master_object, v8);
  max_length = klass[6];
  if ( max_length != Master_object->max_length )
  {
    v18 = 1;
    goto LABEL_21;
  }
  if ( max_length < 1 )
    goto LABEL_18;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= klass[6] || (v17 = v16, v16 >= max_length) )
      sub_1B88814(Master_object, v8);
    Master_object = *(ServantCommentEntity_array **)&klass[2 * v16 + 8];
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, ServantCommentEntity_o *, Il2CppMethodPointer))Master_object->obj.klass->vtable[0].method)(
                                                    Master_object,
                                                    v14->m_Items[v16],
                                                    Master_object->obj.klass->vtable[1].methodPtr);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      break;
    max_length = v14->max_length;
    v16 = v17 + 1;
    if ( (int)(v17 + 1) >= max_length )
      break;
    klass = p_svtCommentEntityList->klass;
    if ( !p_svtCommentEntityList->klass )
      goto LABEL_17;
  }
  v18 = (unsigned __int8)Master_object ^ 1;
LABEL_21:
  p_svtCommentEntityList->klass = (ServantStatusBattleListViewItem_c *)v14;
  sub_1B88554(p_svtCommentEntityList, (int32_t)v14, v9, v10);
  return v18 & 1;
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A57580 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57580 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userSvtEntity, 0LL);
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
  if ( (byte_4A57586 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B885B0(&ImageLimitCount_TypeInfo);
    byte_4A57586 = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1B8880C(this, method);
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
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5758D & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5758D = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A57585 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A57585 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
    sub_1B8880C(ManualSetCommandCardLimit, method);
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

  if ( (byte_4A57583 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A57583 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
    sub_1B8880C(ManualSetDispLimitCount, method);
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

  if ( (byte_4A57588 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A57588 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
    sub_1B8880C(ManualSetIconLimitCount, method);
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

  if ( (byte_4A5758A & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A5758A = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
    sub_1B8880C(ManualSetPortraitLimitCount, method);
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

  if ( (byte_4A5758C & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5758C = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL) != this->fields.supportRandomLimitCount;
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

  if ( (byte_4A57581 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57581 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
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
    sub_1B8880C(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1B8880C(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4A57582 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A57582 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
      sub_1B8880C(v3, method);
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

  if ( (byte_4A57587 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A57587 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
      sub_1B8880C(v3, method);
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

  if ( (byte_4A57584 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A57584 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
      sub_1B8880C(v3, method);
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

  if ( (byte_4A57589 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A57589 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
      sub_1B8880C(v3, method);
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

  if ( (byte_4A5758B & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A5758B = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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
      sub_1B8880C(v3, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5757F & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5757F = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedAgility(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B8880C(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedDefense(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B8880C(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedLuck(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B8880C(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedMagic(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B8880C(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedNp(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B8880C(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedPower(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B8880C(this, method);
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
  if ( (byte_4A57595 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A57595 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v8, 0LL);
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
        sub_1B8880C(this, method);
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
  if ( (byte_4A5758E & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A5758E = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A56DA0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56DA0 = 1;
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

  this->fields._TransformedServant_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TransformedServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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