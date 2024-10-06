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
  int32_t v20; // w2
  int32_t v21; // w3
  int64_t Instance; // x0
  __int64 v23; // x1
  struct PartyOrganizationListViewItem_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  char v27; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v34; // q0
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  struct PartyOrganizationListViewItem_o *v43; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x21
  __int64 v47; // x22
  __int64 v48; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  ServantLimitMaster_o *v53; // x22
  int32_t v54; // w23
  struct ServantLimitEntity_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  ServantCommentMaster_o *v58; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // q1
  UserServantCollectionMaster_o *v64; // x22
  int64_t v65; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  struct PartyOrganizationListViewItem_o *v69; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_40229084; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  const MethodInfo *v79; // x1
  struct UserServantCollectionEntity_o *v80; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v82; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v84; // x8
  _BOOL8 IsChoice; // x0
  __int64 v86; // x1
  const MethodInfo *v87; // x2
  struct System_Int64_array *v88; // x8
  int64_t v89; // x1
  struct UserServantCollectionEntity_o *v90; // x8
  int32_t v91; // w2
  int32_t v92; // w3
  bool IsNameTrue; // w9
  UserServantEntity_o *v94; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v96; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v98; // x8
  int32_t v99; // w0
  UserServantEntity_o *v100; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v102; // x2
  UserServantEntity_o *v103; // x0
  int32_t v104; // w0
  UserServantEntity_o *v105; // x8
  int32_t v106; // w0
  UserServantEntity_o *v107; // x1
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x2
  RandomLimitCountManager_c *v110; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_4A6C250 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v17);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v18);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A6C250 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, (int32_t)partyItem, v20, v21);
  if ( !partyItem )
    goto LABEL_73;
  v24 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.memberItem, (int32_t)v24, v25, v26);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
  {
    v27 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    v27 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v27;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v29, v30);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_73;
  v34 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  memberItem = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v34;
  if ( !memberItem )
    goto LABEL_73;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v31, v32);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_73;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v39, v40);
  v43 = this->fields.memberItem;
  if ( !v43 )
    goto LABEL_73;
  questRestrictionInfo = v43->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v41,
    v42);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v45 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v48 = *(_QWORD *)&v45[5].fields.currentCryptoKey;
  v47 = *(_QWORD *)&v45[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v48;
  *(_QWORD *)&v113.fields.fakeValue = v47;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v113, 0LL);
  if ( !v46 )
    goto LABEL_73;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v46,
             Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v51, v52);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v53 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v54 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[6], 0LL);
  if ( !v53 )
    goto LABEL_73;
  v55 = ServantLimitMaster__GetEntity(v53, v54, Instance, 0LL);
  this->fields.svtLimitEntity = v55;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v55, v56, v57);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_73;
  v58 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_svtEntity)[1], 0LL);
  if ( !v58 )
    goto LABEL_73;
  EntityList = ServantCommentMaster__GetEntityList(v58, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v60, v61);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v62 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v63 = v62[4];
  v64 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v112.fields.currentCryptoKey = v62[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v112.fields.fakeValue = v63;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v111 = v112;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v111, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v65 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[5], 0LL);
  if ( !v64 )
    goto LABEL_73;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v64, v65, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v67,
    v68);
  v69 = this->fields.memberItem;
  if ( !v69 )
    goto LABEL_73;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v69->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_73;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v71,
    v72);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_73;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_73;
  CostumeList_40229084 = UserServantCollectionEntity__getCostumeList_40229084(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_40229084;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_40229084, v77, v78);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v79);
  v80 = this->fields.userSvtCollectionEntity;
  if ( !v80 )
    goto LABEL_73;
  svtCommonFlag = v80->fields.svtCommonFlag;
  v82 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v82 )
    goto LABEL_73;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                   v82->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_73;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v84 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v84 )
    goto LABEL_73;
  IsChoice = UserServantEntity__IsChoice(v84, 0LL);
  v88 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v88 )
  {
    if ( !v88->max_length )
      sub_1B90274(IsChoice, v86);
    v89 = v88->m_Items[0];
  }
  else
  {
    v89 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v89, v87);
  v90 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v90 != 0LL;
  if ( !Instance )
LABEL_73:
    sub_1B9026C(Instance, v23);
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
  v94 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v94 != 0LL;
  if ( v94 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v94, 0LL);
    v94 = (UserServantEntity_o *)*p_userSvtEntity;
    v96 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v96 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v96;
  if ( !v94 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_56;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v94, 0LL);
  v98 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v98 )
  {
LABEL_56:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_57;
  }
  v99 = BasicHelper__DecryptValue_41163624(v98->fields.limitCountSupport, 0LL);
  v100 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v99;
  if ( v100 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v100, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_57:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v91,
    v92);
  v103 = this->fields.userSvtEntity;
  if ( v103 )
  {
    v104 = UserServantEntity__OwnRandomSettingSelectedButton(v103, 0LL);
    v105 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v104;
    if ( v105 )
    {
      v106 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v105, 0LL);
      v107 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_63;
    }
    v107 = 0LL;
  }
  else
  {
    v107 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v106 = 3;
LABEL_63:
  this->fields.supportRandomSettingButtonIndex = v106;
  ServantStatusListViewItem__SetLimitCountInfo(this, v107, v102);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v108);
    byte_4A6BA80 = 1;
  }
  v110 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v110 = RandomLimitCountManager_TypeInfo;
  }
  if ( v110->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v109);
  ServantStatusListViewItem__ModifyInfo(this, v108);
}


void __fastcall ServantStatusListViewItem___ctor_32682780(
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
  int32_t v17; // w2
  int32_t v18; // w3
  int64_t Instance; // x0
  __int64 v20; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v30; // q0
  struct PartyOrganizationListViewItem_o *v31; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  struct PartyOrganizationListViewItem_o *v39; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  ServantLimitMaster_o *v49; // x22
  int32_t v50; // w23
  struct ServantLimitEntity_o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  ServantCommentMaster_o *v54; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // q1
  UserServantCollectionMaster_o *v60; // x22
  int64_t v61; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  struct PartyOrganizationListViewItem_o *v65; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_40229084; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  const MethodInfo *v75; // x1
  struct UserServantCollectionEntity_o *v76; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v78; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v80; // x8
  _BOOL8 IsChoice; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x2
  struct System_Int64_array *v84; // x8
  int64_t v85; // x1
  struct UserServantCollectionEntity_o *v86; // x8
  int32_t v87; // w2
  int32_t v88; // w3
  bool IsNameTrue; // w9
  UserServantEntity_o *v90; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v92; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v94; // x8
  int32_t v95; // w0
  UserServantEntity_o *v96; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v98; // x2
  UserServantEntity_o *v99; // x0
  int32_t v100; // w0
  UserServantEntity_o *v101; // x8
  int32_t v102; // w0
  UserServantEntity_o *v103; // x1
  const MethodInfo *v104; // x1
  const MethodInfo *v105; // x2
  RandomLimitCountManager_c *v106; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_4A6C251 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A6C251 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.warBoardPartyItem, (int32_t)partyItem, v17, v18);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.memberItem, (int32_t)MemberItem, v22, v23);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v25, v26);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v30 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v31 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v30;
  if ( !v31 )
    goto LABEL_68;
  userServantEntity = v31->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v27, v28);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v35, v36);
  v39 = this->fields.memberItem;
  if ( !v39 )
    goto LABEL_68;
  questRestrictionInfo = v39->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v37,
    v38);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v44 = *(_QWORD *)&v41[5].fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v44;
  *(_QWORD *)&v109.fields.fakeValue = v43;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v109, 0LL);
  if ( !v42 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v42,
             Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v47, v48);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v49 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v50 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[6], 0LL);
  if ( !v49 )
    goto LABEL_68;
  v51 = ServantLimitMaster__GetEntity(v49, v50, Instance, 0LL);
  this->fields.svtLimitEntity = v51;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v51, v52, v53);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v54 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_svtEntity)[1], 0LL);
  if ( !v54 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v54, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v56, v57);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v58 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v59 = v58[4];
  v60 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v108.fields.currentCryptoKey = v58[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v108.fields.fakeValue = v59;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v107 = v108;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v107, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v61 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[5], 0LL);
  if ( !v60 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v60, v61, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v63,
    v64);
  v65 = this->fields.memberItem;
  if ( !v65 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v65->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v67,
    v68);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_40229084 = UserServantCollectionEntity__getCostumeList_40229084(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_40229084;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_40229084, v73, v74);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v75);
  v76 = this->fields.userSvtCollectionEntity;
  if ( !v76 )
    goto LABEL_68;
  svtCommonFlag = v76->fields.svtCommonFlag;
  v78 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v78 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                   v78->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v80 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v80 )
    goto LABEL_68;
  IsChoice = UserServantEntity__IsChoice(v80, 0LL);
  v84 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v84 )
  {
    if ( !v84->max_length )
      sub_1B90274(IsChoice, v82);
    v85 = v84->m_Items[0];
  }
  else
  {
    v85 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v85, v83);
  v86 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v86 != 0LL;
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
    sub_1B9026C(Instance, v20);
  }
  IsNameTrue = 0;
