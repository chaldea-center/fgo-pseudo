void ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x21
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_long__o *v24; // x28
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int64_t Instance; // x0
  struct PartyOrganizationListViewItem_o *v30; // x0
  struct PartyOrganizationListViewItem_o **p_memberItem; // x26
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  char v35; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v42; // q0
  struct PartyOrganizationListViewItem_o *v43; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct PartyOrganizationListViewItem_o *v51; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x25
  __int64 v56; // x28
  __int64 v57; // x29
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x25
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  ServantLimitMaster_o *v62; // x28
  int32_t v63; // w29
  struct ServantLimitEntity_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  ServantCommentMaster_o *v67; // x28
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v71; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // q1
  UserServantCollectionMaster_o *v73; // x28
  int64_t v74; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  int v78; // w8
  QuestRestrictionInfo_o *v79; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x27
  int32_t lv; // w26
  __int64 v87; // x28
  __int64 v88; // x29
  struct System_Int32_array *CostumeList_43038236; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x1
  struct UserServantCollectionEntity_o *v93; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v95; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v97; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v99; // x2
  struct System_Int64_array *v100; // x8
  int64_t v101; // x1
  const MethodInfo *v102; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v105; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v106; // x8
  int32_t v107; // w2
  int v108; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v109; // x8
  int32_t v110; // w2
  int v111; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v112; // x8
  int32_t v113; // w2
  int v114; // w9
  struct System_Collections_Generic_List_long__o *v115; // x8
  int v116; // w9
  struct UserServantCollectionEntity_o *v117; // x8
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v121; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v123; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v125; // x8
  int32_t v126; // w0
  UserServantEntity_o *v127; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v129; // x2
  UserServantEntity_o *v130; // x0
  int32_t v131; // w0
  UserServantEntity_o *v132; // x8
  int32_t v133; // w0
  UserServantEntity_o *v134; // x1
  const MethodInfo *v135; // x1
  const MethodInfo *v136; // x2
  RandomLimitCountManager_c *v137; // x0
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // [xsp+0h] [xbp-B0h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16

  if ( (byte_4C33E2B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33E2B = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v20, v22, v23);
  v24 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v24, v25, v26);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.partyItem = partyItem;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.partyItem, (int32_t)partyItem, v27, v28);
  if ( !partyItem )
    goto LABEL_97;
  v30 = PartyListViewItem__GetMember(partyItem, member, 0);
  this->fields.memberItem = v30;
  p_memberItem = &this->fields.memberItem;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.memberItem, (int32_t)v30, v32, v33);
  memberItem = this->fields.memberItem;
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  if ( !memberItem )
    goto LABEL_97;
  this->fields._IsTempGrandServant_k__BackingField = memberItem->fields._IsTempGrandServant_k__BackingField;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0) )
  {
    v35 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_97;
    v35 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v35;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  *(_BYTE *)(Instance + 181) = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v37, v38);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_97;
  v42 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v43 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v42;
  if ( !v43 )
    goto LABEL_97;
  userServantEntity = v43->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v39, v40);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_97;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
  this->fields.equipIdList = EquipList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v47, v48);
  v51 = this->fields.memberItem;
  if ( !v51 )
    goto LABEL_97;
  questRestrictionInfo = v51->fields.questRestrictionInfo;
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v49, v50);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v54 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v57 = *(_QWORD *)&v54[5].fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v142.fields.currentCryptoKey = v57;
  *(_QWORD *)&v142.fields.fakeValue = v56;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v142, 0);
  if ( !v55 )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v55,
             Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v60, v61);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v62 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v63 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[6], 0);
  if ( !v62 )
    goto LABEL_97;
  v64 = ServantLimitMaster__GetEntity(v62, v63, Instance, 0);
  this->fields.svtLimitEntity = v64;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v64, v65, v66);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_97;
  v67 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_svtEntity)[1], 0);
  if ( !v67 )
    goto LABEL_97;
  EntityList = ServantCommentMaster__GetEntityList(v67, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v69, v70);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v71 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v72 = v71[4];
  v73 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v141.fields.currentCryptoKey = v71[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v141.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v140 = v141;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v140, 0);
  if ( !*p_userSvtEntity
    || (v74 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[5], 0),
        !v73)
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v73, v74, Instance, 0),
        this->fields.userSvtCollectionEntity = EntityDefinitely,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v76, v77),
        (Instance = (int64_t)this->fields.memberItem) == 0) )
  {
LABEL_97:
    sub_1C32E7C(Instance);
  }
  v78 = *(unsigned __int8 *)(Instance + 247);
  this->fields.isConvertOverwriteImage = v78;
  if ( v78 )
  {
    v79 = this->fields.questRestrictionInfo;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(SvtId, 0);
    if ( !*p_memberItem || !v79 )
      goto LABEL_97;
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
           v79,
           Instance,
           (*p_memberItem)->fields.isFollower,
           0) )
    {
      this->fields.isConvertOverwriteImage = 0;
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v82, v83);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_97;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  v88 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v87 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v143.fields.currentCryptoKey = v88;
  *(_QWORD *)&v143.fields.fakeValue = v87;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v143, 0);
  if ( !userSvtCollectionEntity )
    goto LABEL_97;
  CostumeList_43038236 = UserServantCollectionEntity__getCostumeList_43038236(userSvtCollectionEntity, lv, Instance, 0);
  this->fields.costumeIds = CostumeList_43038236;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_43038236, v90, v91);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v92);
  v93 = this->fields.userSvtCollectionEntity;
  if ( !v93 )
    goto LABEL_97;
  svtCommonFlag = v93->fields.svtCommonFlag;
  v95 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v95 )
    goto LABEL_97;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                   v95->fields.battleVoice,
                                   0);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !Instance )
    goto LABEL_97;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v97 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v97 )
    goto LABEL_97;
  IsChoice = UserServantEntity__IsChoice(v97, 0);
  v100 = this->fields.equipIdList;
  this->fields.isChoice = IsChoice;
  this->fields.isUse = 0;
  if ( v100 )
  {
    if ( !LODWORD(v100->max_length) )
      sub_1C32E84(IsChoice);
    v101 = v100->m_Items[0];
  }
  else
  {
    v101 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v101, v99);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_97;
  size = equipGrandServantEntityList->fields._size;
  v105 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v105;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  v106 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_97;
  v107 = v106->fields._size;
  v108 = v106->fields._version + 1;
  v106->fields._size = 0;
  v106->fields._version = v108;
  if ( v107 >= 1 )
    System_Array__Clear((System_Array_o *)v106->fields._items, 0, v107, 0);
  v109 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_97;
  v110 = v109->fields._size;
  v111 = v109->fields._version + 1;
  v109->fields._size = 0;
  v109->fields._version = v111;
  if ( v110 >= 1 )
    System_Array__Clear((System_Array_o *)v109->fields._items, 0, v110, 0);
  v112 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_97;
  v113 = v112->fields._size;
  v114 = v112->fields._version + 1;
  v112->fields._size = 0;
  v112->fields._version = v114;
  if ( v113 >= 1 )
    System_Array__Clear((System_Array_o *)v112->fields._items, 0, v113, 0);
  v115 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_97;
  v116 = v115->fields._version + 1;
  v115->fields._size = 0;
  v115->fields._version = v116;
  ServantStatusListViewItem__SetEquipTargetIds(this, v102);
  v117 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v117 != 0;
  if ( !Instance )
    goto LABEL_97;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
      goto LABEL_72;
    }
    goto LABEL_97;
  }
  IsNameTrue = 0;
LABEL_72:
  v121 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v121 != 0;
  if ( v121 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v121, 0);
    v121 = (UserServantEntity_o *)*p_userSvtEntity;
    v123 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v123 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v123;
  if ( !v121 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_80;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v121, 0);
  v125 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v125 )
  {
LABEL_80:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_81;
  }
  v126 = BasicHelper__DecryptValue_44040448(v125->fields.limitCountSupport, 0);
  v127 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v126;
  if ( v127 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v127, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_81:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v118,
    v119);
  v130 = this->fields.userSvtEntity;
  if ( v130 )
  {
    v131 = UserServantEntity__OwnRandomSettingSelectedButton(v130, 0);
    v132 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v131;
    if ( v132 )
    {
      v133 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v132, 0);
      v134 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_87;
    }
    v134 = 0;
  }
  else
  {
    v134 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v133 = 3;
LABEL_87:
  this->fields.supportRandomSettingButtonIndex = v133;
  ServantStatusListViewItem__SetLimitCountInfo(this, v134, v129);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
  }
  v137 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v137 = RandomLimitCountManager_TypeInfo;
  }
  if ( v137->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v136);
  ServantStatusListViewItem__ModifyInfo(this, v135);
}


void ServantStatusListViewItem___ctor_35354456(
        ServantStatusListViewItem_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_long__o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int64_t Instance; // x0
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v36; // q0
  struct PartyOrganizationListViewItem_o *v37; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct PartyOrganizationListViewItem_o *v45; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x21
  __int64 v49; // x22
  __int64 v50; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  ServantLimitMaster_o *v55; // x22
  int32_t v56; // w23
  struct ServantLimitEntity_o *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  ServantCommentMaster_o *v60; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // q1
  UserServantCollectionMaster_o *v66; // x22
  int64_t v67; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct PartyOrganizationListViewItem_o *v71; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_43038236; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x1
  struct UserServantCollectionEntity_o *v82; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v84; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v86; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v88; // x2
  struct System_Int64_array *v89; // x8
  int64_t v90; // x1
  struct UserServantCollectionEntity_o *v91; // x8
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v95; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v97; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v99; // x8
  int32_t v100; // w0
  UserServantEntity_o *v101; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v103; // x2
  UserServantEntity_o *v104; // x0
  int32_t v105; // w0
  UserServantEntity_o *v106; // x8
  int32_t v107; // w0
  UserServantEntity_o *v108; // x1
  const MethodInfo *v109; // x1
  const MethodInfo *v110; // x2
  RandomLimitCountManager_c *v111; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4C33E2C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E2C = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v21, v22, v23);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.warBoardPartyItem = partyItem;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.warBoardPartyItem, (int32_t)partyItem, v24, v25);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0);
  this->fields.memberItem = MemberItem;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.memberItem, (int32_t)MemberItem, v28, v29);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v31, v32);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v36 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v37 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v36;
  if ( !v37 )
    goto LABEL_68;
  userServantEntity = v37->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v33, v34);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
  this->fields.equipIdList = EquipList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v41, v42);
  v45 = this->fields.memberItem;
  if ( !v45 )
    goto LABEL_68;
  questRestrictionInfo = v45->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v43, v44);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v50 = *(_QWORD *)&v47[5].fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v50;
  *(_QWORD *)&v114.fields.fakeValue = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v114, 0);
  if ( !v48 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v48,
             Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v53, v54);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v55 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v56 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[6], 0);
  if ( !v55 )
    goto LABEL_68;
  v57 = ServantLimitMaster__GetEntity(v55, v56, Instance, 0);
  this->fields.svtLimitEntity = v57;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v57, v58, v59);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v60 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_svtEntity)[1], 0);
  if ( !v60 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v60, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v62, v63);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v64 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v65 = v64[4];
  v66 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v113.fields.currentCryptoKey = v64[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v113.fields.fakeValue = v65;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v112 = v113;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v112, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v67 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[5], 0);
  if ( !v66 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v66, v67, Instance, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v69, v70);
  v71 = this->fields.memberItem;
  if ( !v71 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v71->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v73, v74);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.limitCount, 0);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_43038236 = UserServantCollectionEntity__getCostumeList_43038236(userSvtCollectionEntity, lv, Instance, 0);
  this->fields.costumeIds = CostumeList_43038236;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_43038236, v79, v80);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v81);
  v82 = this->fields.userSvtCollectionEntity;
  if ( !v82 )
    goto LABEL_68;
  svtCommonFlag = v82->fields.svtCommonFlag;
  v84 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v84 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                   v84->fields.battleVoice,
                                   0);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v86 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v86 )
    goto LABEL_68;
  IsChoice = UserServantEntity__IsChoice(v86, 0);
  v89 = this->fields.equipIdList;
  this->fields.isChoice = IsChoice;
  this->fields.isUse = 0;
  if ( v89 )
  {
    if ( !LODWORD(v89->max_length) )
      sub_1C32E84(IsChoice);
    v90 = v89->m_Items[0];
  }
  else
  {
    v90 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v90, v88);
  v91 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v91 != 0;
  if ( !Instance )
    goto LABEL_68;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
      goto LABEL_43;
    }
LABEL_68:
    sub_1C32E7C(Instance);
  }
  IsNameTrue = 0;
LABEL_43:
  v95 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v95 != 0;
  if ( v95 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v95, 0);
    v95 = (UserServantEntity_o *)*p_userSvtEntity;
    v97 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v97 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v97;
  if ( !v95 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v95, 0);
  v99 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v99 )
  {
LABEL_51:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_52;
  }
  v100 = BasicHelper__DecryptValue_44040448(v99->fields.limitCountSupport, 0);
  v101 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v100;
  if ( v101 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v101, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v92,
    v93);
  v104 = this->fields.userSvtEntity;
  if ( v104 )
  {
    v105 = UserServantEntity__OwnRandomSettingSelectedButton(v104, 0);
    v106 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v105;
    if ( v106 )
    {
      v107 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v106, 0);
      v108 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_58;
    }
    v108 = 0;
  }
  else
  {
    v108 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v107 = 3;
LABEL_58:
  this->fields.supportRandomSettingButtonIndex = v107;
  ServantStatusListViewItem__SetLimitCountInfo(this, v108, v103);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
  }
  v111 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v111 = RandomLimitCountManager_TypeInfo;
  }
  if ( v111->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v110);
  ServantStatusListViewItem__ModifyInfo(this, v109);
}


void ServantStatusListViewItem___ctor_35356492(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        bool enableBattleVoice,
        bool canMoveCombine,
        bool isTempGrandServant,
        bool isForceNotGrand,
        bool isChangeFriendShipSkill,
        const MethodInfo *method)
{
  bool v16; // w23
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_long__o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x28
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int64_t Instance; // x0
  bool v37; // w8
  __int128 v38; // q1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x21
  __int64 v49; // x23
  __int64 v50; // x28
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x28
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  ServantLimitMaster_o *v55; // x21
  int32_t v56; // w23
  struct ServantLimitEntity_o *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  ServantCommentMaster_o *v60; // x21
  int32_t v61; // w23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  __int64 v66; // x21
  __int64 v67; // x23
  int32_t v68; // w0
  bool IsConvertOverwriteImage; // w0
  __int64 v70; // x20
  __int64 v71; // x21
  int32_t v72; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v73; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // q0
  __int64 v75; // x20
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // q0
  UserServantCollectionMaster_o *v80; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x8
  int64_t v82; // x21
  __int64 v83; // x23
  __int64 v84; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x20
  int32_t lv; // w21
  struct System_Int32_array *CostumeList_43038236; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  const MethodInfo *v97; // x1
  struct System_Int32_array *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct UserServantCollectionEntity_o *v105; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v107; // x8
  __int64 v108; // x20
  __int64 v109; // x21
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  UserServantEntity_o *v114; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  const MethodInfo *v117; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v118; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // q0
  UserDeckMaster_o *v120; // x20
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // x21
  bool v122; // w8
  struct System_Int64_array *v123; // x9
  int64_t v124; // x1
  const MethodInfo *v125; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v128; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v129; // x8
  int32_t v130; // w2
  int v131; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v132; // x8
  int32_t v133; // w2
  int v134; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v135; // x8
  int32_t v136; // w2
  int v137; // w9
  struct System_Collections_Generic_List_long__o *v138; // x8
  int v139; // w9
  struct UserServantCollectionEntity_o *v140; // x8
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v144; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v146; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v148; // x8
  int32_t v149; // w0
  UserServantEntity_o *v150; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v152; // x2
  UserServantEntity_o *v153; // x0
  int32_t v154; // w0
  UserServantEntity_o *v155; // x8
  int32_t v156; // w0
  UserServantEntity_o *v157; // x1
  const MethodInfo *v158; // x1
  const MethodInfo *v159; // x2
  RandomLimitCountManager_c *v160; // x0
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // [xsp+18h] [xbp-128h]
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // [xsp+20h] [xbp-120h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+30h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+60h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+A0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+C0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  v16 = isEnableServantQuest;
  if ( (byte_4C33E2D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33E2D = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v20;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v23;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v26;
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v29;
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v29, v30, v31);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v34, v35);
  this->fields.isEnableServantQuest = v16;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  *(_BYTE *)(Instance + 181) = v16;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0);
  if ( (Instance & 1) != 0 )
  {
    v37 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
    v37 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v37;
  if ( !userServant )
    goto LABEL_124;
  v38 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v171.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v171.fields.fakeValue = v38;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v170 = v171;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v170, 0);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_124;
  if ( Instance == userGameEntity->fields.userId )
  {
    *(_OWORD *)&this->fields.favoriteUserSvtId = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1;
    this->fields.pushUserSvtId = -1;
    this->fields.userGameEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v39, v40);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v39, v40);
  this->fields.equipIdList = equipIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)equipIdList, v43, v44);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v45, v46);
  this->fields._IsTempGrandServant_k__BackingField = isTempGrandServant;
  this->fields._IsForceNotGrand_k__BackingField = isForceNotGrand;
  this->fields.isFriendShipEquipSkillChange = isChangeFriendShipSkill;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v50 = *(_QWORD *)&v47[5].fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v172.fields.currentCryptoKey = v50;
  *(_QWORD *)&v172.fields.fakeValue = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v172, 0);
  if ( !v48 )
    goto LABEL_124;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v48,
             Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v53, v54);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v55 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v56 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[6], 0);
  if ( !v55 )
    goto LABEL_124;
  v57 = ServantLimitMaster__GetEntity(v55, v56, Instance, 0);
  this->fields.svtLimitEntity = v57;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v57, v58, v59);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_124;
  v60 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_svtEntity)[1], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v61 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[7], 0);
  if ( !v60 )
    goto LABEL_124;
  EntityList = ServantCommentMaster__GetEntityList(v60, v61, Instance, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v63, v64);
  if ( !questRestrictionInfo )
    goto LABEL_37;
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v67 = *(_QWORD *)&v65[5].fields.currentCryptoKey;
  v66 = *(_QWORD *)&v65[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v173.fields.currentCryptoKey = v67;
  *(_QWORD *)&v173.fields.fakeValue = v66;
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v173, 0);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v68, 0);
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( IsConvertOverwriteImage )
  {
    v71 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
    v70 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v174.fields.currentCryptoKey = v71;
    *(_QWORD *)&v174.fields.fakeValue = v70;
    v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v174, 0);
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(questRestrictionInfo, v72, 0, 0) )
LABEL_37:
      this->fields.isConvertOverwriteImage = 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v73 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_124:
    sub_1C32E7C(Instance);
  v74 = v73[4];
  v75 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v171.fields.currentCryptoKey = v73[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v171.fields.fakeValue = v74;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v169 = v171;
  if ( v75 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v169, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v78 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v79 = v78[4];
    v80 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v171.fields.currentCryptoKey = v78[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v171.fields.fakeValue = v79;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v168 = v171;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v168, 0);
    v81 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v82 = Instance;
    v84 = *(_QWORD *)&v81[5].fields.currentCryptoKey;
    v83 = *(_QWORD *)&v81[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v175.fields.currentCryptoKey = v84;
    *(_QWORD *)&v175.fields.fakeValue = v83;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v175, 0);
    if ( !v80 )
      goto LABEL_124;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v80, v82, Instance, 0);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v86, v87);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_124;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v89, v90);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_124;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.limitCount, 0);
    if ( !userSvtCollectionEntity )
      goto LABEL_124;
    CostumeList_43038236 = UserServantCollectionEntity__getCostumeList_43038236(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0);
    this->fields.costumeIds = CostumeList_43038236;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_43038236, v95, v96);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v97);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v76, v77);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_124;
    v98 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = v98;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v98, v99, v100);
    this->fields.costumeIds = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v101, v102);
    this->fields.costumeAndOtherIds = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeAndOtherIds, 0, v103, v104);
  }
  v105 = this->fields.userSvtCollectionEntity;
  if ( !v105 )
    goto LABEL_124;
  svtCommonFlag = v105->fields.svtCommonFlag;
  v107 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v107 )
    goto LABEL_124;
  v109 = *(_QWORD *)&v107->fields.battleVoice.fields.currentCryptoKey;
  v108 = *(_QWORD *)&v107->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v176.fields.currentCryptoKey = v109;
  *(_QWORD *)&v176.fields.fakeValue = v108;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v176, 0);
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  this->fields.servantLeaderInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v110, v111);
  this->fields.equipTargetInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v112, v113);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_124;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v114 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v114 )
    goto LABEL_124;
  Instance = UserServantEntity__IsChoice(v114, 0);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_124;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v118 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v119 = v118[2];
    v120 = (UserDeckMaster_o *)Instance;
    p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v171.fields.currentCryptoKey = v118[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v171.fields.fakeValue = v119;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v167 = v171;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v167, 0);
    if ( !v120 )
      goto LABEL_124;
    IsServantEquip = UserDeckMaster__IsEquip(v120, Instance, 0);
    v122 = IsServantEquip;
  }
  else
  {
    p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
    v122 = 0;
  }
  v123 = this->fields.equipIdList;
  this->fields.isUse = v122;
  if ( v123 )
  {
    if ( !LODWORD(v123->max_length) )
      sub_1C32E84(IsServantEquip);
    v124 = v123->m_Items[0];
  }
  else
  {
    v124 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v124, v117);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_124;
  size = equipGrandServantEntityList->fields._size;
  v128 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v128;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  v129 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_124;
  v130 = v129->fields._size;
  v131 = v129->fields._version + 1;
  v129->fields._size = 0;
  v129->fields._version = v131;
  if ( v130 >= 1 )
    System_Array__Clear((System_Array_o *)v129->fields._items, 0, v130, 0);
  v132 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_124;
  v133 = v132->fields._size;
  v134 = v132->fields._version + 1;
  v132->fields._size = 0;
  v132->fields._version = v134;
  if ( v133 >= 1 )
    System_Array__Clear((System_Array_o *)v132->fields._items, 0, v133, 0);
  v135 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_124;
  v136 = v135->fields._size;
  v137 = v135->fields._version + 1;
  v135->fields._size = 0;
  v135->fields._version = v137;
  if ( v136 >= 1 )
    System_Array__Clear((System_Array_o *)v135->fields._items, 0, v136, 0);
  v138 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_124;
  v139 = v138->fields._version + 1;
  v138->fields._size = 0;
  v138->fields._version = v139;
  ServantStatusListViewItem__SetEquipTargetIds(this, v125);
  v140 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v140 != 0 && enableTdSpeed;
  if ( !Instance )
    goto LABEL_124;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
      goto LABEL_99;
    }
    goto LABEL_124;
  }
  IsNameTrue = 0;
