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
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int64_t Instance; // x0
  __int64 v24; // x1
  bool v25; // w23
  struct PartyOrganizationListViewItem_o *v26; // x0
  struct PartyOrganizationListViewItem_o **p_memberItem; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  char v30; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v37; // q0
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct PartyOrganizationListViewItem_o *v46; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x22
  __int64 v50; // x24
  __int64 v51; // x25
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  ServantLimitMaster_o *v56; // x24
  int32_t v57; // w25
  struct ServantLimitEntity_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  ServantCommentMaster_o *v61; // x24
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // q1
  UserServantCollectionMaster_o *v67; // x24
  int64_t v68; // x25
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int v72; // w8
  QuestRestrictionInfo_o *v73; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w21
  __int64 v81; // x24
  __int64 v82; // x25
  struct System_Int32_array *CostumeList_41213564; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x1
  struct UserServantCollectionEntity_o *v87; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v89; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v91; // x8
  _BOOL8 IsChoice; // x0
  __int64 v93; // x1
  const MethodInfo *v94; // x2
  struct System_Int64_array *v95; // x8
  int64_t v96; // x1
  struct UserServantCollectionEntity_o *v97; // x8
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v101; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v103; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v105; // x8
  int32_t v106; // w0
  UserServantEntity_o *v107; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v109; // x2
  UserServantEntity_o *v110; // x0
  int32_t v111; // w0
  UserServantEntity_o *v112; // x8
  int32_t v113; // w0
  UserServantEntity_o *v114; // x1
  const MethodInfo *v115; // x1
  const MethodInfo *v116; // x2
  RandomLimitCountManager_c *v117; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_4A4B1C9 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    byte_4A4B1C9 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.partyItem, (int32_t)partyItem, v21, v22);
  if ( !partyItem )
    goto LABEL_83;
  v25 = isEnableServantQuest;
  v26 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v26;
  p_memberItem = &this->fields.memberItem;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.memberItem, (int32_t)v26, v28, v29);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = v25;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
  {
    v30 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v30 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v30;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  *(_BYTE *)(Instance + 161) = v25;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v32, v33);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_83;
  v37 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  memberItem = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v37;
  if ( !memberItem )
    goto LABEL_83;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v34, v35);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_83;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v42, v43);
  v46 = this->fields.memberItem;
  if ( !v46 )
    goto LABEL_83;
  questRestrictionInfo = v46->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v44, v45);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_83;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v51 = *(_QWORD *)&v48[5].fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v120.fields.currentCryptoKey = v51;
  *(_QWORD *)&v120.fields.fakeValue = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v120, 0LL);
  if ( !v49 )
    goto LABEL_83;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v49,
             Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v54, v55);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_83;
  v56 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_83;
  v57 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[6], 0LL);
  if ( !v56 )
    goto LABEL_83;
  v58 = ServantLimitMaster__GetEntity(v56, v57, Instance, 0LL);
  this->fields.svtLimitEntity = v58;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v58, v59, v60);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_83;
  v61 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_svtEntity)[1], 0LL);
  if ( !v61 )
    goto LABEL_83;
  EntityList = ServantCommentMaster__GetEntityList(v61, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v63, v64);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_83;
  v66 = v65[4];
  v67 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v119.fields.currentCryptoKey = v65[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v119.fields.fakeValue = v66;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v118 = v119;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v118, 0LL);
  if ( !*p_userSvtEntity
    || (v68 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[5], 0LL),
        !v67)
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v67, v68, Instance, 0LL),
        this->fields.userSvtCollectionEntity = EntityDefinitely,
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v70, v71),
        (Instance = (int64_t)this->fields.memberItem) == 0) )
  {
LABEL_83:
    sub_1B86614(Instance, v24);
  }
  v72 = *(unsigned __int8 *)(Instance + 231);
  this->fields.isConvertOverwriteImage = v72;
  if ( v72 )
  {
    v73 = this->fields.questRestrictionInfo;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(SvtId, 0LL);
    if ( !*p_memberItem || !v73 )
      goto LABEL_83;
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
           v73,
           Instance,
           (*p_memberItem)->fields.isFollower,
           0LL) )
    {
      this->fields.isConvertOverwriteImage = 0;
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_83;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v76, v77);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_83;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  v82 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v81 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v121.fields.currentCryptoKey = v82;
  *(_QWORD *)&v121.fields.fakeValue = v81;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v121, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_83;
  CostumeList_41213564 = UserServantCollectionEntity__getCostumeList_41213564(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_41213564;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_41213564, v84, v85);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v86);
  v87 = this->fields.userSvtCollectionEntity;
  if ( !v87 )
    goto LABEL_83;
  svtCommonFlag = v87->fields.svtCommonFlag;
  v89 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v89 )
    goto LABEL_83;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                   v89->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_83;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v91 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v91 )
    goto LABEL_83;
  IsChoice = UserServantEntity__IsChoice(v91, 0LL);
  v95 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v95 )
  {
    if ( !v95->max_length )
      sub_1B8661C(IsChoice, v93);
    v96 = v95->m_Items[0];
  }
  else
  {
    v96 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v96, v94);
  v97 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v97 != 0LL;
  if ( !Instance )
    goto LABEL_83;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_58;
    }
    goto LABEL_83;
  }
  IsNameTrue = 0;
LABEL_58:
  v101 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v101 != 0LL;
  if ( v101 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v101, 0LL);
    v101 = (UserServantEntity_o *)*p_userSvtEntity;
    v103 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v103 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v103;
  if ( !v101 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_66;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v101, 0LL);
  v105 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v105 )
  {
LABEL_66:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_67;
  }
  v106 = BasicHelper__DecryptValue_42186464(v105->fields.limitCountSupport, 0LL);
  v107 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v106;
  if ( v107 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v107, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_67:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v98,
    v99);
  v110 = this->fields.userSvtEntity;
  if ( v110 )
  {
    v111 = UserServantEntity__OwnRandomSettingSelectedButton(v110, 0LL);
    v112 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v111;
    if ( v112 )
    {
      v113 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v112, 0LL);
      v114 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_73;
    }
    v114 = 0LL;
  }
  else
  {
    v114 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v113 = 3;
LABEL_73:
  this->fields.supportRandomSettingButtonIndex = v113;
  ServantStatusListViewItem__SetLimitCountInfo(this, v114, v109);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v115);
    byte_4A4A1E0 = 1;
  }
  v117 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v117 = RandomLimitCountManager_TypeInfo;
  }
  if ( v117->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v116);
  ServantStatusListViewItem__ModifyInfo(this, v115);
}


void __fastcall ServantStatusListViewItem___ctor_34649488(
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
  const MethodInfo *v18; // x3
  int64_t Instance; // x0
  __int64 v20; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v30; // q0
  struct PartyOrganizationListViewItem_o *v31; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct PartyOrganizationListViewItem_o *v39; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  ServantLimitMaster_o *v49; // x22
  int32_t v50; // w23
  struct ServantLimitEntity_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  ServantCommentMaster_o *v54; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // q1
  UserServantCollectionMaster_o *v60; // x22
  int64_t v61; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct PartyOrganizationListViewItem_o *v65; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_41213564; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
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
  const MethodInfo *v88; // x3
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

  if ( (byte_4A4B1CA & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A4B1CA = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.warBoardPartyItem, (int32_t)partyItem, v17, v18);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.memberItem, (int32_t)MemberItem, v22, v23);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v25, v26);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v27, v28);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v35, v36);
  v39 = this->fields.memberItem;
  if ( !v39 )
    goto LABEL_68;
  questRestrictionInfo = v39->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v37, v38);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v109, 0LL);
  if ( !v42 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v42,
             Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v47, v48);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v49 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v50 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[6], 0LL);
  if ( !v49 )
    goto LABEL_68;
  v51 = ServantLimitMaster__GetEntity(v49, v50, Instance, 0LL);
  this->fields.svtLimitEntity = v51;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v51, v52, v53);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v54 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_svtEntity)[1], 0LL);
  if ( !v54 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v54, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v56, v57);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v107, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v61 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[5], 0LL);
  if ( !v60 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v60, v61, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v63, v64);
  v65 = this->fields.memberItem;
  if ( !v65 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v65->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v67, v68);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_41213564 = UserServantCollectionEntity__getCostumeList_41213564(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_41213564;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_41213564, v73, v74);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v75);
  v76 = this->fields.userSvtCollectionEntity;
  if ( !v76 )
    goto LABEL_68;
  svtCommonFlag = v76->fields.svtCommonFlag;
  v78 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v78 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
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
      sub_1B8661C(IsChoice, v82);
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
    sub_1B86614(Instance, v20);
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
  v95 = BasicHelper__DecryptValue_42186464(v94->fields.limitCountSupport, 0LL);
  v96 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v95;
  if ( v96 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v96, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
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
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v104);
    byte_4A4A1E0 = 1;
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