LABEL_43:
  v90 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v90 != 0LL;
  if ( v90 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v90, 0LL);
    v90 = (UserServantEntity_o *)*p_userSvtEntity;
    v92 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v92 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v92;
  if ( !v90 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v90, 0LL);
  v94 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v94 )
  {
LABEL_51:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_52;
  }
  v95 = BasicHelper__DecryptValue_41163624(v94->fields.limitCountSupport, 0LL);
  v96 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v95;
  if ( v96 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v96, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v87,
    v88);
  v99 = this->fields.userSvtEntity;
  if ( v99 )
  {
    v100 = UserServantEntity__OwnRandomSettingSelectedButton(v99, 0LL);
    v101 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v100;
    if ( v101 )
    {
      v102 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v101, 0LL);
      v103 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_58;
    }
    v103 = 0LL;
  }
  else
  {
    v103 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v102 = 3;
LABEL_58:
  this->fields.supportRandomSettingButtonIndex = v102;
  ServantStatusListViewItem__SetLimitCountInfo(this, v103, v98);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v104);
    byte_4A6BA80 = 1;
  }
  v106 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v106 = RandomLimitCountManager_TypeInfo;
  }
  if ( v106->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v105);
  ServantStatusListViewItem__ModifyInfo(this, v104);
}


void __fastcall ServantStatusListViewItem___ctor_32684420(
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
  int32_t v30; // w2
  int32_t v31; // w3
  int64_t Instance; // x0
  __int64 v33; // x1
  bool v34; // w8
  __int128 v35; // q1
  int32_t v36; // w2
  int32_t v37; // w3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x24
  __int64 v46; // x26
  __int64 v47; // x27
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x24
  int32_t v50; // w2
  int32_t v51; // w3
  ServantLimitMaster_o *v52; // x26
  int32_t v53; // w27
  struct ServantLimitEntity_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  ServantCommentMaster_o *v57; // x26
  int32_t v58; // w27
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  __int64 v63; // x26
  __int64 v64; // x27
  int32_t v65; // w0
  bool IsConvertOverwriteImage; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // q0
  int64_t v69; // x25
  int32_t v70; // w2
  int32_t v71; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // q0
  UserServantCollectionMaster_o *v74; // x25
  bool v75; // w20
  bool v76; // w29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x8
  int64_t v78; // x26
  __int64 v79; // x27
  __int64 v80; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x25
  int32_t lv; // w26
  struct System_Int32_array *CostumeList_40229084; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  const MethodInfo *v93; // x1
  struct System_Int32_array *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w2
  int32_t v98; // w3
  int32_t v99; // w2
  int32_t v100; // w3
  struct UserServantCollectionEntity_o *v101; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v103; // x8
  __int64 v104; // x25
  __int64 v105; // x26
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w2
  int32_t v109; // w3
  UserServantEntity_o *v110; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  __int64 v113; // x1
  const MethodInfo *v114; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v115; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // q0
  UserDeckMaster_o *v117; // x23
  bool v118; // w8
  struct System_Int64_array *v119; // x9
  int64_t v120; // x1
  struct UserServantCollectionEntity_o *v121; // x8
  int32_t v122; // w2
  int32_t v123; // w3
  bool IsNameTrue; // w9
  UserServantEntity_o *v125; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v127; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v129; // x8
  int32_t v130; // w0
  UserServantEntity_o *v131; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v133; // x2
  UserServantEntity_o *v134; // x0
  int32_t v135; // w0
  UserServantEntity_o *v136; // x8
  int32_t v137; // w0
  UserServantEntity_o *v138; // x1
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x2
  RandomLimitCountManager_c *v141; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16

  v15 = isEnableServantQuest;
  v16 = canMoveCombine;
  if ( (byte_4A6C252 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1B90010(&Method_DataManager_GetMasterData_UserDeckMaster___, v19);
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B90010(&NetworkManager_TypeInfo, v22);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v25);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_4A6C252 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v30, v31);
  this->fields.isEnableServantQuest = v15;
  this->fields._CanMoveCombine_k__BackingField = v16;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v34 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
    v34 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v34;
  if ( !userServant )
    goto LABEL_103;
  v35 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v146.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v146.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v145 = v146;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v145, 0LL);
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
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v36, v37);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v36, v37);
  this->fields.equipIdList = equipIdList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)equipIdList, v40, v41);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v42,
    v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v44 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v47 = *(_QWORD *)&v44[5].fields.currentCryptoKey;
  v46 = *(_QWORD *)&v44[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v147.fields.currentCryptoKey = v47;
  *(_QWORD *)&v147.fields.fakeValue = v46;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v147, 0LL);
  if ( !v45 )
    goto LABEL_103;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v45,
             Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v50, v51);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v52 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v53 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[6], 0LL);
  if ( !v52 )
    goto LABEL_103;
  v54 = ServantLimitMaster__GetEntity(v52, v53, Instance, 0LL);
  this->fields.svtLimitEntity = v54;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v54, v55, v56);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_103;
  v57 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v58 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[7], 0LL);
  if ( !v57 )
    goto LABEL_103;
  EntityList = ServantCommentMaster__GetEntityList(v57, v58, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v60, v61);
  if ( questRestrictionInfo )
  {
    v62 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v64 = *(_QWORD *)&v62[5].fields.currentCryptoKey;
    v63 = *(_QWORD *)&v62[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v148.fields.currentCryptoKey = v64;
    *(_QWORD *)&v148.fields.fakeValue = v63;
    v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v148, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v65, 0LL);
  }
  else
  {
    IsConvertOverwriteImage = 0;
  }
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v67 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_103:
    sub_1B9026C(Instance, v33);
  v68 = v67[4];
  v69 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v146.fields.currentCryptoKey = v67[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v146.fields.fakeValue = v68;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v144 = v146;
  if ( v69 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v144, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v72 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v73 = v72[4];
    v74 = (UserServantCollectionMaster_o *)Instance;
    v75 = enableTdSpeed;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v146.fields.currentCryptoKey = v72[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v146.fields.fakeValue = v73;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v76 = enableBattleVoice;
    v143 = v146;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v143, 0LL);
    v77 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v78 = Instance;
    v80 = *(_QWORD *)&v77[5].fields.currentCryptoKey;
    v79 = *(_QWORD *)&v77[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v149.fields.currentCryptoKey = v80;
    *(_QWORD *)&v149.fields.fakeValue = v79;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v149, 0LL);
    if ( !v74 )
      goto LABEL_103;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v74, v78, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
      (int32_t)EntityDefinitely,
      v82,
      v83);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_103;
    enableBattleVoice = v76;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v85,
      v86);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_103;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    enableTdSpeed = v75;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_103;
    CostumeList_40229084 = UserServantCollectionEntity__getCostumeList_40229084(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_40229084;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_40229084, v91, v92);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v93);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity, 0, v70, v71);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_103;
    v94 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v94;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, (int32_t)v94, v95, v96);
    this->fields.costumeIds = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, 0, v97, v98);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeAndOtherIds, 0, v99, v100);
  }
  v101 = this->fields.userSvtCollectionEntity;
  if ( !v101 )
    goto LABEL_103;
  svtCommonFlag = v101->fields.svtCommonFlag;
  v103 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v103 )
    goto LABEL_103;
  v105 = *(_QWORD *)&v103->fields.battleVoice.fields.currentCryptoKey;
  v104 = *(_QWORD *)&v103->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v150.fields.currentCryptoKey = v105;
  *(_QWORD *)&v150.fields.fakeValue = v104;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v150, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v106, v107);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v108, v109);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_103;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v110 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v110 )
    goto LABEL_103;
  Instance = UserServantEntity__IsChoice(v110, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_103;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v115 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v116 = v115[2];
    v117 = (UserDeckMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v146.fields.currentCryptoKey = v115[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v146.fields.fakeValue = v116;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v142 = v146;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v142, 0LL);
    if ( !v117 )
      goto LABEL_103;
    IsServantEquip = UserDeckMaster__IsEquip(v117, Instance, 0LL);
    v118 = IsServantEquip;
  }
  else
  {
    v118 = 0;
  }
  v119 = this->fields.equipIdList;
  this->fields.isUse = v118;
  if ( v119 )
  {
    if ( !v119->max_length )
      sub_1B90274(IsServantEquip, v113);
    v120 = v119->m_Items[0];
  }
  else
  {
    v120 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v120, v114);
  v121 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v121 != 0LL && enableTdSpeed;
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
  v125 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v125 != 0LL;
  if ( v125 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v125, 0LL);
    v125 = (UserServantEntity_o *)*p_userSvtEntity;
    v127 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v127 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v127;
  if ( !v125 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_86;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v125, 0LL);
  v129 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v129 )
  {
LABEL_86:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_87;
  }
  v130 = BasicHelper__DecryptValue_41163624(v129->fields.limitCountSupport, 0LL);
  v131 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v130;
  if ( v131 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v131, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_87:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v122,
    v123);
  v134 = this->fields.userSvtEntity;
  if ( v134 )
  {
    v135 = UserServantEntity__OwnRandomSettingSelectedButton(v134, 0LL);
    v136 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v135;
    if ( v136 )
    {
      v137 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v136, 0LL);
      v138 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_93;
    }
    v138 = 0LL;
  }
  else
  {
    v138 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v137 = 3;
LABEL_93:
  this->fields.supportRandomSettingButtonIndex = v137;
  ServantStatusListViewItem__SetLimitCountInfo(this, v138, v133);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v139);
    byte_4A6BA80 = 1;
  }
  v141 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v141 = RandomLimitCountManager_TypeInfo;
  }
  if ( v141->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v140);
  ServantStatusListViewItem__ModifyInfo(this, v139);
}