LABEL_99:
  v144 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v144 != 0;
  if ( v144 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v144, 0);
    v144 = (UserServantEntity_o *)*p_userSvtEntity;
    v146 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v146 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v146;
  if ( !v144 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_107;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v144, 0);
  v148 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v148 )
  {
LABEL_107:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_108;
  }
  v149 = BasicHelper__DecryptValue_44040448(v148->fields.limitCountSupport, 0);
  v150 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v149;
  if ( v150 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v150, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_108:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v141,
    v142);
  v153 = this->fields.userSvtEntity;
  if ( v153 )
  {
    v154 = UserServantEntity__OwnRandomSettingSelectedButton(v153, 0);
    v155 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v154;
    if ( v155 )
    {
      v156 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v155, 0);
      v157 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_114;
    }
    v157 = 0;
  }
  else
  {
    v157 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v156 = 3;
LABEL_114:
  this->fields.supportRandomSettingButtonIndex = v156;
  ServantStatusListViewItem__SetLimitCountInfo(this, v157, v152);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
  }
  v160 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v160 = RandomLimitCountManager_TypeInfo;
  }
  if ( v160->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v159);
  ServantStatusListViewItem__ModifyInfo(this, v158);
}


void ServantStatusListViewItem___ctor_35359652(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        bool isSkillChange,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_long__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int64_t Instance; // x0
  __int128 v28; // q1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v32; // q0
  bool v33; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x22
  __int64 v41; // x23
  __int64 v42; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  ServantLimitMaster_o *v47; // x23
  int32_t v48; // w24
  struct ServantLimitEntity_o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  ServantCommentMaster_o *v52; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // q0
  __int64 v58; // x20
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v61; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // q0
  UserServantCollectionMaster_o *v63; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  int64_t v65; // x24
  __int64 v66; // x25
  __int64 v67; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_43038236; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x1
  struct System_Int32_array *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct UserServantCollectionEntity_o *v88; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v90; // x8
  __int64 v91; // x23
  __int64 v92; // x24
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  UserServantEntity_o *v97; // x8
  const MethodInfo *v98; // x2
  struct UserServantCollectionEntity_o *v99; // x8
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v103; // x8
  int32_t v104; // w0
  UserServantEntity_o *v105; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v107; // x2
  UserServantEntity_o *v108; // x0
  int32_t v109; // w0
  UserServantEntity_o *v110; // x8
  int32_t v111; // w0
  UserServantEntity_o *v112; // x1
  const MethodInfo *v113; // x1
  const MethodInfo *v114; // x2
  RandomLimitCountManager_c *v115; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  v7 = isSkillChange;
  if ( (byte_4C33E2E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E2E = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v20, v21, v22);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v25, v26);
  this->fields.isEnableServantQuest = 0;
  this->fields.isFriendShipEquipSkillChange = v7;
  if ( !userServant )
    goto LABEL_77;
  v28 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v120.fields.fakeValue = v28;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v119 = v120;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v119, 0);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_77;
  if ( Instance == userGameEntity->fields.userId )
  {
    v32 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
    v33 = 1;
    *(_OWORD *)&this->fields.favoriteUserSvtId = v32;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1;
    this->fields.pushUserSvtId = -1;
    this->fields.userGameEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v29, v30);
    v33 = 0;
  }
  this->fields._IsMyEquip_k__BackingField = v33;
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v29, v30);
  this->fields.equipIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v35, v36);
  this->fields.questRestrictionInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v37, v38);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v39 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v42 = *(_QWORD *)&v39[5].fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v121.fields.currentCryptoKey = v42;
  *(_QWORD *)&v121.fields.fakeValue = v41;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v121, 0);
  if ( !v40 )
    goto LABEL_77;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v40,
             Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v45, v46);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v47 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v48 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userSvtEntity)[6], 0);
  if ( !v47 )
    goto LABEL_77;
  v49 = ServantLimitMaster__GetEntity(v47, v48, Instance, 0);
  this->fields.svtLimitEntity = v49;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v49, v50, v51);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_77;
  v52 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_svtEntity)[1], 0);
  if ( !v52 )
    goto LABEL_77;
  EntityList = ServantCommentMaster__GetEntityList(v52, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v54, v55);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v56 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v57 = v56[4];
  v58 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v120.fields.currentCryptoKey = v56[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v120.fields.fakeValue = v57;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v118 = v120;
  if ( v58 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v118, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v61 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v62 = v61[4];
    v63 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v120.fields.currentCryptoKey = v61[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v120.fields.fakeValue = v62;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v117 = v120;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v117, 0);
    v64 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v65 = Instance;
    v67 = *(_QWORD *)&v64[5].fields.currentCryptoKey;
    v66 = *(_QWORD *)&v64[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v122.fields.currentCryptoKey = v67;
    *(_QWORD *)&v122.fields.fakeValue = v66;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v122, 0);
    if ( !v63 )
      goto LABEL_77;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v63, v65, Instance, 0);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v69, v70);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v72, v73);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_77;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.limitCount, 0);
    if ( !userSvtCollectionEntity )
      goto LABEL_77;
    CostumeList_43038236 = UserServantCollectionEntity__getCostumeList_43038236(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0);
    this->fields.costumeIds = CostumeList_43038236;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_43038236, v78, v79);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v80);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v59, v60);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    v81 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = v81;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v81, v82, v83);
    this->fields.costumeIds = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v84, v85);
    this->fields.costumeAndOtherIds = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeAndOtherIds, 0, v86, v87);
  }
  v88 = this->fields.userSvtCollectionEntity;
  if ( !v88 )
    goto LABEL_77;
  svtCommonFlag = v88->fields.svtCommonFlag;
  v90 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v90 )
    goto LABEL_77;
  v92 = *(_QWORD *)&v90->fields.battleVoice.fields.currentCryptoKey;
  v91 = *(_QWORD *)&v90->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v123.fields.currentCryptoKey = v92;
  *(_QWORD *)&v123.fields.fakeValue = v91;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v123, 0);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v93, v94);
  this->fields.equipTargetInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v95, v96);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_77;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v97 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v97 )
    goto LABEL_77;
  this->fields.isChoice = UserServantEntity__IsChoice(v97, 0);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v98);
  v99 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v99 != 0;
  if ( !Instance )
    goto LABEL_77;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
      goto LABEL_57;
    }
LABEL_77:
    sub_1C32E7C(Instance);
  }
  IsNameTrue = 0;
LABEL_57:
  v103 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v103 )
  {
    v104 = BasicHelper__DecryptValue_44040448(v103->fields.limitCountSupport, 0);
    v105 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v104;
    if ( v105 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v105, this->fields.costumeIds, 0);
    else
      RandomLimitCountList = 0;
  }
  else
  {
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v100,
    v101);
  v108 = this->fields.userSvtEntity;
  if ( v108 )
  {
    v109 = UserServantEntity__OwnRandomSettingSelectedButton(v108, 0);
    v110 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v109;
    if ( v110 )
    {
      v111 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v110, 0);
      v112 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_68;
    }
    v112 = 0;
  }
  else
  {
    v112 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v111 = 3;
LABEL_68:
  this->fields.supportRandomSettingButtonIndex = v111;
  ServantStatusListViewItem__SetLimitCountInfo(this, v112, v107);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
  }
  v115 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v115 = RandomLimitCountManager_TypeInfo;
  }
  if ( v115->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v114);
  ServantStatusListViewItem__ModifyInfo(this, v113);
}


void ServantStatusListViewItem___ctor_35361908(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_long__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  DataManager_o *Instance; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct UserServantCollectionEntity_o *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x22
  __int64 v43; // x23
  __int64 v44; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  ServantLimitMaster_o *v49; // x23
  struct ServantLimitEntity_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  ServantCommentMaster_o *v53; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Int32_array *CostumeList; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x1
  BalanceConfig_c *v64; // x0
  struct UserServantCollectionEntity_o *v65; // x8
  ServantEntity_o *v66; // x22
  __int64 v67; // x23
  __int64 v68; // x24
  int32_t v69; // w23
  int32_t maxLimitCount; // w24
  struct UserServantCollectionEntity_o *v71; // x8
  ServantEntity_o *svtEntity; // x22
  __int64 v73; // x23
  __int64 v74; // x24
  int32_t v75; // w23
  int32_t v76; // w24
  struct UserServantCollectionEntity_o *v77; // x8
  struct System_Int32_array *CardSelectList; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct UserServantCollectionEntity_o *v81; // x8
  ServantEntity_o *v82; // x22
  struct UserServantCollectionEntity_o *v83; // x8
  struct System_Int32_array *SelectList; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct UserServantCollectionEntity_o *v87; // x8
  ServantEntity_o *v88; // x22
  struct UserServantCollectionEntity_o *v89; // x8
  struct System_Int32_array *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v97; // x8
  struct System_Int32_array *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v102; // x8
  struct System_Int32_array *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  const MethodInfo *v106; // x2
  struct UserServantCollectionEntity_o *v107; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v109; // x8
  const MethodInfo *v110; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  v7 = isEnableServantQuest;
  if ( (byte_4C33E2F & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E2F = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v20, v21, v22);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v25, v26);
  this->fields.isEnableServantQuest = v7;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_60;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v28, v29);
  }
  this->fields.userSvtEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v28, v29);
  this->fields.equipIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v30, v31);
  this->fields.questRestrictionInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v32, v33);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v35,
    v36);
  this->fields.servantLeaderInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v37, v38);
  this->fields.equipTargetInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v39, v40);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v44;
  *(_QWORD *)&v112.fields.fakeValue = v43;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v112, 0);
  if ( !v42 )
    goto LABEL_60;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v42,
             (int32_t)Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v47, v48);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v49 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  if ( !v49 )
    goto LABEL_60;
  v50 = ServantLimitMaster__GetEntity(v49, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0);
  this->fields.svtLimitEntity = v50;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v50, v51, v52);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_60;
  v53 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_svtEntity)[1], 0);
  if ( !v53 )
    goto LABEL_60;
  EntityList = ServantCommentMaster__GetEntityList(v53, (int32_t)Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v55, v56);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v58, v59);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.costumeIds = CostumeList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v61, v62);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v63);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v65 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v66 = (ServantEntity_o *)*p_svtEntity;
      v68 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v113.fields.currentCryptoKey = v68;
      *(_QWORD *)&v113.fields.fakeValue = v67;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v113, 0);
      if ( *p_userSvtCollectionEntity )
      {
        v69 = (int)Instance;
        maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v69, maxLimitCount, 1, 0, 0);
        if ( v66 )
        {
          Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                        v66,
                                        (int32_t)Instance,
                                        0);
          goto LABEL_33;
        }
      }
    }
LABEL_60:
    sub_1C32E7C(Instance);
  }
  v64 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v64 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)(unsigned int)v64->static_fields->OtherImageLimitCount;
LABEL_33:
  v71 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v71 )
    goto LABEL_60;
  svtEntity = this->fields.svtEntity;
  v74 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
  v73 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v74;
  *(_QWORD *)&v114.fields.fakeValue = v73;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v114, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v75 = (int)Instance;
  v76 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v75, v76, 1, 0, 0);
  if ( !svtEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(svtEntity, (int32_t)Instance, 0);
  v77 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v77 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v77->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0);
  this->fields.cardSelectList = CardSelectList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v79, v80);
  v81 = this->fields.userSvtCollectionEntity;
  if ( !v81 )
    goto LABEL_60;
  v82 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v81->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0);
  if ( !v82 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v82, (int32_t)Instance, 0);
  v83 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v83 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v83->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0);
  this->fields.dispSelectList = SelectList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v85, v86);
  v87 = this->fields.userSvtCollectionEntity;
  if ( !v87 )
    goto LABEL_60;
  v88 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v87->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0);
  if ( !v88 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v88, (int32_t)Instance, 0);
  v89 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v89 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v89->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v90 = ImageLimitCount__GetSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0);
  this->fields.commandCardSelectList = v90;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v90, v91, v92);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v94, v95);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v97 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v97 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v97->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v98 = ImageLimitCount__GetCardSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0);
  this->fields.iconSelectList = v98;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v98, v99, v100);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v102 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v102 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v102->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v103 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0);
  this->fields.portraitSelectList = v103;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v103, v104, v105);
  v107 = this->fields.userSvtCollectionEntity;
  if ( !v107 )
    goto LABEL_60;
  svtCommonFlag = v107->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v106);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
    goto LABEL_60;
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0);
  v109 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v109 != 0 && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v110);
}


void ServantStatusListViewItem___ctor_35364044(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v9; // w24
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_long__o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  DataManager_o *Instance; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UserServantCollectionEntity_o *v43; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x22
  __int64 v45; // x24
  __int64 v46; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct UserServantCollectionEntity_o *v51; // x8
  ServantLimitMaster_o *v52; // x23
  struct ServantLimitEntity_o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  ServantCommentMaster_o *v57; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct System_Int32_array *CostumeList; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x1
  struct UserServantCollectionEntity_o *v68; // x8
  int32_t v69; // w22
  struct UserServantCollectionEntity_o *v70; // x8
  int32_t v71; // w0
  struct UserServantCollectionEntity_o *v72; // x8
  int32_t v73; // w0
  struct System_Int32_array *CardSelectList; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct UserServantCollectionEntity_o *v77; // x8
  int32_t v78; // w0
  struct UserServantCollectionEntity_o *v79; // x8
  int32_t v80; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct UserServantCollectionEntity_o *v84; // x8
  int32_t v85; // w0
  struct UserServantCollectionEntity_o *v86; // x8
  int32_t v87; // w0
  struct System_Int32_array *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v95; // x8
  int32_t v96; // w0
  struct System_Int32_array *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v101; // x8
  int32_t v102; // w0
  struct System_Int32_array *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  const MethodInfo *v106; // x2
  struct UserServantCollectionEntity_o *v107; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v109; // x8
  const MethodInfo *v110; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  v9 = isEnableServantQuest;
  if ( (byte_4C33E30 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E30 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v22, v23, v24);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v27, v28);
  this->fields.isEnableServantQuest = v9;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v30, v31);
  }
  this->fields.userSvtEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v30, v31);
  this->fields.equipIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v32, v33);
  this->fields.questRestrictionInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v34, v35);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v37,
    v38);
  this->fields.servantLeaderInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v39, v40);
  this->fields.equipTargetInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v41, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v43 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v46 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v46;
  *(_QWORD *)&v112.fields.fakeValue = v45;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v112, 0);
  if ( !v44 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v44,
             (int32_t)Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v49, v50);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v51 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v52 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v51->fields.svtId, 0);
  if ( !v52 )
    goto LABEL_35;
  v53 = ServantLimitMaster__GetEntity(v52, (int32_t)Instance, limitCount, 0);
  this->fields.svtLimitEntity = v53;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v53, v54, v55);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v56 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v57 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v56[1], 0);
  if ( !v57 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v57, (int32_t)Instance, limitCount, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v59, v60);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v62, v63);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.costumeIds = CostumeList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v65, v66);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v67);
  v68 = this->fields.userSvtCollectionEntity;
  if ( !v68 )
    goto LABEL_35;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v68->fields.svtId, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v69, limitCount, 1, 0, 0);
  v70 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v70 )
    goto LABEL_35;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v70->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v71, limitCount, 1, 0, 0);
  v72 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v72 )
    goto LABEL_35;
  v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v72->fields.svtId, 0);
  CardSelectList = ImageLimitCount__GetCardSelectList(v73, limitCount, this->fields.costumeAndOtherIds, 0);
  this->fields.cardSelectList = CardSelectList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v75, v76);
  v77 = this->fields.userSvtCollectionEntity;
  if ( !v77 )
    goto LABEL_35;
  v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v77->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v78, limitCount, 0);
  v79 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v79 )
    goto LABEL_35;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v79->fields.svtId, 0);
  SelectList = ImageLimitCount__GetSelectList(v80, limitCount, this->fields.costumeIds, 0);
  this->fields.dispSelectList = SelectList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v82, v83);
  v84 = this->fields.userSvtCollectionEntity;
  if ( !v84 )
    goto LABEL_35;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v84->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v85, limitCount, 0);
  v86 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v86 )
    goto LABEL_35;
  v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v86->fields.svtId, 0);
  v88 = ImageLimitCount__GetSelectList(v87, limitCount, this->fields.costumeIds, 0);
  this->fields.commandCardSelectList = v88;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v88, v89, v90);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v92, v93);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v95 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v95 )
    goto LABEL_35;
  v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v95->fields.svtId, 0);
  v97 = ImageLimitCount__GetCardSelectList(v96, limitCount, this->fields.costumeIds, 0);
  this->fields.iconSelectList = v97;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v97, v98, v99);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v101 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v101 )
    goto LABEL_35;
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v101->fields.svtId, 0);
  v103 = ImageLimitCount__GetSelectList(v102, limitCount, this->fields.costumeIds, 0);
  this->fields.portraitSelectList = v103;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v103, v104, v105);
  v107 = this->fields.userSvtCollectionEntity;
  if ( !v107 )
    goto LABEL_35;
  svtCommonFlag = v107->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v106);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_35:
    sub_1C32E7C(Instance);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0);
  v109 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v109 != 0 && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v110);
}