void __fastcall ServantStatusListViewItem___ctor_34651128(
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
  bool v15; // w20
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
  __int64 v26; // x1
  __int64 v27; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int64_t Instance; // x0
  __int64 v33; // x1
  bool v34; // w8
  __int128 v35; // q1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x24
  __int64 v46; // x27
  __int64 v47; // x28
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x24
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  ServantLimitMaster_o *v52; // x27
  int32_t v53; // w28
  struct ServantLimitEntity_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  ServantCommentMaster_o *v57; // x27
  int32_t v58; // w28
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  __int64 v63; // x27
  __int64 v64; // x28
  int32_t v65; // w0
  bool IsConvertOverwriteImage; // w0
  __int64 v67; // x26
  __int64 v68; // x27
  int32_t v69; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // q0
  __int64 v72; // x25
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v75; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // q0
  UserServantCollectionMaster_o *v77; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  int64_t v79; // x26
  __int64 v80; // x27
  __int64 v81; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x25
  int32_t lv; // w26
  struct System_Int32_array *CostumeList_41213564; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  const MethodInfo *v94; // x1
  struct System_Int32_array *v95; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  struct UserServantCollectionEntity_o *v102; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v104; // x8
  __int64 v105; // x25
  __int64 v106; // x26
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  UserServantEntity_o *v111; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  __int64 v114; // x1
  const MethodInfo *v115; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v116; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // q0
  UserDeckMaster_o *v118; // x23
  bool v119; // w20
  bool v120; // w8
  struct System_Int64_array *v121; // x9
  int64_t v122; // x1
  struct UserServantCollectionEntity_o *v123; // x8
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v127; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v129; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v131; // x8
  int32_t v132; // w0
  UserServantEntity_o *v133; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v135; // x2
  UserServantEntity_o *v136; // x0
  int32_t v137; // w0
  UserServantEntity_o *v138; // x8
  int32_t v139; // w0
  UserServantEntity_o *v140; // x1
  const MethodInfo *v141; // x1
  const MethodInfo *v142; // x2
  RandomLimitCountManager_c *v143; // x0
  bool v145; // [xsp+Ch] [xbp-104h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16

  v15 = isEnableServantQuest;
  if ( (byte_4A4B1CB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserDeckMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1B863B8(&NetworkManager_TypeInfo, v21);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v24);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v25);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27);
    byte_4A4B1CB = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v30, v31);
  this->fields.isEnableServantQuest = v15;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  *(_BYTE *)(Instance + 161) = v15;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v34 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_111;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
    v34 = Instance & 1;
  }
  v145 = enableTdSpeed;
  this->fields._IsDisplayCombineButton_k__BackingField = v34;
  if ( !userServant )
    goto LABEL_111;
  v35 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v150.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v150.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v149 = v150;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v149, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_111;
  if ( Instance == userGameEntity->fields.userId )
  {
    *(_OWORD *)&this->fields.favoriteUserSvtId = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v36, v37);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v36, v37);
  this->fields.equipIdList = equipIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)equipIdList, v40, v41);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v44 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_111;
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v47 = *(_QWORD *)&v44[5].fields.currentCryptoKey;
  v46 = *(_QWORD *)&v44[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v151.fields.currentCryptoKey = v47;
  *(_QWORD *)&v151.fields.fakeValue = v46;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v151, 0LL);
  if ( !v45 )
    goto LABEL_111;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v45,
             Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v50, v51);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_111;
  v52 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_111;
  v53 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[6], 0LL);
  if ( !v52 )
    goto LABEL_111;
  v54 = ServantLimitMaster__GetEntity(v52, v53, Instance, 0LL);
  this->fields.svtLimitEntity = v54;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v54, v55, v56);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_111;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_111;
  v57 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_111;
  v58 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[7], 0LL);
  if ( !v57 )
    goto LABEL_111;
  EntityList = ServantCommentMaster__GetEntityList(v57, v58, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v60, v61);
  if ( !questRestrictionInfo )
    goto LABEL_37;
  v62 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_111;
  v64 = *(_QWORD *)&v62[5].fields.currentCryptoKey;
  v63 = *(_QWORD *)&v62[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v152.fields.currentCryptoKey = v64;
  *(_QWORD *)&v152.fields.fakeValue = v63;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v152, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v65, 0LL);
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( IsConvertOverwriteImage )
  {
    v68 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
    v67 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v153.fields.currentCryptoKey = v68;
    *(_QWORD *)&v153.fields.fakeValue = v67;
    v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v153, 0LL);
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(questRestrictionInfo, v69, 0, 0LL) )
LABEL_37:
      this->fields.isConvertOverwriteImage = 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v33);
    byte_4A48C25 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v70 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_111:
    sub_1B86614(Instance, v33);
  v71 = v70[4];
  v72 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v150.fields.currentCryptoKey = v70[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v150.fields.fakeValue = v71;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v148 = v150;
  if ( v72 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v148, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_111;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v75 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_111;
    v76 = v75[4];
    v77 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v150.fields.currentCryptoKey = v75[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v150.fields.fakeValue = v76;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v147 = v150;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v147, 0LL);
    v78 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_111;
    v79 = Instance;
    v81 = *(_QWORD *)&v78[5].fields.currentCryptoKey;
    v80 = *(_QWORD *)&v78[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v154.fields.currentCryptoKey = v81;
    *(_QWORD *)&v154.fields.fakeValue = v80;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v154, 0LL);
    if ( !v77 )
      goto LABEL_111;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v77, v79, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v83, v84);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_111;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v86, v87);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_111;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_111;
    CostumeList_41213564 = UserServantCollectionEntity__getCostumeList_41213564(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_41213564;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_41213564, v92, v93);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v94);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v73, v74);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_111;
    v95 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v95;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v95, v96, v97);
    this->fields.costumeIds = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v98, v99);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeAndOtherIds, 0, v100, v101);
  }
  v102 = this->fields.userSvtCollectionEntity;
  if ( !v102 )
    goto LABEL_111;
  svtCommonFlag = v102->fields.svtCommonFlag;
  v104 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v104 )
    goto LABEL_111;
  v106 = *(_QWORD *)&v104->fields.battleVoice.fields.currentCryptoKey;
  v105 = *(_QWORD *)&v104->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v155.fields.currentCryptoKey = v106;
  *(_QWORD *)&v155.fields.fakeValue = v105;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v155, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v107, v108);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v109, v110);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_111;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v111 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v111 )
    goto LABEL_111;
  Instance = UserServantEntity__IsChoice(v111, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_111;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_111;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v116 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_111;
    v117 = v116[2];
    v118 = (UserDeckMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v150.fields.currentCryptoKey = v116[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v150.fields.fakeValue = v117;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v146 = v150;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v146, 0LL);
    v119 = v145;
    if ( !v118 )
      goto LABEL_111;
    IsServantEquip = UserDeckMaster__IsEquip(v118, Instance, 0LL);
    v120 = IsServantEquip;
  }
  else
  {
    v119 = v145;
    v120 = 0;
  }
  v121 = this->fields.equipIdList;
  this->fields.isUse = v120;
  if ( v121 )
  {
    if ( !v121->max_length )
      sub_1B8661C(IsServantEquip, v114);
    v122 = v121->m_Items[0];
  }
  else
  {
    v122 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v122, v115);
  v123 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v123 != 0LL && v119;
  if ( !Instance )
    goto LABEL_111;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_86;
    }
    goto LABEL_111;
  }
  IsNameTrue = 0;
LABEL_86:
  v127 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v127 != 0LL;
  if ( v127 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v127, 0LL);
    v127 = (UserServantEntity_o *)*p_userSvtEntity;
    v129 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v129 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v129;
  if ( !v127 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_94;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v127, 0LL);
  v131 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v131 )
  {
LABEL_94:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_95;
  }
  v132 = BasicHelper__DecryptValue_42186464(v131->fields.limitCountSupport, 0LL);
  v133 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v132;
  if ( v133 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v133, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_95:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v124,
    v125);
  v136 = this->fields.userSvtEntity;
  if ( v136 )
  {
    v137 = UserServantEntity__OwnRandomSettingSelectedButton(v136, 0LL);
    v138 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v137;
    if ( v138 )
    {
      v139 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v138, 0LL);
      v140 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_101;
    }
    v140 = 0LL;
  }
  else
  {
    v140 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v139 = 3;
LABEL_101:
  this->fields.supportRandomSettingButtonIndex = v139;
  ServantStatusListViewItem__SetLimitCountInfo(this, v140, v135);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v141);
    byte_4A4A1E0 = 1;
  }
  v143 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v143 = RandomLimitCountManager_TypeInfo;
  }
  if ( v143->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v142);
  ServantStatusListViewItem__ModifyInfo(this, v141);
}


void __fastcall ServantStatusListViewItem___ctor_34653572(
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
  const MethodInfo *v19; // x3
  int64_t Instance; // x0
  __int64 v21; // x1
  __int128 v22; // q1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v31; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x22
  __int64 v33; // x23
  __int64 v34; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  ServantLimitMaster_o *v39; // x23
  int32_t v40; // w24
  struct ServantLimitEntity_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  ServantCommentMaster_o *v44; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // q0
  __int64 v50; // x23
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // q0
  UserServantCollectionMaster_o *v55; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  int64_t v57; // x24
  __int64 v58; // x25
  __int64 v59; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_41213564; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x1
  struct System_Int32_array *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct UserServantCollectionEntity_o *v80; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v82; // x8
  __int64 v83; // x23
  __int64 v84; // x24
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  UserServantEntity_o *v89; // x8
  const MethodInfo *v90; // x2
  struct UserServantCollectionEntity_o *v91; // x8
  int32_t v92; // w2
  const MethodInfo *v93; // x3
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

  if ( (byte_4A4B1CC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B863B8(&NetworkManager_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A4B1CC = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v18, v19);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_77;
  v22 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v111.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v110 = v111;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v110, 0LL);
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
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v23, v24);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v27, v28);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v29, v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v31 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v34 = *(_QWORD *)&v31[5].fields.currentCryptoKey;
  v33 = *(_QWORD *)&v31[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v34;
  *(_QWORD *)&v112.fields.fakeValue = v33;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v112, 0LL);
  if ( !v32 )
    goto LABEL_77;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v32,
             Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v37, v38);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v39 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v40 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[6], 0LL);
  if ( !v39 )
    goto LABEL_77;
  v41 = ServantLimitMaster__GetEntity(v39, v40, Instance, 0LL);
  this->fields.svtLimitEntity = v41;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v41, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_77;
  v44 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_svtEntity)[1], 0LL);
  if ( !v44 )
    goto LABEL_77;
  EntityList = ServantCommentMaster__GetEntityList(v44, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v46, v47);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v21);
    byte_4A48C25 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v48 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v49 = v48[4];
  v50 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.currentCryptoKey = v48[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.fakeValue = v49;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v109 = v111;
  if ( v50 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v109, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v53 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v54 = v53[4];
    v55 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.currentCryptoKey = v53[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v111.fields.fakeValue = v54;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v108 = v111;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v108, 0LL);
    v56 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v57 = Instance;
    v59 = *(_QWORD *)&v56[5].fields.currentCryptoKey;
    v58 = *(_QWORD *)&v56[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v113.fields.currentCryptoKey = v59;
    *(_QWORD *)&v113.fields.fakeValue = v58;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v113, 0LL);
    if ( !v55 )
      goto LABEL_77;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v55, v57, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v61, v62);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v64, v65);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_77;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_77;
    CostumeList_41213564 = UserServantCollectionEntity__getCostumeList_41213564(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_41213564;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_41213564, v70, v71);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v72);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v51, v52);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    v73 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v73;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v73, v74, v75);
    this->fields.costumeIds = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v76, v77);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeAndOtherIds, 0, v78, v79);
  }
  v80 = this->fields.userSvtCollectionEntity;
  if ( !v80 )
    goto LABEL_77;
  svtCommonFlag = v80->fields.svtCommonFlag;
  v82 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v82 )
    goto LABEL_77;
  v84 = *(_QWORD *)&v82->fields.battleVoice.fields.currentCryptoKey;
  v83 = *(_QWORD *)&v82->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v84;
  *(_QWORD *)&v114.fields.fakeValue = v83;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v114, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v85, v86);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v87, v88);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_77;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v89 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v89 )
    goto LABEL_77;
  this->fields.isChoice = UserServantEntity__IsChoice(v89, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v90);
  v91 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v91 != 0LL;
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
    sub_1B86614(Instance, v21);
  }
  IsNameTrue = 0;