void __fastcall ServantStatusListViewItem___ctor_32686756(
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
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t Instance; // x0
  __int64 v21; // x1
  __int128 v22; // q1
  int32_t v23; // w2
  int32_t v24; // w3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v31; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x22
  __int64 v33; // x23
  __int64 v34; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  ServantLimitMaster_o *v39; // x23
  int32_t v40; // w24
  struct ServantLimitEntity_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  ServantCommentMaster_o *v44; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // q0
  int64_t v50; // x23
  int32_t v51; // w2
  int32_t v52; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // q0
  UserServantCollectionMaster_o *v55; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  int64_t v57; // x24
  __int64 v58; // x25
  __int64 v59; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_40229084; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  const MethodInfo *v72; // x1
  struct System_Int32_array *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w2
  int32_t v77; // w3
  int32_t v78; // w2
  int32_t v79; // w3
  struct UserServantCollectionEntity_o *v80; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v82; // x8
  __int64 v83; // x23
  __int64 v84; // x24
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t v87; // w2
  int32_t v88; // w3
  UserServantEntity_o *v89; // x8
  const MethodInfo *v90; // x2
  struct UserServantCollectionEntity_o *v91; // x8
  int32_t v92; // w2
  int32_t v93; // w3
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v95; // x8
  int32_t v96; // w0
  UserServantEntity_o *v97; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v99; // x2
  UserServantEntity_o *v100; // x0
  int32_t v101; // w0
  UserServantEntity_o *v102; // x8
  int32_t v103; // w0
  UserServantEntity_o *v104; // x1
  const MethodInfo *v105; // x1
  const MethodInfo *v106; // x2
  RandomLimitCountManager_c *v107; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4A6C253 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B90010(&NetworkManager_TypeInfo, v11);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A6C253 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v18, v19);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_73;
  v22 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v110 = v111;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v110, 0LL);
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
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v23, v24);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v27, v28);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v29, v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v31 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v34 = *(_QWORD *)&v31[5].fields.currentCryptoKey;
  v33 = *(_QWORD *)&v31[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v34;
  *(_QWORD *)&v112.fields.fakeValue = v33;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v112, 0LL);
  if ( !v32 )
    goto LABEL_73;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v32,
             Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v37, v38);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v39 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v40 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_userSvtEntity)[6], 0LL);
  if ( !v39 )
    goto LABEL_73;
  v41 = ServantLimitMaster__GetEntity(v39, v40, Instance, 0LL);
  this->fields.svtLimitEntity = v41;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v41, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_73;
  v44 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376((*p_svtEntity)[1], 0LL);
  if ( !v44 )
    goto LABEL_73;
  EntityList = ServantCommentMaster__GetEntityList(v44, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v46, v47);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v48 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_73;
  v49 = v48[4];
  v50 = Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.currentCryptoKey = v48[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.fakeValue = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v109 = v111;
  if ( v50 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v109, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_73;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v53 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_73;
    v54 = v53[4];
    v55 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.currentCryptoKey = v53[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.fakeValue = v54;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v108 = v111;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v108, 0LL);
    v56 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_73;
    v57 = Instance;
    v59 = *(_QWORD *)&v56[5].fields.currentCryptoKey;
    v58 = *(_QWORD *)&v56[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v113.fields.currentCryptoKey = v59;
    *(_QWORD *)&v113.fields.fakeValue = v58;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v113, 0LL);
    if ( !v55 )
      goto LABEL_73;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v55, v57, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
      (int32_t)EntityDefinitely,
      v61,
      v62);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_73;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v64,
      v65);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_73;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_73;
    CostumeList_40229084 = UserServantCollectionEntity__getCostumeList_40229084(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_40229084;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_40229084, v70, v71);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v72);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity, 0, v51, v52);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_73;
    v73 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v73;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, (int32_t)v73, v74, v75);
    this->fields.costumeIds = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, 0, v76, v77);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeAndOtherIds, 0, v78, v79);
  }
  v80 = this->fields.userSvtCollectionEntity;
  if ( !v80 )
    goto LABEL_73;
  svtCommonFlag = v80->fields.svtCommonFlag;
  v82 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v82 )
    goto LABEL_73;
  v84 = *(_QWORD *)&v82->fields.battleVoice.fields.currentCryptoKey;
  v83 = *(_QWORD *)&v82->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v84;
  *(_QWORD *)&v114.fields.fakeValue = v83;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v114, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v85, v86);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v87, v88);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_73;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v89 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v89 )
    goto LABEL_73;
  this->fields.isChoice = UserServantEntity__IsChoice(v89, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v90);
  v91 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v91 != 0LL;
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
    sub_1B9026C(Instance, v21);
  }
  IsNameTrue = 0;
LABEL_53:
  v95 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v95 )
  {
    v96 = BasicHelper__DecryptValue_41163624(v95->fields.limitCountSupport, 0LL);
    v97 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v96;
    if ( v97 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v97, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v92,
    v93);
  v100 = this->fields.userSvtEntity;
  if ( v100 )
  {
    v101 = UserServantEntity__OwnRandomSettingSelectedButton(v100, 0LL);
    v102 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v101;
    if ( v102 )
    {
      v103 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v102, 0LL);
      v104 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_64;
    }
    v104 = 0LL;
  }
  else
  {
    v104 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v103 = 3;
LABEL_64:
  this->fields.supportRandomSettingButtonIndex = v103;
  ServantStatusListViewItem__SetLimitCountInfo(this, v104, v99);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v105);
    byte_4A6BA80 = 1;
  }
  v107 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v107 = RandomLimitCountManager_TypeInfo;
  }
  if ( v107->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v106);
  ServantStatusListViewItem__ModifyInfo(this, v105);
}