void ServantStatusListViewItem___ctor_35365868(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  bool v6; // w23
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_long__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  DataManager_o *SelfUserGame; // x0
  bool v38; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x21
  __int64 v41; // x22
  __int64 v42; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  ServantLimitMaster_o *v47; // x22
  struct ServantLimitEntity_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v51; // x8
  ServantCommentMaster_o *v52; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  ServantLeaderInfo_o *v61; // x8
  struct ServantLeaderInfo_o *v62; // x8
  int32_t v63; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_40335008; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  ServantLeaderInfo_o *v69; // x8
  struct ServantLeaderInfo_o *v70; // x8
  struct System_Int32_array *SelectList_40334192; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  ServantLeaderInfo_o *v74; // x8
  struct ServantLeaderInfo_o *v75; // x8
  struct System_Int32_array *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct ServantLeaderInfo_o *v81; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v83; // x8
  struct ServantLeaderInfo_o *v84; // x8
  struct System_Int32_array *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  ServantLeaderInfo_o *v88; // x8
  struct ServantLeaderInfo_o *v89; // x8
  struct System_Int32_array *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x1
  struct ServantLeaderInfo_o *v95; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v97; // x21
  __int64 v98; // x22
  __int64 v99; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v100; // x21
  __int64 v101; // x22
  __int64 v102; // x23
  Il2CppObject *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  __int64 v106; // x8
  ServantLimitMaster_o *v107; // x21
  __int64 v108; // x8
  struct ServantLimitEntity_o *v109; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  const MethodInfo *v112; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4C33E31 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E31 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v19, v20, v21);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v22, v23);
  this->fields.userSvtEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v24, v25);
  this->fields.equipIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v26, v27);
  this->fields.questRestrictionInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v28, v29);
  this->fields.userSvtCollectionEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v30, v31);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, (int32_t)servantLeaderInfo, v33, v34);
  this->fields.equipTargetInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v35, v36);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_7;
  if ( !servantLeaderInfo )
    goto LABEL_64;
  if ( servantLeaderInfo->fields.userId == SelfUserGame->fields.m_CachedPtr )
    v38 = 1;
  else
LABEL_7:
    v38 = 0;
  this->fields._IsMyEquip_k__BackingField = v38;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v39 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  v42 = *(_QWORD *)&v39[3].fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39[3].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v42;
  *(_QWORD *)&v113.fields.fakeValue = v41;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v113, 0);
  if ( !v40 )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v40,
             (int32_t)SelfUserGame,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v45, v46);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v47 = (ServantLimitMaster_o *)SelfUserGame;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                    (*p_servantLeaderInfo)[3],
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  if ( !v47 )
    goto LABEL_64;
  v48 = ServantLimitMaster__GetEntity(v47, (int32_t)SelfUserGame, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0);
  this->fields.svtLimitEntity = v48;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v48, v49, v50);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v51 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_64;
  v52 = (ServantCommentMaster_o *)SelfUserGame;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v51[1], 0);
  if ( !v52 )
    goto LABEL_64;
  EntityList = ServantCommentMaster__GetEntityList(v52, (int32_t)SelfUserGame, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v54, v55);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)SelfUserGame, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v57, v58);
  this->fields.costumeIds = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v59, v60);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v61 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)SelfUserGame;
  if ( !v61 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v61, 0, 0);
  v62 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)SelfUserGame;
  if ( !v62 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                    v62->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v63 = (int)SelfUserGame;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList_40335008 = ImageLimitCount__GetCardSelectList_40335008(v63, currentCryptoKey, cardLimitCount, 0);
  this->fields.cardSelectList = CardSelectList_40335008;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList_40335008, v67, v68);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v69 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)SelfUserGame;
  if ( !v69 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v69, 0);
  v70 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)SelfUserGame;
  if ( !v70 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                    v70->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  SelectList_40334192 = ImageLimitCount__GetSelectList_40334192(
                          (int32_t)SelfUserGame,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0);
  this->fields.dispSelectList = SelectList_40334192;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList_40334192, v72, v73);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v74 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)SelfUserGame;
  if ( !v74 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v74, 0);
  v75 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)SelfUserGame;
  if ( !v75 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                    v75->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v76 = ImageLimitCount__GetSelectList_40334192(
          (int32_t)SelfUserGame,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.commandCardLimitCount,
          0,
          0);
  this->fields.commandCardSelectList = v76;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v76, v77, v78);
  v81 = this->fields.servantLeaderInfo;
  if ( !v81 )
    goto LABEL_64;
  commandCardParam = v81->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)commandCardParam, v79, v80);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v83 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)SelfUserGame;
  if ( !v83 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v83, 0, 0);
  v84 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)SelfUserGame;
  if ( !v84 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                    v84->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v85 = ImageLimitCount__GetCardSelectList_40335008(
          (int32_t)SelfUserGame,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.iconLimitCount,
          0);
  this->fields.iconSelectList = v85;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v85, v86, v87);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v88 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)SelfUserGame;
  if ( !v88 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v88, 0);
  v89 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)SelfUserGame;
  if ( !v89 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                    v89->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v90 = ImageLimitCount__GetSelectList_40334192(
          (int32_t)SelfUserGame,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.portraitLimitCount,
          0,
          0);
  this->fields.portraitSelectList = v90;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v90, v91, v92);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v93);
  ServantStatusListViewItem__SetEquipTargetIds(this, v94);
  v95 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v95 )
    goto LABEL_64;
  equipTarget1 = v95->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v98 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v97 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v114.fields.currentCryptoKey = v98;
    *(_QWORD *)&v114.fields.fakeValue = v97;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v114, 0) >= 1 )
    {
      SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                          SelfUserGame,
                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v99 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v99 )
          {
            v100 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
            v102 = *(_QWORD *)(v99 + 56);
            v101 = *(_QWORD *)(v99 + 64);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v115.fields.currentCryptoKey = v102;
            *(_QWORD *)&v115.fields.fakeValue = v101;
            SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v115, 0);
            if ( v100 )
            {
              v103 = DataMasterBase_object__object__int___GetEntity(
                       v100,
                       (int32_t)SelfUserGame,
                       (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v103;
              sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipServantEntity, (int32_t)v103, v104, v105);
              SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( SelfUserGame )
              {
                SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                                  SelfUserGame,
                                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v106 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v106 )
                  {
                    v107 = (ServantLimitMaster_o *)SelfUserGame;
                    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v106 + 56),
                                                      0);
                    if ( *p_servantLeaderInfo )
                    {
                      v108 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v108 )
                      {
                        if ( v107 )
                        {
                          v109 = ServantLimitMaster__GetEntity(v107, (int32_t)SelfUserGame, *(_DWORD *)(v108 + 72), 0);
                          this->fields.equipSvtLimitEntity = v109;
                          sub_1C32BC4(
                            (CGThumbnailListItem_o *)&this->fields.equipSvtLimitEntity,
                            (int32_t)v109,
                            v110,
                            v111);
                          goto LABEL_62;
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
LABEL_64:
      sub_1C32E7C(SelfUserGame);
    }
  }
LABEL_62:
  SelfUserGame = (DataManager_o *)*p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  ServantLeaderInfo__getEquipSkillInfo((ServantLeaderInfo_o *)SelfUserGame, &this->fields.equipSkillInfoList, 0);
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v112);
}


void ServantStatusListViewItem___ctor_35367992(
        ServantStatusListViewItem_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        bool isMyEquip,
        const MethodInfo *method)
{
  bool v9; // w26
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_long__o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct EquipTargetInfo_o **p_equipTargetInfo; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *Instance; // x0
  struct EquipTargetInfo_o *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x20
  __int64 v43; // x21
  __int64 v44; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  ServantLimitMaster_o *v49; // x21
  struct ServantLimitEntity_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  ServantCommentMaster_o *v54; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4C33E32 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E32 = 1;
  }
  v9 = isNpcFollowerServantEquip;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v22, v23, v24);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v25, v26);
  this->fields.userSvtEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v27, v28);
  this->fields.equipIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v29, v30);
  this->fields.questRestrictionInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v31, v32);
  this->fields.userSvtCollectionEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v33, v34);
  this->fields.servantLeaderInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v35, v36);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, (int32_t)equipTargetInfo, v38, v39);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v9;
  this->fields._IsMyEquip_k__BackingField = isMyEquip;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v44;
  *(_QWORD *)&v76.fields.fakeValue = v43;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v76, 0);
  if ( !v42 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v42,
             (int32_t)Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v47, v48);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v49 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                               (*p_equipTargetInfo)->fields.svtId,
                               0);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  if ( !v49 )
    goto LABEL_16;
  v50 = ServantLimitMaster__GetEntity(v49, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0);
  this->fields.svtLimitEntity = v50;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v50, v51, v52);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (v53 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity) == 0)
    || (v54 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v53[1], 0),
        !v54) )
  {
LABEL_16:
    sub_1C32E7C(Instance);
  }
  EntityList = ServantCommentMaster__GetEntityList(v54, (int32_t)Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v56, v57);
  this->fields.commandCodeIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v58, v59);
  this->fields.costumeIds = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v60, v61);
  this->fields.cardSelectList = 0;
  *(_QWORD *)&this->fields.cardLimitCount = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cardSelectList, 0, v62, v63);
  this->fields.dispSelectList = 0;
  *(_QWORD *)&this->fields.dispLimitCount = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dispSelectList, 0, v64, v65);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0;
  this->fields.commandCardSelectList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, 0, v66, v67);
  this->fields.commandCardParam = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardParam, 0, v68, v69);
  *(_QWORD *)&this->fields.iconLimitCount = 0;
  this->fields.iconSelectList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconSelectList, 0, v70, v71);
  *(_QWORD *)&this->fields.portraitLimitCount = 0;
  this->fields.portraitSelectList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.portraitSelectList, 0, v72, v73);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v74);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v75);
}


void ServantStatusListViewItem___ctor_35369228(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_long__o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  DataManager_o *Instance; // x0
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  __int64 v31; // x22
  __int64 v32; // x23
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C33E33 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E33 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v19, v20, v21);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v22, v23);
  this->fields.userCommandCodeEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, 0, v24, v25);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)commandCode, v26, v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v32 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v31 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v32;
  *(_QWORD *)&v35.fields.fakeValue = v31;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v35, 0);
  if ( !v30 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v30,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_3396884 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity, 0, v33, v34);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_1C32E7C(Instance);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
}


void ServantStatusListViewItem___ctor_35370008(
        ServantStatusListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_long__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int64_t Instance; // x0
  __int128 v25; // q1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v29; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  __int64 v31; // x22
  __int64 v32; // x23
  Il2CppObject *Entity; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x21
  struct UserCommandCodeEntity_o *v38; // x8
  __int128 v39; // q0
  __int64 v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UserCommandCodeEntity_o *v43; // x8
  __int128 v44; // q0
  UserCommandCodeCollectionMaster_o *v45; // x21
  struct UserCommandCodeEntity_o *v46; // x8
  int64_t v47; // x22
  __int64 v48; // x23
  __int64 v49; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x0
  int32_t v51; // w1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v53; // x8
  struct UserCommandCodeEntity_o *v54; // x8
  __int128 v55; // q0
  UserServantCommandCodeMaster_o *v56; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4C33E34 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E34 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v17, v18, v19);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v22, v23);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_46;
  v25 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v61 = v62;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v61, 0);
  if ( !p_fields->userGameEntity )
    goto LABEL_46;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v26, v27);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, (int32_t)userCommandCode, v26, v27);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v29 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v32 = *(_QWORD *)&v29->fields.commandCodeId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v32;
  *(_QWORD *)&v63.fields.fakeValue = v31;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v63, 0);
  if ( !v30 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v30,
             Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v34, v35);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_46;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
               userCommandCodeEntity->fields.commandCodeId,
               0);
  if ( !v37 )
    goto LABEL_46;
  DataMasterBase_object__object__int___TryGetEntity(
    v37,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_3396884 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v38 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v39 = *(_OWORD *)&v38->fields.userId.fields.fakeValue;
  v40 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&v38->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v60 = v62;
  if ( v40 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v60, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v43 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v44 = *(_OWORD *)&v43->fields.userId.fields.fakeValue;
        v45 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&v43->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v62.fields.fakeValue = v44;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v59 = v62;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v59, 0);
        v46 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v47 = Instance;
          v49 = *(_QWORD *)&v46->fields.commandCodeId.fields.currentCryptoKey;
          v48 = *(_QWORD *)&v46->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v64.fields.currentCryptoKey = v49;
          *(_QWORD *)&v64.fields.fakeValue = v48;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v64, 0);
          if ( v45 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v45, v47, Instance, 0);
            v51 = (int)EntityDefinitely;
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_46:
    sub_1C32E7C(Instance);
  }
  this->fields.userCommandCodeCollectionEntity = 0;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  v51 = 0;
LABEL_37:
  sub_1C32BC4((CGThumbnailListItem_o *)p_userCommandCodeCollectionEntity, v51, v41, v42);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0);
  v53 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v53 )
    goto LABEL_46;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v53, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v54 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v55 = *(_OWORD *)&v54->fields.id.fields.fakeValue;
  v56 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&v54->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v55;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v58 = v62;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v58, 0);
  if ( !v56 )
    goto LABEL_46;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v56, Instance, 0);
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
    0);
}


void ServantStatusListViewItem___ctor_35371520(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_long__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  DataManager_o *Instance; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v28; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x20
  __int64 v30; // x21
  __int64 v31; // x22
  Il2CppObject *Entity; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4C33E35 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E35 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v17, v18, v19);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v22, v23);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, 0, v25, v26);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v25,
    v26);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v28 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v31 = *(_QWORD *)&v28->fields.commandCodeId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&v28->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v31;
  *(_QWORD *)&v37.fields.fakeValue = v30;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v37, 0);
  if ( !v29 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v29,
             (int32_t)Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v33, v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0),
        !v36)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v36,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_3396884 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1C32E7C(Instance);
  }
  UserCommandCodeCollectionEntity__GetSkillInfo(
    (UserCommandCodeCollectionEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
}


void ServantStatusListViewItem__AddDuplicationInfo(
        ServantStatusListViewItem_o *this,
        bool isTransformed,
        const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  const MethodInfo *v6; // x1
  ServantStatusListViewItem_o *SvtId; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x22
  System_Collections_Generic_List_int__o *v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x8
  System_Collections_Generic_IEnumerable_T__o *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x23
  unsigned __int64 v17; // x24
  __int64 v18; // x26
  int32_t Item; // w0
  struct System_String_array *transformedPassiveSkillExplanationMessageList; // x8
  CGThumbnailListItem_o *v21; // x25
  System_String_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C33E66 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_10099/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_4C33E66 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( this->fields.userSvtEntity || this->fields.userSvtCollectionEntity )
    {
      SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(this, v6);
      FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantStatusListViewItem__GetFriendshipUpCampaignInfo(
                                                                                                   SvtId,
                                                                                                   (int32_t)SvtId,
                                                                                                   v8);
    }
    else
    {
      FriendshipUpCampaignInfo = 0;
    }
    v10 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    v12 = 480;
    if ( isTransformed )
      v12 = 632;
    v13 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&this->klass + v12);
    if ( v13 )
    {
      if ( !v10
        || (System_Collections_Generic_List_int___AddRange(
              v10,
              v13,
              (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__),
            (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
      {
LABEL_29:
        sub_1C32E7C(Instance);
      }
      NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                         (PartyOrganizationUtility_o *)Instance,
                                                                                         (System_Collections_Generic_IEnumerable_int__o *)v10,
                                                                                         FriendshipUpCampaignInfo,
                                                                                         0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10099/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
      if ( v10->fields._size >= 1 )
      {
        v16 = v15;
        v17 = 0;
        v18 = 32;
        do
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   v10,
                   v17,
                   (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
          Instance = (Il2CppObject *)System_Linq_Enumerable__Contains_int_(
                                       NeedAddAnnotationSkillIds,
                                       Item,
                                       (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
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
            if ( v17 >= LODWORD(transformedPassiveSkillExplanationMessageList->max_length) )
              sub_1C32E84(Instance);
            v21 = (CGThumbnailListItem_o *)((char *)transformedPassiveSkillExplanationMessageList + v18);
            v22 = System_String__Concat_63518544(
                    *(System_String_o **)((char *)&transformedPassiveSkillExplanationMessageList->obj.klass + v18),
                    v16,
                    0);
            v21->klass = (CGThumbnailListItem_c *)v22;
            sub_1C32BC4(v21, (int32_t)v22, v23, v24);
          }
          ++v17;
          v18 += 8;
        }
        while ( (__int64)v17 < v10->fields._size );
      }
    }
  }
}


bool ServantStatusListViewItem__ChangeChoice(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isChoice;
  this->fields.isChoice ^= 1u;
  return v2;
}


bool ServantStatusListViewItem__ChangeLock(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isLock;
  this->fields.isLock ^= 1u;
  return v2;
}


void ServantStatusListViewItem__CreateCurrentLimitCountCache(
        ServantStatusListViewItem_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountCache_o *v5; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UserServantEntity_o *userSvtEntity; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v10; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *v11; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v12; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v13; // x21

  if ( (byte_4C33E38 & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusListViewItem_LimitCountCache_TypeInfo);
    byte_4C33E38 = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1C32E6C(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0);
  this->fields.currentLimitCountCache = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentLimitCountCache, (int32_t)v5, v6, v7);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
    v10 = 0;
  else
    v10 = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
  {
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getCardImageLimitCount(userSvtEntity, 1, 0);
    if ( !currentLimitCountCache )
      goto LABEL_22;
    currentLimitCountCache->fields.cardLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v11 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 1, 0);
    if ( !v11 )
      goto LABEL_22;
    v11->fields.iconLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v12 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getCommandCardLimitCount(userSvtEntity, 1, 0);
    if ( !v12 )
      goto LABEL_22;
    v12->fields.commandCardLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v13 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(userSvtEntity, 1, 0);
    if ( !v13 )
      goto LABEL_22;
    v13->fields.dispLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    currentLimitCountCache = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getPortraitLimitCount(userSvtEntity, 1, 0);
    if ( !currentLimitCountCache )
      goto LABEL_22;
  }
  else
  {
    if ( !v10 || (v10->fields.cardLimitCount = this->fields.cardLimitCount, !currentLimitCountCache) )
LABEL_22:
      sub_1C32E7C(userSvtEntity);
    currentLimitCountCache->fields.iconLimitCount = this->fields.iconLimitCount;
    currentLimitCountCache->fields.commandCardLimitCount = this->fields.commandCardLimitCount;
    currentLimitCountCache->fields.dispLimitCount = this->fields.dispLimitCount;
    LODWORD(userSvtEntity) = this->fields.portraitLimitCount;
  }
  currentLimitCountCache->fields.portraitLimitCount = (int)userSvtEntity;
}


void ServantStatusListViewItem__Finalize(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


bool ServantStatusListViewItem__GetAdjustMax(
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
                                  0);
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
                                    0);
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


void ServantStatusListViewItem__GetAppendPassiveSkillInfo(
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
  sub_1C32BC4(
    (CGThumbnailListItem_o *)idList,
    (int32_t)appendPassiveSkillIdList,
    (int32_t)titleList,
    (const MethodInfo *)explanationList);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_1C32BC4((CGThumbnailListItem_o *)titleList, (int32_t)appendPassiveSkillTitleMessageList, v14, v15);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_1C32BC4((CGThumbnailListItem_o *)explanationList, (int32_t)appendPassiveSkillExplanationMessageList, v17, v18);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_1C32BC4((CGThumbnailListItem_o *)releaseStateList, (int32_t)appendPassiveSkillReleaseStateList, v20, v21);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_1C32BC4((CGThumbnailListItem_o *)lvList, (int32_t)appendPassiveSkillLvList, v23, v24);
}


System_Int32_array *ServantStatusListViewItem__GetClassSkill(
        ServantStatusListViewItem_o *this,
        int32_t targetDispLimitCount,
        const MethodInfo *method)
{
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x20
  System_String_array *v8; // [xsp+0h] [xbp-40h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C33E65 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33E65 = 1;
  }
  v8 = 0;
  titleList = 0;
  idList = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  if ( !this->fields.userSvtEntity )
  {
    if ( !this->fields.userSvtCollectionEntity )
      return idList;
    svtEntity = this->fields.svtEntity;
    if ( svtEntity )
    {
      if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
        return idList;
      svtEntity = this->fields.userSvtCollectionEntity;
      if ( svtEntity )
      {
        UserServantCollectionEntity__getPassiveSkillInfo(
          (UserServantCollectionEntity_o *)svtEntity,
          &idList,
          &v8,
          &titleList,
          targetDispLimitCount,
          1,
          0);
        return idList;
      }
    }
    goto LABEL_15;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_15;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( svtEntity && userSvtEntity )
    {
      UserServantEntity__getPassiveSkillInfo(
        userSvtEntity,
        &idList,
        &titleList,
        &v8,
        targetDispLimitCount,
        *((_QWORD *)svtEntity + 14),
        0);
      return idList;
    }
LABEL_15:
    sub_1C32E7C(svtEntity);
  }
  return idList;
}


System_Int32_array *ServantStatusListViewItem__GetCommandCardIds(
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
      sub_1C32E7C(this);
  }
  return TransformedServant_k__BackingField->fields.cardIds;
}


int32_t ServantStatusListViewItem__GetEquipAtkByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4C33E52 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C33E52 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._size;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C32E7C(equipUserGrandServantEntityList);
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.servantLeaderInfo;
  if ( equipUserGrandServantEntityList )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                                                     (ServantLeaderInfo_o *)equipUserGrandServantEntityList,
                                                                                     index,
                                                                                     0);
    if ( equipUserGrandServantEntityList )
      LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[2].monitor;
  }
  return (int)equipUserGrandServantEntityList;
}