LABEL_57:
  v95 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v95 )
  {
    v96 = BasicHelper__DecryptValue_42186464(v95->fields.limitCountSupport, 0LL);
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
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
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
      goto LABEL_68;
    }
    v104 = 0LL;
  }
  else
  {
    v104 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v103 = 3;
LABEL_68:
  this->fields.supportRandomSettingButtonIndex = v103;
  ServantStatusListViewItem__SetLimitCountInfo(this, v104, v99);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v105);
    byte_4A4A1E0 = 1;
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


void __fastcall ServantStatusListViewItem___ctor_34655416(
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
  const MethodInfo *v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UserServantCollectionEntity_o *v35; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x22
  __int64 v37; // x23
  __int64 v38; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  ServantLimitMaster_o *v43; // x23
  struct ServantLimitEntity_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  ServantCommentMaster_o *v47; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Int32_array *CostumeList; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x1
  BalanceConfig_c *v58; // x0
  struct UserServantCollectionEntity_o *v59; // x8
  ServantEntity_o *v60; // x22
  __int64 v61; // x23
  __int64 v62; // x24
  int32_t v63; // w23
  int32_t maxLimitCount; // w24
  struct UserServantCollectionEntity_o *v65; // x8
  ServantEntity_o *svtEntity; // x22
  __int64 v67; // x23
  __int64 v68; // x24
  int32_t v69; // w23
  int32_t v70; // w24
  struct UserServantCollectionEntity_o *v71; // x8
  struct System_Int32_array *CardSelectList; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct UserServantCollectionEntity_o *v75; // x8
  ServantEntity_o *v76; // x22
  struct UserServantCollectionEntity_o *v77; // x8
  struct System_Int32_array *SelectList; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct UserServantCollectionEntity_o *v81; // x8
  ServantEntity_o *v82; // x22
  struct UserServantCollectionEntity_o *v83; // x8
  struct System_Int32_array *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v91; // x8
  struct System_Int32_array *v92; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v96; // x8
  struct System_Int32_array *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x2
  struct UserServantCollectionEntity_o *v101; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v103; // x8
  const MethodInfo *v104; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  v8 = isEnableServantQuest;
  if ( (byte_4A4B1CD & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, userSvtCollectionEntity);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A4B1CD = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v18, v19);
  this->fields.isEnableServantQuest = v8;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_60;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v22, v23);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v22, v23);
  this->fields.equipIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v24, v25);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v26, v27);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v29,
    v30);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v31, v32);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v33, v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v35 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v105.fields.currentCryptoKey = v38;
  *(_QWORD *)&v105.fields.fakeValue = v37;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v105, 0LL);
  if ( !v36 )
    goto LABEL_60;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v36,
             (int32_t)Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v41, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v43 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  if ( !v43 )
    goto LABEL_60;
  v44 = ServantLimitMaster__GetEntity(v43, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v44;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v44, v45, v46);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_60;
  v47 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                (*p_svtEntity)[1],
                                0LL);
  if ( !v47 )
    goto LABEL_60;
  EntityList = ServantCommentMaster__GetEntityList(v47, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v49, v50);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v52, v53);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v55, v56);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v57);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v59 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v60 = (ServantEntity_o *)*p_svtEntity;
      v62 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v106.fields.currentCryptoKey = v62;
      *(_QWORD *)&v106.fields.fakeValue = v61;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v106, 0LL);
      if ( *p_userSvtCollectionEntity )
      {
        v63 = (int)Instance;
        maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v63, maxLimitCount, 1, 0, 0LL);
        if ( v60 )
        {
          Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                        v60,
                                        (int32_t)Instance,
                                        0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_60:
    sub_1B86614(Instance, v21);
  }
  v58 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v58 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)(unsigned int)v58->static_fields->OtherImageLimitCount;
LABEL_33:
  v65 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v65 )
    goto LABEL_60;
  svtEntity = this->fields.svtEntity;
  v68 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v107.fields.currentCryptoKey = v68;
  *(_QWORD *)&v107.fields.fakeValue = v67;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v107, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v69 = (int)Instance;
  v70 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v69, v70, 1, 0, 0LL);
  if ( !svtEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                svtEntity,
                                (int32_t)Instance,
                                0LL);
  v71 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v71 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v71->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v73, v74);
  v75 = this->fields.userSvtCollectionEntity;
  if ( !v75 )
    goto LABEL_60;
  v76 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v75->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  if ( !v76 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v76, (int32_t)Instance, 0LL);
  v77 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v77 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v77->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v79, v80);
  v81 = this->fields.userSvtCollectionEntity;
  if ( !v81 )
    goto LABEL_60;
  v82 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v81->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  if ( !v82 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v82, (int32_t)Instance, 0LL);
  v83 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v83 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v83->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v84 = ImageLimitCount__GetSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.commandCardSelectList = v84;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v84, v85, v86);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v88, v89);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v91 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v91 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v91->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v92 = ImageLimitCount__GetCardSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.iconSelectList = v92;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v92, v93, v94);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v96 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v96 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v96->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v97 = ImageLimitCount__GetSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0LL);
  this->fields.portraitSelectList = v97;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v97, v98, v99);
  v101 = this->fields.userSvtCollectionEntity;
  if ( !v101 )
    goto LABEL_60;
  svtCommonFlag = v101->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v100);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
    goto LABEL_60;
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v103 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v103 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v104);
}


void __fastcall ServantStatusListViewItem___ctor_34657152(
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
  const MethodInfo *v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct UserServantCollectionEntity_o *v36; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x22
  __int64 v38; // x24
  __int64 v39; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UserServantCollectionEntity_o *v44; // x8
  ServantLimitMaster_o *v45; // x23
  struct ServantLimitEntity_o *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  ServantCommentMaster_o *v50; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Int32_array *CostumeList; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  struct UserServantCollectionEntity_o *v61; // x8
  int32_t v62; // w22
  struct UserServantCollectionEntity_o *v63; // x8
  int32_t v64; // w0
  struct UserServantCollectionEntity_o *v65; // x8
  int32_t v66; // w0
  struct System_Int32_array *CardSelectList; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct UserServantCollectionEntity_o *v70; // x8
  int32_t v71; // w0
  struct UserServantCollectionEntity_o *v72; // x8
  int32_t v73; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct UserServantCollectionEntity_o *v77; // x8
  int32_t v78; // w0
  struct UserServantCollectionEntity_o *v79; // x8
  int32_t v80; // w0
  struct System_Int32_array *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v88; // x8
  int32_t v89; // w0
  struct System_Int32_array *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v94; // x8
  int32_t v95; // w0
  struct System_Int32_array *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x2
  struct UserServantCollectionEntity_o *v100; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v102; // x8
  const MethodInfo *v103; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v10 = isEnableServantQuest;
  if ( (byte_4A4B1CE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentMaster___, userSvtCollectionEntity);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v14);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4A4B1CE = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v19, v20);
  this->fields.isEnableServantQuest = v10;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v23, v24);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v23, v24);
  this->fields.equipIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v25, v26);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v27, v28);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v30,
    v31);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v32, v33);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v34, v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v104, 0LL);
  if ( !v37 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v37,
             (int32_t)Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v42, v43);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v44 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v45 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v44->fields.svtId,
                                0LL);
  if ( !v45 )
    goto LABEL_35;
  v46 = ServantLimitMaster__GetEntity(v45, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v46;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v46, v47, v48);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v50 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v49[1], 0LL);
  if ( !v50 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v50, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v52, v53);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v55, v56);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v58, v59);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v60);
  v61 = this->fields.userSvtCollectionEntity;
  if ( !v61 )
    goto LABEL_35;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v61->fields.svtId, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v62, limitCount, 1, 0, 0LL);
  v63 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v63 )
    goto LABEL_35;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v63->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v64, limitCount, 1, 0, 0LL);
  v65 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v65 )
    goto LABEL_35;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v65->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v66, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v68, v69);
  v70 = this->fields.userSvtCollectionEntity;
  if ( !v70 )
    goto LABEL_35;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v70->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v71, limitCount, 0LL);
  v72 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v72 )
    goto LABEL_35;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v72->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v73, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v75, v76);
  v77 = this->fields.userSvtCollectionEntity;
  if ( !v77 )
    goto LABEL_35;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v77->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v78, limitCount, 0LL);
  v79 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v79 )
    goto LABEL_35;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v79->fields.svtId, 0LL);
  v81 = ImageLimitCount__GetSelectList(v80, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v81;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v81, v82, v83);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v85, v86);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v88 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v88 )
    goto LABEL_35;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v88->fields.svtId, 0LL);
  v90 = ImageLimitCount__GetCardSelectList(v89, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v90;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v90, v91, v92);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v94 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v94 )
    goto LABEL_35;
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v94->fields.svtId, 0LL);
  v96 = ImageLimitCount__GetSelectList(v95, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v96;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v96, v97, v98);
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
    sub_1B86614(Instance, v22);
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