void __fastcall ServantStatusListViewItem___ctor_32688552(
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
  int32_t v18; // w2
  int32_t v19; // w3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  struct UserServantCollectionEntity_o *v35; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x22
  __int64 v37; // x23
  __int64 v38; // x24
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  ServantLimitMaster_o *v43; // x23
  struct ServantLimitEntity_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  ServantCommentMaster_o *v48; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Int32_array *CostumeList; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  const MethodInfo *v58; // x1
  BalanceConfig_c *v59; // x0
  struct UserServantCollectionEntity_o *v60; // x8
  __int64 v61; // x22
  __int64 v62; // x23
  int32_t v63; // w22
  int32_t maxLimitCount; // w23
  struct UserServantCollectionEntity_o *v65; // x8
  __int64 v66; // x22
  __int64 v67; // x23
  int32_t v68; // w22
  int32_t v69; // w23
  struct UserServantCollectionEntity_o *v70; // x8
  struct System_Int32_array *CardSelectList; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  struct UserServantCollectionEntity_o *v74; // x8
  struct UserServantCollectionEntity_o *v75; // x8
  struct System_Int32_array *SelectList; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  struct UserServantCollectionEntity_o *v79; // x8
  struct UserServantCollectionEntity_o *v80; // x8
  struct System_Int32_array *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v88; // x8
  struct System_Int32_array *v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v93; // x8
  struct System_Int32_array *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  const MethodInfo *v97; // x2
  struct UserServantCollectionEntity_o *v98; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v100; // x8
  const MethodInfo *v101; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v8 = isEnableServantQuest;
  if ( (byte_4A6C254 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, userSvtCollectionEntity);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B90010(&ImageLimitCount_TypeInfo, v13);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A6C254 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v18, v19);
  this->fields.isEnableServantQuest = v8;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_56;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v22, v23);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v22, v23);
  this->fields.equipIdList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v24, v25);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v26, v27);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v29,
    v30);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v31, v32);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v33, v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v35 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v102.fields.currentCryptoKey = v38;
  *(_QWORD *)&v102.fields.fakeValue = v37;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v102, 0LL);
  if ( !v36 )
    goto LABEL_56;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v36,
             (int32_t)Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v41, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v43 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  if ( !v43 )
    goto LABEL_56;
  v44 = ServantLimitMaster__GetEntity(v43, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v44;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v44, v45, v46);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v47 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_56;
  v48 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v47[1], 0LL);
  if ( !v48 )
    goto LABEL_56;
  EntityList = ServantCommentMaster__GetEntityList(v48, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v50, v51);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v53,
    v54);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v56, v57);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v58);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v59 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v59 = BalanceConfig_TypeInfo;
    }
    Instance = (DataManager_o *)(unsigned int)v59->static_fields->OtherImageLimitCount;
    goto LABEL_32;
  }
  v60 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v62 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
  v61 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v62;
  *(_QWORD *)&v103.fields.fakeValue = v61;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v103, 0LL);
  if ( !*p_userSvtCollectionEntity )
LABEL_56:
    sub_1B9026C(Instance, v21);
  v63 = (int)Instance;
  maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v63, maxLimitCount, 1, 0, 0LL);
LABEL_32:
  v65 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v65 )
    goto LABEL_56;
  v67 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v104.fields.currentCryptoKey = v67;
  *(_QWORD *)&v104.fields.fakeValue = v66;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v104, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v68 = (int)Instance;
  v69 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v68, v69, 1, 0, 0LL);
  v70 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v70 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v70->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v72, v73);
  v74 = this->fields.userSvtCollectionEntity;
  if ( !v74 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v74->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v75 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v75 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v75->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v77, v78);
  v79 = this->fields.userSvtCollectionEntity;
  if ( !v79 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v79->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  v80 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v80 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v80->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v81 = ImageLimitCount__GetSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.commandCardSelectList = v81;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, (int32_t)v81, v82, v83);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_56;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v85, v86);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v88 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v88 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v88->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v89 = ImageLimitCount__GetCardSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.iconSelectList = v89;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, (int32_t)v89, v90, v91);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v93 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v93 )
    goto LABEL_56;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v93->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_56;
  v94 = ImageLimitCount__GetSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.portraitSelectList = v94;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, (int32_t)v94, v95, v96);
  v98 = this->fields.userSvtCollectionEntity;
  if ( !v98 )
    goto LABEL_56;
  svtCommonFlag = v98->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v97);
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
  v100 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v100 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v101);
}


void __fastcall ServantStatusListViewItem___ctor_32690192(
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
  int32_t v19; // w2
  int32_t v20; // w3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct UserServantCollectionEntity_o *v36; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x22
  __int64 v38; // x24
  __int64 v39; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  struct UserServantCollectionEntity_o *v44; // x8
  ServantLimitMaster_o *v45; // x23
  struct ServantLimitEntity_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  ServantCommentMaster_o *v50; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Int32_array *CostumeList; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  const MethodInfo *v60; // x1
  struct UserServantCollectionEntity_o *v61; // x8
  int32_t v62; // w22
  struct UserServantCollectionEntity_o *v63; // x8
  int32_t v64; // w0
  struct UserServantCollectionEntity_o *v65; // x8
  int32_t v66; // w0
  struct System_Int32_array *CardSelectList; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  struct UserServantCollectionEntity_o *v70; // x8
  int32_t v71; // w0
  struct UserServantCollectionEntity_o *v72; // x8
  int32_t v73; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct UserServantCollectionEntity_o *v77; // x8
  int32_t v78; // w0
  struct UserServantCollectionEntity_o *v79; // x8
  int32_t v80; // w0
  struct System_Int32_array *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v88; // x8
  int32_t v89; // w0
  struct System_Int32_array *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v94; // x8
  int32_t v95; // w0
  struct System_Int32_array *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  const MethodInfo *v99; // x2
  struct UserServantCollectionEntity_o *v100; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v102; // x8
  const MethodInfo *v103; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v10 = isEnableServantQuest;
  if ( (byte_4A6C255 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, userSvtCollectionEntity);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B90010(&ImageLimitCount_TypeInfo, v14);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A6C255 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v19, v20);
  this->fields.isEnableServantQuest = v10;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v23, v24);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v25, v26);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v27, v28);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v30,
    v31);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v32, v33);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v34, v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v36 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v104.fields.currentCryptoKey = v39;
  *(_QWORD *)&v104.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v104, 0LL);
  if ( !v37 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v37,
             (int32_t)Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v42, v43);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v44 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v45 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v44->fields.svtId,
                                0LL);
  if ( !v45 )
    goto LABEL_35;
  v46 = ServantLimitMaster__GetEntity(v45, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v46;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v46, v47, v48);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v50 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v49[1], 0LL);
  if ( !v50 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v50, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v52, v53);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v55,
    v56);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v58, v59);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v60);
  v61 = this->fields.userSvtCollectionEntity;
  if ( !v61 )
    goto LABEL_35;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v61->fields.svtId, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v62, limitCount, 1, 0, 0LL);
  v63 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v63 )
    goto LABEL_35;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v63->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v64, limitCount, 1, 0, 0LL);
  v65 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v65 )
    goto LABEL_35;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v65->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v66, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v68, v69);
  v70 = this->fields.userSvtCollectionEntity;
  if ( !v70 )
    goto LABEL_35;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v70->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v71, limitCount, 0LL);
  v72 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v72 )
    goto LABEL_35;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v72->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v73, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v75, v76);
  v77 = this->fields.userSvtCollectionEntity;
  if ( !v77 )
    goto LABEL_35;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v77->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v78, limitCount, 0LL);
  v79 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v79 )
    goto LABEL_35;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v79->fields.svtId, 0LL);
  v81 = ImageLimitCount__GetSelectList(v80, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v81;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, (int32_t)v81, v82, v83);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v85, v86);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v88 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v88 )
    goto LABEL_35;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v88->fields.svtId, 0LL);
  v90 = ImageLimitCount__GetCardSelectList(v89, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v90;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, (int32_t)v90, v91, v92);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v94 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v94 )
    goto LABEL_35;
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v94->fields.svtId, 0LL);
  v96 = ImageLimitCount__GetSelectList(v95, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v96;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, (int32_t)v96, v97, v98);
  v100 = this->fields.userSvtCollectionEntity;
  if ( !v100 )
    goto LABEL_35;
  svtCommonFlag = v100->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v99);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_35:
    sub_1B9026C(Instance, v22);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v102 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v102 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v103);
}