int32_t ServantStatusListViewItem__GetEquipCostByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x0

  if ( (byte_4C33E54 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C33E54 = 1;
  }
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_9;
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               equipGrandServantEntityList,
                                                                               index,
                                                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
  if ( equipGrandServantEntityList )
  {
    equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
    if ( equipGrandServantEntityList )
    {
      equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   equipGrandServantEntityList,
                                                                                   index,
                                                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
      if ( equipGrandServantEntityList )
      {
        LODWORD(equipGrandServantEntityList) = equipGrandServantEntityList[3].fields._syncRoot;
        return (int)equipGrandServantEntityList;
      }
    }
LABEL_9:
    sub_1C32E7C(equipGrandServantEntityList);
  }
  return (int)equipGrandServantEntityList;
}


int32_t ServantStatusListViewItem__GetEquipExpByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserGrandServantEntityList; // x0
  System_Collections_Generic_List_object__o *Item; // x0

  if ( (byte_4C33E57 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C33E57 = 1;
  }
  equipUserGrandServantEntityList = this->fields.equipUserGrandServantEntityList;
  if ( equipUserGrandServantEntityList
    && System_Collections_Generic_List_object___get_Item(
         (System_Collections_Generic_List_object__o *)equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( !Item
      || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                index,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0 )
    {
      sub_1C32E7C(Item);
    }
    LODWORD(Item) = HIDWORD(Item[6].fields._items);
  }
  else
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.servantLeaderInfo;
    if ( Item )
    {
      Item = (System_Collections_Generic_List_object__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                            (ServantLeaderInfo_o *)Item,
                                                            index,
                                                            0);
      if ( Item )
        LODWORD(Item) = Item[2].klass;
    }
  }
  return (int)Item;
}


bool ServantStatusListViewItem__GetEquipExpInfo(
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
    LOBYTE(servantLeaderInfo) = UserServantEntity__getExpInfo(equipUserSvtEntity, exp, lateExp, barExp, 0);
  }
  else
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      LOBYTE(servantLeaderInfo) = ServantLeaderInfo__getEquipExpInfo(servantLeaderInfo, exp, lateExp, barExp, 0);
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


bool ServantStatusListViewItem__GetEquipExpInfoByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0

  if ( (byte_4C33E58 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C33E58 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getExpInfo(
                 (UserServantEntity_o *)equipUserGrandServantEntityList,
                 exp,
                 lateExp,
                 barExp,
                 0);
    }
LABEL_12:
    sub_1C32E7C(equipUserGrandServantEntityList);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(servantLeaderInfo, index, 0);
    if ( EquipTargetInfoByEquipIdx )
      return EquipTargetInfo__getExpInfo(EquipTargetInfoByEquipIdx, exp, lateExp, barExp, 0);
  }
  *lateExp = 0;
  *exp = 0;
  *barExp = 0.0;
  return 0;
}


int32_t ServantStatusListViewItem__GetEquipHpByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4C33E53 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C33E53 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._version;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C32E7C(equipUserGrandServantEntityList);
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.servantLeaderInfo;
  if ( equipUserGrandServantEntityList )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                                                     (ServantLeaderInfo_o *)equipUserGrandServantEntityList,
                                                                                     index,
                                                                                     0);
    if ( equipUserGrandServantEntityList )
      LODWORD(equipUserGrandServantEntityList) = HIDWORD(equipUserGrandServantEntityList[2].klass);
  }
  return (int)equipUserGrandServantEntityList;
}


int64_t ServantStatusListViewItem__GetEquipIdByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x0

  if ( (byte_4C33E59 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_4C33E59 = 1;
  }
  grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
  if ( !grandServantEquipTargetIdList )
    sub_1C32E7C(0);
  return System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_3780500 *)Method_System_Collections_Generic_List_long__get_Item__);
}


int32_t ServantStatusListViewItem__GetEquipLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4C33E4E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C33E4E = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._items;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C32E7C(equipUserGrandServantEntityList);
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.servantLeaderInfo;
  if ( equipUserGrandServantEntityList )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                                                     (ServantLeaderInfo_o *)equipUserGrandServantEntityList,
                                                                                     index,
                                                                                     0);
    if ( equipUserGrandServantEntityList )
      LODWORD(equipUserGrandServantEntityList) = HIDWORD(equipUserGrandServantEntityList[1].fields._syncRoot);
  }
  return (int)equipUserGrandServantEntityList;
}


int32_t ServantStatusListViewItem__GetEquipLimitCountByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0
  __int64 v6; // x19
  struct System_Object_array *items; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C33E51 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E51 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        items = equipUserGrandServantEntityList[2].fields._items;
        v6 = *(_QWORD *)&equipUserGrandServantEntityList[2].fields._size;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v10.fields.currentCryptoKey = items;
        *(_QWORD *)&v10.fields.fakeValue = v6;
        LODWORD(servantLeaderInfo) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v10, 0);
        return (int)servantLeaderInfo;
      }
    }
LABEL_14:
    sub_1C32E7C(equipUserGrandServantEntityList);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    servantLeaderInfo = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                 servantLeaderInfo,
                                                 index,
                                                 0);
    if ( servantLeaderInfo )
      LODWORD(servantLeaderInfo) = servantLeaderInfo->fields.exp;
  }
  return (int)servantLeaderInfo;
}


int32_t ServantStatusListViewItem__GetEquipListCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct System_Int64_array *grandServantEquipIdList; // x8

  grandServantEquipIdList = this->fields.grandServantEquipIdList;
  if ( grandServantEquipIdList )
    return grandServantEquipIdList->max_length;
  else
    return 0;
}


int32_t ServantStatusListViewItem__GetEquipMaxLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0

  if ( (byte_4C33E4F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C33E4F = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getLevelMax((UserServantEntity_o *)equipUserGrandServantEntityList, 0);
    }
LABEL_12:
    sub_1C32E7C(equipUserGrandServantEntityList);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo
    && (EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(servantLeaderInfo, index, 0)) != 0 )
  {
    return EquipTargetInfo__getLevelMax(EquipTargetInfoByEquipIdx, 0);
  }
  else
  {
    return 0;
  }
}


ServantEntity_o *ServantStatusListViewItem__GetEquipServantByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x0

  if ( (byte_4C33E4D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C33E4D = 1;
  }
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    sub_1C32E7C(0);
  return (ServantEntity_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)equipGrandServantEntityList,
                              index,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
}


void ServantStatusListViewItem__GetEquipSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SkillInfo_array *equipSkillInfoList; // x8

  equipSkillInfoList = this->fields.equipSkillInfoList;
  *skillInfoList = equipSkillInfoList;
  sub_1C32BC4((CGThumbnailListItem_o *)skillInfoList, (int32_t)equipSkillInfoList, (int32_t)method, v3);
}


void ServantStatusListViewItem__GetEquipSkillInfoByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillInfo____o *grandServantSkillInfoList; // x0
  SkillInfo_array *Item; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C33E5A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo____get_Item__);
    byte_4C33E5A = 1;
  }
  grandServantSkillInfoList = this->fields.grandServantSkillInfoList;
  if ( !grandServantSkillInfoList )
    sub_1C32E7C(0);
  Item = (SkillInfo_array *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)grandServantSkillInfoList,
                              index,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SkillInfo____get_Item__);
  *skillInfoList = Item;
  sub_1C32BC4((CGThumbnailListItem_o *)skillInfoList, (int32_t)Item, v9, v10);
}


bool ServantStatusListViewItem__GetExpInfo(
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
    LOBYTE(userSvtEntity) = UserServantEntity__getExpInfo(userSvtEntity, exp, lateExp, barExp, 0);
  }
  else
  {
    *lateExp = 0;
    *exp = 0;
    *barExp = 0.0;
  }
  return (char)userSvtEntity;
}


bool ServantStatusListViewItem__GetFriendshipInfo(
        ServantStatusListViewItem_o *this,
        int32_t *rank,
        int32_t *max,
        int32_t *late,
        float *fraction,
        const MethodInfo *method)
{
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x28
  DataManager_o *Instance; // x0
  struct ServantEntity_o *svtEntity; // x8
  struct UserServantCollectionEntity_o *v14; // x9
  FriendshipMaster_o *v15; // x24
  int32_t friendshipId; // w25
  __int64 v17; // x26
  __int64 v18; // x27
  struct ServantEntity_o *v19; // x8
  struct UserServantCollectionEntity_o *v20; // x9
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C33E5E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33E5E = 1;
  }
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
  {
    *rank = 0;
    *max = 0;
    *late = 0;
    *fraction = 0.0;
    return userSvtCollectionEntity != 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_19;
  v14 = this->fields.userSvtCollectionEntity;
  if ( !v14 )
    goto LABEL_19;
  v15 = (FriendshipMaster_o *)Instance;
  friendshipId = svtEntity->fields.friendshipId;
  v17 = *(_QWORD *)&v14->fields.friendship.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v14->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v17;
  *(_QWORD *)&v23.fields.fakeValue = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v23, 0);
  v19 = this->fields.svtEntity;
  if ( !v19 )
    goto LABEL_19;
  v20 = this->fields.userSvtCollectionEntity;
  if ( !v20 || !v15 )
    goto LABEL_19;
  FriendshipMaster__GetFriendshipRank(
    v15,
    friendshipId,
    (int32_t)Instance,
    v20->fields.friendshipExceedCount + v19->fields.maxFriendshipRank,
    rank,
    max,
    late,
    fraction,
    0);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity || UserServantEntity__IsAddFriendShipHeroine(userSvtEntity, 0) )
    return userSvtCollectionEntity != 0;
  Instance = (DataManager_o *)this->fields.svtEntity;
  if ( !Instance )
LABEL_19:
    sub_1C32E7C(Instance);
  if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0) )
    *late = -1;
  return userSvtCollectionEntity != 0;
}


EventDropUpValInfo_array *ServantStatusListViewItem__GetFriendshipUpCampaignInfo(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  Il2CppObject *Master_object; // x21
  void *Instance; // x0
  _BOOL8 v7; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  Il2CppObject *v10; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v12; // x23
  __int64 v13; // x0
  EventDropUpValInfo_o *v14; // x22
  __int64 OnlyMaxFuncGroupId; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4C33E67 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C32C20(&EventDropUpValInfo_TypeInfo);
    sub_1C32C20(&FunctionEntity_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33E67 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 14),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v24 = v23;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v24,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v7 )
        break;
      current = v24.fields._current;
      if ( !v24.fields._current )
        sub_1C32E7C(v7);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v24.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v10 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v10 )
          sub_1C32E7C(0);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v10, svtId, 0);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0) )
        {
          v12 = sub_1C32E6C(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v12, 0);
          if ( !v12 )
            sub_1C32E7C(v13);
          *(_QWORD *)(v12 + 24) = 111;
          v14 = (EventDropUpValInfo_o *)sub_1C32E6C(EventDropUpValInfo_TypeInfo);
          EventDropUpValInfo___ctor(v14, 0, (FunctionEntity_o *)v12, 0);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
          if ( !v14 )
            sub_1C32E7C(OnlyMaxFuncGroupId);
          v14->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v4 )
            sub_1C32E7C(OnlyMaxFuncGroupId);
          items = v4->fields._items;
          v19 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C32E7C(OnlyMaxFuncGroupId);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v14,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v14;
            sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v4 )
LABEL_35:
    sub_1C32E7C(Instance);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v4,
                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


bool ServantStatusListViewItem__GetNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TreasureDvcInfo_o *v4; // x8

  v4 = this->fields.tdInfo;
  *tdInfo = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)tdInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isTdResult;
}


bool ServantStatusListViewItem__GetNpInfo_35383768(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C33E5D & 1) == 0 )
  {
    sub_1C32C20(&TreasureDvcInfo_TypeInfo);
    byte_4C33E5D = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_14;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
    {
      svtEntity = this->fields.userSvtEntity;
      if ( svtEntity )
        return UserServantEntity__getTreasureDeviceInfo(svtEntity, tdInfo, -1, dispLimitCount, 0, 0);
LABEL_14:
      sub_1C32E7C(svtEntity);
    }
    goto LABEL_13;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_13;
  svtEntity = (UserServantEntity_o *)this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_14;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
  {
LABEL_13:
    v9 = (TreasureDvcInfo_o *)sub_1C32E6C(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0);
    *tdInfo = v9;
    sub_1C32BC4((CGThumbnailListItem_o *)tdInfo, (int32_t)v9, v10, v11);
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
           0);
}


void ServantStatusListViewItem__GetPassiveSkillInfo(
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
    sub_1C32BC4(
      (CGThumbnailListItem_o *)idList,
      (int32_t)transformedPassiveSkillIdList,
      (int32_t)titleList,
      (const MethodInfo *)explanationList);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_1C32BC4((CGThumbnailListItem_o *)titleList, (int32_t)transformedPassiveSkillTitleMessageList, v12, v13);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.transformedPassiveSkillExplanationMessageList;
  }
  else
  {
    passiveSkillIdList = this->fields.passiveSkillIdList;
    *idList = passiveSkillIdList;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)idList,
      (int32_t)passiveSkillIdList,
      (int32_t)titleList,
      (const MethodInfo *)explanationList);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_1C32BC4((CGThumbnailListItem_o *)titleList, (int32_t)passiveSkillTitleMessageList, v19, v20);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v21 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1C32BC4((CGThumbnailListItem_o *)explanationList, (int32_t)v21, v14, v15);
}


void ServantStatusListViewItem__GetPassiveSkillInfo_35383272(
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
  const MethodInfo *v16; // x3
  System_String_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C33E5C & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    byte_4C33E5C = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( svtEntity && userSvtEntity )
      {
        UserServantEntity__getPassiveSkillInfo(
          userSvtEntity,
          idList,
          titleList,
          explanationList,
          dispLimitCount,
          *((_QWORD *)svtEntity + 14),
          0);
        return;
      }
LABEL_17:
      sub_1C32E7C(svtEntity);
    }
    goto LABEL_14;
  }
  if ( !this->fields.userSvtCollectionEntity )
    goto LABEL_14;
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_17;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
  {
LABEL_14:
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, (unsigned int)v13->static_fields->SvtPassiveSkillListMax);
    *idList = v14;
    sub_1C32BC4((CGThumbnailListItem_o *)idList, (int32_t)v14, v15, v16);
    v17 = (System_String_array *)sub_1C32CC8(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v17;
    sub_1C32BC4((CGThumbnailListItem_o *)titleList, (int32_t)v17, v18, v19);
    v20 = (System_String_array *)sub_1C32CC8(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v20;
    sub_1C32BC4((CGThumbnailListItem_o *)explanationList, (int32_t)v20, v21, v22);
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
    0);
}


ServantEntity_o *ServantStatusListViewItem__GetServantEntity(
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


void ServantStatusListViewItem__GetSkillInfo(
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
  sub_1C32BC4((CGThumbnailListItem_o *)skillInfoList, (int32_t)v6, checkTransform, method);
}


void ServantStatusListViewItem__GetSkillInfo_35382860(
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
  const MethodInfo *v12; // x3

  if ( (byte_4C33E5B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&SkillInfo___TypeInfo);
    byte_4C33E5B = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getSkillInfo(userSvtEntity, skillInfoList, -1, dispLimitCount, 1, 0, -1, 0);
  }
  else
  {
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    if ( userSvtCollectionEntity )
    {
      UserServantCollectionEntity__getSkillInfo(userSvtCollectionEntity, skillInfoList, -1, dispLimitCount, -1, 0);
    }
    else
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      v10 = (SkillInfo_array *)sub_1C32CC8(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
      *skillInfoList = v10;
      sub_1C32BC4((CGThumbnailListItem_o *)skillInfoList, (int32_t)v10, v11, v12);
    }
  }
}


void ServantStatusListViewItem__GetStatus(
        ServantStatusListViewItem_o *this,
        ServantOverwriteStatus_o **outOverwriteStatus,
        int32_t targetDispLimitCount,
        const MethodInfo *method)
{
  int32_t ServantLimitCountSealAfter; // w21
  Il2CppObject *Master_object; // x22
  const MethodInfo *v8; // x1
  int32_t LimitCount; // w23
  int32_t LimitCountByDispLimit; // w21
  const MethodInfo *v11; // x1
  UserServantCollectionEntity_o *SvtId; // x0
  UserServantEntity_o *userSvtEntity; // x0
  ServantOverwriteStatus_o *OverwriteStatus_43085716; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  ServantLimitCountSealAfter = targetDispLimitCount;
  if ( (byte_4C33E64 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    byte_4C33E64 = 1;
  }
  *outOverwriteStatus = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)outOverwriteStatus, 0, targetDispLimitCount, method);
  if ( !this->fields.servantLeaderInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    LimitCount = ServantStatusListViewItem__get_LimitCount(this, v8);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(ServantLimitCountSealAfter, LimitCount, 0);
    SvtId = (UserServantCollectionEntity_o *)ServantStatusListViewItem__get_SvtId(this, v11);
    if ( !Master_object )
      goto LABEL_19;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   (int32_t)SvtId,
                                   LimitCountByDispLimit,
                                   0);
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    OverwriteStatus_43085716 = UserServantEntity__GetOverwriteStatus_43085716(
                                 userSvtEntity,
                                 ServantLimitCountSealAfter,
                                 0);
LABEL_17:
    *outOverwriteStatus = OverwriteStatus_43085716;
    sub_1C32BC4((CGThumbnailListItem_o *)outOverwriteStatus, (int32_t)OverwriteStatus_43085716, v15, v16);
    return;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    OverwriteStatus_43085716 = ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
    goto LABEL_17;
  }
  if ( this->fields.isCollection )
  {
    SvtId = this->fields.userSvtCollectionEntity;
    if ( SvtId )
    {
      OverwriteStatus_43085716 = UserServantCollectionEntity__GetOverwriteStatus(SvtId, ServantLimitCountSealAfter, 0);
      goto LABEL_17;
    }
LABEL_19:
    sub_1C32E7C(SvtId);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetSvtId(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    return this->fields._TransformedSvtId_k__BackingField;
  else
    return ServantStatusListViewItem__get_SvtId(this, (const MethodInfo *)checkTransform);
}


System_String_o *ServantStatusListViewItem__GetTransformName(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 592;
  if ( this->fields._IsTransformed_k__BackingField )
    v2 = 600;
  return *(System_String_o **)((char *)&this->klass + v2);
}


void ServantStatusListViewItem__GetTransformedNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TreasureDvcInfo_o *transformedTdInfo; // x8

  transformedTdInfo = this->fields.transformedTdInfo;
  *tdInfo = transformedTdInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)tdInfo, (int32_t)transformedTdInfo, (int32_t)method, v3);
}