void __fastcall ServantStatusListViewItem___ctor_34658576(
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  ServantLimitMaster_o *v38; // x22
  struct ServantLimitEntity_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v42; // x8
  ServantCommentMaster_o *v43; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  ServantLeaderInfo_o *v52; // x8
  struct ServantLeaderInfo_o *v53; // x8
  int32_t v54; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_38647020; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  ServantLeaderInfo_o *v60; // x8
  struct ServantLeaderInfo_o *v61; // x8
  struct System_Int32_array *SelectList_38646204; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  ServantLeaderInfo_o *v65; // x8
  struct ServantLeaderInfo_o *v66; // x8
  struct System_Int32_array *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct ServantLeaderInfo_o *v72; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v74; // x8
  struct ServantLeaderInfo_o *v75; // x8
  struct System_Int32_array *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  ServantLeaderInfo_o *v79; // x8
  struct ServantLeaderInfo_o *v80; // x8
  struct System_Int32_array *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
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
  const MethodInfo *v95; // x3
  __int64 v96; // x8
  ServantLimitMaster_o *v97; // x21
  __int64 v98; // x8
  struct ServantLimitEntity_o *v99; // x0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  const MethodInfo *v102; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4A4B1CF & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentMaster___, servantLeaderInfo);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A4B1CF = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v13, v14);
  this->fields.userSvtEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v15, v16);
  this->fields.equipIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v17, v18);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v19, v20);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v21, v22);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, (int32_t)servantLeaderInfo, v24, v25);
  this->fields.equipTargetInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v26, v27);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v103, 0LL);
  if ( !v31 )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             (int32_t)Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v36, v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v38 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  if ( !v38 )
    goto LABEL_59;
  v39 = ServantLimitMaster__GetEntity(v38, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v39;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v39, v40, v41);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v42 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_59;
  v43 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v42[1], 0LL);
  if ( !v43 )
    goto LABEL_59;
  EntityList = ServantCommentMaster__GetEntityList(v43, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v45, v46);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v48, v49);
  this->fields.costumeIds = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v50, v51);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v53->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v54 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList_38647020 = ImageLimitCount__GetCardSelectList_38647020(v54, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_38647020;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList_38647020, v58, v59);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v61->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  SelectList_38646204 = ImageLimitCount__GetSelectList_38646204(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_38646204;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList_38646204, v63, v64);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v66->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v67 = ImageLimitCount__GetSelectList_38646204(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.commandCardLimitCount,
          0,
          0LL);
  this->fields.commandCardSelectList = v67;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v67, v68, v69);
  v72 = this->fields.servantLeaderInfo;
  if ( !v72 )
    goto LABEL_59;
  commandCardParam = v72->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)commandCardParam, v70, v71);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v75->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v76 = ImageLimitCount__GetCardSelectList_38647020(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.iconLimitCount,
          0LL);
  this->fields.iconSelectList = v76;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v76, v77, v78);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                v80->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v81 = ImageLimitCount__GetSelectList_38646204(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.portraitLimitCount,
          0,
          0LL);
  this->fields.portraitSelectList = v81;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v81, v82, v83);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v104, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v105, 0LL);
            if ( v90 )
            {
              v93 = DataMasterBase_object__object__int___GetEntity(
                      v90,
                      (int32_t)Instance,
                      (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v93;
              sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipServantEntity, (int32_t)v93, v94, v95);
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v96 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v96 )
                  {
                    v97 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
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
                          sub_1B8635C(
                            (CGThumbnailListItem_o *)&this->fields.equipSvtLimitEntity,
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
      sub_1B86614(Instance, v29);
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


void __fastcall ServantStatusListViewItem___ctor_34660264(
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct EquipTargetInfo_o **p_equipTargetInfo; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  struct EquipTargetInfo_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  ServantLimitMaster_o *v38; // x22
  struct ServantLimitEntity_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  ServantCommentMaster_o *v42; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4A4B1D0 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentMaster___, equipTargetInfo);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A4B1D0 = 1;
  }
  v12 = isNpcFollowerServantEquip;
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v13, v14);
  this->fields.userSvtEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v15, v16);
  this->fields.equipIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v17, v18);
  this->fields.questRestrictionInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v19, v20);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v21, v22);
  this->fields.servantLeaderInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v23, v24);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, (int32_t)equipTargetInfo, v26, v27);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v12;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v64, 0LL);
  if ( !v31 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             (int32_t)Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v36, v37);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v38 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                               (*p_equipTargetInfo)->fields.svtId,
                               0LL);
  if ( !*p_equipTargetInfo
    || !v38
    || (v39 = ServantLimitMaster__GetEntity(v38, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL),
        this->fields.svtLimitEntity = v39,
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v39, v40, v41),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        !*p_svtEntity)
    || (v42 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                     (*p_svtEntity)[1],
                                     0LL),
        !v42) )
  {
LABEL_16:
    sub_1B86614(Instance, v29);
  }
  EntityList = ServantCommentMaster__GetEntityList(v42, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v44, v45);
  this->fields.commandCodeIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v46, v47);
  this->fields.costumeIds = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v48, v49);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cardSelectList, 0, v50, v51);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispSelectList, 0, v52, v53);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, 0, v54, v55);
  this->fields.commandCardParam = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardParam, 0, v56, v57);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.iconSelectList, 0, v58, v59);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, 0, v60, v61);
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


void __fastcall ServantStatusListViewItem___ctor_34661092(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4A4B1D1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, commandCode);
    sub_1B863B8(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4B1D1 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v10, v11);
  this->fields.userCommandCodeEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, 0, v12, v13);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)commandCode, v14, v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v24, 0LL);
  if ( !v19 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v19,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_32142CC *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity, 0, v22, v23);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_1B86614(Instance, v17);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_34661468(
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
  const MethodInfo *v17; // x3
  int64_t Instance; // x0
  __int64 v19; // x1
  __int128 v20; // q1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v24; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  Il2CppObject *Entity; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x21
  struct UserCommandCodeEntity_o *v33; // x8
  __int128 v34; // q0
  __int64 v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
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

  if ( (byte_4A4B1D2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCode);
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1B863B8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_1B863B8(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A4B1D2 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v16, v17);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_46;
  v20 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v56 = v57;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v56, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_46;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v21, v22);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, (int32_t)userCommandCode, v21, v22);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v24 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v27 = *(_QWORD *)&v24->fields.commandCodeId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v27;
  *(_QWORD *)&v58.fields.fakeValue = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v58, 0LL);
  if ( !v25 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v25,
             Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v29, v30);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_46;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v32 )
    goto LABEL_46;
  DataMasterBase_object__object__int___TryGetEntity(
    v32,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_32142CC *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v19);
    byte_4A48C25 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v33 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v34 = *(_OWORD *)&v33->fields.userId.fields.fakeValue;
  v35 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v33->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v34;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v55 = v57;
  if ( v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v55, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
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
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v54, 0LL);
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
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v59, 0LL);
          if ( v40 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v40, v42, Instance, 0LL);
            v46 = (int)EntityDefinitely;
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_46:
    sub_1B86614(Instance, v19);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  v46 = 0;
LABEL_37:
  sub_1B8635C((CGThumbnailListItem_o *)p_userCommandCodeCollectionEntity, v46, v36, v37);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v48 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v48 )
    goto LABEL_46;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v48, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v49 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v50 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
  v51 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v53 = v57;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v53, 0LL);
  if ( !v51 )
    goto LABEL_46;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v51, Instance, 0LL);
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