void __fastcall ServantStatusListViewItem___ctor_32691616(
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  ServantLimitMaster_o *v38; // x22
  struct ServantLimitEntity_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v42; // x8
  ServantCommentMaster_o *v43; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  ServantLeaderInfo_o *v52; // x8
  struct ServantLeaderInfo_o *v53; // x8
  int32_t v54; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_37746852; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  ServantLeaderInfo_o *v60; // x8
  struct ServantLeaderInfo_o *v61; // x8
  struct System_Int32_array *SelectList_37746036; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  ServantLeaderInfo_o *v65; // x8
  struct ServantLeaderInfo_o *v66; // x8
  struct System_Int32_array *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w2
  int32_t v71; // w3
  struct ServantLeaderInfo_o *v72; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v74; // x8
  struct ServantLeaderInfo_o *v75; // x8
  struct System_Int32_array *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  ServantLeaderInfo_o *v79; // x8
  struct ServantLeaderInfo_o *v80; // x8
  struct System_Int32_array *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  const MethodInfo *v84; // x2
  struct ServantLeaderInfo_o *v85; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v87; // x21
  __int64 v88; // x22
  __int64 v89; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v90; // x21
  __int64 v91; // x22
  __int64 v92; // x23
  Il2CppObject *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  __int64 v96; // x8
  ServantLimitMaster_o *v97; // x21
  __int64 v98; // x8
  struct ServantLimitEntity_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  const MethodInfo *v102; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4A6C256 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, servantLeaderInfo);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B90010(&ImageLimitCount_TypeInfo, v10);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A6C256 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v13, v14);
  this->fields.userSvtEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v15, v16);
  this->fields.equipIdList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v17, v18);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v19, v20);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity, 0, v21, v22);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)servantLeaderInfo,
    v24,
    v25);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, 0, v26, v27);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v33 = *(_QWORD *)&v30[3].fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30[3].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v33;
  *(_QWORD *)&v103.fields.fakeValue = v32;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v103, 0LL);
  if ( !v31 )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             (int32_t)Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v36, v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v38 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  if ( !v38 )
    goto LABEL_59;
  v39 = ServantLimitMaster__GetEntity(v38, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v39;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v39, v40, v41);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v42 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_59;
  v43 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v42[1], 0LL);
  if ( !v43 )
    goto LABEL_59;
  EntityList = ServantCommentMaster__GetEntityList(v43, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v45, v46);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v48,
    v49);
  this->fields.costumeIds = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, 0, v50, v51);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v52 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v52 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v52, 0, 0LL);
  v53 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v53 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v53->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v54 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList_37746852 = ImageLimitCount__GetCardSelectList_37746852(v54, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_37746852;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList,
    (int32_t)CardSelectList_37746852,
    v58,
    v59);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v60 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)Instance;
  if ( !v60 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v60, 0LL);
  v61 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v61 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v61->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  SelectList_37746036 = ImageLimitCount__GetSelectList_37746036(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_37746036;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, (int32_t)SelectList_37746036, v63, v64);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v65 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v65 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v65, 0LL);
  v66 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  if ( !v66 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v66->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v67 = ImageLimitCount__GetSelectList_37746036(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.commandCardLimitCount,
          0,
          0LL);
  this->fields.commandCardSelectList = v67;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, (int32_t)v67, v68, v69);
  v72 = this->fields.servantLeaderInfo;
  if ( !v72 )
    goto LABEL_59;
  commandCardParam = v72->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, (int32_t)commandCardParam, v70, v71);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v74 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)Instance;
  if ( !v74 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v74, 0, 0LL);
  v75 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)Instance;
  if ( !v75 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v75->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v76 = ImageLimitCount__GetCardSelectList_37746852(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.iconLimitCount,
          0LL);
  this->fields.iconSelectList = v76;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, (int32_t)v76, v77, v78);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v79 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)Instance;
  if ( !v79 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v79, 0LL);
  v80 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)Instance;
  if ( !v80 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                v80->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v81 = ImageLimitCount__GetSelectList_37746036(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.portraitLimitCount,
          0,
          0LL);
  this->fields.portraitSelectList = v81;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, (int32_t)v81, v82, v83);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v84);
  v85 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v85 )
    goto LABEL_59;
  equipTarget1 = v85->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v88 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v87 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v104.fields.currentCryptoKey = v88;
    *(_QWORD *)&v104.fields.fakeValue = v87;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v104, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v89 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v89 )
          {
            v90 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v92 = *(_QWORD *)(v89 + 56);
            v91 = *(_QWORD *)(v89 + 64);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v105.fields.currentCryptoKey = v92;
            *(_QWORD *)&v105.fields.fakeValue = v91;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v105, 0LL);
            if ( v90 )
            {
              v93 = DataMasterBase_object__object__int___GetEntity(
                      v90,
                      (int32_t)Instance,
                      (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v93;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v93, v94, v95);
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v96 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v96 )
                  {
                    v97 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v96 + 56),
                                                  0LL);
                    if ( *p_servantLeaderInfo )
                    {
                      v98 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v98 )
                      {
                        if ( v97 )
                        {
                          v99 = ServantLimitMaster__GetEntity(v97, (int32_t)Instance, *(_DWORD *)(v98 + 72), 0LL);
                          this->fields.equipSvtLimitEntity = v99;
                          sub_1B8FFB4(
                            (ServantStatusBattleListViewItem_o *)&this->fields.equipSvtLimitEntity,
                            (int32_t)v99,
                            v100,
                            v101);
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
      sub_1B9026C(Instance, v29);
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
  ServantStatusListViewItem__ModifyInfo(this, v102);
}


void __fastcall ServantStatusListViewItem___ctor_32693304(
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  struct EquipTargetInfo_o **p_equipTargetInfo; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  struct EquipTargetInfo_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  ServantLimitMaster_o *v38; // x22
  struct ServantLimitEntity_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  ServantCommentMaster_o *v42; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4A6C257 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantCommentMaster___, equipTargetInfo);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A6C257 = 1;
  }
  v12 = isNpcFollowerServantEquip;
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v13, v14);
  this->fields.userSvtEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v15, v16);
  this->fields.equipIdList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v17, v18);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v19, v20);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEntity, 0, v21, v22);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.servantLeaderInfo, 0, v23, v24);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.equipTargetInfo, (int32_t)equipTargetInfo, v26, v27);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v12;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v33;
  *(_QWORD *)&v64.fields.fakeValue = v32;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v64, 0LL);
  if ( !v31 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             (int32_t)Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtEntity, (int32_t)Entity, v36, v37);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v38 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                               (*p_equipTargetInfo)->fields.svtId,
                               0LL);
  if ( !*p_equipTargetInfo
    || !v38
    || (v39 = ServantLimitMaster__GetEntity(v38, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v39,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtLimitEntity, (int32_t)v39, v40, v41),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v42 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                     (*p_svtEntity)[1],
                                     0LL),
        !v42) )
  {
LABEL_16:
    sub_1B9026C(Instance, v29);
  }
  EntityList = ServantCommentMaster__GetEntityList(v42, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v44, v45);
  this->fields.commandCodeIdList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v46, v47);
  this->fields.costumeIds = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.costumeIds, 0, v48, v49);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList, 0, v50, v51);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, 0, v52, v53);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, 0, v54, v55);
  this->fields.commandCardParam = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, 0, v56, v57);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, 0, v58, v59);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, 0, v60, v61);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v62);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v63);
}


void __fastcall ServantStatusListViewItem___ctor_32694132(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4A6C258 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, commandCode);
    sub_1B90010(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A6C258 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v10, v11);
  this->fields.userCommandCodeEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeEntity, 0, v12, v13);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)commandCode, v14, v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v21 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v21;
  *(_QWORD *)&v24.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v24, 0LL);
  if ( !v19 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v19,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_312C5FC *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeCollectionEntity, 0, v22, v23);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_1B9026C(Instance, v17);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_32694508(
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
  int32_t v16; // w2
  int32_t v17; // w3
  int64_t Instance; // x0
  __int64 v19; // x1
  __int128 v20; // q1
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  Il2CppObject *Entity; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x21
  struct UserCommandCodeEntity_o *v33; // x8
  __int128 v34; // q0
  int64_t v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  struct UserCommandCodeEntity_o *v38; // x8
  __int128 v39; // q0
  UserCommandCodeCollectionMaster_o *v40; // x21
  struct UserCommandCodeEntity_o *v41; // x8
  int64_t v42; // x22
  __int64 v43; // x23
  __int64 v44; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x0
  int32_t v46; // w1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v48; // x8
  struct UserCommandCodeEntity_o *v49; // x8
  __int128 v50; // q0
  UserServantCommandCodeMaster_o *v51; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+80h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4A6C259 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCode);
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1B90010(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_1B90010(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v9);
    sub_1B90010(&NetworkManager_TypeInfo, v10);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A6C259 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v16, v17);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_42;
  v20 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v56 = v57;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v56, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_42;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v21, v22);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCode,
    v21,
    v22);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v24 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v27 = *(_QWORD *)&v24->fields.commandCodeId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v27;
  *(_QWORD *)&v58.fields.fakeValue = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v58, 0LL);
  if ( !v25 )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v25,
             Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v29, v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_42;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v32 )
    goto LABEL_42;
  DataMasterBase_object__object__int___TryGetEntity(
    v32,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_312C5FC *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  v33 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v34 = *(_OWORD *)&v33->fields.userId.fields.fakeValue;
  v35 = Instance;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v33->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v34;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v55 = v57;
  if ( v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v55, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v38 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v39 = *(_OWORD *)&v38->fields.userId.fields.fakeValue;
        v40 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v38->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v57.fields.fakeValue = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v54 = v57;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v54, 0LL);
        v41 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v42 = Instance;
          v44 = *(_QWORD *)&v41->fields.commandCodeId.fields.currentCryptoKey;
          v43 = *(_QWORD *)&v41->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = v44;
          *(_QWORD *)&v59.fields.fakeValue = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v59, 0LL);
          if ( v40 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v40, v42, Instance, 0LL);
            v46 = (int)EntityDefinitely;
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_33;
          }
        }
      }
    }