bool ServantStatusListViewItem__GetVoiceInfo(
        ServantStatusListViewItem_o *this,
        System_String_o **illust,
        System_String_o **voice,
        bool *isPlayVoice,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *Master_object; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v11; // x1
  int32_t illustratorId; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v17; // x8
  ServantLimitAddMaster_o *v18; // x23
  __int64 v19; // x26
  __int64 v20; // x27
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *monitor; // x1
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x1
  __int64 *v29; // x8
  System_String_o *v30; // x0
  ServantLimitAddEntity_o *v32; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4C33E5F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_CvMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_IllustratorMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_14823/*"UNKNOWN_NAME_ILLUST"*/);
    sub_1C32C20(&StringLiteral_9325/*"NO_ENTRY_NAME_ILLUST"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33E5F = 1;
  }
  v32 = 0;
  entity = 0;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)voice, StringLiteral_1/*""*/, (int32_t)voice, (const MethodInfo *)isPlayVoice);
  *isPlayVoice = 0;
  if ( !this->fields.commandCodeEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( svtEntity )
    {
      currentCardLimitCount = this->fields.currentCardLimitCount;
      illustratorId = svtEntity->fields.illustratorId;
      cvId = svtEntity->fields.cvId;
      if ( currentCardLimitCount < 0 )
      {
        cardLimitCount = this->fields.cardLimitCount;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        currentCardLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v17 = this->fields.svtEntity;
      if ( v17 )
      {
        v18 = Master_object;
        v20 = *(_QWORD *)&v17->fields.id.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v17->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v20;
        *(_QWORD *)&v34.fields.fakeValue = v19;
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                     v34,
                                                     0);
        if ( v18 )
        {
          if ( ServantLimitAddMaster__TryGetEntity(v18, &v32, (int32_t)Master_object, currentCardLimitCount, 0) )
          {
            Master_object = (ServantLimitAddMaster_o *)v32;
            if ( !v32 )
              goto LABEL_44;
            cvId = ServantLimitAddEntity__GetOverwriteCvId(v32, cvId, 0);
          }
          if ( cvId < 1 )
            goto LABEL_28;
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v21 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_3396838 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v21 )
              {
                monitor = (System_String_o *)v21[1].monitor;
                *voice = monitor;
                sub_1C32BC4((CGThumbnailListItem_o *)voice, (int32_t)monitor, v22, v23);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1C32E7C(Master_object);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v11);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_3396884 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
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
        v29 = &StringLiteral_9325/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_42:
        v30 = LocalizationManager__Get((System_String_o *)*v29, 0);
        LODWORD(v28) = (_DWORD)v30;
        *illust = v30;
        goto LABEL_43;
      }
    }
LABEL_41:
    v29 = &StringLiteral_14823/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v25 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_3396838 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v25 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_41;
  }
  v28 = (System_String_o *)v25[1].monitor;
  *illust = v28;
LABEL_43:
  sub_1C32BC4((CGThumbnailListItem_o *)illust, (int32_t)v28, v26, v27);
  return 1;
}


bool ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  bool v2; // cc
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8

  if ( this->fields.servantLeaderInfo )
  {
    v2 = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(this->fields.servantLeaderInfo, 0) <= 0;
    return !v2;
  }
  if ( this->fields.partyItem )
  {
    memberItem = this->fields.memberItem;
    if ( !memberItem )
      sub_1C32E7C(this);
    v2 = memberItem->fields._EquipFriendShipSkillChange_k__BackingField <= 0;
    return !v2;
  }
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields._EquipSkillChange_k__BackingField;
  else
    return this->fields.isFriendShipEquipSkillChange;
}


bool ServantStatusListViewItem__IsEnableAppendSkillInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct System_Int32_array *appendPassiveSkillIdList; // x8

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  return appendPassiveSkillIdList && appendPassiveSkillIdList->max_length != 0;
}


bool ServantStatusListViewItem__IsEnablePassiveSkillInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct System_Int32_array *passiveSkillIdList; // x8

  passiveSkillIdList = this->fields.passiveSkillIdList;
  return passiveSkillIdList && LODWORD(passiveSkillIdList->max_length) != 0;
}


bool ServantStatusListViewItem__IsEnableSkillInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct SkillInfo_array *skillInfoList; // x8

  skillInfoList = this->fields.skillInfoList;
  return skillInfoList && LODWORD(skillInfoList->max_length) != 0;
}


bool ServantStatusListViewItem__IsEquipByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x0
  bool v6; // cc
  __int64 v7; // x19
  struct System_Int64_array *items; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C33E4C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E4C = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
    if ( !grandServantEquipTargetIdList )
      return (char)grandServantEquipTargetIdList;
    v6 = System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_3780500 *)Method_System_Collections_Generic_List_long__get_Item__) <= 0;
    goto LABEL_11;
  }
  grandServantEquipTargetIdList = (System_Collections_Generic_List_long__o *)this->fields.servantLeaderInfo;
  if ( grandServantEquipTargetIdList )
  {
    grandServantEquipTargetIdList = (System_Collections_Generic_List_long__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                                                 (ServantLeaderInfo_o *)grandServantEquipTargetIdList,
                                                                                 index,
                                                                                 0);
    if ( grandServantEquipTargetIdList )
    {
      items = grandServantEquipTargetIdList[1].fields._items;
      v7 = *(_QWORD *)&grandServantEquipTargetIdList[1].fields._size;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v10.fields.currentCryptoKey = items;
      *(_QWORD *)&v10.fields.fakeValue = v7;
      v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v10, 0) <= 0;
LABEL_11:
      LOBYTE(grandServantEquipTargetIdList) = !v6;
    }
  }
  return (char)grandServantEquipTargetIdList;
}


bool ServantStatusListViewItem__IsModifyEquipId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipTargetId1 != this->fields.oldEquipTargetId1;
}


bool ServantStatusListViewItem__IsModifyFavoriteUserSvtId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int64_t favoriteUserSvtId; // x8
  struct UserGameEntity_o *userGameEntity; // x9

  favoriteUserSvtId = this->fields.favoriteUserSvtId;
  return favoriteUserSvtId >= 1
      && (userGameEntity = this->fields.userGameEntity) != 0
      && userGameEntity->fields.favoriteUserSvtId != favoriteUserSvtId;
}


bool ServantStatusListViewItem__IsModifyPushUserSvtId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *userGameEntity; // x8

  userGameEntity = this->fields.userGameEntity;
  return userGameEntity && userGameEntity->fields.pushUserSvtId != this->fields.pushUserSvtId;
}


bool ServantStatusListViewItem__IsUpdateServantParameters(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  int32_t paramLimitCount; // w8

  paramLimitCount = this->fields.paramLimitCount;
  this->fields.paramLimitCount = imageLimitCount;
  return paramLimitCount != imageLimitCount;
}


void ServantStatusListViewItem__ModifyInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  TreasureDvcInfo_o *v3; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *TreasureDeviceInfo; // x0
  UserServantEntity_o *userSvtEntity; // x22
  bool v11; // w0
  struct UserServantEntity_o *v12; // x20
  const MethodInfo *v13; // x1
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  ServantLeaderInfo_o *v15; // x8
  EquipTargetInfo_o *equipTargetInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4C33E39 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&TreasureDvcInfo_TypeInfo);
    byte_4C33E39 = 1;
  }
  this->fields.isTdResult = 0;
  v3 = (TreasureDvcInfo_o *)sub_1C32E6C(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v3, 0);
  this->fields.tdInfo = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tdInfo, (int32_t)v3, v4, v5);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v6);
  if ( !this->fields.userSvtEntity )
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &this->fields.skillInfoList, 0);
      TreasureDeviceInfo = this->fields.servantLeaderInfo;
      if ( TreasureDeviceInfo )
      {
        ServantLeaderInfo__getPassiveSkillInfo(
          (ServantLeaderInfo_o *)TreasureDeviceInfo,
          &this->fields.passiveSkillIdList,
          &this->fields.passiveSkillTitleMessageList,
          &this->fields.passiveSkillExplanationMessageList,
          0);
        TreasureDeviceInfo = this->fields.servantLeaderInfo;
        if ( TreasureDeviceInfo )
        {
          ServantLeaderInfo__GetAppendPassiveSkillInfo(
            (ServantLeaderInfo_o *)TreasureDeviceInfo,
            &this->fields.appendPassiveSkillIdList,
            &this->fields.appendPassiveSkillTitleMessageList,
            &this->fields.appendPassiveSkillExplanationMessageList,
            &this->fields.appendPassiveSkillReleaseStateList,
            &this->fields.appendPassiveSkillLvList,
            0);
          TreasureDeviceInfo = this->fields.servantLeaderInfo;
          if ( TreasureDeviceInfo )
          {
            TreasureDeviceInfo = (void *)ServantLeaderInfo__getTreasureDeviceInfo(
                                           (ServantLeaderInfo_o *)TreasureDeviceInfo,
                                           &this->fields.tdInfo,
                                           0);
            v15 = this->fields.servantLeaderInfo;
            this->fields.isTdResult = (unsigned __int8)TreasureDeviceInfo & 1;
            if ( v15 )
            {
              ServantLeaderInfo__SetSkillChangeInfo(v15, 0);
              goto LABEL_21;
            }
          }
        }
      }
    }
    else
    {
      equipTargetInfo = this->fields.equipTargetInfo;
      if ( equipTargetInfo )
      {
        EquipTargetInfo__getSkillInfo(equipTargetInfo, &this->fields.skillInfoList, 0);
        goto LABEL_21;
      }
      if ( !this->fields.userSvtCollectionEntity )
        goto LABEL_21;
      TreasureDeviceInfo = this->fields.svtEntity;
      if ( TreasureDeviceInfo )
      {
        if ( ServantEntity__get_IsServant((ServantEntity_o *)TreasureDeviceInfo, 0) )
          goto LABEL_27;
        TreasureDeviceInfo = this->fields.svtEntity;
        if ( !TreasureDeviceInfo )
          goto LABEL_35;
        if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)TreasureDeviceInfo, 0) )
        {
LABEL_27:
          TreasureDeviceInfo = this->fields.userSvtCollectionEntity;
          if ( !TreasureDeviceInfo )
            goto LABEL_35;
          UserServantCollectionEntity__getSkillInfo(
            (UserServantCollectionEntity_o *)TreasureDeviceInfo,
            &this->fields.skillInfoList,
            -1,
            ConvertOverwriteDispImageLimitCount,
            -1,
            0);
        }
        TreasureDeviceInfo = this->fields.svtEntity;
        if ( TreasureDeviceInfo )
        {
          if ( !ServantEntity__get_IsServant((ServantEntity_o *)TreasureDeviceInfo, 0) )
            goto LABEL_21;
          TreasureDeviceInfo = this->fields.userSvtCollectionEntity;
          if ( TreasureDeviceInfo )
          {
            UserServantCollectionEntity__getPassiveSkillInfo(
              (UserServantCollectionEntity_o *)TreasureDeviceInfo,
              &this->fields.passiveSkillIdList,
              &this->fields.passiveSkillTitleMessageList,
              &this->fields.passiveSkillExplanationMessageList,
              ConvertOverwriteDispImageLimitCount,
              1,
              0);
            TreasureDeviceInfo = this->fields.userSvtCollectionEntity;
            if ( TreasureDeviceInfo )
            {
              UserServantCollectionEntity__GetAppendPassiveSkillInfo(
                (UserServantCollectionEntity_o *)TreasureDeviceInfo,
                &this->fields.appendPassiveSkillIdList,
                &this->fields.appendPassiveSkillTitleMessageList,
                &this->fields.appendPassiveSkillExplanationMessageList,
                &this->fields.appendPassiveSkillReleaseStateList,
                &this->fields.appendPassiveSkillLvList,
                0);
              TreasureDeviceInfo = this->fields.userSvtCollectionEntity;
              if ( TreasureDeviceInfo )
              {
                this->fields.isTdResult = UserServantCollectionEntity__getTreasureDeviceInfo(
                                            (UserServantCollectionEntity_o *)TreasureDeviceInfo,
                                            &this->fields.tdInfo,
                                            -1,
                                            ConvertOverwriteDispImageLimitCount,
                                            0);
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
    goto LABEL_35;
  }
  UserServantEntity__getSkillInfo(
    this->fields.userSvtEntity,
    &this->fields.skillInfoList,
    -1,
    ConvertOverwriteDispImageLimitCount,
    1,
    0,
    -1,
    0);
  TreasureDeviceInfo = this->fields.svtEntity;
  if ( !TreasureDeviceInfo )
    goto LABEL_35;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)TreasureDeviceInfo, 0) )
  {
    userSvtEntity = this->fields.userSvtEntity;
    TreasureDeviceInfo = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( TreasureDeviceInfo )
    {
      if ( userSvtEntity )
      {
        UserServantEntity__getPassiveSkillInfo(
          userSvtEntity,
          &this->fields.passiveSkillIdList,
          &this->fields.passiveSkillTitleMessageList,
          &this->fields.passiveSkillExplanationMessageList,
          ConvertOverwriteDispImageLimitCount,
          *((_QWORD *)TreasureDeviceInfo + 14),
          0);
        TreasureDeviceInfo = this->fields.userSvtEntity;
        if ( TreasureDeviceInfo )
        {
          UserServantEntity__GetAppendPassiveSkillInfo(
            (UserServantEntity_o *)TreasureDeviceInfo,
            &this->fields.appendPassiveSkillIdList,
            &this->fields.appendPassiveSkillTitleMessageList,
            &this->fields.appendPassiveSkillExplanationMessageList,
            &this->fields.appendPassiveSkillReleaseStateList,
            &this->fields.appendPassiveSkillLvList,
            0);
          goto LABEL_10;
        }
      }
    }
LABEL_35:
    sub_1C32E7C(TreasureDeviceInfo);
  }
LABEL_10:
  TreasureDeviceInfo = this->fields.userSvtEntity;
  if ( !TreasureDeviceInfo )
    goto LABEL_35;
  v11 = UserServantEntity__getTreasureDeviceInfo(
          (UserServantEntity_o *)TreasureDeviceInfo,
          &this->fields.tdInfo,
          -1,
          ConvertOverwriteDispImageLimitCount,
          0,
          0);
  v12 = this->fields.userSvtEntity;
  this->fields.isTdResult = v11;
  TreasureDeviceInfo = (void *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v13);
  if ( !v12 )
    goto LABEL_35;
  v12->fields.dispLimitCountAfter = (int)TreasureDeviceInfo;
LABEL_21:
  ServantStatusListViewItem__AddDuplicationInfo(this, 0, v7);
  ServantStatusListViewItem__SetGrandInfo(this, v17);
  ServantStatusListViewItem__SetTransformData(this, v18);
  ServantStatusListViewItem__SetCostumeData(this, v19);
}


void ServantStatusListViewItem__RefreshLimitCountWithRandom(
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

  if ( (byte_4C33E36 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&UserServantEntity_TypeInfo);
    byte_4C33E36 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      v5 = sub_1C32E6C(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43055416((UserServantEntity_o *)v5, userSvtEntity, 0);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0);
      if ( !v5 )
        sub_1C32E7C(*(_QWORD *)&v7.fields.currentCryptoKey);
      v8 = *(_QWORD *)(v5 + 80);
      v9 = *(_QWORD *)(v5 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 208) = v7;
      *(_QWORD *)&v16.fields.currentCryptoKey = v8;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v16, 0);
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
                                                                             0);
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


void ServantStatusListViewItem__SetCostumeAndOtherIds(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  int32_t v7; // w1
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v10; // x0
  System_Collections_Generic_List_int__o *v11; // x20
  struct System_Int32_array *v12; // x0
  struct System_Int32_array **v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Int32_array *items; // x8
  int32_t v17; // w1
  _QWORD *v18; // x9
  __int64 size; // x10
  struct System_Int32_array *v20; // x0

  if ( (byte_4C33E62 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C33E62 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_26;
  if ( !ServantEntity__IsBeastNotPlayable(svtEntity, 0) )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_26;
    if ( !ServantEntity__get_IsServant(svtEntity, 0) )
    {
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_26;
      if ( !ServantEntity__get_IsServantCollection(svtEntity, 0) )
        goto LABEL_5;
    }
    IsOtherImage = ConstantMaster__IsOtherImage(0);
    costumeIds = this->fields.costumeIds;
    if ( IsOtherImage )
    {
      v10 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      v11 = v10;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_58175596(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
      else
        System_Collections_Generic_List_int____ctor(
          v10,
          (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v11 )
      {
        items = v11->fields._items;
        v17 = *(_DWORD *)(*(_QWORD *)&svtEntity->fields.starRate + 912LL);
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v17,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size] = v17;
          }
          v20 = System_Collections_Generic_List_int___ToArray(
                  v11,
                  (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
          this->fields.costumeAndOtherIds = v20;
          v7 = (int)v20;
          p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
          goto LABEL_25;
        }
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v12 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, LODWORD(costumeIds->max_length));
      this->fields.costumeAndOtherIds = v12;
      v13 = &this->fields.costumeAndOtherIds;
      sub_1C32BC4((CGThumbnailListItem_o *)v13, (int32_t)v12, v14, v15);
      svtEntity = (ServantEntity_o *)*(v13 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v13, 0, 0);
        return;
      }
    }
LABEL_26:
    sub_1C32E7C(svtEntity);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v7 = 0;
LABEL_25:
  sub_1C32BC4((CGThumbnailListItem_o *)p_costumeAndOtherIds, v7, v4, v5);
}


void ServantStatusListViewItem__SetCostumeData(ServantStatusListViewItem_o *this, const MethodInfo *method)
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


void ServantStatusListViewItem__SetCurrentCardLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t cardLimitCount,
        const MethodInfo *method)
{
  this->fields.currentCardLimitCount = cardLimitCount;
}


void ServantStatusListViewItem__SetEquipTargetId1(
        ServantStatusListViewItem_o *this,
        int64_t equipUserSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  const MethodInfo *v18; // x3
  ServantStatusListViewItem_o *v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  int32_t v21; // w20
  ServantLimitEntity_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Int64_array *v25; // x8
  PartyOrganizationListViewItem_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  BalanceConfig_c *v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v5 = this;
  if ( (byte_4C33E3B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantStatusListViewItem_o *)sub_1C32C20(&SkillInfo___TypeInfo);
    byte_4C33E3B = 1;
  }
  if ( equipUserSvtId >= 1 && v5->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v5->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v5->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v35, 0);
      if ( (int)this >= 1 )
      {
        equipIdList = v5->fields.equipIdList;
        if ( !equipIdList )
          goto LABEL_16;
        if ( LODWORD(equipIdList->max_length) )
        {
          equipIdList->m_Items[0] = equipUserSvtId;
LABEL_16:
          memberItem = v5->fields.memberItem;
          if ( memberItem )
            PartyOrganizationListViewItem__SetEquipUserServantId(memberItem, equipUserSvtId, 0, 0);
          v5->fields.equipTargetId1 = equipUserSvtId;
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
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
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                      v36,
                                                      0);
              if ( v13 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                           (int32_t)this,
                           (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v5->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.equipServantEntity, (int32_t)Entity, v17, v18);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v19 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0);
                    v20 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v21 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                              v20[6],
                                                              0);
                      if ( v19 )
                      {
                        v22 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v19, v21, (int32_t)this, 0);
                        v5->fields.equipSvtLimitEntity = v22;
                        sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.equipSvtLimitEntity, (int32_t)v22, v23, v24);
                        this = (ServantStatusListViewItem_o *)v5->fields.equipUserSvtEntity;
                        if ( this )
                        {
                          UserServantEntity__getEquipSkillInfo(
                            (UserServantEntity_o *)this,
                            &v5->fields.equipSkillInfoList,
                            1,
                            0);
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
          sub_1C32E7C(this);
        }
LABEL_39:
        sub_1C32E84(this);
      }
    }
  }
  v25 = v5->fields.equipIdList;
  if ( v25 )
  {
    if ( !LODWORD(v25->max_length) )
      goto LABEL_39;
    v25->m_Items[0] = 0;
  }
  v26 = v5->fields.memberItem;
  if ( v26 && !v26->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v26, 0, 0, 0);
  v5->fields.equipTargetId1 = 0;
  v5->fields.equipUserSvtEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  v5->fields.equipServantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.equipServantEntity, 0, v27, v28);
  v5->fields.equipSvtLimitEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.equipSvtLimitEntity, 0, v29, v30);
  v31 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  v32 = sub_1C32CC8(SkillInfo___TypeInfo, (unsigned int)v31->static_fields->SvtEquipSkillListMax);
  v5->fields.equipSkillInfoList = (struct SkillInfo_array *)v32;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.equipSkillInfoList, v32, v33, v34);
}