void __fastcall ServantStatusListViewItem___ctor_34662592(
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
  const MethodInfo *v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  __int64 v21; // x21
  __int64 v22; // x22
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A4B1D3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCodeCollection);
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_1B863B8(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4B1D3 = 1;
  }
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v12, v13);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields, 0, v16, v17);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v16,
    v17);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v28, 0LL);
  if ( !v20 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v24, v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v27)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v27,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_32142CC *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1B86614(Instance, v15);
  }
  UserCommandCodeCollectionEntity__GetSkillInfo(
    (UserCommandCodeCollectionEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem__AddDuplicationInfo(
        ServantStatusListViewItem_o *this,
        bool isTransformed,
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
  __int64 v14; // x1
  ServantEntity_o *svtEntity; // x0
  const MethodInfo *v16; // x1
  ServantStatusListViewItem_o *SvtId; // x0
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x22
  System_Collections_Generic_List_int__o *v20; // x21
  Il2CppObject *Instance; // x0
  __int64 v22; // x8
  System_Collections_Generic_IEnumerable_T__o *v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  System_String_o *v25; // x0
  System_String_o *v26; // x23
  unsigned __int64 v27; // x24
  __int64 v28; // x26
  int32_t Item; // w0
  struct System_String_array *transformedPassiveSkillExplanationMessageList; // x8
  CGThumbnailListItem_o *v31; // x25
  System_String_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4A4B1F6 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_SkillLvMaster___, isTransformed);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B863B8(&LocalizationManager_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1B863B8(&StringLiteral_9949/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, v14);
    byte_4A4B1F6 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( this->fields.userSvtEntity || this->fields.userSvtCollectionEntity )
    {
      SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(this, v16);
      FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantStatusListViewItem__GetFriendshipUpCampaignInfo(
                                                                                                   SvtId,
                                                                                                   (int32_t)SvtId,
                                                                                                   v18);
    }
    else
    {
      FriendshipUpCampaignInfo = 0LL;
    }
    v20 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v22 = 432LL;
    if ( isTransformed )
      v22 = 584LL;
    v23 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&this->klass + v22);
    if ( v23 )
    {
      if ( !v20
        || (System_Collections_Generic_List_int___AddRange(
              v20,
              v23,
              (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__),
            (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
      {
LABEL_29:
        sub_1B86614(Instance, v23);
      }
      NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                         (PartyOrganizationUtility_o *)Instance,
                                                                                         (System_Collections_Generic_IEnumerable_int__o *)v20,
                                                                                         FriendshipUpCampaignInfo,
                                                                                         0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9949/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0LL);
      if ( v20->fields._size >= 1 )
      {
        v26 = v25;
        v27 = 0LL;
        v28 = 32LL;
        do
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   v20,
                   v27,
                   (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
          Instance = (Il2CppObject *)System_Linq_Enumerable__Contains_int_(
                                       NeedAddAnnotationSkillIds,
                                       Item,
                                       (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( isTransformed )
            {
              transformedPassiveSkillExplanationMessageList = this->fields.transformedPassiveSkillExplanationMessageList;
              if ( !transformedPassiveSkillExplanationMessageList )
                goto LABEL_29;
            }
            else
            {
              transformedPassiveSkillExplanationMessageList = this->fields.passiveSkillExplanationMessageList;
              if ( !transformedPassiveSkillExplanationMessageList )
                goto LABEL_29;
            }
            if ( v27 >= transformedPassiveSkillExplanationMessageList->max_length )
              sub_1B8661C(Instance, v23);
            v31 = (CGThumbnailListItem_o *)((char *)transformedPassiveSkillExplanationMessageList + v28);
            v32 = System_String__Concat_61645176(
                    *(System_String_o **)((char *)&transformedPassiveSkillExplanationMessageList->obj.klass + v28),
                    v26,
                    0LL);
            v31->klass = (CGThumbnailListItem_c *)v32;
            sub_1B8635C(v31, (int32_t)v32, v33, v34);
          }
          ++v27;
          v28 += 8LL;
        }
        while ( (__int64)v27 < v20->fields._size );
      }
    }
  }
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
  const MethodInfo *v7; // x3
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v9; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v11; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *v12; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v13; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v14; // x21

  if ( (byte_4A4B1D6 & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusListViewItem_LimitCountCache_TypeInfo, ignoreRandomSettings);
    byte_4A4B1D6 = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1B86604(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0LL);
  this->fields.currentLimitCountCache = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.currentLimitCountCache, (int32_t)v5, v6, v7);
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
      sub_1B86614(userSvtEntity, v9);
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
  const MethodInfo *v15; // x3
  System_String_array *appendPassiveSkillExplanationMessageList; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Boolean_array *appendPassiveSkillReleaseStateList; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Int32_array *appendPassiveSkillLvList; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  *idList = appendPassiveSkillIdList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)idList,
    (int32_t)appendPassiveSkillIdList,
    (int32_t)titleList,
    (const MethodInfo *)explanationList);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_1B8635C((CGThumbnailListItem_o *)titleList, (int32_t)appendPassiveSkillTitleMessageList, v14, v15);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_1B8635C((CGThumbnailListItem_o *)explanationList, (int32_t)appendPassiveSkillExplanationMessageList, v17, v18);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_1B8635C((CGThumbnailListItem_o *)releaseStateList, (int32_t)appendPassiveSkillReleaseStateList, v20, v21);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_1B8635C((CGThumbnailListItem_o *)lvList, (int32_t)appendPassiveSkillLvList, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantStatusListViewItem__GetClassSkill(
        ServantStatusListViewItem_o *this,
        int32_t targetDispLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x20
  System_String_array *v10; // [xsp+0h] [xbp-40h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A4B1F5 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, *(_QWORD *)&targetDispLimitCount);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_4A4B1F5 = 1;
  }
  v10 = 0LL;
  titleList = 0LL;
  idList = (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  if ( !this->fields.userSvtEntity )
  {
    if ( !this->fields.userSvtCollectionEntity )
      return idList;
    svtEntity = this->fields.svtEntity;
    if ( svtEntity )
    {
      if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
        return idList;
      svtEntity = this->fields.userSvtCollectionEntity;
      if ( svtEntity )
      {
        UserServantCollectionEntity__getPassiveSkillInfo(
          (UserServantCollectionEntity_o *)svtEntity,
          &idList,
          &v10,
          &titleList,
          targetDispLimitCount,
          1,
          0LL);
        return idList;
      }
    }
    goto LABEL_15;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_15;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( svtEntity && userSvtEntity )
    {
      UserServantEntity__getPassiveSkillInfo(
        userSvtEntity,
        &idList,
        &titleList,
        &v10,
        targetDispLimitCount,
        *((_QWORD *)svtEntity + 13),
        0LL);
      return idList;
    }
LABEL_15:
    sub_1B86614(svtEntity, v6);
  }
  return idList;
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
      sub_1B86614(this, checkTransform);
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
  const MethodInfo *v3; // x3
  SkillInfo_array *equipSkillInfoList; // x8

  equipSkillInfoList = this->fields.equipSkillInfoList;
  *skillInfoList = equipSkillInfoList;
  sub_1B8635C((CGThumbnailListItem_o *)skillInfoList, (int32_t)equipSkillInfoList, (int32_t)method, v3);
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

  if ( (byte_4A4B1ED & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_FriendshipMaster___, rank);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A4B1ED = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v26, 0LL);
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
    sub_1B86614(Instance, v15);
  if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
    *late = -1;
  return userSvtCollectionEntity != 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventDropUpValInfo_array *__fastcall ServantStatusListViewItem__GetFriendshipUpCampaignInfo(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  Il2CppObject *Master_object; // x21
  void *Instance; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  UserServantEntity_o *HeroineData; // x0
  __int64 v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  EventDropUpValInfo_o *v32; // x22
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4A4B1F7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventCampaignMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v9);
    sub_1B863B8(&EventDropUpValInfo_TypeInfo, v10);
    sub_1B863B8(&FunctionEntity_TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, v15);
    sub_1B863B8(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v16);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    byte_4A4B1F7 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v18 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 13),
               0LL);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v43 = v42;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v22 )
        break;
      current = v43.fields._current;
      if ( !v43.fields._current )
        sub_1B86614(v22, v23);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v43.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v26 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v26 )
          sub_1B86614(0LL, v27);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v26, svtId, 0LL);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
        {
          v29 = sub_1B86604(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v29, 0LL);
          if ( !v29 )
            sub_1B86614(v30, v31);
          *(_QWORD *)(v29 + 24) = 111LL;
          v32 = (EventDropUpValInfo_o *)sub_1B86604(EventDropUpValInfo_TypeInfo);
          EventDropUpValInfo___ctor(v32, 0, (FunctionEntity_o *)v29, 0LL);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0LL);
          if ( !v32 )
            sub_1B86614(OnlyMaxFuncGroupId, v34);
          v32->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v18 )
            sub_1B86614(OnlyMaxFuncGroupId, v34);
          items = v18->fields._items;
          v38 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1B86614(OnlyMaxFuncGroupId, v34);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v32,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v32;
            sub_1B8635C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v32, v35, v36);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v18 )
LABEL_35:
    sub_1B86614(Instance, v21);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v18,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


bool __fastcall ServantStatusListViewItem__GetNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TreasureDvcInfo_o *v4; // x8

  v4 = this->fields.tdInfo;
  *tdInfo = v4;
  sub_1B8635C((CGThumbnailListItem_o *)tdInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isTdResult;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo_34671904(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4B1EC & 1) == 0 )
  {
    sub_1B863B8(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4A4B1EC = 1;
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
      sub_1B86614(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1B86604(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1B8635C((CGThumbnailListItem_o *)tdInfo, (int32_t)v9, v10, v11);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_array **p_transformedPassiveSkillExplanationMessageList; // x8
  System_Int32_array *passiveSkillIdList; // x1
  System_String_array *passiveSkillTitleMessageList; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_array *v21; // x1

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
  {
    transformedPassiveSkillIdList = this->fields.transformedPassiveSkillIdList;
    *idList = transformedPassiveSkillIdList;
    sub_1B8635C(
      (CGThumbnailListItem_o *)idList,
      (int32_t)transformedPassiveSkillIdList,
      (int32_t)titleList,
      (const MethodInfo *)explanationList);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_1B8635C((CGThumbnailListItem_o *)titleList, (int32_t)transformedPassiveSkillTitleMessageList, v12, v13);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.transformedPassiveSkillExplanationMessageList;
  }
  else
  {
    passiveSkillIdList = this->fields.passiveSkillIdList;
    *idList = passiveSkillIdList;
    sub_1B8635C(
      (CGThumbnailListItem_o *)idList,
      (int32_t)passiveSkillIdList,
      (int32_t)titleList,
      (const MethodInfo *)explanationList);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_1B8635C((CGThumbnailListItem_o *)titleList, (int32_t)passiveSkillTitleMessageList, v19, v20);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v21 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1B8635C((CGThumbnailListItem_o *)explanationList, (int32_t)v21, v14, v15);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_34671408(
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
  const MethodInfo *v19; // x3
  System_String_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4A4B1EB & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, idList);
    sub_1B863B8(&int___TypeInfo, v11);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_1B863B8(&string___TypeInfo, v13);
    byte_4A4B1EB = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      sub_1B86614(svtEntity, idList);
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
    v17 = (System_Int32_array *)sub_1B86460(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
    *idList = v17;
    sub_1B8635C((CGThumbnailListItem_o *)idList, (int32_t)v17, v18, v19);
    v20 = (System_String_array *)sub_1B86460(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v20;
    sub_1B8635C((CGThumbnailListItem_o *)titleList, (int32_t)v20, v21, v22);
    v23 = (System_String_array *)sub_1B86460(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v23;
    sub_1B8635C((CGThumbnailListItem_o *)explanationList, (int32_t)v23, v24, v25);
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
  sub_1B8635C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v6, checkTransform, method);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo_34670996(
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
  const MethodInfo *v13; // x3

  if ( (byte_4A4B1EA & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B863B8(&SkillInfo___TypeInfo, v7);
    byte_4A4B1EA = 1;
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
      v11 = (SkillInfo_array *)sub_1B86460(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
      *skillInfoList = v11;
      sub_1B8635C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v11, v12, v13);
    }
  }
}


void __fastcall ServantStatusListViewItem__GetStatus(
        ServantStatusListViewItem_o *this,
        ServantOverwriteStatus_o **outOverwriteStatus,
        int32_t targetDispLimitCount,
        const MethodInfo *method)
{
  int32_t ServantLimitCountSealAfter; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x22
  const MethodInfo *v11; // x1
  int32_t LimitCount; // w23
  int32_t LimitCountByDispLimit; // w21
  const MethodInfo *v14; // x1
  UserServantCollectionEntity_o *SvtId; // x0
  UserServantEntity_o *userSvtEntity; // x0
  ServantOverwriteStatus_o *OverwriteStatus_41260480; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  ServantLimitCountSealAfter = targetDispLimitCount;
  if ( (byte_4A4B1F4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, outOverwriteStatus);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v8);
    byte_4A4B1F4 = 1;
  }
  *outOverwriteStatus = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)outOverwriteStatus, 0, targetDispLimitCount, method);
  if ( !this->fields.servantLeaderInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    LimitCount = ServantStatusListViewItem__get_LimitCount(this, v11);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(ServantLimitCountSealAfter, LimitCount, 0LL);
    SvtId = (UserServantCollectionEntity_o *)ServantStatusListViewItem__get_SvtId(this, v14);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   (int32_t)SvtId,
                                   LimitCountByDispLimit,
                                   0LL);
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    OverwriteStatus_41260480 = UserServantEntity__GetOverwriteStatus_41260480(
                                 userSvtEntity,
                                 ServantLimitCountSealAfter,
                                 0LL);
LABEL_17:
    *outOverwriteStatus = OverwriteStatus_41260480;
    sub_1B8635C((CGThumbnailListItem_o *)outOverwriteStatus, (int32_t)OverwriteStatus_41260480, v18, v19);
    return;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    OverwriteStatus_41260480 = ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0LL);
    goto LABEL_17;
  }
  if ( this->fields.isCollection )
  {
    SvtId = this->fields.userSvtCollectionEntity;
    if ( SvtId )
    {
      OverwriteStatus_41260480 = UserServantCollectionEntity__GetOverwriteStatus(SvtId, ServantLimitCountSealAfter, 0LL);
      goto LABEL_17;
    }
LABEL_19:
    sub_1B86614(SvtId, v9);
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
  const MethodInfo *v3; // x3
  TreasureDvcInfo_o *transformedTdInfo; // x8

  transformedTdInfo = this->fields.transformedTdInfo;
  *tdInfo = transformedTdInfo;
  sub_1B8635C((CGThumbnailListItem_o *)tdInfo, (int32_t)transformedTdInfo, (int32_t)method, v3);
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
  const MethodInfo *v38; // x3
  System_String_o *monitor; // x1
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_String_o *v43; // x1
  __int64 *v44; // x8
  System_String_o *v45; // x0
  ServantLimitAddEntity_o *v47; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4A4B1EE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, illust);
    sub_1B863B8(&Method_DataManager_GetMasterData_CvMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_IllustratorMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__, v13);
    sub_1B863B8(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v14);
    sub_1B863B8(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v15);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v16);
    sub_1B863B8(&LocalizationManager_TypeInfo, v17);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B863B8(&StringLiteral_14594/*"UNKNOWN_NAME_ILLUST"*/, v20);
    sub_1B863B8(&StringLiteral_9177/*"NO_ENTRY_NAME_ILLUST"*/, v21);
    sub_1B863B8(&StringLiteral_1/*""*/, v22);
    byte_4A4B1EE = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)voice, (int32_t)StringLiteral_1/*""*/, (int32_t)voice, (const MethodInfo *)isPlayVoice);
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
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
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
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v36 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_3214280 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v36 )
              {
                monitor = (System_String_o *)v36[1].monitor;
                *voice = monitor;
                sub_1B8635C((CGThumbnailListItem_o *)voice, (int32_t)monitor, v37, v38);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1B86614(Master_object, v24);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v26);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_32142CC *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
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
        v44 = &StringLiteral_9177/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_42:
        v45 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
        LODWORD(v43) = (_DWORD)v45;
        *illust = v45;
        goto LABEL_43;
      }
    }