LABEL_42:
    sub_1B9026C(Instance, v19);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  v46 = 0;
LABEL_33:
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_userCommandCodeCollectionEntity, v46, v36, v37);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v48 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v48 )
    goto LABEL_42;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v48, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v49 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_42;
  v50 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
  v51 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v53 = v57;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v53, 0LL);
  if ( !v51 )
    goto LABEL_42;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v51, Instance, 0LL);
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


void __fastcall ServantStatusListViewItem___ctor_32695584(
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
  int32_t v12; // w2
  int32_t v13; // w3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  __int64 v21; // x21
  __int64 v22; // x22
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A6C25A & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCodeCollection);
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_1B90010(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_1B90010(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A6C25A = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)SelfUserGame, v12, v13);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, 0, v16, v17);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v16,
    v17);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v19 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v22 = *(_QWORD *)&v19->fields.commandCodeId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v22;
  *(_QWORD *)&v28.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v28, 0LL);
  if ( !v20 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)Instance,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v24, v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v27)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v27,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_312C5FC *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1B9026C(Instance, v15);
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
  int32_t v6; // w2
  int32_t v7; // w3
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v9; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v11; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *v12; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v13; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v14; // x21

  if ( (byte_4A6C25D & 1) == 0 )
  {
    sub_1B90010(&ServantStatusListViewItem_LimitCountCache_TypeInfo, ignoreRandomSettings);
    byte_4A6C25D = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1B9025C(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0LL);
  this->fields.currentLimitCountCache = v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.currentLimitCountCache, (int32_t)v5, v6, v7);
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
      sub_1B9026C(userSvtEntity, v9);
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
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)idList,
    (int32_t)appendPassiveSkillIdList,
    (int32_t)titleList,
    (int32_t)explanationList);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)appendPassiveSkillTitleMessageList, v14, v15);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)explanationList,
    (int32_t)appendPassiveSkillExplanationMessageList,
    v17,
    v18);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)releaseStateList,
    (int32_t)appendPassiveSkillReleaseStateList,
    v20,
    v21);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)lvList, (int32_t)appendPassiveSkillLvList, v23, v24);
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
      sub_1B9026C(this, checkTransform);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)equipSkillInfoList, (int32_t)method, v3);
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

  if ( (byte_4A6C274 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_FriendshipMaster___, rank);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A6C274 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v26, 0LL);
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
    sub_1B9026C(Instance, v15);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isTdResult;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo_32703912(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A6C273 & 1) == 0 )
  {
    sub_1B90010(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4A6C273 = 1;
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
      sub_1B9026C(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1B9025C(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v9, v10, v11);
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
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)idList,
      (int32_t)transformedPassiveSkillIdList,
      (int32_t)titleList,
      (int32_t)explanationList);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_1B8FFB4(
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
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)idList,
      (int32_t)passiveSkillIdList,
      (int32_t)titleList,
      (int32_t)explanationList);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)passiveSkillTitleMessageList, v19, v20);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v21 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v21, v14, v15);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_32703416(
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A6C272 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, idList);
    sub_1B90010(&int___TypeInfo, v11);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_1B90010(&string___TypeInfo, v13);
    byte_4A6C272 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      sub_1B9026C(svtEntity, idList);
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
    v17 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
    *idList = v17;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)idList, (int32_t)v17, v18, v19);
    v20 = (System_String_array *)sub_1B900B8(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v20;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v20, v21, v22);
    v23 = (System_String_array *)sub_1B900B8(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v23;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v23, v24, v25);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v6, checkTransform, (int32_t)method);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo_32703004(
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
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A6C271 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B90010(&SkillInfo___TypeInfo, v7);
    byte_4A6C271 = 1;
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
      v11 = (SkillInfo_array *)sub_1B900B8(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
      *skillInfoList = v11;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v11, v12, v13);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)transformedTdInfo, (int32_t)method, v3);
}


bool __fastcall ServantStatusListViewItem__GetVoiceInfo(
        ServantStatusListViewItem_o *this,
        System_String_o **illust,
        System_String_o **voice,
        bool *isPlayVoice,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  ServantLimitAddMaster_o *Master_object; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v26; // x1
  int32_t illustratorId; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v32; // x8
  ServantLimitAddMaster_o *v33; // x23
  __int64 v34; // x26
  __int64 v35; // x27
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *monitor; // x1
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x1
  __int64 *v44; // x8
  System_String_o *v45; // x0
  ServantLimitAddEntity_o *v47; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4A6C275 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, illust);
    sub_1B90010(&Method_DataManager_GetMasterData_CvMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_IllustratorMaster___, v10);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11);
    sub_1B90010(&DataManager_TypeInfo, v12);
    sub_1B90010(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__, v13);
    sub_1B90010(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v14);
    sub_1B90010(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v15);
    sub_1B90010(&ImageLimitCount_TypeInfo, v16);
    sub_1B90010(&LocalizationManager_TypeInfo, v17);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B90010(&StringLiteral_14833/*"UNKNOWN_NAME_ILLUST"*/, v20);
    sub_1B90010(&StringLiteral_9303/*"NO_ENTRY_NAME_ILLUST"*/, v21);
    sub_1B90010(&StringLiteral_1/*""*/, v22);
    byte_4A6C275 = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4(
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
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v32 = this->fields.svtEntity;
      if ( v32 )
      {
        v33 = Master_object;
        v35 = *(_QWORD *)&v32->fields.id.fields.currentCryptoKey;
        v34 = *(_QWORD *)&v32->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v35;
        *(_QWORD *)&v49.fields.fakeValue = v34;
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                     v49,
                                                     0LL);
        if ( v33 )
        {
          if ( ServantLimitAddMaster__TryGetEntity(v33, &v47, (int32_t)Master_object, currentCardLimitCount, 0LL) )
          {
            Master_object = (ServantLimitAddMaster_o *)v47;
            if ( !v47 )
              goto LABEL_44;
            cvId = ServantLimitAddEntity__GetOverwriteCvId(v47, cvId, 0LL);
          }
          if ( cvId < 1 )
            goto LABEL_28;
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v36 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_312C5A8 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v36 )
              {
                monitor = (System_String_o *)v36[1].monitor;
                *voice = monitor;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)voice, (int32_t)monitor, v37, v38);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1B9026C(Master_object, v24);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v26);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_312C5FC *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
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
        v44 = &StringLiteral_9303/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_42:
        v45 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
        LODWORD(v43) = (_DWORD)v45;
        *illust = v45;
        goto LABEL_43;
      }
    }
LABEL_41:
    v44 = &StringLiteral_14833/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v40 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_312C5A8 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v40 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_41;
  }
  v43 = (System_String_o *)v40[1].monitor;
  *illust = v43;