void ServantStatusListViewItem__SetEquipTargetIds(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x0
  Il2CppObject *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x20
  struct System_Int64_array *v8; // x0
  __int64 v9; // x0
  int32_t v10; // w1
  struct System_Int64_array **p_grandServantEquipIdList; // x20
  System_Collections_Generic_List_long__o *v12; // x20
  int32_t i; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  struct System_Int64_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x8
  struct System_Object_array *v25; // x9
  _QWORD *v26; // x10
  __int64 v27; // x11
  int v28; // w24
  Il2CppClass **v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x23
  __int64 v33; // x24
  __int64 v34; // x25
  struct System_Int64_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  struct System_Int64_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  System_Collections_Generic_List_object__o *v41; // x23
  Il2CppObject *v42; // x24
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x1
  Il2CppClass **v49; // x0
  System_Collections_Generic_List_object__o *v50; // x23
  Il2CppObject *v51; // x24
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x1
  Il2CppClass **v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  SkillInfo_array *v61; // x1
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  CGThumbnailListItem_o *v66; // x0
  __int64 v67; // x8
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x8
  struct System_Int64_array *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct System_Int64_array *v87; // x8
  __int64 v88; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v90; // x23
  struct System_Int64_array *v91; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v94; // x1
  __int64 v95; // x8
  _QWORD *v96; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v98; // x8
  __int64 v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x8
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  __int64 v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x8
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  __int64 v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  __int64 v123; // x8
  CGThumbnailListItem_o *v124; // x0
  SkillInfo_array *v125; // x1
  __int64 v126; // x8
  struct System_Int64_array *grandServantEquipIdList; // x8
  int64_t v128; // x1
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v133; // x22
  void *v134; // x23
  Il2CppClass *v135; // x26
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  struct System_Object_array *items; // x8
  _QWORD *v139; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v141; // x1
  Il2CppClass **v142; // x0
  System_Collections_Generic_List_object__o *equipGrandServantLimitEntityList; // x21
  ServantLimitMaster_o *v144; // x22
  int32_t v145; // w23
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v151; // x1
  Il2CppClass **v152; // x0
  __int64 v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  __int64 v156; // x8
  ServantStatusListViewItem_o *v157; // x0
  UserServantEntity_o *v158; // x1
  const MethodInfo *v159; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-78h] BYREF
  SkillInfo_array *v161; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_4C33E3A & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SkillInfo____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantLimitEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E3A = 1;
  }
  v161 = 0;
  entity = 0;
  skillInfoList = 0;
  equipIdList = this->fields.equipIdList;
  if ( equipIdList && SLODWORD(equipIdList->max_length) >= 2 && this->fields.userSvtEntity )
  {
    v4 = System_Array__Clone((System_Array_o *)equipIdList, 0);
    if ( v4 )
    {
      v7 = v4;
      v8 = (struct System_Int64_array *)sub_1C32D5C(v4, long___TypeInfo);
      if ( !v8 || (this->fields.grandServantEquipIdList = v8, (v9 = sub_1C32D5C(v7, long___TypeInfo)) == 0) )
      {
        sub_1C3313C(v7);
        ServantStatusListViewItem__SetLimitCountInfo(v157, v158, v159);
        return;
      }
      v10 = v9;
      p_grandServantEquipIdList = &this->fields.grandServantEquipIdList;
    }
    else
    {
      v10 = 0;
      p_grandServantEquipIdList = &this->fields.grandServantEquipIdList;
      this->fields.grandServantEquipIdList = 0;
    }
    sub_1C32BC4((CGThumbnailListItem_o *)p_grandServantEquipIdList, v10, v5, v6);
    v87 = *p_grandServantEquipIdList;
    if ( *p_grandServantEquipIdList )
    {
      v88 = 4;
      do
      {
        max_length_low = LODWORD(v87->max_length);
        v90 = v88 - 4;
        if ( v88 - 4 >= (int)max_length_low )
          return;
        if ( v90 >= max_length_low )
          goto LABEL_165;
        if ( *((__int64 *)&v87->obj.klass + v88) < 1 )
          goto LABEL_102;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
        v91 = *p_grandServantEquipIdList;
        if ( !*p_grandServantEquipIdList )
          break;
        if ( v90 >= LODWORD(v91->max_length) )
          goto LABEL_165;
        if ( !Master_object )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                        Master_object,
                                                                        &entity,
                                                                        *((_QWORD *)&v91->obj.klass + v88),
                                                                        (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_102;
        if ( !entity )
          break;
        klass = entity[5].klass;
        monitor = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v165.fields.currentCryptoKey = klass;
        *(_QWORD *)&v165.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v165, 0) >= 1 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v94 = entity;
          v95 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v96 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v95 )
            break;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v95 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              v94,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
          }
          else
          {
            v98 = v95 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v98 + 32) = v94;
            sub_1C32BC4((CGThumbnailListItem_o *)(v98 + 32), (int32_t)v94, v85, v86);
          }
          grandServantEquipIdList = this->fields.grandServantEquipIdList;
          if ( !grandServantEquipIdList )
            break;
          if ( v90 >= LODWORD(grandServantEquipIdList->max_length) )
LABEL_165:
            sub_1C32E84(Master_object);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v128 = *((_QWORD *)&grandServantEquipIdList->obj.klass + v88);
          v129 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v130 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v129 )
            break;
          v131 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              v128,
              *(const MethodInfo_37807F0 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v131 + 1;
            *(_QWORD *)(v129 + 8 * v131 + 32) = v128;
          }
          equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !entity )
            break;
          v133 = Master_object;
          v135 = entity[5].klass;
          v134 = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v166.fields.currentCryptoKey = v135;
          *(_QWORD *)&v166.fields.fakeValue = v134;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                          v166,
                                                                          0);
          if ( !v133 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v133,
                                                                          (int32_t)Master_object,
                                                                          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !equipGrandServantEntityList )
            break;
          items = equipGrandServantEntityList->fields._items;
          v139 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++equipGrandServantEntityList->fields._version;
          if ( !items )
            break;
          size = equipGrandServantEntityList->fields._size;
          v141 = Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
          }
          else
          {
            v142 = &items->obj.klass + size;
            equipGrandServantEntityList->fields._size = size + 1;
            v142[4] = (Il2CppClass *)v141;
            sub_1C32BC4((CGThumbnailListItem_o *)(v142 + 4), (int32_t)v141, v136, v137);
          }
          equipGrandServantLimitEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitMaster___);
          if ( !entity )
            break;
          v144 = (ServantLimitMaster_o *)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                                                          0);
          if ( !entity )
            break;
          v145 = (int)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                                                                          0);
          if ( !v144 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                          v144,
                                                                          v145,
                                                                          (int32_t)Master_object,
                                                                          0);
          if ( !equipGrandServantLimitEntityList )
            break;
          v148 = equipGrandServantLimitEntityList->fields._items;
          v149 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++equipGrandServantLimitEntityList->fields._version;
          if ( !v148 )
            break;
          v150 = equipGrandServantLimitEntityList->fields._size;
          v151 = Master_object;
          if ( (unsigned int)v150 >= LODWORD(v148->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantLimitEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
          }
          else
          {
            v152 = &v148->obj.klass + v150;
            equipGrandServantLimitEntityList->fields._size = v150 + 1;
            v152[4] = (Il2CppClass *)v151;
            sub_1C32BC4((CGThumbnailListItem_o *)(v152 + 4), (int32_t)v151, v146, v147);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
          if ( !entity )
            break;
          UserServantEntity__getEquipSkillInfo((UserServantEntity_o *)entity, &v161, 1, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v125 = v161;
          v153 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v154 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v153 )
            break;
          v155 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v155 >= *(_DWORD *)(v153 + 24) )
          {
            v126 = v154[4];
            goto LABEL_128;
          }
          v156 = v153 + 8 * v155;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v155 + 1;
          *(_QWORD *)(v156 + 32) = v125;
          v124 = (CGThumbnailListItem_o *)(v156 + 32);
        }
        else
        {
LABEL_102:
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v99 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v100 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v99 )
            break;
          v101 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v101 >= *(_DWORD *)(v99 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            v102 = v99 + 8 * v101;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v101 + 1;
            *(_QWORD *)(v102 + 32) = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)(v102 + 32), 0, v85, v86);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v105 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v106 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v105 )
            break;
          v107 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v107 >= *(_DWORD *)(v105 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              0,
              *(const MethodInfo_37807F0 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v107 + 1;
            *(_QWORD *)(v105 + 8 * v107 + 32) = 0;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
          if ( !Master_object )
            break;
          v108 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v109 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v108 )
            break;
          v110 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v110 >= *(_DWORD *)(v108 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v111 = v108 + 8 * v110;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v110 + 1;
            *(_QWORD *)(v111 + 32) = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)(v111 + 32), 0, v103, v104);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
          if ( !Master_object )
            break;
          v114 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v115 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v114 )
            break;
          v116 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
          }
          else
          {
            v117 = v114 + 8 * v116;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v116 + 1;
            *(_QWORD *)(v117 + 32) = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)(v117 + 32), 0, v112, v113);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v120 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v121 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v120 )
            break;
          v122 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v122 >= *(_DWORD *)(v120 + 24) )
          {
            v126 = v121[4];
            v125 = 0;
LABEL_128:
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v125->obj,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v126 + 192) + 112LL));
            goto LABEL_129;
          }
          v123 = v120 + 8 * v122;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v122 + 1;
          *(_QWORD *)(v123 + 32) = 0;
          v124 = (CGThumbnailListItem_o *)(v123 + 32);
          LODWORD(v125) = 0;
        }
        sub_1C32BC4(v124, (int32_t)v125, v118, v119);
LABEL_129:
        v87 = *p_grandServantEquipIdList;
        ++v88;
      }
      while ( *p_grandServantEquipIdList );
    }
LABEL_164:
    sub_1C32E7C(Master_object);
  }
  if ( !this->fields.servantLeaderInfo )
    return;
  v12 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  for ( i = 0; ; ++i )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
    }
    if ( i >= SHIDWORD(Master_object[2].fields.list->fields.PropertyChanged) )
      break;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantLeaderInfo;
    if ( !Master_object )
      goto LABEL_164;
    EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                  (ServantLeaderInfo_o *)Master_object,
                                  i,
                                  0);
    if ( EquipTargetInfoByEquipIdx )
    {
      v16 = EquipTargetInfoByEquipIdx;
      v18 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v163.fields.currentCryptoKey = v18;
      *(_QWORD *)&v163.fields.fakeValue = v17;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                      v163,
                                                                      0);
      if ( !v12 )
        goto LABEL_164;
      v19 = v12->fields._items;
      v20 = Method_System_Collections_Generic_List_long__Add__;
      ++v12->fields._version;
      if ( !v19 )
        goto LABEL_164;
      v21 = v12->fields._size;
      if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v12,
          (int)Master_object,
          *(const MethodInfo_37807F0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = v21 + 1;
        v19->m_Items[v21] = (int)Master_object;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                      v16->fields.svtId,
                                                                      0);
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
      if ( !equipUserGrandServantEntityList )
        goto LABEL_164;
      v25 = equipUserGrandServantEntityList->fields._items;
      v26 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++equipUserGrandServantEntityList->fields._version;
      if ( !v25 )
        goto LABEL_164;
      v27 = equipUserGrandServantEntityList->fields._size;
      v28 = (int)Master_object;
      if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          equipUserGrandServantEntityList,
          0,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &v25->obj.klass + v27;
        equipUserGrandServantEntityList->fields._size = v27 + 1;
        v29[4] = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), 0, v22, v23);
      }
      grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
      if ( v28 < 1 )
      {
        if ( !grandServantEquipTargetIdList )
          goto LABEL_164;
        v38 = grandServantEquipTargetIdList->fields._items;
        v39 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v38 )
          goto LABEL_164;
        v40 = grandServantEquipTargetIdList->fields._size;
        if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            0,
            *(const MethodInfo_37807F0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v40 + 1;
          v38->m_Items[v40] = 0;
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
        if ( !Master_object )
          goto LABEL_164;
        v68 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v69 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v68 )
          goto LABEL_164;
        v70 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = v68 + 8 * v70;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v70 + 1;
          *(_QWORD *)(v71 + 32) = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)(v71 + 32), 0, v30, v31);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
        if ( !Master_object )
          goto LABEL_164;
        v74 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v75 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v74 )
          goto LABEL_164;
        v76 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = v74 + 8 * v76;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v76 + 1;
          *(_QWORD *)(v77 + 32) = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)(v77 + 32), 0, v72, v73);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_164;
        v78 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v79 = Method_System_Collections_Generic_List_SkillInfo____Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v78 )
          goto LABEL_164;
        v80 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v80 < *(_DWORD *)(v78 + 24) )
        {
          v81 = v78 + 8 * v80;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v80 + 1;
          *(_QWORD *)(v81 + 32) = 0;
          v66 = (CGThumbnailListItem_o *)(v81 + 32);
          LODWORD(v61) = 0;
          goto LABEL_75;
        }
        v67 = v79[4];
        v61 = 0;
      }
      else
      {
        v34 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v164.fields.currentCryptoKey = v34;
        *(_QWORD *)&v164.fields.fakeValue = v33;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                        v164,
                                                                        0);
        if ( !grandServantEquipTargetIdList )
          goto LABEL_164;
        v35 = grandServantEquipTargetIdList->fields._items;
        v36 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v35 )
          goto LABEL_164;
        v37 = grandServantEquipTargetIdList->fields._size;
        if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            (int)Master_object,
            *(const MethodInfo_37807F0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v37 + 1;
          v35->m_Items[v37] = (int)Master_object;
        }
        v41 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v42 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                        v16->fields.svtId,
                                                                        0);
        if ( !v42 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v42,
                                                                        (int32_t)Master_object,
                                                                        (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v41 )
          goto LABEL_164;
        v45 = v41->fields._items;
        v46 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v41->fields._version;
        if ( !v45 )
          goto LABEL_164;
        v47 = v41->fields._size;
        v48 = Master_object;
        if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &v45->obj.klass + v47;
          v41->fields._size = v47 + 1;
          v49[4] = (Il2CppClass *)v48;
          sub_1C32BC4((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v48, v43, v44);
        }
        v50 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
        v51 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                        v16->fields.svtId,
                                                                        0);
        if ( !v51 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                        (ServantLimitMaster_o *)v51,
                                                                        (int32_t)Master_object,
                                                                        v16->fields.limitCount,
                                                                        0);
        if ( !v50 )
          goto LABEL_164;
        v54 = v50->fields._items;
        v55 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++v50->fields._version;
        if ( !v54 )
          goto LABEL_164;
        v56 = v50->fields._size;
        v57 = Master_object;
        if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v50,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v54->obj.klass + v56;
          v50->fields._size = v56 + 1;
          v58[4] = (Il2CppClass *)v57;
          sub_1C32BC4((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v57, v52, v53);
        }
        EquipTargetInfo__getSkillInfo(v16, &skillInfoList, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_164;
        v61 = skillInfoList;
        v62 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v63 = Method_System_Collections_Generic_List_SkillInfo____Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v62 )
          goto LABEL_164;
        v64 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v64 < *(_DWORD *)(v62 + 24) )
        {
          v65 = v62 + 8 * v64;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v64 + 1;
          *(_QWORD *)(v65 + 32) = v61;
          v66 = (CGThumbnailListItem_o *)(v65 + 32);
LABEL_75:
          sub_1C32BC4(v66, (int32_t)v61, v59, v60);
          continue;
        }
        v67 = v63[4];
      }
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Master_object,
        &v61->obj,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v67 + 192) + 112LL));
    }
  }
  if ( !v12 )
    goto LABEL_164;
  v82 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.grandServantEquipIdList = v82;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandServantEquipIdList, (int32_t)v82, v83, v84);
}


void ServantStatusListViewItem__SetGrandInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UserServantGrandInfo_c *v5; // x0
  struct UserServantGrandInfo_o *Empty; // x1
  UserServantEntity_o *userSvtEntity; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  if ( (byte_4C33E68 & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C33E68 = 1;
  }
  if ( this->fields._IsForceNotGrand_k__BackingField )
  {
LABEL_4:
    v5 = UserServantGrandInfo_TypeInfo;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      v5 = UserServantGrandInfo_TypeInfo;
    }
    Empty = v5->static_fields->Empty;
    goto LABEL_11;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( !this->fields._IsTempGrandServant_k__BackingField )
  {
    if ( userSvtEntity )
    {
      Empty = UserServantEntity__get_GrandInfo(this->fields.userSvtEntity, 0);
      if ( Empty )
        goto LABEL_11;
    }
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      Empty = ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
      if ( Empty )
        goto LABEL_11;
    }
    goto LABEL_4;
  }
  if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
  Empty = UserServantGrandInfo__Make(userSvtEntity, 1, 0);
LABEL_11:
  this->fields._GrandInfo_k__BackingField = Empty;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._GrandInfo_k__BackingField, (int32_t)Empty, v2, v3);
}


void ServantStatusListViewItem__SetLimitCountInfo(
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
  const MethodInfo *v13; // x3
  int32_t v14; // w21
  int32_t v15; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w22
  int32_t v20; // w0
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w22
  int32_t v28; // w0
  struct System_Int32_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t v34; // w20
  int32_t v35; // w0
  struct System_Int32_array *v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4C33E37 & 1) == 0 )
  {
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E37 = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0);
    v6 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = v6;
    *(_QWORD *)&v39.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v39, 0);
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(entity->fields.limitCount, 0);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v10 = v8;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardSelectList = ImageLimitCount__GetCardSelectList(v7, v10, costumeAndOtherIds, 0);
    this->fields.cardSelectList = CardSelectList;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v12, v13);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0);
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(entity->fields.svtId, 0);
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(entity->fields.limitCount, 0);
    SelectList = ImageLimitCount__GetSelectList(v14, v15, this->fields.costumeIds, 0);
    this->fields.dispSelectList = SelectList;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v17, v18);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(entity->fields.svtId, 0);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(entity->fields.limitCount, 0);
    v21 = ImageLimitCount__GetSelectList(v19, v20, this->fields.costumeIds, 0);
    this->fields.commandCardSelectList = v21;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v21, v22, v23);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v25, v26);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0);
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(entity->fields.svtId, 0);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(entity->fields.limitCount, 0);
    v29 = ImageLimitCount__GetCardSelectList(v27, v28, this->fields.costumeIds, 0);
    this->fields.iconSelectList = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v29, v30, v31);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0);
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(entity->fields.svtId, 0);
    v33 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v34 = v32;
    *(_QWORD *)&v40.fields.currentCryptoKey = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v40, 0);
    v36 = ImageLimitCount__GetSelectList(v34, v35, this->fields.costumeIds, 0);
    this->fields.portraitSelectList = v36;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v36, v37, v38);
  }
}


void ServantStatusListViewItem__SetRandomSettingByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( index <= 2 )
    this->fields.ownRandomSettingButtonIndex = index;
  else
    this->fields.supportRandomSettingButtonIndex = index;
}


void ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x19
  struct System_Int32_array *supportRandomLimitCountList; // x8
  int32_t max_length; // w9
  int32_t LIMIT_SUPPORT_NOT_ASSIGN; // w8

  v4 = this;
  if ( (byte_4C33E56 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C32C20(&UserServantEntity_TypeInfo);
    byte_4C33E56 = 1;
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
        sub_1C32E84(this);
      LIMIT_SUPPORT_NOT_ASSIGN = supportRandomLimitCountList->m_Items[index];
      goto LABEL_10;
    }
  }
}