LABEL_41:
    v44 = &StringLiteral_14594/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v40 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_3214280 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v40 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_41;
  }
  v43 = (System_String_o *)v40[1].monitor;
  *illust = v43;
LABEL_43:
  sub_1B8635C((CGThumbnailListItem_o *)illust, (int32_t)v43, v41, v42);
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

  if ( (byte_4A4B1F1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_1/*""*/, v8);
    byte_4A4B1F1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &entity, svtId, imageLimitCount, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B86614(Instance, v10);
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
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x22
  bool v13; // w0
  struct UserServantEntity_o *v14; // x20
  const MethodInfo *v15; // x1
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  bool TreasureDeviceInfo; // w0
  EquipTargetInfo_o *equipTargetInfo; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4A4B1D7 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_1B863B8(&TreasureDvcInfo_TypeInfo, v3);
    byte_4A4B1D7 = 1;
  }
  this->fields.isTdResult = 0;
  v4 = (TreasureDvcInfo_o *)sub_1B86604(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v4, 0LL);
  this->fields.tdInfo = v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tdInfo, (int32_t)v4, v5, v6);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v7);
  if ( !this->fields.userSvtEntity )
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &this->fields.skillInfoList, 0LL);
      svtEntity = this->fields.servantLeaderInfo;
      if ( !svtEntity )
        goto LABEL_35;
      ServantLeaderInfo__getPassiveSkillInfo(
        (ServantLeaderInfo_o *)svtEntity,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        0LL);
      svtEntity = this->fields.servantLeaderInfo;
      if ( !svtEntity )
        goto LABEL_35;
      ServantLeaderInfo__GetAppendPassiveSkillInfo(
        (ServantLeaderInfo_o *)svtEntity,
        &this->fields.appendPassiveSkillIdList,
        &this->fields.appendPassiveSkillTitleMessageList,
        &this->fields.appendPassiveSkillExplanationMessageList,
        &this->fields.appendPassiveSkillReleaseStateList,
        &this->fields.appendPassiveSkillLvList,
        0LL);
      svtEntity = this->fields.servantLeaderInfo;
      if ( !svtEntity )
        goto LABEL_35;
      TreasureDeviceInfo = ServantLeaderInfo__getTreasureDeviceInfo(
                             (ServantLeaderInfo_o *)svtEntity,
                             &this->fields.tdInfo,
                             0LL);
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
      if ( !svtEntity )
        goto LABEL_35;
      if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
        goto LABEL_27;
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_35;
      if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0LL) )
      {
LABEL_27:
        svtEntity = this->fields.userSvtCollectionEntity;
        if ( !svtEntity )
          goto LABEL_35;
        UserServantCollectionEntity__getSkillInfo(
          (UserServantCollectionEntity_o *)svtEntity,
          &this->fields.skillInfoList,
          -1,
          ConvertOverwriteDispImageLimitCount,
          -1,
          0LL);
      }
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_35;
      if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
        goto LABEL_21;
      svtEntity = this->fields.userSvtCollectionEntity;
      if ( !svtEntity )
        goto LABEL_35;
      UserServantCollectionEntity__getPassiveSkillInfo(
        (UserServantCollectionEntity_o *)svtEntity,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        ConvertOverwriteDispImageLimitCount,
        1,
        0LL);
      svtEntity = this->fields.userSvtCollectionEntity;
      if ( !svtEntity )
        goto LABEL_35;
      UserServantCollectionEntity__GetAppendPassiveSkillInfo(
        (UserServantCollectionEntity_o *)svtEntity,
        &this->fields.appendPassiveSkillIdList,
        &this->fields.appendPassiveSkillTitleMessageList,
        &this->fields.appendPassiveSkillExplanationMessageList,
        &this->fields.appendPassiveSkillReleaseStateList,
        &this->fields.appendPassiveSkillLvList,
        0LL);
      svtEntity = this->fields.userSvtCollectionEntity;
      if ( !svtEntity )
        goto LABEL_35;
      TreasureDeviceInfo = UserServantCollectionEntity__getTreasureDeviceInfo(
                             (UserServantCollectionEntity_o *)svtEntity,
                             &this->fields.tdInfo,
                             -1,
                             ConvertOverwriteDispImageLimitCount,
                             0LL);
    }
    this->fields.isTdResult = TreasureDeviceInfo;
    goto LABEL_21;
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
    goto LABEL_35;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
LABEL_35:
    sub_1B86614(svtEntity, v8);
  }
LABEL_10:
  svtEntity = this->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_35;
  v13 = UserServantEntity__getTreasureDeviceInfo(
          (UserServantEntity_o *)svtEntity,
          &this->fields.tdInfo,
          -1,
          ConvertOverwriteDispImageLimitCount,
          0,
          0LL);
  v14 = this->fields.userSvtEntity;
  this->fields.isTdResult = v13;
  svtEntity = (void *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v15);
  if ( !v14 )
    goto LABEL_35;
  v14->fields.dispLimitCountAfter = (int)svtEntity;