LABEL_43:
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)illust, (int32_t)v43, v41, v42);
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

  if ( (byte_4A6C278 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B90010(&StringLiteral_1/*""*/, v8);
    byte_4A6C278 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B9026C(Instance, v10);
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
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x22
  bool TreasureDeviceInfo; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *equipTargetInfo; // x0

  if ( (byte_4A6C25E & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_1B90010(&TreasureDvcInfo_TypeInfo, v3);
    byte_4A6C25E = 1;
  }
  this->fields.isTdResult = 0;
  v4 = (TreasureDvcInfo_o *)sub_1B9025C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v4, 0LL);
  this->fields.tdInfo = v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.tdInfo, (int32_t)v4, v5, v6);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v7);
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
    sub_1B9026C(svtEntity, v8);
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
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  ServantStatusListViewItem__SetTransformData(this, v8);
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

  if ( (byte_4A6C25B & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v4);
    sub_1B90010(&UserServantEntity_TypeInfo, v5);
    byte_4A6C25B = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
      v8 = sub_1B9025C(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_40246124((UserServantEntity_o *)v8, userSvtEntity, 0LL);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0LL);
      if ( !v8 )
        sub_1B9026C(*(_QWORD *)&v10.fields.currentCryptoKey, *(_QWORD *)&v10.fields.fakeValue);
      v11 = *(_QWORD *)(v8 + 80);
      v12 = *(_QWORD *)(v8 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 208) = v10;
      *(_QWORD *)&v19.fields.currentCryptoKey = v11;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v19, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  int32_t v13; // w1
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v16; // x0
  System_Collections_Generic_List_int__o *v17; // x20
  struct System_Int32_array *v18; // x0
  struct System_Int32_array **v19; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  struct System_Int32_array *v25; // x0

  if ( (byte_4A6C279 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&int___TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor___76120648, v7);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4A6C279 = 1;
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
      v16 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
      v17 = v16;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_55521904(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_34F3270 *)Method_System_Collections_Generic_List_int___ctor___76120648);
      else
        System_Collections_Generic_List_int____ctor(
          v16,
          (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v17 )
      {
        items = v17->fields._items;
        method = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&svtEntity->fields.starRate + 856LL);
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( items )
        {
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              (int32_t)method,
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = size + 1;
            items->m_Items[size + 1] = (int)method;
          }
          v25 = System_Collections_Generic_List_int___ToArray(
                  v17,
                  (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
          this->fields.costumeAndOtherIds = v25;
          v13 = (int)v25;
          p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
          goto LABEL_25;
        }
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v18 = (struct System_Int32_array *)sub_1B900B8(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v18;
      v19 = &this->fields.costumeAndOtherIds;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v19, (int32_t)v18, v20, v21);
      svtEntity = (ServantEntity_o *)*(v19 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v19, 0, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B9026C(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v13 = 0;
LABEL_25:
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_costumeAndOtherIds, v13, v10, v11);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_equipUserSvtEntity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v16; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v21; // x8
  ServantStatusListViewItem_o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  Il2CppObject *Entity; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  ServantStatusListViewItem_o *v28; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x8
  int32_t v30; // w20
  ServantLimitEntity_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Int64_array *v34; // x8
  PartyOrganizationListViewItem_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  BalanceConfig_c *v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v5 = this;
  if ( (byte_4A6C25F & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, equipUserSvtId);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1B90010(&DataManager_TypeInfo, v9);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B90010(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    this = (ServantStatusListViewItem_o *)sub_1B90010(&SkillInfo___TypeInfo, v14);
    byte_4A6C25F = 1;
  }
  if ( equipUserSvtId >= 1 && v5->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v5->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v5->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_312C7A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v16 = *p_equipUserSvtEntity;
      if ( !*p_equipUserSvtEntity )
        goto LABEL_38;
      v18 = *(_QWORD *)&v16[5].fields.currentCryptoKey;
      v17 = *(_QWORD *)&v16[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v44.fields.currentCryptoKey = v18;
      *(_QWORD *)&v44.fields.fakeValue = v17;
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                              v44,
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
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
            v21 = *p_equipUserSvtEntity;
            if ( *p_equipUserSvtEntity )
            {
              v22 = this;
              v24 = *(_QWORD *)&v21[5].fields.currentCryptoKey;
              v23 = *(_QWORD *)&v21[5].fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v45.fields.currentCryptoKey = v24;
              *(_QWORD *)&v45.fields.fakeValue = v23;
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                      v45,
                                                      0LL);
              if ( v22 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                           (int32_t)this,
                           (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v5->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1B8FFB4(
                  (ServantStatusBattleListViewItem_o *)&v5->fields.equipServantEntity,
                  (int32_t)Entity,
                  v26,
                  v27);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v28 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0LL);
                    v29 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v30 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                              v29[6],
                                                              0LL);
                      if ( v28 )
                      {
                        v31 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v28, v30, (int32_t)this, 0LL);
                        v5->fields.equipSvtLimitEntity = v31;
                        sub_1B8FFB4(
                          (ServantStatusBattleListViewItem_o *)&v5->fields.equipSvtLimitEntity,
                          (int32_t)v31,
                          v32,
                          v33);
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
          sub_1B9026C(this, equipUserSvtId);
        }
LABEL_39:
        sub_1B90274(this, equipUserSvtId);
      }
    }
  }
  v34 = v5->fields.equipIdList;
  if ( v34 )
  {
    if ( !v34->max_length )
      goto LABEL_39;
    v34->m_Items[0] = 0LL;
  }
  v35 = v5->fields.memberItem;
  if ( v35 && !v35->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v35, 0LL, 0LL);
  v5->fields.equipTargetId1 = 0LL;
  v5->fields.equipUserSvtEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v5->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  v5->fields.equipServantEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v5->fields.equipServantEntity, 0, v36, v37);
  v5->fields.equipSvtLimitEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v5->fields.equipSvtLimitEntity, 0, v38, v39);
  v40 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  v41 = sub_1B900B8(SkillInfo___TypeInfo, (unsigned int)v40->static_fields->SvtEquipSkillListMax);
  v5->fields.equipSkillInfoList = (struct SkillInfo_array *)v41;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v5->fields.equipSkillInfoList, v41, v42, v43);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w21
  int32_t v16; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w22
  int32_t v21; // w0
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w22
  int32_t v29; // w0
  struct System_Int32_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w0
  __int64 v34; // x8
  int32_t v35; // w20
  int32_t v36; // w0
  struct System_Int32_array *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A6C25C & 1) == 0 )
  {
    sub_1B90010(&ImageLimitCount_TypeInfo, entity);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A6C25C = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0LL);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0LL);
    v7 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v7;
    *(_QWORD *)&v40.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v40, 0LL);
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v11 = v9;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardSelectList = ImageLimitCount__GetCardSelectList(v8, v11, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v13, v14);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(entity->fields.svtId, 0LL);
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(entity->fields.limitCount, 0LL);
    SelectList = ImageLimitCount__GetSelectList(v15, v16, this->fields.costumeIds, 0LL);
    this->fields.dispSelectList = SelectList;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v18, v19);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(entity->fields.svtId, 0LL);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(entity->fields.limitCount, 0LL);
    v22 = ImageLimitCount__GetSelectList(v20, v21, this->fields.costumeIds, 0LL);
    this->fields.commandCardSelectList = v22;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.commandCardSelectList, (int32_t)v22, v23, v24);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0LL);
    this->fields.commandCardParam = CommandCardParam;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v26,
      v27);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(entity->fields.svtId, 0LL);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(entity->fields.limitCount, 0LL);
    v30 = ImageLimitCount__GetCardSelectList(v28, v29, this->fields.costumeIds, 0LL);
    this->fields.iconSelectList = v30;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.iconSelectList, (int32_t)v30, v31, v32);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(entity->fields.svtId, 0LL);
    v34 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v41.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v35 = v33;
    *(_QWORD *)&v41.fields.currentCryptoKey = v34;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v41, 0LL);
    v37 = ImageLimitCount__GetSelectList(v35, v36, this->fields.costumeIds, 0LL);
    this->fields.portraitSelectList = v37;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.portraitSelectList, (int32_t)v37, v38, v39);
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
  if ( (byte_4A6C270 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B90010(&UserServantEntity_TypeInfo, *(_QWORD *)&index);
    byte_4A6C270 = 1;
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
        sub_1B90274(this, *(_QWORD *)&index);
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
  int32_t v16; // w2
  int32_t v17; // w3
  ServantTransformEntity_o *v18; // x8
  struct System_String_o *befTitle; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_String_o *aftTitle; // x1
  Il2CppObject *v23; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v29; // x22
  const MethodInfo *v30; // x1
  ServantLimitEntity_o *v31; // x20
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t lv; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  struct EquipTargetInfo_o *equipTargetInfo; // x9
  int32_t v36; // w2
  int32_t v37; // w3
  _DWORD *v38; // x21
  int32_t atkMax; // w24
  int32_t atkBase; // w25
  int v41; // w23
  CheckCombineResStatus_c *v42; // x0
  _DWORD *v43; // x9
  int32_t LOT_RATE; // w8
  int32_t v45; // w23
  int32_t adjustAtk; // w24
  struct ServantLeaderInfo_o *v47; // x10
  BalanceConfig_c *v48; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v50; // w8
  int32_t StatusUpAdjustHp; // w10
  UserServantEntity_o *v52; // x0
  UserServantEntity_o *v53; // x22
  int32_t v54; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  ServantLeaderInfo_o *v56; // x0
  ServantLeaderInfo_o *v57; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A6C27A & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&CheckCombineResStatus_TypeInfo, v3);
    sub_1B90010(&Method_DataManager_GetMaster_ServantExpMaster___, v4);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLimitMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMaster_ServantTransformMaster___, v7);
    sub_1B90010(&DataManager_TypeInfo, v8);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    byte_4A6C27A = 1;
  }
  entity = 0LL;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantTransformMaster___);
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
      v18 = entity;
      if ( !entity )
        goto LABEL_57;
      this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
      this->fields._TransformedServantDispLimitCount_k__BackingField = v18->fields.aftDispLimitCount - 1;
      befTitle = v18->fields.befTitle;
      this->fields.transformNameBefore = befTitle;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.transformNameBefore, (int32_t)befTitle, v16, v17);
      if ( !entity )
        goto LABEL_57;
      aftTitle = entity->fields.aftTitle;
      this->fields.transformNameAfter = aftTitle;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.transformNameAfter, (int32_t)aftTitle, v20, v21);
      this->fields._IsTransformServant_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SvtId = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !SvtId )
        goto LABEL_57;
      v23 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
              this->fields._TransformedSvtId_k__BackingField,
              (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
      this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v23;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&this->fields._TransformedServant_k__BackingField,
        (int32_t)v23,
        v25,
        v26);
      v27 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
      v29 = (ServantLimitMaster_o *)v27;
      SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v30);
      if ( !v29 )
        goto LABEL_57;
      v31 = ServantLimitMaster__GetEntity(v29, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0LL);
      SvtId = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantExpMaster___);
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
      if ( !v31 )
        goto LABEL_57;
      v38 = SvtId;
      if ( !SvtId )
        goto LABEL_57;
      atkBase = v31->fields.atkBase;
      atkMax = v31->fields.atkMax;
      v41 = *((_DWORD *)SvtId + 7);
      v42 = CheckCombineResStatus_TypeInfo;
      if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
        v42 = CheckCombineResStatus_TypeInfo;
      }
      v43 = this->fields.userSvtEntity;
      LOT_RATE = v42->static_fields->LOT_RATE;
      v45 = v41 * (atkMax - atkBase) / LOT_RATE + v31->fields.atkBase;
      this->fields.transformedAtk = v45;
      if ( v43 )
      {
        adjustAtk = v43[68];
      }
      else
      {
        v47 = this->fields.servantLeaderInfo;
        if ( v47 )
          adjustAtk = v47->fields.adjustAtk;
        else
          adjustAtk = 0;
      }
      v48 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v48 = BalanceConfig_TypeInfo;
        v43 = this->fields.userSvtEntity;
        LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
      }
      static_fields = v48->static_fields;
      this->fields.transformedAtk = v45 + static_fields->StatusUpAdjustAtk * adjustAtk;
      v50 = v38[7] * (v31->fields.hpMax - v31->fields.hpBase) / LOT_RATE + v31->fields.hpBase;
      if ( v43 )
      {
        LODWORD(v43) = v43[69];
      }
      else
      {
        v43 = this->fields.servantLeaderInfo;
        if ( v43 )
          LODWORD(v43) = v43[22];
      }
      StatusUpAdjustHp = static_fields->StatusUpAdjustHp;
      this->fields.transformedServantLimitEntity = v31;
      this->fields.transformedHp = v50 + StatusUpAdjustHp * (_DWORD)v43;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&this->fields.transformedServantLimitEntity,
        (int32_t)v31,
        v36,
        v37);
      v52 = this->fields.userSvtEntity;
      if ( v52 )
      {
        UserServantEntity__GetTransformedSkillInfo(
          v52,
          &this->fields.transformedSkillInfoList,
          this->fields._TransformedSvtId_k__BackingField,
          -1,
          this->fields._TransformedServantDispLimitCount_k__BackingField,
          1,
          0,
          -1,
          0LL);
        v53 = this->fields.userSvtEntity;
        v54 = this->fields._TransformedSvtId_k__BackingField;
        TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
        SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( SvtId )
        {
          if ( v53 )
          {
            UserServantEntity__GetTransformedPassiveSkillInfo(
              v53,
              &this->fields.transformedPassiveSkillIdList,
              &this->fields.transformedPassiveSkillTitleMessageList,
              &this->fields.transformedPassiveSkillExplanationMessageList,
              v54,
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
        sub_1B9026C(SvtId, v15);
      }
      v56 = this->fields.servantLeaderInfo;
      if ( v56 )
      {
        ServantLeaderInfo__GetTransformedSkillInfo(
          v56,
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
        v57 = this->fields.servantLeaderInfo;
        this->fields.transformedAtk = (int)SvtId;
        if ( !v57 )
          goto LABEL_57;
        this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v57, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  _DWORD *klass; // x8
  ServantStatusBattleListViewItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v15; // x20
  int max_length; // w9
  unsigned int v17; // w10
  unsigned int v18; // w21
  char v19; // w21

  if ( (byte_4A6C277 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_1B90010(&DataManager_TypeInfo, v7);
    byte_4A6C277 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
  v15 = Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_18:
    v19 = 0;
    goto LABEL_21;
  }
  if ( !Master_object )
LABEL_17:
    sub_1B9026C(Master_object, v9);
  max_length = klass[6];
  if ( max_length != Master_object->max_length )
  {
    v19 = 1;
    goto LABEL_21;
  }
  if ( max_length < 1 )
    goto LABEL_18;
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= klass[6] || (v18 = v17, v17 >= max_length) )
      sub_1B90274(Master_object, v9);
    Master_object = *(ServantCommentEntity_array **)&klass[2 * v17 + 8];
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, ServantCommentEntity_o *, Il2CppMethodPointer))Master_object->obj.klass->vtable[0].method)(
                                                    Master_object,
                                                    v15->m_Items[v17],
                                                    Master_object->obj.klass->vtable[1].methodPtr);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      break;
    max_length = v15->max_length;
    v17 = v18 + 1;
    if ( (int)(v18 + 1) >= max_length )
      break;
    klass = p_svtCommentEntityList->klass;
    if ( !p_svtCommentEntityList->klass )
      goto LABEL_17;
  }
  v19 = (unsigned __int8)Master_object ^ 1;
LABEL_21:
  p_svtCommentEntityList->klass = (ServantStatusBattleListViewItem_c *)v15;
  sub_1B8FFB4(p_svtCommentEntityList, (int32_t)v15, v10, v11);
  return v19 & 1;
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
    sub_1B9026C(this, method);
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

  if ( (byte_4A6C261 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6C261 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v7, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40505308(questRestrictionInfo, userSvtEntity, 0LL);
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
  if ( (byte_4A6C267 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B90010(&ImageLimitCount_TypeInfo, method);
    byte_4A6C267 = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1B9026C(this, method);
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
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40505308(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40505308(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40505308(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40505308(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8

  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1B9026C(this, method);
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
    sub_1B9026C(this, method);
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

  if ( (byte_4A6C26E & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6C26E = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v9, 0LL);
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
    sub_1B9026C(0LL, method);
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

  if ( (byte_4A6C266 & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C266 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
    sub_1B9026C(ManualSetCommandCardLimit, method);
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

  if ( (byte_4A6C264 & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C264 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
    sub_1B9026C(ManualSetDispLimitCount, method);
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

  if ( (byte_4A6C269 & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C269 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
    sub_1B9026C(ManualSetIconLimitCount, method);
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

  if ( (byte_4A6C26B & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C26B = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
    sub_1B9026C(ManualSetPortraitLimitCount, method);
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

  if ( (byte_4A6C26D & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6C26D = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v7, 0LL) != this->fields.supportRandomLimitCount;
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

  if ( (byte_4A6C262 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6C262 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v10, 0LL);
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
    sub_1B9026C(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1B9026C(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4A6C263 & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C263 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
      sub_1B9026C(v3, method);
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

  if ( (byte_4A6C268 & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C268 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
      sub_1B9026C(v3, method);
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

  if ( (byte_4A6C265 & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C265 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
      sub_1B9026C(v3, method);
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

  if ( (byte_4A6C26A & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C26A = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
      sub_1B9026C(v3, method);
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

  if ( (byte_4A6C26C & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6C26C = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    byte_4A6BA80 = 1;
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
      sub_1B9026C(v3, method);
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
    sub_1B9026C(this, method);
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
    sub_1B9026C(this, method);
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

  if ( (byte_4A6C260 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6C260 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v7, 0LL);
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedAgility(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B9026C(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedDefense(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B9026C(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedLuck(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B9026C(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedMagic(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B9026C(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedNp(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B9026C(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedPower(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B9026C(this, method);
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
  if ( (byte_4A6C276 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A6C276 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v8, 0LL);
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
        sub_1B9026C(this, method);
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
  if ( (byte_4A6C26F & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, value);
    byte_4A6C26F = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A6BA80 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, value);
    byte_4A6BA80 = 1;
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
  sub_1B8FFB4(
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