void ServantStatusListViewItem__SetTransformData(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  void *SvtId; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ServantTransformEntity_o *v9; // x8
  struct System_String_o *befTitle; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_String_o *aftTitle; // x1
  Il2CppObject *v14; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v20; // x22
  const MethodInfo *v21; // x1
  ServantLimitEntity_o *v22; // x20
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t lv; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  struct EquipTargetInfo_o *equipTargetInfo; // x9
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _DWORD *v29; // x21
  int32_t atkMax; // w24
  int32_t atkBase; // w25
  int v32; // w23
  CheckCombineResStatus_c *v33; // x0
  struct UserServantEntity_o *v34; // x9
  int32_t LOT_RATE; // w8
  int32_t v36; // w23
  int32_t *p_adjustAtk; // x10
  struct ServantLeaderInfo_o *v38; // x10
  int32_t v39; // w24
  BalanceConfig_c *v40; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v42; // w8
  struct ServantLeaderInfo_o *p_adjustHp; // x9
  int32_t StatusUpAdjustHp; // w10
  const MethodInfo *v45; // x1
  UserServantEntity_o *v46; // x0
  UserServantEntity_o *v47; // x22
  int32_t v48; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  ServantLeaderInfo_o *v50; // x0
  ServantLeaderInfo_o *v51; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  int32_t v53; // w20
  int32_t LimitCount; // w0
  int32_t dispLimitCount; // w21
  int32_t transformedHp; // w22
  struct UserServantEntity_o *v57; // x8
  int32_t transformedAtk; // w23
  int32_t v59; // w24
  int32_t collectionLv; // w26
  int32_t adjustHp; // w25
  int32_t adjustAtk; // w28
  struct ServantLeaderInfo_o *v63; // x8
  struct EquipTargetInfo_o *v64; // x8
  UserServantGrandInfo_o *grandInfo; // x29
  __int64 v66; // x27
  const MethodInfo *v67; // x2
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C33E63 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CheckCombineResStatus_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&ServantOverwriteStatus_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33E63 = 1;
  }
  entity = 0;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = (void *)ServantStatusListViewItem__get_SvtId(this, v5);
    if ( !Master_object )
      goto LABEL_72;
    SvtId = (void *)ServantTransformMaster__TryGetEntity(
                      (ServantTransformMaster_o *)Master_object,
                      &entity,
                      (int32_t)SvtId,
                      this->fields.dispLimitCount + 1,
                      0);
    if ( ((unsigned __int8)SvtId & 1) == 0 )
      return;
    v9 = entity;
    if ( !entity )
      goto LABEL_72;
    this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
    this->fields._TransformedServantDispLimitCount_k__BackingField = v9->fields.aftDispLimitCount - 1;
    befTitle = v9->fields.befTitle;
    this->fields.transformNameBefore = befTitle;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.transformNameBefore, (int32_t)befTitle, v7, v8);
    if ( !entity )
      goto LABEL_72;
    aftTitle = entity->fields.aftTitle;
    this->fields.transformNameAfter = aftTitle;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.transformNameAfter, (int32_t)aftTitle, v11, v12);
    this->fields._IsTransformServant_k__BackingField = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SvtId )
      goto LABEL_72;
    v14 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
            this->fields._TransformedSvtId_k__BackingField,
            (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
    this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v14;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._TransformedServant_k__BackingField, (int32_t)v14, v16, v17);
    v18 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitMaster___);
    TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
    v20 = (ServantLimitMaster_o *)v18;
    SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v21);
    if ( !v20 )
      goto LABEL_72;
    v22 = ServantLimitMaster__GetEntity(v20, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantExpMaster___);
    if ( !*p_TransformedServant_k__BackingField )
      goto LABEL_72;
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
      goto LABEL_72;
    SvtId = ServantExpMaster__GetEntity(
              (ServantExpMaster_o *)SvtId,
              (*p_TransformedServant_k__BackingField)->fields.expType,
              lv,
              0);
    if ( !v22 )
      goto LABEL_72;
    v29 = SvtId;
    if ( !SvtId )
      goto LABEL_72;
    atkBase = v22->fields.atkBase;
    atkMax = v22->fields.atkMax;
    v32 = *((_DWORD *)SvtId + 7);
    v33 = CheckCombineResStatus_TypeInfo;
    if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
      v33 = CheckCombineResStatus_TypeInfo;
    }
    v34 = this->fields.userSvtEntity;
    LOT_RATE = v33->static_fields->LOT_RATE;
    v36 = v32 * (atkMax - atkBase) / LOT_RATE + v22->fields.atkBase;
    this->fields.transformedAtk = v36;
    if ( v34 )
    {
      p_adjustAtk = &v34->fields.adjustAtk;
    }
    else
    {
      v38 = this->fields.servantLeaderInfo;
      if ( !v38 )
      {
        v39 = 0;
LABEL_35:
        v40 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
          v34 = this->fields.userSvtEntity;
          LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
        }
        static_fields = v40->static_fields;
        this->fields.transformedAtk = v36 + static_fields->StatusUpAdjustAtk * v39;
        v42 = v29[7] * (v22->fields.hpMax - v22->fields.hpBase) / LOT_RATE + v22->fields.hpBase;
        if ( v34 )
        {
          p_adjustHp = (struct ServantLeaderInfo_o *)&v34->fields.adjustHp;
        }
        else
        {
          p_adjustHp = this->fields.servantLeaderInfo;
          if ( !p_adjustHp )
            goto LABEL_42;
          p_adjustHp = (struct ServantLeaderInfo_o *)((char *)p_adjustHp + 84);
        }
        LODWORD(p_adjustHp) = p_adjustHp->klass;
LABEL_42:
        StatusUpAdjustHp = static_fields->StatusUpAdjustHp;
        this->fields.transformedServantLimitEntity = v22;
        this->fields.transformedHp = v42 + StatusUpAdjustHp * (_DWORD)p_adjustHp;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.transformedServantLimitEntity, (int32_t)v22, v27, v28);
        v46 = this->fields.userSvtEntity;
        if ( v46 )
        {
          UserServantEntity__GetTransformedSkillInfo(
            v46,
            &this->fields.transformedSkillInfoList,
            this->fields._TransformedSvtId_k__BackingField,
            -1,
            this->fields._TransformedServantDispLimitCount_k__BackingField,
            1,
            0,
            -1,
            0);
          v47 = this->fields.userSvtEntity;
          v48 = this->fields._TransformedSvtId_k__BackingField;
          TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
          SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !SvtId )
            goto LABEL_72;
          if ( !v47 )
            goto LABEL_72;
          UserServantEntity__GetTransformedPassiveSkillInfo(
            v47,
            &this->fields.transformedPassiveSkillIdList,
            &this->fields.transformedPassiveSkillTitleMessageList,
            &this->fields.transformedPassiveSkillExplanationMessageList,
            v48,
            TransformedServantDispLimitCount_k__BackingField,
            *((_QWORD *)SvtId + 14),
            0);
          SvtId = this->fields.userSvtEntity;
          if ( !SvtId )
            goto LABEL_72;
          UserServantEntity__GetTransformedTreasureDeviceInfo(
            (UserServantEntity_o *)SvtId,
            &this->fields.transformedTdInfo,
            this->fields._TransformedSvtId_k__BackingField,
            -1,
            this->fields._TransformedServantDispLimitCount_k__BackingField,
            0,
            0);
        }
        else
        {
          v50 = this->fields.servantLeaderInfo;
          if ( v50 )
          {
            ServantLeaderInfo__GetTransformedSkillInfo(
              v50,
              &this->fields.transformedSkillInfoList,
              this->fields._TransformedSvtId_k__BackingField,
              0);
            SvtId = this->fields.servantLeaderInfo;
            if ( !SvtId )
              goto LABEL_72;
            ServantLeaderInfo__GetTransformedPassiveSkillInfo(
              (ServantLeaderInfo_o *)SvtId,
              &this->fields.transformedPassiveSkillIdList,
              &this->fields.transformedPassiveSkillTitleMessageList,
              &this->fields.transformedPassiveSkillExplanationMessageList,
              this->fields._TransformedSvtId_k__BackingField,
              0);
            SvtId = this->fields.servantLeaderInfo;
            if ( !SvtId )
              goto LABEL_72;
            ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
              (ServantLeaderInfo_o *)SvtId,
              &this->fields.transformedTdInfo,
              this->fields._TransformedSvtId_k__BackingField,
              0);
            SvtId = this->fields.servantLeaderInfo;
            if ( !SvtId )
              goto LABEL_72;
            SvtId = (void *)ServantLeaderInfo__get_TransformedAtk((ServantLeaderInfo_o *)SvtId, 0);
            v51 = this->fields.servantLeaderInfo;
            this->fields.transformedAtk = (int)SvtId;
            if ( !v51 )
              goto LABEL_72;
            this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v51, 0);
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
                0);
              SvtId = this->fields.userSvtCollectionEntity;
              if ( !SvtId )
                goto LABEL_72;
              UserServantCollectionEntity__GetTransformedPassiveSkillInfo(
                (UserServantCollectionEntity_o *)SvtId,
                &this->fields.transformedPassiveSkillIdList,
                &this->fields.transformedPassiveSkillTitleMessageList,
                &this->fields.transformedPassiveSkillExplanationMessageList,
                this->fields._TransformedSvtId_k__BackingField,
                this->fields._TransformedServantDispLimitCount_k__BackingField,
                1,
                0);
              SvtId = this->fields.userSvtCollectionEntity;
              if ( !SvtId )
                goto LABEL_72;
              UserServantCollectionEntity__GetTransformedTreasureDeviceInfo(
                (UserServantCollectionEntity_o *)SvtId,
                &this->fields.transformedTdInfo,
                this->fields._TransformedSvtId_k__BackingField,
                -1,
                this->fields._TransformedServantDispLimitCount_k__BackingField,
                0);
            }
          }
        }
        v53 = this->fields._TransformedSvtId_k__BackingField;
        LimitCount = ServantStatusListViewItem__get_LimitCount(this, v45);
        dispLimitCount = this->fields.dispLimitCount;
        transformedHp = this->fields.transformedHp;
        v57 = this->fields.userSvtEntity;
        transformedAtk = this->fields.transformedAtk;
        v59 = LimitCount;
        if ( v57 )
        {
          collectionLv = v57->fields.lv;
          adjustHp = v57->fields.adjustHp;
          adjustAtk = v57->fields.adjustAtk;
          goto LABEL_68;
        }
        v63 = this->fields.servantLeaderInfo;
        if ( v63 )
        {
          collectionLv = v63->fields.lv;
          adjustHp = v63->fields.adjustHp;
          adjustAtk = v63->fields.adjustAtk;
          goto LABEL_68;
        }
        v64 = this->fields.equipTargetInfo;
        if ( v64 )
        {
          collectionLv = v64->fields.lv;
        }
        else
        {
          if ( !this->fields.isCollection )
          {
            adjustHp = 0;
            collectionLv = 0;
            goto LABEL_67;
          }
          collectionLv = this->fields.collectionLv;
        }
        adjustHp = 0;
LABEL_67:
        adjustAtk = 0;
LABEL_68:
        grandInfo = this->fields._GrandInfo_k__BackingField;
        v66 = sub_1C32E6C(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_33445248(
          (ServantOverwriteStatus_o *)v66,
          v53,
          v59,
          dispLimitCount,
          transformedHp,
          transformedAtk,
          collectionLv,
          adjustHp,
          adjustAtk,
          grandInfo,
          0);
        if ( v66 )
        {
          *(int32x2_t *)&this->fields.transformedAtk = vrev64_s32(*(int32x2_t *)(v66 + 16));
          ServantStatusListViewItem__AddDuplicationInfo(this, 1, v67);
          return;
        }
LABEL_72:
        sub_1C32E7C(SvtId);
      }
      p_adjustAtk = &v38->fields.adjustAtk;
    }
    v39 = *p_adjustAtk;
    goto LABEL_35;
  }
}


bool ServantStatusListViewItem__UpdateServantComment(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ServantCommentEntity_array *Master_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  _DWORD *klass; // x8
  CGThumbnailListItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v13; // x20
  int max_length; // w9
  unsigned int v15; // w10
  unsigned int v16; // w21
  char v17; // w21

  if ( (byte_4C33E61 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C33E61 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = ServantCommentMaster__GetEntityList(
                    (ServantCommentMaster_o *)Master_object,
                    svtId,
                    imageLimitCount,
                    0,
                    0,
                    0,
                    0);
  svtCommentEntityList = this->fields.svtCommentEntityList;
  p_svtCommentEntityList = (CGThumbnailListItem_o *)&this->fields.svtCommentEntityList;
  klass = svtCommentEntityList;
  v13 = Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_18:
    v17 = 0;
    goto LABEL_21;
  }
  if ( !Master_object )
LABEL_17:
    sub_1C32E7C(Master_object);
  max_length = klass[6];
  if ( max_length != LODWORD(Master_object->max_length) )
  {
    v17 = 1;
    goto LABEL_21;
  }
  if ( max_length < 1 )
    goto LABEL_18;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= klass[6] || (v16 = v15, v15 >= max_length) )
      sub_1C32E84(Master_object);
    Master_object = *(ServantCommentEntity_array **)&klass[2 * v15 + 8];
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, ServantCommentEntity_o *, const MethodInfo *))Master_object->obj.klass->vtable[0].methodPtr)(
                                                    Master_object,
                                                    v13->m_Items[v15],
                                                    Master_object->obj.klass->vtable[0].method);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      break;
    max_length = v13->max_length;
    v15 = v16 + 1;
    if ( (int)(v16 + 1) >= max_length )
      break;
    klass = p_svtCommentEntityList->klass;
    if ( !p_svtCommentEntityList->klass )
      goto LABEL_17;
  }
  v17 = (unsigned __int8)Master_object ^ 1;
LABEL_21:
  p_svtCommentEntityList->klass = (CGThumbnailListItem_c *)v13;
  sub_1C32BC4(p_svtCommentEntityList, (int32_t)v13, v8, v9);
  return v17 & 1;
}


int32_t ServantStatusListViewItem__get_AdjustAtk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t *p_adjustAtk; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    p_adjustAtk = &userSvtEntity->fields.adjustAtk;
    return *p_adjustAtk;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    p_adjustAtk = &servantLeaderInfo->fields.adjustAtk;
    return *p_adjustAtk;
  }
  return 0;
}


int32_t ServantStatusListViewItem__get_AdjustHp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t *p_adjustHp; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    p_adjustHp = &userSvtEntity->fields.adjustHp;
    return *p_adjustHp;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    p_adjustHp = &servantLeaderInfo->fields.adjustHp;
    return *p_adjustHp;
  }
  return 0;
}


int32_t ServantStatusListViewItem__get_Agility(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C32E7C(this);
  return svtLimitEntity->fields.agility;
}


int32_t ServantStatusListViewItem__get_Atk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t Atk_k__BackingField; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  UserServantEntity_o *userSvtEntity; // x0
  UserServantGrandInfo_o *GrandInfo_k__BackingField; // x0
  UserServantEntity_o *v9; // x20

  if ( (byte_4C33E4B & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C33E4B = 1;
  }
  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields.transformedAtk;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.atk;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( !equipTargetInfo )
  {
    overwriteStatus = this->fields.overwriteStatus;
    if ( overwriteStatus )
      Atk_k__BackingField = overwriteStatus->fields._Atk_k__BackingField;
    else
      Atk_k__BackingField = 0;
    userSvtEntity = this->fields.userSvtEntity;
    if ( userSvtEntity )
      LOBYTE(userSvtEntity) = UserServantEntity__IsGrandServant(userSvtEntity, 0);
    if ( ((unsigned __int8)userSvtEntity & 1) != 0 || !this->fields._IsTempGrandServant_k__BackingField )
    {
      if ( !this->fields._IsForceNotGrand_k__BackingField || ((unsigned __int8)userSvtEntity & 1) == 0 )
        return Atk_k__BackingField;
      v9 = this->fields.userSvtEntity;
      if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      GrandInfo_k__BackingField = UserServantGrandInfo__Make(v9, 0, 0);
      if ( GrandInfo_k__BackingField )
      {
        Atk_k__BackingField -= UserServantGrandInfo__get_AddedAtk(GrandInfo_k__BackingField, 0);
        return Atk_k__BackingField;
      }
    }
    else
    {
      GrandInfo_k__BackingField = this->fields._GrandInfo_k__BackingField;
      if ( GrandInfo_k__BackingField )
      {
        Atk_k__BackingField += UserServantGrandInfo__get_AddedAtk(GrandInfo_k__BackingField, 0);
        return Atk_k__BackingField;
      }
    }
    sub_1C32E7C(GrandInfo_k__BackingField);
  }
  return equipTargetInfo->fields.atk;
}


bool ServantStatusListViewItem__get_CanMoveCombine(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._CanMoveCombine_k__BackingField;
}


int32_t ServantStatusListViewItem__get_CardLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cardLimitCount;
}


System_Int32_array *ServantStatusListViewItem__get_CardSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.cardSelectList;
}


int32_t ServantStatusListViewItem__get_ChangeBattleVoiceSelect(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.changeVoiceFlag;
}


int32_t ServantStatusListViewItem__get_ChangeVoiceFlag(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.changeVoiceFlag;
}


int32_t ServantStatusListViewItem__get_CommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCardLimitCount;
}


System_Int32_array *ServantStatusListViewItem__get_CommandCardParam(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCardParam;
}


System_Int32_array *ServantStatusListViewItem__get_CommandCardSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCardSelectList;
}


CommandCodeEntity_o *ServantStatusListViewItem__get_CommandCode(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


CommandCodeCommentEntity_o *ServantStatusListViewItem__get_CommandCodeCommentData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeCommentEntity;
}


int32_t ServantStatusListViewItem__get_CommandCodeId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4C33E3D & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E3D = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0);
}


System_Int32_array *ServantStatusListViewItem__get_CommandCodeIdList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeIdList;
}


int32_t ServantStatusListViewItem__get_ConvertOverwriteCardImageLimitCount(
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
    return PartyOrganizationListViewItem__GetCardImageLimitCount(memberItem, 0);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.cardLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.cardLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userSvtEntity, 0);
  if ( result < 0 )
    return this->fields.cardLimitCount;
  return result;
}


int32_t ServantStatusListViewItem__get_ConvertOverwriteCommandCardLimitCount(
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
  if ( (byte_4C33E43 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C32C20(&ImageLimitCount_TypeInfo);
    byte_4C33E43 = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1C32E7C(this);
    TransformedServantDispLimitCount_k__BackingField = v2->fields._TransformedServantDispLimitCount_k__BackingField;
    limitMax = TransformedServant_k__BackingField->fields.limitMax;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(
                              TransformedServantDispLimitCount_k__BackingField,
                              limitMax,
                              0);
    return ImageLimitCount__GetImageLimitCount(v2->fields._TransformedSvtId_k__BackingField, LimitCountByDispLimit, 0);
  }
  else
  {
    if ( !v2->fields.isConvertOverwriteImage )
      return v2->fields.commandCardLimitCount;
    memberItem = v2->fields.memberItem;
    if ( memberItem )
      return PartyOrganizationListViewItem__GetCommandCardLimitCount(memberItem, 0);
    userSvtEntity = v2->fields.userSvtEntity;
    if ( !userSvtEntity )
      return v2->fields.commandCardLimitCount;
    questRestrictionInfo = v2->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      return v2->fields.commandCardLimitCount;
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userSvtEntity, 0);
    if ( result < 0 )
      return v2->fields.commandCardLimitCount;
  }
  return result;
}


int32_t ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
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
    return PartyOrganizationListViewItem__GetDispImageLimitCount(memberItem, 0);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.dispLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.dispLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userSvtEntity, 0);
  if ( result < 0 )
    return this->fields.dispLimitCount;
  return result;
}


int32_t ServantStatusListViewItem__get_ConvertOverwriteIconLimitCount(
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
    return PartyOrganizationListViewItem__GetIconLimitCount(memberItem, 0);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.iconLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.iconLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userSvtEntity, 0);
  if ( result < 0 )
    return this->fields.iconLimitCount;
  return result;
}


int32_t ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(
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
    return PartyOrganizationListViewItem__GetPortraitLimitCount(memberItem, 0);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    return this->fields.portraitLimitCount;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return this->fields.portraitLimitCount;
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userSvtEntity, 0);
  if ( result < 0 )
    return this->fields.portraitLimitCount;
  return result;
}


int32_t ServantStatusListViewItem__get_Cost(ServantStatusListViewItem_o *this, const MethodInfo *method)
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
      sub_1C32E7C(this);
    p_Cost_k__BackingField = &svtEntity->fields.cost;
  }
  return *p_Cost_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__get_CostumeIds(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeIds;
}


int32_t ServantStatusListViewItem__get_Defense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C32E7C(this);
  return svtLimitEntity->fields.defense;
}


int32_t ServantStatusListViewItem__get_DispLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dispLimitCount;
}


System_Int32_array *ServantStatusListViewItem__get_DispSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dispSelectList;
}


bool ServantStatusListViewItem__get_EnableChangeVoice(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.enableChangeVoice;
}


bool ServantStatusListViewItem__get_EnableTdSpeed(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.enableTdSpeed;
}


int32_t ServantStatusListViewItem__get_EquipAtk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.atk;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0 )
    return equipTarget1->fields.atk;
  else
    return 0;
}


int32_t ServantStatusListViewItem__get_EquipCost(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


int32_t ServantStatusListViewItem__get_EquipExp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.exp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0 )
    return equipTarget1->fields.exp;
  else
    return 0;
}


int32_t ServantStatusListViewItem__get_EquipHp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.hp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0 )
    return equipTarget1->fields.hp;
  else
    return 0;
}


int32_t ServantStatusListViewItem__get_EquipLevel(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return equipUserSvtEntity->fields.lv;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0 )
    return equipTarget1->fields.lv;
  else
    return 0;
}


int32_t ServantStatusListViewItem__get_EquipLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C33E50 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E50 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v9, 0);
  }
  else
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0 )
      return equipTarget1->fields.limitCount;
    else
      return 0;
  }
}


int32_t ServantStatusListViewItem__get_EquipMaxLevel(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *equipUserSvtEntity; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  EquipTargetInfo_o *equipTarget1; // x0

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
    return UserServantEntity__getLevelMax(equipUserSvtEntity, 0);
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo && (equipTarget1 = servantLeaderInfo->fields.equipTarget1) != 0 )
    return EquipTargetInfo__getLevelMax(equipTarget1, 0);
  else
    return 0;
}