LABEL_21:
  ServantStatusListViewItem__AddDuplicationInfo(this, 0, v9);
  ServantStatusListViewItem__SetTransformData(this, v19);
  ServantStatusListViewItem__SetCostumeData(this, v20);
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

  if ( (byte_4A4B1D4 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, v4);
    sub_1B863B8(&UserServantEntity_TypeInfo, v5);
    byte_4A4B1D4 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
      v8 = sub_1B86604(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41229780((UserServantEntity_o *)v8, userSvtEntity, 0LL);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0LL);
      if ( !v8 )
        sub_1B86614(*(_QWORD *)&v10.fields.currentCryptoKey, *(_QWORD *)&v10.fields.fakeValue);
      v11 = *(_QWORD *)(v8 + 80);
      v12 = *(_QWORD *)(v8 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 208) = v10;
      *(_QWORD *)&v19.fields.currentCryptoKey = v11;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v19, 0LL);
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
  const MethodInfo *v11; // x3
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  int32_t v13; // w1
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v16; // x0
  System_Collections_Generic_List_int__o *v17; // x20
  struct System_Int32_array *v18; // x0
  struct System_Int32_array **v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  struct System_Int32_array *v25; // x0

  if ( (byte_4A4B1F2 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&int___TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor___76036632, v7);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4A4B1F2 = 1;
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
      v16 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
      v17 = v16;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_56488456(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_35DF208 *)Method_System_Collections_Generic_List_int___ctor___76036632);
      else
        System_Collections_Generic_List_int____ctor(
          v16,
          (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v17 )
      {
        items = v17->fields._items;
        method = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&svtEntity->fields.starRate + 872LL);
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
              *(const MethodInfo_35DF934 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = size + 1;
            items->m_Items[size + 1] = (int)method;
          }
          v25 = System_Collections_Generic_List_int___ToArray(
                  v17,
                  (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
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
      v18 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v18;
      v19 = &this->fields.costumeAndOtherIds;
      sub_1B8635C((CGThumbnailListItem_o *)v19, (int32_t)v18, v20, v21);
      svtEntity = (ServantEntity_o *)*(v19 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v19, 0, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B86614(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v13 = 0;
LABEL_25:
  sub_1B8635C((CGThumbnailListItem_o *)p_costumeAndOtherIds, v13, v10, v11);
}


void __fastcall ServantStatusListViewItem__SetCostumeData(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t ConvertOverwriteDispImageLimitCount; // w2

  if ( this->fields.servantLeaderInfo )
    ConvertOverwriteDispImageLimitCount = -1;
  else
    ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                            this,
                                            method);
  ServantStatusListViewItem__GetStatus(this, &this->fields.overwriteStatus, ConvertOverwriteDispImageLimitCount, v2);
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
  const MethodInfo *v3; // x3
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
  const MethodInfo *v27; // x3
  ServantStatusListViewItem_o *v28; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x8
  int32_t v30; // w20
  ServantLimitEntity_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Int64_array *v34; // x8
  PartyOrganizationListViewItem_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  BalanceConfig_c *v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v5 = this;
  if ( (byte_4A4B1D8 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, equipUserSvtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    this = (ServantStatusListViewItem_o *)sub_1B863B8(&SkillInfo___TypeInfo, v14);
    byte_4A4B1D8 = 1;
  }
  if ( equipUserSvtId >= 1 && v5->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v5->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v5->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
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
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                      v45,
                                                      0LL);
              if ( v22 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                           (int32_t)this,
                           (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v5->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.equipServantEntity, (int32_t)Entity, v26, v27);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v28 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0LL);
                    v29 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v30 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                              v29[6],
                                                              0LL);
                      if ( v28 )
                      {
                        v31 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v28, v30, (int32_t)this, 0LL);
                        v5->fields.equipSvtLimitEntity = v31;
                        sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.equipSvtLimitEntity, (int32_t)v31, v32, v33);
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
          sub_1B86614(this, equipUserSvtId);
        }
LABEL_39:
        sub_1B8661C(this, equipUserSvtId);
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
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  v5->fields.equipServantEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.equipServantEntity, 0, v36, v37);
  v5->fields.equipSvtLimitEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.equipSvtLimitEntity, 0, v38, v39);
  v40 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  v41 = sub_1B86460(SkillInfo___TypeInfo, (unsigned int)v40->static_fields->SvtEquipSkillListMax);
  v5->fields.equipSkillInfoList = (struct SkillInfo_array *)v41;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.equipSkillInfoList, v41, v42, v43);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w21
  int32_t v16; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w22
  int32_t v21; // w0
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w22
  int32_t v29; // w0
  struct System_Int32_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w0
  __int64 v34; // x8
  int32_t v35; // w20
  int32_t v36; // w0
  struct System_Int32_array *v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A4B1D5 & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, entity);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A4B1D5 = 1;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v40, 0LL);
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v11 = v9;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardSelectList = ImageLimitCount__GetCardSelectList(v8, v11, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v13, v14);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(entity->fields.svtId, 0LL);
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(entity->fields.limitCount, 0LL);
    SelectList = ImageLimitCount__GetSelectList(v15, v16, this->fields.costumeIds, 0LL);
    this->fields.dispSelectList = SelectList;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v18, v19);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(entity->fields.svtId, 0LL);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(entity->fields.limitCount, 0LL);
    v22 = ImageLimitCount__GetSelectList(v20, v21, this->fields.costumeIds, 0LL);
    this->fields.commandCardSelectList = v22;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v22, v23, v24);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0LL);
    this->fields.commandCardParam = CommandCardParam;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v26, v27);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(entity->fields.svtId, 0LL);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(entity->fields.limitCount, 0LL);
    v30 = ImageLimitCount__GetCardSelectList(v28, v29, this->fields.costumeIds, 0LL);
    this->fields.iconSelectList = v30;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v30, v31, v32);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(entity->fields.svtId, 0LL);
    v34 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v41.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v35 = v33;
    *(_QWORD *)&v41.fields.currentCryptoKey = v34;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v41, 0LL);
    v37 = ImageLimitCount__GetSelectList(v35, v36, this->fields.costumeIds, 0LL);
    this->fields.portraitSelectList = v37;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v37, v38, v39);
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
  if ( (byte_4A4B1E9 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B863B8(&UserServantEntity_TypeInfo, *(_QWORD *)&index);
    byte_4A4B1E9 = 1;
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
        sub_1B8661C(this, *(_QWORD *)&index);
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
  __int64 v11; // x1
  ServantEntity_o *svtEntity; // x0
  Il2CppObject *Master_object; // x20
  const MethodInfo *v14; // x1
  void *SvtId; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  ServantTransformEntity_o *v19; // x8
  struct System_String_o *befTitle; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_String_o *aftTitle; // x1
  Il2CppObject *v24; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v30; // x22
  const MethodInfo *v31; // x1
  ServantLimitEntity_o *v32; // x20
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t lv; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  struct EquipTargetInfo_o *equipTargetInfo; // x9
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  _DWORD *v39; // x21
  int32_t atkMax; // w24
  int32_t atkBase; // w25
  int v42; // w23
  CheckCombineResStatus_c *v43; // x0
  _DWORD *v44; // x9
  int32_t LOT_RATE; // w8
  int32_t v46; // w23
  int32_t adjustAtk; // w24
  struct ServantLeaderInfo_o *v48; // x10
  BalanceConfig_c *v49; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v51; // w8
  int32_t StatusUpAdjustHp; // w10
  const MethodInfo *v53; // x1
  UserServantEntity_o *v54; // x0
  UserServantEntity_o *v55; // x22
  int32_t v56; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  ServantLeaderInfo_o *v58; // x0
  ServantLeaderInfo_o *v59; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  int32_t v61; // w20
  int32_t LimitCount; // w0
  int32_t dispLimitCount; // w21
  int32_t transformedHp; // w22
  struct UserServantEntity_o *v65; // x8
  int32_t transformedAtk; // w23
  int32_t v67; // w24
  int32_t collectionLv; // w26
  int32_t adjustHp; // w25
  int32_t v70; // w28
  struct ServantLeaderInfo_o *v71; // x8
  struct EquipTargetInfo_o *v72; // x8
  __int64 v73; // x27
  const MethodInfo *v74; // x2
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A4B1F3 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&CheckCombineResStatus_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantExpMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantTransformMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B863B8(&ServantOverwriteStatus_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11);
    byte_4A4B1F3 = 1;
  }
  entity = 0LL;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = (void *)ServantStatusListViewItem__get_SvtId(this, v14);
    if ( !Master_object )
      goto LABEL_70;
    SvtId = (void *)ServantTransformMaster__TryGetEntity(
                      (ServantTransformMaster_o *)Master_object,
                      &entity,
                      (int32_t)SvtId,
                      this->fields.dispLimitCount + 1,
                      0LL);
    if ( ((unsigned __int8)SvtId & 1) == 0 )
      return;
    v19 = entity;
    if ( !entity )
      goto LABEL_70;
    this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
    this->fields._TransformedServantDispLimitCount_k__BackingField = v19->fields.aftDispLimitCount - 1;
    befTitle = v19->fields.befTitle;
    this->fields.transformNameBefore = befTitle;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.transformNameBefore, (int32_t)befTitle, v17, v18);
    if ( !entity )
      goto LABEL_70;
    aftTitle = entity->fields.aftTitle;
    this->fields.transformNameAfter = aftTitle;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.transformNameAfter, (int32_t)aftTitle, v21, v22);
    this->fields._IsTransformServant_k__BackingField = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SvtId )
      goto LABEL_70;
    v24 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
            this->fields._TransformedSvtId_k__BackingField,
            (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
    this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v24;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields._TransformedServant_k__BackingField, (int32_t)v24, v26, v27);
    v28 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
    v30 = (ServantLimitMaster_o *)v28;
    SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v31);
    if ( !v30 )
      goto LABEL_70;
    v32 = ServantLimitMaster__GetEntity(v30, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0LL);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantExpMaster___);
    if ( !*p_TransformedServant_k__BackingField )
      goto LABEL_70;
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
      goto LABEL_70;
    SvtId = ServantExpMaster__GetEntity(
              (ServantExpMaster_o *)SvtId,
              (*p_TransformedServant_k__BackingField)->fields.expType,
              lv,
              0LL);
    if ( !v32 )
      goto LABEL_70;
    v39 = SvtId;
    if ( !SvtId )
      goto LABEL_70;
    atkBase = v32->fields.atkBase;
    atkMax = v32->fields.atkMax;
    v42 = *((_DWORD *)SvtId + 7);
    v43 = CheckCombineResStatus_TypeInfo;
    if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
      v43 = CheckCombineResStatus_TypeInfo;
    }
    v44 = this->fields.userSvtEntity;
    LOT_RATE = v43->static_fields->LOT_RATE;
    v46 = v42 * (atkMax - atkBase) / LOT_RATE + v32->fields.atkBase;
    this->fields.transformedAtk = v46;
    if ( v44 )
    {
      adjustAtk = v44[68];
    }
    else
    {
      v48 = this->fields.servantLeaderInfo;
      if ( v48 )
        adjustAtk = v48->fields.adjustAtk;
      else
        adjustAtk = 0;
    }
    v49 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = BalanceConfig_TypeInfo;
      v44 = this->fields.userSvtEntity;
      LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
    }
    static_fields = v49->static_fields;
    this->fields.transformedAtk = v46 + static_fields->StatusUpAdjustAtk * adjustAtk;
    v51 = v39[7] * (v32->fields.hpMax - v32->fields.hpBase) / LOT_RATE + v32->fields.hpBase;
    if ( v44 )
    {
      LODWORD(v44) = v44[69];
    }
    else
    {
      v44 = this->fields.servantLeaderInfo;
      if ( v44 )
        LODWORD(v44) = v44[22];
    }
    StatusUpAdjustHp = static_fields->StatusUpAdjustHp;
    this->fields.transformedServantLimitEntity = v32;
    this->fields.transformedHp = v51 + StatusUpAdjustHp * (_DWORD)v44;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.transformedServantLimitEntity, (int32_t)v32, v37, v38);
    v54 = this->fields.userSvtEntity;
    if ( v54 )
    {
      UserServantEntity__GetTransformedSkillInfo(
        v54,
        &this->fields.transformedSkillInfoList,
        this->fields._TransformedSvtId_k__BackingField,
        -1,
        this->fields._TransformedServantDispLimitCount_k__BackingField,
        1,
        0,
        -1,
        0LL);
      v55 = this->fields.userSvtEntity;
      v56 = this->fields._TransformedSvtId_k__BackingField;
      TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
      SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !SvtId )
        goto LABEL_70;
      if ( !v55 )
        goto LABEL_70;
      UserServantEntity__GetTransformedPassiveSkillInfo(
        v55,
        &this->fields.transformedPassiveSkillIdList,
        &this->fields.transformedPassiveSkillTitleMessageList,
        &this->fields.transformedPassiveSkillExplanationMessageList,
        v56,
        TransformedServantDispLimitCount_k__BackingField,
        *((_QWORD *)SvtId + 13),
        0LL);
      SvtId = this->fields.userSvtEntity;
      if ( !SvtId )
        goto LABEL_70;
      UserServantEntity__GetTransformedTreasureDeviceInfo(
        (UserServantEntity_o *)SvtId,
        &this->fields.transformedTdInfo,
        this->fields._TransformedSvtId_k__BackingField,
        -1,
        this->fields._TransformedServantDispLimitCount_k__BackingField,
        0,
        0LL);
    }
    else
    {
      v58 = this->fields.servantLeaderInfo;
      if ( v58 )
      {
        ServantLeaderInfo__GetTransformedSkillInfo(
          v58,
          &this->fields.transformedSkillInfoList,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_70;
        ServantLeaderInfo__GetTransformedPassiveSkillInfo(
          (ServantLeaderInfo_o *)SvtId,
          &this->fields.transformedPassiveSkillIdList,
          &this->fields.transformedPassiveSkillTitleMessageList,
          &this->fields.transformedPassiveSkillExplanationMessageList,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_70;
        ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
          (ServantLeaderInfo_o *)SvtId,
          &this->fields.transformedTdInfo,
          this->fields._TransformedSvtId_k__BackingField,
          0LL);
        SvtId = this->fields.servantLeaderInfo;
        if ( !SvtId )
          goto LABEL_70;
        SvtId = (void *)ServantLeaderInfo__get_TransformedAtk((ServantLeaderInfo_o *)SvtId, 0LL);
        v59 = this->fields.servantLeaderInfo;
        this->fields.transformedAtk = (int)SvtId;
        if ( !v59 )
          goto LABEL_70;
        this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v59, 0LL);
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
            goto LABEL_70;
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
            goto LABEL_70;
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
    v61 = this->fields._TransformedSvtId_k__BackingField;
    LimitCount = ServantStatusListViewItem__get_LimitCount(this, v53);
    dispLimitCount = this->fields.dispLimitCount;
    transformedHp = this->fields.transformedHp;
    v65 = this->fields.userSvtEntity;
    transformedAtk = this->fields.transformedAtk;
    v67 = LimitCount;
    if ( v65 )
    {
      collectionLv = v65->fields.lv;
      adjustHp = v65->fields.adjustHp;
      v70 = v65->fields.adjustAtk;
      goto LABEL_66;
    }
    v71 = this->fields.servantLeaderInfo;
    if ( v71 )
    {
      collectionLv = v71->fields.lv;
      v70 = v71->fields.adjustAtk;
      adjustHp = v71->fields.adjustHp;
      goto LABEL_66;
    }
    v72 = this->fields.equipTargetInfo;
    if ( v72 )
    {
      collectionLv = v72->fields.lv;
    }
    else
    {
      if ( !this->fields.isCollection )
      {
        adjustHp = 0;
        collectionLv = 0;
        goto LABEL_65;
      }
      collectionLv = this->fields.collectionLv;
    }
    adjustHp = 0;
LABEL_65:
    v70 = 0;
LABEL_66:
    v73 = sub_1B86604(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_32779872(
      (ServantOverwriteStatus_o *)v73,
      v61,
      v67,
      dispLimitCount,
      transformedHp,
      transformedAtk,
      collectionLv,
      adjustHp,
      v70,
      0LL);
    if ( v73 )
    {
      *(int32x2_t *)&this->fields.transformedAtk = vrev64_s32(*(int32x2_t *)(v73 + 16));
      ServantStatusListViewItem__AddDuplicationInfo(this, 1, v74);
      return;
    }
LABEL_70:
    sub_1B86614(SvtId, v16);
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
  const MethodInfo *v11; // x3
  _DWORD *klass; // x8
  CGThumbnailListItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v15; // x20
  int max_length; // w9
  unsigned int v17; // w10
  unsigned int v18; // w21
  char v19; // w21

  if ( (byte_4A4B1F0 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    byte_4A4B1F0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
  p_svtCommentEntityList = (CGThumbnailListItem_o *)&this->fields.svtCommentEntityList;
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
    sub_1B86614(Master_object, v9);
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
      sub_1B8661C(Master_object, v9);
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
  p_svtCommentEntityList->klass = (CGThumbnailListItem_c *)v15;
  sub_1B8635C(p_svtCommentEntityList, (int32_t)v15, v10, v11);
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
    sub_1B86614(this, method);
  return svtLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_Atk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct ServantOverwriteStatus_o *overwriteStatus; // x8

  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields.transformedAtk;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.atk;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields.atk;
  overwriteStatus = this->fields.overwriteStatus;
  if ( overwriteStatus )
    return overwriteStatus->fields._Atk_k__BackingField;
  else
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

  if ( (byte_4A4B1DA & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4B1DA = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v7, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userSvtEntity, 0LL);
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
  if ( (byte_4A4B1E0 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B863B8(&ImageLimitCount_TypeInfo, method);
    byte_4A4B1E0 = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1B86614(this, method);
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
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userSvtEntity, 0LL);
  if ( (result & 0x80000000) != 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t __fastcall ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  int32_t *p_Cost_k__BackingField; // x8
  struct ServantEntity_o *svtEntity; // x8

  overwriteStatus = this->fields.overwriteStatus;
  if ( overwriteStatus )
  {
    p_Cost_k__BackingField = &overwriteStatus->fields._Cost_k__BackingField;
  }
  else
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      sub_1B86614(this, method);
    p_Cost_k__BackingField = &svtEntity->fields.cost;
  }
  return *p_Cost_k__BackingField;
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
    sub_1B86614(this, method);
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

  if ( (byte_4A4B1E7 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4B1E7 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v9, 0LL);
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
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct ServantOverwriteStatus_o *overwriteStatus; // x8

  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields.transformedHp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.hp;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields.hp;
  overwriteStatus = this->fields.overwriteStatus;
  if ( overwriteStatus )
    return overwriteStatus->fields._Hp_k__BackingField;
  else
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
    sub_1B86614(0LL, method);
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

  if ( (byte_4A4B1DF & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1DF = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
    sub_1B86614(ManualSetCommandCardLimit, method);
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

  if ( (byte_4A4B1DD & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1DD = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
    sub_1B86614(ManualSetDispLimitCount, method);
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

  if ( (byte_4A4B1E2 & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1E2 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
    sub_1B86614(ManualSetIconLimitCount, method);
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

  if ( (byte_4A4B1E4 & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1E4 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
    sub_1B86614(ManualSetPortraitLimitCount, method);
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

  if ( (byte_4A4B1E6 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4B1E6 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v7, 0LL) != this->fields.supportRandomLimitCount;
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

  if ( (byte_4A4B1DB & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4B1DB = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v10, 0LL);
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
    sub_1B86614(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1B86614(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4A4B1DC & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1DC = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
      sub_1B86614(v3, method);
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

  if ( (byte_4A4B1E1 & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1E1 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
      sub_1B86614(v3, method);
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

  if ( (byte_4A4B1DE & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1DE = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
      sub_1B86614(v3, method);
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

  if ( (byte_4A4B1E3 & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1E3 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
      sub_1B86614(v3, method);
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

  if ( (byte_4A4B1E5 & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4B1E5 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, method);
    byte_4A4A1E0 = 1;
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
      sub_1B86614(v3, method);
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
    sub_1B86614(this, method);
  return svtLimitEntity->fields.treasureDevice;
}


ServantOverwriteStatus_o *__fastcall ServantStatusListViewItem__get_OverwriteStatus(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteStatus;
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
    sub_1B86614(this, method);
  return svtLimitEntity->fields.power;
}


int64_t __fastcall ServantStatusListViewItem__get_PushUserSvtId(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.pushUserSvtId;
}


QuestRestrictionInfo_o *__fastcall ServantStatusListViewItem__get_QuestRestrictionInfo(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t __fastcall ServantStatusListViewItem__get_Rarity(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  _DWORD *overwriteStatus; // x8

  overwriteStatus = this->fields.overwriteStatus;
  if ( !overwriteStatus )
  {
    overwriteStatus = this->fields.svtLimitEntity;
    if ( !overwriteStatus )
      sub_1B86614(this, method);
  }
  return overwriteStatus[6];
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

  if ( (byte_4A4B1D9 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4B1D9 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v7, 0LL);
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedAgility(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B86614(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedDefense(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B86614(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedLuck(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B86614(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedMagic(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B86614(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedNp(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B86614(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedPower(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1B86614(this, method);
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
  if ( (byte_4A4B1EF & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A4B1EF = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v8, 0LL);
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
        sub_1B86614(this, method);
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
  if ( (byte_4A4B1E8 & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, value);
    byte_4A4B1E8 = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4A4A1E0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, value);
    byte_4A4A1E0 = 1;
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
  const MethodInfo *v3; // x3

  this->fields._TransformedServant_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._TransformedServant_k__BackingField,
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