ServantEntity_o *ServantStatusListViewItem__get_EquipServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipServantEntity;
}


EquipTargetInfo_o *ServantStatusListViewItem__get_EquipTargetData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipTargetInfo;
}


int64_t ServantStatusListViewItem__get_EquipTargetId1(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipTargetId1;
}


UserServantEntity_o *ServantStatusListViewItem__get_EquipUserServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserSvtEntity;
}


int32_t ServantStatusListViewItem__get_Exp(ServantStatusListViewItem_o *this, const MethodInfo *method)
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


int64_t ServantStatusListViewItem__get_FavoriteUserSvtId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.favoriteUserSvtId;
}


UserServantGrandInfo_o *ServantStatusListViewItem__get_GrandInfo(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandInfo_k__BackingField;
}


int32_t ServantStatusListViewItem__get_Hp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t Hp_k__BackingField; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  UserServantEntity_o *userSvtEntity; // x0
  UserServantGrandInfo_o *GrandInfo_k__BackingField; // x0
  UserServantEntity_o *v9; // x20

  if ( (byte_4C33E4A & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C33E4A = 1;
  }
  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields.transformedHp;
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
    return servantLeaderInfo->fields.hp;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( !equipTargetInfo )
  {
    overwriteStatus = this->fields.overwriteStatus;
    if ( overwriteStatus )
      Hp_k__BackingField = overwriteStatus->fields._Hp_k__BackingField;
    else
      Hp_k__BackingField = 0;
    userSvtEntity = this->fields.userSvtEntity;
    if ( userSvtEntity )
      LOBYTE(userSvtEntity) = UserServantEntity__IsGrandServant(userSvtEntity, 0);
    if ( ((unsigned __int8)userSvtEntity & 1) != 0 || !this->fields._IsTempGrandServant_k__BackingField )
    {
      if ( !this->fields._IsForceNotGrand_k__BackingField || ((unsigned __int8)userSvtEntity & 1) == 0 )
        return Hp_k__BackingField;
      v9 = this->fields.userSvtEntity;
      if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      GrandInfo_k__BackingField = UserServantGrandInfo__Make(v9, 0, 0);
      if ( GrandInfo_k__BackingField )
      {
        Hp_k__BackingField -= UserServantGrandInfo__get_AddedHp(GrandInfo_k__BackingField, 0);
        return Hp_k__BackingField;
      }
    }
    else
    {
      GrandInfo_k__BackingField = this->fields._GrandInfo_k__BackingField;
      if ( GrandInfo_k__BackingField )
      {
        Hp_k__BackingField += UserServantGrandInfo__get_AddedHp(GrandInfo_k__BackingField, 0);
        return Hp_k__BackingField;
      }
    }
    sub_1C32E7C(GrandInfo_k__BackingField);
  }
  return equipTargetInfo->fields.hp;
}


int32_t ServantStatusListViewItem__get_IconLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLimitCount;
}


System_Int32_array *ServantStatusListViewItem__get_IconSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconSelectList;
}


bool ServantStatusListViewItem__get_IsChangeImageLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0

  if ( !this->fields.userSvtEntity )
    return 0;
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    sub_1C32E7C(0);
  return ServantEntity__get_IsServant(svtEntity, 0);
}


bool ServantStatusListViewItem__get_IsChoice(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool ServantStatusListViewItem__get_IsCollection(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCollection;
}


bool ServantStatusListViewItem__get_IsConvertOverwriteImage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isConvertOverwriteImage;
}


bool ServantStatusListViewItem__get_IsDisplayCombineButton(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDisplayCombineButton_k__BackingField;
}


bool ServantStatusListViewItem__get_IsDisplayRandomLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isDisplayRandomLimitCount;
}


bool ServantStatusListViewItem__get_IsEnableOwnRandomSetting(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEnableOwnRandomSetting;
}


bool ServantStatusListViewItem__get_IsEnableServantQuest(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnableServantQuest;
}


bool ServantStatusListViewItem__get_IsEnableSupportRandomSetting(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEnableSupportRandomSetting;
}


bool ServantStatusListViewItem__get_IsEquip(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
  {
    LOBYTE(this) = this->fields.equipTargetId1 > 0;
  }
  else
  {
    this = (ServantStatusListViewItem_o *)this->fields.servantLeaderInfo;
    if ( this )
      LOBYTE(this) = ServantLeaderInfo__get_IsEquip((ServantLeaderInfo_o *)this, 0);
  }
  return (char)this;
}


bool ServantStatusListViewItem__get_IsEquipChangeMode(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquipChangeMode;
}


bool ServantStatusListViewItem__get_IsEquipShowMode(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEquipShowMode;
}


bool ServantStatusListViewItem__get_IsEventJoin(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsEventJoin(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool ServantStatusListViewItem__get_IsForceNotGrand(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsForceNotGrand_k__BackingField;
}


bool ServantStatusListViewItem__get_IsLock(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool ServantStatusListViewItem__get_IsMine(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantLeaderInfo == 0;
}


bool ServantStatusListViewItem__get_IsModifyBattleVoice(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsModifyBattleVoice(userSvtEntity, this->fields.changeVoiceFlag, 0);
  return (char)userSvtEntity;
}


bool ServantStatusListViewItem__get_IsModifyChoice(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
    return UserServantEntity__IsModifyChoice(this->fields.userSvtEntity, this->fields.isChoice, 0);
  if ( this->fields.userCommandCodeEntity )
    return UserCommandCodeEntity__IsModifyChoice(this->fields.userCommandCodeEntity, this->fields.isChoice, 0);
  return 0;
}


bool ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *ManualSetCommandCardLimit; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t commandCardLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_4C33E42 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E42 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      return UserServantEntity__IsModifyCommandCardLimitCount(v7, commandCardLimitCount, v6, 0);
    }
LABEL_17:
    sub_1C32E7C(ManualSetCommandCardLimit);
  }
  ManualSetCommandCardLimit = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                                             this,
                                                             method);
  if ( !userSvtEntity )
    goto LABEL_17;
  commandCardLimitCount = (int)ManualSetCommandCardLimit;
  v6 = 1;
  v7 = userSvtEntity;
  return UserServantEntity__IsModifyCommandCardLimitCount(v7, commandCardLimitCount, v6, 0);
}


bool ServantStatusListViewItem__get_IsModifyDispLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *ManualSetDispLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t dispLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_4C33E40 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E40 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      return UserServantEntity__IsModifyDispLimitCount(v7, dispLimitCount, v6, 0);
    }
LABEL_17:
    sub_1C32E7C(ManualSetDispLimitCount);
  }
  ManualSetDispLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_17;
  dispLimitCount = (int)ManualSetDispLimitCount;
  v6 = 1;
  v7 = userSvtEntity;
  return UserServantEntity__IsModifyDispLimitCount(v7, dispLimitCount, v6, 0);
}


bool ServantStatusListViewItem__get_IsModifyIconLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  RandomLimitCountManager_c *ManualSetIconLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t iconLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_4C33E45 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E45 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      return UserServantEntity__IsModifyIconLimitCount(v7, iconLimitCount, v6, 0);
    }
LABEL_17:
    sub_1C32E7C(ManualSetIconLimitCount);
  }
  ManualSetIconLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                                           this,
                                                           method);
  if ( !userSvtEntity )
    goto LABEL_17;
  iconLimitCount = (int)ManualSetIconLimitCount;
  v6 = 1;
  v7 = userSvtEntity;
  return UserServantEntity__IsModifyIconLimitCount(v7, iconLimitCount, v6, 0);
}


bool ServantStatusListViewItem__get_IsModifyLock(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
    return UserServantEntity__IsModifyLock(this->fields.userSvtEntity, this->fields.isLock, 0);
  if ( this->fields.userCommandCodeEntity )
    return UserCommandCodeEntity__IsModifyLock(this->fields.userCommandCodeEntity, this->fields.isLock, 0);
  return 0;
}


bool ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *ManualSetPortraitLimitCount; // x0
  struct UserServantEntity_o *userSvtEntity; // x20
  int32_t portraitLimitCount; // w1
  bool v6; // w2
  UserServantEntity_o *v7; // x0

  if ( (byte_4C33E47 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E47 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      return UserServantEntity__IsModifyPortraitLimitCount(v7, portraitLimitCount, v6, 0);
    }
LABEL_17:
    sub_1C32E7C(ManualSetPortraitLimitCount);
  }
  ManualSetPortraitLimitCount = (RandomLimitCountManager_c *)ServantStatusListViewItem__get_ManualSetPortraitLimitCount(
                                                               this,
                                                               method);
  if ( !userSvtEntity )
    goto LABEL_17;
  portraitLimitCount = (int)ManualSetPortraitLimitCount;
  v6 = 1;
  v7 = userSvtEntity;
  return UserServantEntity__IsModifyPortraitLimitCount(v7, portraitLimitCount, v6, 0);
}


bool ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(
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
                              0);
  }
  return (char)userSvtEntity;
}


bool ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4C33E49 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E49 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0) != this->fields.supportRandomLimitCount;
}


bool ServantStatusListViewItem__get_IsModifySvtCommonFlag(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0

  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
    LOBYTE(userSvtCollectionEntity) = UserServantCollectionEntity__IsModifySvtCommonFlag(
                                        userSvtCollectionEntity,
                                        this->fields.svtCommonFlag,
                                        0);
  return (char)userSvtCollectionEntity;
}


bool ServantStatusListViewItem__get_IsMyEquip(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsMyEquip_k__BackingField;
}


bool ServantStatusListViewItem__get_IsNoPeriod(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x0

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    LOBYTE(userSvtEntity) = UserServantEntity__IsNoPeriod(userSvtEntity, 0);
  return (char)userSvtEntity;
}


bool ServantStatusListViewItem__get_IsNpcFollowerServantEquip(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNpcFollowerServantEquip;
}


bool ServantStatusListViewItem__get_IsTempGrandServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsTempGrandServant_k__BackingField;
}


bool ServantStatusListViewItem__get_IsTransformServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsTransformServant_k__BackingField;
}


bool ServantStatusListViewItem__get_IsTransformed(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsTransformed_k__BackingField;
}


bool ServantStatusListViewItem__get_IsUse(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUse;
}


int32_t ServantStatusListViewItem__get_Level(ServantStatusListViewItem_o *this, const MethodInfo *method)
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


int32_t ServantStatusListViewItem__get_LimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C33E3E & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E3E = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v10, 0);
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


int32_t ServantStatusListViewItem__get_Luck(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C32E7C(this);
  return svtLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C32E7C(this);
  return svtLimitEntity->fields.magic;
}


int32_t ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4C33E3F & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E3F = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      sub_1C32E7C(v3);
    p_cardLimitCount = &currentLimitCountCache->fields.cardLimitCount;
  }
  else
  {
    p_cardLimitCount = &this->fields.cardLimitCount;
  }
  return *p_cardLimitCount;
}


int32_t ServantStatusListViewItem__get_ManualSetCommandCardLimit(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_commandCardLimitCount; // x8

  if ( (byte_4C33E44 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E44 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      sub_1C32E7C(v3);
    p_commandCardLimitCount = &currentLimitCountCache->fields.commandCardLimitCount;
  }
  else
  {
    p_commandCardLimitCount = &this->fields.commandCardLimitCount;
  }
  return *p_commandCardLimitCount;
}


int32_t ServantStatusListViewItem__get_ManualSetDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_dispLimitCount; // x8

  if ( (byte_4C33E41 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E41 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      sub_1C32E7C(v3);
    p_dispLimitCount = &currentLimitCountCache->fields.dispLimitCount;
  }
  else
  {
    p_dispLimitCount = &this->fields.dispLimitCount;
  }
  return *p_dispLimitCount;
}


int32_t ServantStatusListViewItem__get_ManualSetIconLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_iconLimitCount; // x8

  if ( (byte_4C33E46 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E46 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      sub_1C32E7C(v3);
    p_iconLimitCount = &currentLimitCountCache->fields.iconLimitCount;
  }
  else
  {
    p_iconLimitCount = &this->fields.iconLimitCount;
  }
  return *p_iconLimitCount;
}


int32_t ServantStatusListViewItem__get_ManualSetPortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_portraitLimitCount; // x8

  if ( (byte_4C33E48 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E48 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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
      sub_1C32E7C(v3);
    p_portraitLimitCount = &currentLimitCountCache->fields.portraitLimitCount;
  }
  else
  {
    p_portraitLimitCount = &this->fields.portraitLimitCount;
  }
  return *p_portraitLimitCount;
}


int32_t ServantStatusListViewItem__get_MaxCardLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxCardLimitCount;
}


int32_t ServantStatusListViewItem__get_MaxCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxCommandCardLimitCount;
}


int32_t ServantStatusListViewItem__get_MaxDispLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxDispLimitCount;
}


int32_t ServantStatusListViewItem__get_MaxIconLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxIconLimitCount;
}


int32_t ServantStatusListViewItem__get_MaxLevel(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
    return UserServantEntity__getLevelMax(this->fields.userSvtEntity, 0);
  if ( this->fields.servantLeaderInfo )
    return ServantLeaderInfo__getLevelMax(this->fields.servantLeaderInfo, 0);
  if ( this->fields.equipTargetInfo )
    return EquipTargetInfo__getLevelMax(this->fields.equipTargetInfo, 0);
  if ( this->fields.isCollection )
    return this->fields.collectionLv;
  return 0;
}


int32_t ServantStatusListViewItem__get_MaxPortraitLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxPortraitLimitCount;
}


int32_t ServantStatusListViewItem__get_Member(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.memberNum;
}


int32_t ServantStatusListViewItem__get_Np(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C32E7C(this);
  return svtLimitEntity->fields.treasureDevice;
}


ServantOverwriteStatus_o *ServantStatusListViewItem__get_OverwriteStatus(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteStatus;
}


int32_t ServantStatusListViewItem__get_OwnRandomSettingSelectedButton(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.ownRandomSettingButtonIndex;
}


int32_t ServantStatusListViewItem__get_ParamLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.paramLimitCount;
}


PartyListViewItem_o *ServantStatusListViewItem__get_PartyItem(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


int32_t ServantStatusListViewItem__get_PortraitLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.portraitLimitCount;
}


System_Int32_array *ServantStatusListViewItem__get_PortraitSelectList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.portraitSelectList;
}


int32_t ServantStatusListViewItem__get_Power(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C32E7C(this);
  return svtLimitEntity->fields.power;
}


int64_t ServantStatusListViewItem__get_PushUserSvtId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.pushUserSvtId;
}


QuestRestrictionInfo_o *ServantStatusListViewItem__get_QuestRestrictionInfo(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t ServantStatusListViewItem__get_Rarity(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  _DWORD *overwriteStatus; // x8

  overwriteStatus = this->fields.overwriteStatus;
  if ( !overwriteStatus )
  {
    overwriteStatus = this->fields.svtLimitEntity;
    if ( !overwriteStatus )
      sub_1C32E7C(this);
  }
  return overwriteStatus[6];
}


ServantEntity_o *ServantStatusListViewItem__get_Servant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtEntity;
}


ServantCommentEntity_array *ServantStatusListViewItem__get_ServantCommentDataList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtCommentEntityList;
}


ServantLeaderInfo_o *ServantStatusListViewItem__get_ServantLeaderData(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantLeaderInfo;
}


int32_t ServantStatusListViewItem__get_SupportRandomLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportRandomLimitCount;
}


System_Int32_array *ServantStatusListViewItem__get_SupportRandomLimitCountList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportRandomLimitCountList;
}


int32_t ServantStatusListViewItem__get_SupportRandomSettingParam(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.supportRandomSettingButtonIndex == 5 )
    return 2;
  else
    return this->fields.supportRandomSettingButtonIndex == 4;
}


int32_t ServantStatusListViewItem__get_SupportRandomSettingSelectedButtonByIndex(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.supportRandomSettingButtonIndex;
}


int32_t ServantStatusListViewItem__get_SvtCommonFlag(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtCommonFlag;
}


int32_t ServantStatusListViewItem__get_SvtId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4C33E3C & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33E3C = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0);
}


int32_t ServantStatusListViewItem__get_TransformedAgility(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C32E7C(this);
  return transformedServantLimitEntity->fields.agility;
}


int32_t ServantStatusListViewItem__get_TransformedDefense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C32E7C(this);
  return transformedServantLimitEntity->fields.defense;
}


int32_t ServantStatusListViewItem__get_TransformedLuck(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C32E7C(this);
  return transformedServantLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_TransformedMagic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C32E7C(this);
  return transformedServantLimitEntity->fields.magic;
}


int32_t ServantStatusListViewItem__get_TransformedNp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C32E7C(this);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t ServantStatusListViewItem__get_TransformedPower(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C32E7C(this);
  return transformedServantLimitEntity->fields.power;
}


ServantEntity_o *ServantStatusListViewItem__get_TransformedServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransformedServant_k__BackingField;
}


int32_t ServantStatusListViewItem__get_TransformedServantDispLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransformedServantDispLimitCount_k__BackingField;
}


int32_t ServantStatusListViewItem__get_TransformedSvtId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TransformedSvtId_k__BackingField;
}


int32_t ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(
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


UserCommandCodeEntity_o *ServantStatusListViewItem__get_UserCommandCode(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeEntity;
}


UserCommandCodeCollectionEntity_o *ServantStatusListViewItem__get_UserCommandCodeCollection(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeCollectionEntity;
}


UserGameEntity_o *ServantStatusListViewItem__get_UserGame(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userGameEntity;
}


int64_t ServantStatusListViewItem__get_UserId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v2; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v4; // q1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  _QWORD *p_klass; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4C33E60 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C33E60 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v8, 0);
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
        return 0;
      p_klass = &v2->fields.userSvtCollectionEntity->klass;
      if ( !p_klass )
        sub_1C32E7C(this);
    }
    return p_klass[2];
  }
}


UserServantEntity_o *ServantStatusListViewItem__get_UserServant(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtEntity;
}


UserServantCollectionEntity_o *ServantStatusListViewItem__get_UserServantCollection(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userSvtCollectionEntity;
}


void ServantStatusListViewItem__set_ChangeBattleVoiceSelect(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.changeVoiceFlag = value;
}


void ServantStatusListViewItem__set_CommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.commandCardLimitCount = value;
}


void ServantStatusListViewItem__set_DispLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.dispLimitCount = value;
}


void ServantStatusListViewItem__set_FavoriteUserSvtId(
        ServantStatusListViewItem_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields.favoriteUserSvtId = value;
}


void ServantStatusListViewItem__set_GrandInfo(
        ServantStatusListViewItem_o *this,
        UserServantGrandInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandInfo_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._GrandInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void ServantStatusListViewItem__set_IconLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.iconLimitCount = value;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  RandomLimitCountManager_c *v5; // x0

  v4 = value;
  if ( (byte_4C33E55 & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C33E55 = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C3367D )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C3367D = 1;
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


void ServantStatusListViewItem__set_IsEnableSupportRandomSetting(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isEnableSupportRandomSetting = value;
}


void ServantStatusListViewItem__set_IsForceNotGrand(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsForceNotGrand_k__BackingField = value;
}


void ServantStatusListViewItem__set_IsMyEquip(ServantStatusListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsMyEquip_k__BackingField = value;
}


void ServantStatusListViewItem__set_IsTempGrandServant(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTempGrandServant_k__BackingField = value;
}


void ServantStatusListViewItem__set_IsTransformServant(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTransformServant_k__BackingField = value;
}


void ServantStatusListViewItem__set_IsTransformed(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTransformed_k__BackingField = value;
}


void ServantStatusListViewItem__set_PortraitLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.portraitLimitCount = value;
}


void ServantStatusListViewItem__set_PushUserSvtId(
        ServantStatusListViewItem_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields.pushUserSvtId = value;
}


void ServantStatusListViewItem__set_TransformedServant(
        ServantStatusListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TransformedServant_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._TransformedServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ServantStatusListViewItem__set_TransformedServantDispLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TransformedServantDispLimitCount_k__BackingField = value;
}


void ServantStatusListViewItem__set_TransformedSvtId(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TransformedSvtId_k__BackingField = value;
}


void ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(
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


void ServantStatusListViewItem_LimitCountCache___ctor(
        ServantStatusListViewItem_LimitCountCache_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}