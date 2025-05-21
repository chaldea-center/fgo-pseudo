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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  System_Collections_Generic_List_object__o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_object__o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_List_object__o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_object__o *v45; // x21
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // x24
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_List_long__o *v49; // x28
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int64_t Instance; // x0
  const MethodInfo *v55; // x1
  struct PartyOrganizationListViewItem_o *v56; // x0
  struct PartyOrganizationListViewItem_o **p_memberItem; // x26
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  char v61; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v68; // q0
  struct PartyOrganizationListViewItem_o *v69; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct PartyOrganizationListViewItem_o *v77; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x25
  __int64 v82; // x28
  __int64 v83; // x29
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x25
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  ServantLimitMaster_o *v88; // x28
  int32_t v89; // w29
  struct ServantLimitEntity_o *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  ServantCommentMaster_o *v93; // x28
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // q1
  UserServantCollectionMaster_o *v99; // x28
  int64_t v100; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  int v104; // w8
  QuestRestrictionInfo_o *v105; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x27
  int32_t lv; // w26
  __int64 v113; // x28
  __int64 v114; // x29
  struct System_Int32_array *CostumeList_42078056; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  const MethodInfo *v118; // x1
  struct UserServantCollectionEntity_o *v119; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v121; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v123; // x8
  _BOOL8 IsChoice; // x0
  __int64 v125; // x1
  const MethodInfo *v126; // x2
  struct System_Int64_array *v127; // x8
  int64_t v128; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v131; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v132; // x8
  int32_t v133; // w2
  int v134; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v135; // x8
  int32_t v136; // w2
  int v137; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v138; // x8
  int32_t v139; // w2
  int v140; // w9
  struct System_Collections_Generic_List_long__o *v141; // x8
  int v142; // w9
  struct UserServantCollectionEntity_o *v143; // x8
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v147; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v149; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v151; // x8
  int32_t v152; // w0
  UserServantEntity_o *v153; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v155; // x2
  UserServantEntity_o *v156; // x0
  int32_t v157; // w0
  UserServantEntity_o *v158; // x8
  int32_t v159; // w0
  UserServantEntity_o *v160; // x1
  const MethodInfo *v161; // x1
  const MethodInfo *v162; // x2
  RandomLimitCountManager_c *v163; // x0
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // [xsp+0h] [xbp-B0h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16

  if ( (byte_4B41334 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Clear__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo____Clear__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__Clear__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v24);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v25);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v26);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v27);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v28);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v29);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v32);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    byte_4B41334 = 1;
  }
  v36 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v36;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v39;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v39, v40, v41);
  v42 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v42;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v45;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v45, v47, v48);
  v49 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v49,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v49;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v49, v50, v51);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.partyItem = partyItem;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.partyItem, (int32_t)partyItem, v52, v53);
  if ( !partyItem )
    goto LABEL_97;
  v56 = PartyListViewItem__GetMember(partyItem, member, 0LL);
  this->fields.memberItem = v56;
  p_memberItem = &this->fields.memberItem;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.memberItem, (int32_t)v56, v58, v59);
  memberItem = this->fields.memberItem;
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  if ( !memberItem )
    goto LABEL_97;
  this->fields._IsGrand_k__BackingField = memberItem->fields._IsTempGrandServant_k__BackingField;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL) )
  {
    v61 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_97;
    v61 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v61;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  *(_BYTE *)(Instance + 173) = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v63, v64);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_97;
  v68 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v69 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v68;
  if ( !v69 )
    goto LABEL_97;
  userServantEntity = v69->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v65, v66);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_97;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v73, v74);
  v77 = this->fields.memberItem;
  if ( !v77 )
    goto LABEL_97;
  questRestrictionInfo = v77->fields.questRestrictionInfo;
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v75, v76);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v80 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v81 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v83 = *(_QWORD *)&v80[5].fields.currentCryptoKey;
  v82 = *(_QWORD *)&v80[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v168.fields.currentCryptoKey = v83;
  *(_QWORD *)&v168.fields.fakeValue = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v168, 0LL);
  if ( !v81 )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v81,
             Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v86, v87);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v88 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[6], 0LL);
  if ( !v88 )
    goto LABEL_97;
  v90 = ServantLimitMaster__GetEntity(v88, v89, Instance, 0LL);
  this->fields.svtLimitEntity = v90;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v90, v91, v92);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_97;
  v93 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_svtEntity)[1], 0LL);
  if ( !v93 )
    goto LABEL_97;
  EntityList = ServantCommentMaster__GetEntityList(v93, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v95, v96);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v97 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v98 = v97[4];
  v99 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v167.fields.currentCryptoKey = v97[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v167.fields.fakeValue = v98;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v166 = v167;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v166, 0LL);
  if ( !*p_userSvtEntity
    || (v100 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[5], 0LL),
        !v99)
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v99, v100, Instance, 0LL),
        this->fields.userSvtCollectionEntity = EntityDefinitely,
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
          (int32_t)EntityDefinitely,
          v102,
          v103),
        (Instance = (int64_t)this->fields.memberItem) == 0) )
  {
LABEL_97:
    sub_1BDBAD4(Instance, v55);
  }
  v104 = *(unsigned __int8 *)(Instance + 239);
  this->fields.isConvertOverwriteImage = v104;
  if ( v104 )
  {
    v105 = this->fields.questRestrictionInfo;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(SvtId, 0LL);
    if ( !*p_memberItem || !v105 )
      goto LABEL_97;
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
           v105,
           Instance,
           (*p_memberItem)->fields.isFollower,
           0LL) )
    {
      this->fields.isConvertOverwriteImage = 0;
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v108, v109);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_97;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  v114 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v113 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v169.fields.currentCryptoKey = v114;
  *(_QWORD *)&v169.fields.fakeValue = v113;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v169, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_97;
  CostumeList_42078056 = UserServantCollectionEntity__getCostumeList_42078056(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_42078056;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_42078056, v116, v117);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v118);
  v119 = this->fields.userSvtCollectionEntity;
  if ( !v119 )
    goto LABEL_97;
  svtCommonFlag = v119->fields.svtCommonFlag;
  v121 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v121 )
    goto LABEL_97;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                   v121->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_97;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v123 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v123 )
    goto LABEL_97;
  IsChoice = UserServantEntity__IsChoice(v123, 0LL);
  v127 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v127 )
  {
    if ( !v127->max_length )
      sub_1BDBADC(IsChoice, v125, v126);
    v128 = v127->m_Items[0];
  }
  else
  {
    v128 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v128, v126);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_97;
  size = equipGrandServantEntityList->fields._size;
  v131 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v131;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0LL);
  v132 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_97;
  v133 = v132->fields._size;
  v134 = v132->fields._version + 1;
  v132->fields._size = 0;
  v132->fields._version = v134;
  if ( v133 >= 1 )
    System_Array__Clear((System_Array_o *)v132->fields._items, 0, v133, 0LL);
  v135 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_97;
  v136 = v135->fields._size;
  v137 = v135->fields._version + 1;
  v135->fields._size = 0;
  v135->fields._version = v137;
  if ( v136 >= 1 )
    System_Array__Clear((System_Array_o *)v135->fields._items, 0, v136, 0LL);
  v138 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_97;
  v139 = v138->fields._size;
  v140 = v138->fields._version + 1;
  v138->fields._size = 0;
  v138->fields._version = v140;
  if ( v139 >= 1 )
    System_Array__Clear((System_Array_o *)v138->fields._items, 0, v139, 0LL);
  v141 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_97;
  v142 = v141->fields._version + 1;
  v141->fields._size = 0;
  v141->fields._version = v142;
  ServantStatusListViewItem__SetEquipTargetIds(this, v55);
  v143 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v143 != 0LL;
  if ( !Instance )
    goto LABEL_97;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_72;
    }
    goto LABEL_97;
  }
  IsNameTrue = 0;
LABEL_72:
  v147 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v147 != 0LL;
  if ( v147 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v147, 0LL);
    v147 = (UserServantEntity_o *)*p_userSvtEntity;
    v149 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v149 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v149;
  if ( !v147 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_80;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v147, 0LL);
  v151 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v151 )
  {
LABEL_80:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_81;
  }
  v152 = BasicHelper__DecryptValue_43070292(v151->fields.limitCountSupport, 0LL);
  v153 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v152;
  if ( v153 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v153, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_81:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v144,
    v145);
  v156 = this->fields.userSvtEntity;
  if ( v156 )
  {
    v157 = UserServantEntity__OwnRandomSettingSelectedButton(v156, 0LL);
    v158 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v157;
    if ( v158 )
    {
      v159 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v158, 0LL);
      v160 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_87;
    }
    v160 = 0LL;
  }
  else
  {
    v160 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v159 = 3;
LABEL_87:
  this->fields.supportRandomSettingButtonIndex = v159;
  ServantStatusListViewItem__SetLimitCountInfo(this, v160, v155);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v161);
    byte_4B4080C = 1;
  }
  v163 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v163 = RandomLimitCountManager_TypeInfo;
  }
  if ( v163->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v162);
  ServantStatusListViewItem__ModifyInfo(this, v161);
}


void __fastcall ServantStatusListViewItem___ctor_34953472(
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
  System_Collections_Generic_List_object__o *v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *v33; // x23
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *v36; // x23
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_long__o *v39; // x23
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int64_t Instance; // x0
  __int64 v45; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v55; // q0
  struct PartyOrganizationListViewItem_o *v56; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct PartyOrganizationListViewItem_o *v64; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x21
  __int64 v68; // x22
  __int64 v69; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  ServantLimitMaster_o *v74; // x22
  int32_t v75; // w23
  struct ServantLimitEntity_o *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  ServantCommentMaster_o *v79; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // q1
  UserServantCollectionMaster_o *v85; // x22
  int64_t v86; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct PartyOrganizationListViewItem_o *v90; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_42078056; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x1
  struct UserServantCollectionEntity_o *v101; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v103; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v105; // x8
  _BOOL8 IsChoice; // x0
  __int64 v107; // x1
  const MethodInfo *v108; // x2
  struct System_Int64_array *v109; // x8
  int64_t v110; // x1
  struct UserServantCollectionEntity_o *v111; // x8
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v115; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v117; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v119; // x8
  int32_t v120; // w0
  UserServantEntity_o *v121; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v123; // x2
  UserServantEntity_o *v124; // x0
  int32_t v125; // w0
  UserServantEntity_o *v126; // x8
  int32_t v127; // w0
  UserServantEntity_o *v128; // x1
  const MethodInfo *v129; // x1
  const MethodInfo *v130; // x2
  RandomLimitCountManager_c *v131; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16

  if ( (byte_4B41335 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, partyItem);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v17);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v18);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v20);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v21);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v22);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v25);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4B41335 = 1;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v27;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v30;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v33;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v36;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v39,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v39;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v39, v40, v41);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.warBoardPartyItem = partyItem;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.warBoardPartyItem, (int32_t)partyItem, v42, v43);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
  this->fields.memberItem = MemberItem;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.memberItem, (int32_t)MemberItem, v47, v48);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v50, v51);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v55 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v56 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v55;
  if ( !v56 )
    goto LABEL_68;
  userServantEntity = v56->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v52, v53);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0LL);
  this->fields.equipIdList = EquipList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v60, v61);
  v64 = this->fields.memberItem;
  if ( !v64 )
    goto LABEL_68;
  questRestrictionInfo = v64->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v62, v63);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v69 = *(_QWORD *)&v66[5].fields.currentCryptoKey;
  v68 = *(_QWORD *)&v66[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v134.fields.currentCryptoKey = v69;
  *(_QWORD *)&v134.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v134, 0LL);
  if ( !v67 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v67,
             Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v72, v73);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v74 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v75 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[6], 0LL);
  if ( !v74 )
    goto LABEL_68;
  v76 = ServantLimitMaster__GetEntity(v74, v75, Instance, 0LL);
  this->fields.svtLimitEntity = v76;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v76, v77, v78);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v79 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_svtEntity)[1], 0LL);
  if ( !v79 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v79, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v81, v82);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v83 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v84 = v83[4];
  v85 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v133.fields.currentCryptoKey = v83[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v133.fields.fakeValue = v84;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v132 = v133;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v132, 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v86 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[5], 0LL);
  if ( !v85 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v85, v86, Instance, 0LL);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v88, v89);
  v90 = this->fields.memberItem;
  if ( !v90 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v90->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v92, v93);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(userSvtEntity->fields.limitCount, 0LL);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_42078056 = UserServantCollectionEntity__getCostumeList_42078056(
                           userSvtCollectionEntity,
                           lv,
                           Instance,
                           0LL);
  this->fields.costumeIds = CostumeList_42078056;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_42078056, v98, v99);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v100);
  v101 = this->fields.userSvtCollectionEntity;
  if ( !v101 )
    goto LABEL_68;
  svtCommonFlag = v101->fields.svtCommonFlag;
  v103 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v103 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                   v103->fields.battleVoice,
                                   0LL);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v105 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v105 )
    goto LABEL_68;
  IsChoice = UserServantEntity__IsChoice(v105, 0LL);
  v109 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v109 )
  {
    if ( !v109->max_length )
      sub_1BDBADC(IsChoice, v107, v108);
    v110 = v109->m_Items[0];
  }
  else
  {
    v110 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v110, v108);
  v111 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v111 != 0LL;
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
    sub_1BDBAD4(Instance, v45);
  }
  IsNameTrue = 0;
LABEL_43:
  v115 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v115 != 0LL;
  if ( v115 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v115, 0LL);
    v115 = (UserServantEntity_o *)*p_userSvtEntity;
    v117 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v117 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v117;
  if ( !v115 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v115, 0LL);
  v119 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v119 )
  {
LABEL_51:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_52;
  }
  v120 = BasicHelper__DecryptValue_43070292(v119->fields.limitCountSupport, 0LL);
  v121 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v120;
  if ( v121 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v121, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v112,
    v113);
  v124 = this->fields.userSvtEntity;
  if ( v124 )
  {
    v125 = UserServantEntity__OwnRandomSettingSelectedButton(v124, 0LL);
    v126 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v125;
    if ( v126 )
    {
      v127 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v126, 0LL);
      v128 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_58;
    }
    v128 = 0LL;
  }
  else
  {
    v128 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v127 = 3;
LABEL_58:
  this->fields.supportRandomSettingButtonIndex = v127;
  ServantStatusListViewItem__SetLimitCountInfo(this, v128, v123);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v129);
    byte_4B4080C = 1;
  }
  v131 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v131 = RandomLimitCountManager_TypeInfo;
  }
  if ( v131->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v130);
  ServantStatusListViewItem__ModifyInfo(this, v129);
}


void __fastcall ServantStatusListViewItem___ctor_34955508(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        bool enableBattleVoice,
        bool canMoveCombine,
        bool isGrand,
        bool isForceNotGrand,
        const MethodInfo *method)
{
  bool v15; // w23
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  System_Collections_Generic_List_object__o *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_List_object__o *v46; // x21
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_List_object__o *v49; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_List_object__o *v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_List_long__o *v55; // x21
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // x27
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x28
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int64_t Instance; // x0
  const MethodInfo *v64; // x1
  bool v65; // w8
  __int128 v66; // q1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v75; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // x21
  __int64 v77; // x23
  __int64 v78; // x28
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x28
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  ServantLimitMaster_o *v83; // x21
  int32_t v84; // w23
  struct ServantLimitEntity_o *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  ServantCommentMaster_o *v88; // x21
  int32_t v89; // w23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v93; // x8
  __int64 v94; // x21
  __int64 v95; // x23
  int32_t v96; // w0
  bool IsConvertOverwriteImage; // w0
  __int64 v98; // x20
  __int64 v99; // x21
  int32_t v100; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v101; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // q0
  __int64 v103; // x20
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // q0
  UserServantCollectionMaster_o *v108; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v109; // x8
  int64_t v110; // x21
  __int64 v111; // x23
  __int64 v112; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x20
  int32_t lv; // w21
  struct System_Int32_array *CostumeList_42078056; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  const MethodInfo *v125; // x1
  struct System_Int32_array *v126; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  struct UserServantCollectionEntity_o *v133; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v135; // x8
  __int64 v136; // x20
  __int64 v137; // x21
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  UserServantEntity_o *v142; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  __int64 v145; // x1
  const MethodInfo *v146; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v147; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // q0
  UserDeckMaster_o *v149; // x20
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // x21
  bool v151; // w8
  struct System_Int64_array *v152; // x9
  int64_t v153; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v156; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v157; // x8
  int32_t v158; // w2
  int v159; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v160; // x8
  int32_t v161; // w2
  int v162; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v163; // x8
  int32_t v164; // w2
  int v165; // w9
  struct System_Collections_Generic_List_long__o *v166; // x8
  int v167; // w9
  struct UserServantCollectionEntity_o *v168; // x8
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v172; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v174; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v176; // x8
  int32_t v177; // w0
  UserServantEntity_o *v178; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v180; // x2
  UserServantEntity_o *v181; // x0
  int32_t v182; // w0
  UserServantEntity_o *v183; // x8
  int32_t v184; // w0
  UserServantEntity_o *v185; // x1
  const MethodInfo *v186; // x1
  const MethodInfo *v187; // x2
  RandomLimitCountManager_c *v188; // x0
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // [xsp+10h] [xbp-120h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+20h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v194; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v195; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v196; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v197; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v198; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v202; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v203; // 0:x0.16

  v15 = isEnableServantQuest;
  if ( (byte_4B41336 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v16);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserDeckMaster___, v18);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v19);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Clear__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo____Clear__, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__Clear__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v26);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v28);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v30);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v31);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v32);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v33);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v34);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v35);
    sub_1BDB878(&NetworkManager_TypeInfo, v36);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v39);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v40);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v42);
    byte_4B41336 = 1;
  }
  v43 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v43;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v43, v44, v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v46;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v46, v47, v48);
  v49 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v49;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v49, v50, v51);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v52;
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v52, v53, v54);
  v55 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v55,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  this->fields.grandServantEquipTargetIdList = v55;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v55, v57, v58);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v61, v62);
  this->fields.isEnableServantQuest = v15;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  *(_BYTE *)(Instance + 173) = v15;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v65 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0LL);
    v65 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v65;
  if ( !userServant )
    goto LABEL_124;
  v66 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v198.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v198.fields.fakeValue = v66;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v197 = v198;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v197, 0LL);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_124;
  if ( Instance == userGameEntity->fields.userId )
  {
    *(_OWORD *)&this->fields.favoriteUserSvtId = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1LL;
    this->fields.pushUserSvtId = -1LL;
    this->fields.userGameEntity = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v67, v68);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v67, v68);
  this->fields.equipIdList = equipIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)equipIdList, v71, v72);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v73, v74);
  this->fields._IsGrand_k__BackingField = isGrand;
  this->fields._IsForceNotGrand_k__BackingField = isForceNotGrand;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v75 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v78 = *(_QWORD *)&v75[5].fields.currentCryptoKey;
  v77 = *(_QWORD *)&v75[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v199.fields.currentCryptoKey = v78;
  *(_QWORD *)&v199.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v199, 0LL);
  if ( !v76 )
    goto LABEL_124;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v76,
             Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v81, v82);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v83 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v84 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[6], 0LL);
  if ( !v83 )
    goto LABEL_124;
  v85 = ServantLimitMaster__GetEntity(v83, v84, Instance, 0LL);
  this->fields.svtLimitEntity = v85;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v85, v86, v87);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_124;
  v88 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_svtEntity)[1], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[7], 0LL);
  if ( !v88 )
    goto LABEL_124;
  EntityList = ServantCommentMaster__GetEntityList(v88, v89, Instance, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v91, v92);
  if ( !questRestrictionInfo )
    goto LABEL_37;
  v93 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v95 = *(_QWORD *)&v93[5].fields.currentCryptoKey;
  v94 = *(_QWORD *)&v93[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v200.fields.currentCryptoKey = v95;
  *(_QWORD *)&v200.fields.fakeValue = v94;
  v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v200, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v96, 0LL);
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( IsConvertOverwriteImage )
  {
    v99 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
    v98 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v201.fields.currentCryptoKey = v99;
    *(_QWORD *)&v201.fields.fakeValue = v98;
    v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v201, 0LL);
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(questRestrictionInfo, v100, 0, 0LL) )
LABEL_37:
      this->fields.isConvertOverwriteImage = 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v64);
    byte_4B3ED56 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v101 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_124:
    sub_1BDBAD4(Instance, v64);
  v102 = v101[4];
  v103 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v198.fields.currentCryptoKey = v101[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v198.fields.fakeValue = v102;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v196 = v198;
  if ( v103 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v196, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v106 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v107 = v106[4];
    v108 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v198.fields.currentCryptoKey = v106[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v198.fields.fakeValue = v107;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v195 = v198;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v195, 0LL);
    v109 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v110 = Instance;
    v112 = *(_QWORD *)&v109[5].fields.currentCryptoKey;
    v111 = *(_QWORD *)&v109[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v202.fields.currentCryptoKey = v112;
    *(_QWORD *)&v202.fields.fakeValue = v111;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v202, 0LL);
    if ( !v108 )
      goto LABEL_124;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v108, v110, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v114, v115);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_124;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v117, v118);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_124;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_124;
    CostumeList_42078056 = UserServantCollectionEntity__getCostumeList_42078056(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_42078056;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_42078056, v123, v124);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v125);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v104, v105);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_124;
    v126 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v126;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v126, v127, v128);
    this->fields.costumeIds = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v129, v130);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeAndOtherIds, 0, v131, v132);
  }
  v133 = this->fields.userSvtCollectionEntity;
  if ( !v133 )
    goto LABEL_124;
  svtCommonFlag = v133->fields.svtCommonFlag;
  v135 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v135 )
    goto LABEL_124;
  v137 = *(_QWORD *)&v135->fields.battleVoice.fields.currentCryptoKey;
  v136 = *(_QWORD *)&v135->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v203.fields.currentCryptoKey = v137;
  *(_QWORD *)&v203.fields.fakeValue = v136;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v203, 0LL);
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0LL;
  this->fields.servantLeaderInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v138, v139);
  this->fields.equipTargetInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v140, v141);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_124;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v142 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v142 )
    goto LABEL_124;
  Instance = UserServantEntity__IsChoice(v142, 0LL);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_124;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v147 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v148 = v147[2];
    v149 = (UserDeckMaster_o *)Instance;
    p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v198.fields.currentCryptoKey = v147[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v198.fields.fakeValue = v148;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v194 = v198;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v194, 0LL);
    if ( !v149 )
      goto LABEL_124;
    IsServantEquip = UserDeckMaster__IsEquip(v149, Instance, 0LL);
    v151 = IsServantEquip;
  }
  else
  {
    p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
    v151 = 0;
  }
  v152 = this->fields.equipIdList;
  this->fields.isUse = v151;
  if ( v152 )
  {
    if ( !v152->max_length )
      sub_1BDBADC(IsServantEquip, v145, v146);
    v153 = v152->m_Items[0];
  }
  else
  {
    v153 = 0LL;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v153, v146);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_124;
  size = equipGrandServantEntityList->fields._size;
  v156 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v156;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0LL);
  v157 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_124;
  v158 = v157->fields._size;
  v159 = v157->fields._version + 1;
  v157->fields._size = 0;
  v157->fields._version = v159;
  if ( v158 >= 1 )
    System_Array__Clear((System_Array_o *)v157->fields._items, 0, v158, 0LL);
  v160 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_124;
  v161 = v160->fields._size;
  v162 = v160->fields._version + 1;
  v160->fields._size = 0;
  v160->fields._version = v162;
  if ( v161 >= 1 )
    System_Array__Clear((System_Array_o *)v160->fields._items, 0, v161, 0LL);
  v163 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_124;
  v164 = v163->fields._size;
  v165 = v163->fields._version + 1;
  v163->fields._size = 0;
  v163->fields._version = v165;
  if ( v164 >= 1 )
    System_Array__Clear((System_Array_o *)v163->fields._items, 0, v164, 0LL);
  v166 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_124;
  v167 = v166->fields._version + 1;
  v166->fields._size = 0;
  v166->fields._version = v167;
  ServantStatusListViewItem__SetEquipTargetIds(this, v64);
  v168 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v168 != 0LL && enableTdSpeed;
  if ( !Instance )
    goto LABEL_124;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0LL);
      goto LABEL_99;
    }
    goto LABEL_124;
  }
  IsNameTrue = 0;
LABEL_99:
  v172 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v172 != 0LL;
  if ( v172 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v172, 0LL);
    v172 = (UserServantEntity_o *)*p_userSvtEntity;
    v174 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v174 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v174;
  if ( !v172 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_107;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v172, 0LL);
  v176 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v176 )
  {
LABEL_107:
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_108;
  }
  v177 = BasicHelper__DecryptValue_43070292(v176->fields.limitCountSupport, 0LL);
  v178 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v177;
  if ( v178 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v178, this->fields.costumeIds, 0LL);
  else
    RandomLimitCountList = 0LL;
LABEL_108:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v169,
    v170);
  v181 = this->fields.userSvtEntity;
  if ( v181 )
  {
    v182 = UserServantEntity__OwnRandomSettingSelectedButton(v181, 0LL);
    v183 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v182;
    if ( v183 )
    {
      v184 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v183, 0LL);
      v185 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_114;
    }
    v185 = 0LL;
  }
  else
  {
    v185 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v184 = 3;
LABEL_114:
  this->fields.supportRandomSettingButtonIndex = v184;
  ServantStatusListViewItem__SetLimitCountInfo(this, v185, v180);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v186);
    byte_4B4080C = 1;
  }
  v188 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v188 = RandomLimitCountManager_TypeInfo;
  }
  if ( v188->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v187);
  ServantStatusListViewItem__ModifyInfo(this, v186);
}


void __fastcall ServantStatusListViewItem___ctor_34958656(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_object__o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *v34; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_long__o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int64_t Instance; // x0
  __int64 v45; // x1
  __int128 v46; // q1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v55; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x22
  __int64 v57; // x23
  __int64 v58; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ServantLimitMaster_o *v63; // x23
  int32_t v64; // w24
  struct ServantLimitEntity_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  ServantCommentMaster_o *v68; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // q0
  __int64 v74; // x20
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // q0
  UserServantCollectionMaster_o *v79; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  int64_t v81; // x24
  __int64 v82; // x25
  __int64 v83; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_42078056; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x1
  struct System_Int32_array *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct UserServantCollectionEntity_o *v104; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v106; // x8
  __int64 v107; // x23
  __int64 v108; // x24
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  UserServantEntity_o *v113; // x8
  const MethodInfo *v114; // x2
  struct UserServantCollectionEntity_o *v115; // x8
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v119; // x8
  int32_t v120; // w0
  UserServantEntity_o *v121; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v123; // x2
  UserServantEntity_o *v124; // x0
  int32_t v125; // w0
  UserServantEntity_o *v126; // x8
  int32_t v127; // w0
  UserServantEntity_o *v128; // x1
  const MethodInfo *v129; // x1
  const MethodInfo *v130; // x2
  RandomLimitCountManager_c *v131; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  if ( (byte_4B41337 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, userServant);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v14);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v15);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v17);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v18);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1BDB878(&NetworkManager_TypeInfo, v20);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v23);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B41337 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v25;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v28;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v31;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v34;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v34, v35, v36);
  v37 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v37;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v37, v38, v39);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v42, v43);
  this->fields.isEnableServantQuest = 0;
  if ( !userServant )
    goto LABEL_77;
  v46 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v136.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v136.fields.fakeValue = v46;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v135 = v136;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v135, 0LL);
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
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v47, v48);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v47, v48);
  this->fields.equipIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v51, v52);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v53, v54);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v55 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v58 = *(_QWORD *)&v55[5].fields.currentCryptoKey;
  v57 = *(_QWORD *)&v55[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v137.fields.currentCryptoKey = v58;
  *(_QWORD *)&v137.fields.fakeValue = v57;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v137, 0LL);
  if ( !v56 )
    goto LABEL_77;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v56,
             Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v61, v62);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v63 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[5], 0LL);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v64 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userSvtEntity)[6], 0LL);
  if ( !v63 )
    goto LABEL_77;
  v65 = ServantLimitMaster__GetEntity(v63, v64, Instance, 0LL);
  this->fields.svtLimitEntity = v65;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v65, v66, v67);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_77;
  v68 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_svtEntity)[1], 0LL);
  if ( !v68 )
    goto LABEL_77;
  EntityList = ServantCommentMaster__GetEntityList(v68, Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v70, v71);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v45);
    byte_4B3ED56 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v72 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v73 = v72[4];
  v74 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v136.fields.currentCryptoKey = v72[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v136.fields.fakeValue = v73;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v134 = v136;
  if ( v74 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v134, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v77 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v78 = v77[4];
    v79 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v136.fields.currentCryptoKey = v77[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v136.fields.fakeValue = v78;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v133 = v136;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v133, 0LL);
    v80 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v81 = Instance;
    v83 = *(_QWORD *)&v80[5].fields.currentCryptoKey;
    v82 = *(_QWORD *)&v80[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v138.fields.currentCryptoKey = v83;
    *(_QWORD *)&v138.fields.fakeValue = v82;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v138, 0LL);
    if ( !v79 )
      goto LABEL_77;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v79, v81, Instance, 0LL);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v85, v86);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v88, v89);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_77;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                 userSvtEntity->fields.limitCount,
                 0LL);
    if ( !userSvtCollectionEntity )
      goto LABEL_77;
    CostumeList_42078056 = UserServantCollectionEntity__getCostumeList_42078056(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0LL);
    this->fields.costumeIds = CostumeList_42078056;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_42078056, v94, v95);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v96);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v75, v76);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    v97 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0LL);
    this->fields.commandCodeIdList = v97;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v97, v98, v99);
    this->fields.costumeIds = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v100, v101);
    this->fields.costumeAndOtherIds = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeAndOtherIds, 0, v102, v103);
  }
  v104 = this->fields.userSvtCollectionEntity;
  if ( !v104 )
    goto LABEL_77;
  svtCommonFlag = v104->fields.svtCommonFlag;
  v106 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v106 )
    goto LABEL_77;
  v108 = *(_QWORD *)&v106->fields.battleVoice.fields.currentCryptoKey;
  v107 = *(_QWORD *)&v106->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v139.fields.currentCryptoKey = v108;
  *(_QWORD *)&v139.fields.fakeValue = v107;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v139, 0LL);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v109, v110);
  this->fields.equipTargetInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v111, v112);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_77;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v113 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v113 )
    goto LABEL_77;
  this->fields.isChoice = UserServantEntity__IsChoice(v113, 0LL);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v114);
  v115 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v115 != 0LL;
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
    sub_1BDBAD4(Instance, v45);
  }
  IsNameTrue = 0;
LABEL_57:
  v119 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v119 )
  {
    v120 = BasicHelper__DecryptValue_43070292(v119->fields.limitCountSupport, 0LL);
    v121 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v120;
    if ( v121 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v121, this->fields.costumeIds, 0LL);
    else
      RandomLimitCountList = 0LL;
  }
  else
  {
    RandomLimitCountList = 0LL;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v116,
    v117);
  v124 = this->fields.userSvtEntity;
  if ( v124 )
  {
    v125 = UserServantEntity__OwnRandomSettingSelectedButton(v124, 0LL);
    v126 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v125;
    if ( v126 )
    {
      v127 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v126, 0LL);
      v128 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_68;
    }
    v128 = 0LL;
  }
  else
  {
    v128 = 0LL;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v127 = 3;
LABEL_68:
  this->fields.supportRandomSettingButtonIndex = v127;
  ServantStatusListViewItem__SetLimitCountInfo(this, v128, v123);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v129);
    byte_4B4080C = 1;
  }
  v131 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v131 = RandomLimitCountManager_TypeInfo;
  }
  if ( v131->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v130);
  ServantStatusListViewItem__ModifyInfo(this, v129);
}


void __fastcall ServantStatusListViewItem___ctor_34960892(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v7; // w23
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_object__o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *v34; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_long__o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct UserServantCollectionEntity_o *v59; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x22
  __int64 v61; // x23
  __int64 v62; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  ServantLimitMaster_o *v67; // x23
  struct ServantLimitEntity_o *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  ServantCommentMaster_o *v71; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Int32_array *CostumeList; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x1
  BalanceConfig_c *v82; // x0
  struct UserServantCollectionEntity_o *v83; // x8
  ServantEntity_o *v84; // x22
  __int64 v85; // x23
  __int64 v86; // x24
  int32_t v87; // w23
  int32_t maxLimitCount; // w24
  struct UserServantCollectionEntity_o *v89; // x8
  ServantEntity_o *svtEntity; // x22
  __int64 v91; // x23
  __int64 v92; // x24
  int32_t v93; // w23
  int32_t v94; // w24
  struct UserServantCollectionEntity_o *v95; // x8
  struct System_Int32_array *CardSelectList; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct UserServantCollectionEntity_o *v99; // x8
  ServantEntity_o *v100; // x22
  struct UserServantCollectionEntity_o *v101; // x8
  struct System_Int32_array *SelectList; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct UserServantCollectionEntity_o *v105; // x8
  ServantEntity_o *v106; // x22
  struct UserServantCollectionEntity_o *v107; // x8
  struct System_Int32_array *v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v115; // x8
  struct System_Int32_array *v116; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v120; // x8
  struct System_Int32_array *v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  const MethodInfo *v124; // x2
  struct UserServantCollectionEntity_o *v125; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v127; // x8
  const MethodInfo *v128; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  v7 = isEnableServantQuest;
  if ( (byte_4B41338 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, userSvtCollectionEntity);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v17);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v18);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v20);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v21);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v22);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B41338 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v25;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v28;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v31;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v34;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v34, v35, v36);
  v37 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v37;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v37, v38, v39);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v42, v43);
  this->fields.isEnableServantQuest = v7;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_60;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v46, v47);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v46, v47);
  this->fields.equipIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v48, v49);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v50, v51);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v53,
    v54);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v55, v56);
  this->fields.equipTargetInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v57, v58);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v59 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v62 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
  v61 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v130.fields.currentCryptoKey = v62;
  *(_QWORD *)&v130.fields.fakeValue = v61;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v130, 0LL);
  if ( !v60 )
    goto LABEL_60;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v60,
             (int32_t)Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v65, v66);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v67 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  if ( !v67 )
    goto LABEL_60;
  v68 = ServantLimitMaster__GetEntity(v67, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0LL);
  this->fields.svtLimitEntity = v68;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v68, v69, v70);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_60;
  v71 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                (*p_svtEntity)[1],
                                0LL);
  if ( !v71 )
    goto LABEL_60;
  EntityList = ServantCommentMaster__GetEntityList(v71, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v73, v74);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v76, v77);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v79, v80);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v81);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v83 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v84 = (ServantEntity_o *)*p_svtEntity;
      v86 = *(_QWORD *)&v83->fields.svtId.fields.currentCryptoKey;
      v85 = *(_QWORD *)&v83->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v131.fields.currentCryptoKey = v86;
      *(_QWORD *)&v131.fields.fakeValue = v85;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v131, 0LL);
      if ( *p_userSvtCollectionEntity )
      {
        v87 = (int)Instance;
        maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v87, maxLimitCount, 1, 0, 0LL);
        if ( v84 )
        {
          Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                        v84,
                                        (int32_t)Instance,
                                        0LL);
          goto LABEL_33;
        }
      }
    }
LABEL_60:
    sub_1BDBAD4(Instance, v45);
  }
  v82 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v82 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)(unsigned int)v82->static_fields->OtherImageLimitCount;
LABEL_33:
  v89 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v89 )
    goto LABEL_60;
  svtEntity = this->fields.svtEntity;
  v92 = *(_QWORD *)&v89->fields.svtId.fields.currentCryptoKey;
  v91 = *(_QWORD *)&v89->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v132.fields.currentCryptoKey = v92;
  *(_QWORD *)&v132.fields.fakeValue = v91;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v132, 0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v93 = (int)Instance;
  v94 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v93, v94, 1, 0, 0LL);
  if ( !svtEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                svtEntity,
                                (int32_t)Instance,
                                0LL);
  v95 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v95 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v95->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v97, v98);
  v99 = this->fields.userSvtCollectionEntity;
  if ( !v99 )
    goto LABEL_60;
  v100 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v99->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  if ( !v100 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v100, (int32_t)Instance, 0LL);
  v101 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v101 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v101->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v103, v104);
  v105 = this->fields.userSvtCollectionEntity;
  if ( !v105 )
    goto LABEL_60;
  v106 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v105->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0LL);
  if ( !v106 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v106, (int32_t)Instance, 0LL);
  v107 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v107 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v107->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v108 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.commandCardSelectList = v108;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v108, v109, v110);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v112, v113);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v115 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v115 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v115->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v116 = ImageLimitCount__GetCardSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.iconSelectList = v116;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v116, v117, v118);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v120 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v120 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v120->fields.svtId,
                                0LL);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v121 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0LL);
  this->fields.portraitSelectList = v121;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v121, v122, v123);
  v125 = this->fields.userSvtCollectionEntity;
  if ( !v125 )
    goto LABEL_60;
  svtCommonFlag = v125->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v124);
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
  v127 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v127 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v128);
}


void __fastcall ServantStatusListViewItem___ctor_34963028(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v9; // w24
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_object__o *v32; // x23
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_object__o *v35; // x23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_long__o *v38; // x23
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  DataManager_o *Instance; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct UserServantCollectionEntity_o *v60; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x22
  __int64 v62; // x24
  __int64 v63; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct UserServantCollectionEntity_o *v68; // x8
  ServantLimitMaster_o *v69; // x23
  struct ServantLimitEntity_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v73; // x8
  ServantCommentMaster_o *v74; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Int32_array *CostumeList; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x1
  struct UserServantCollectionEntity_o *v85; // x8
  int32_t v86; // w22
  struct UserServantCollectionEntity_o *v87; // x8
  int32_t v88; // w0
  struct UserServantCollectionEntity_o *v89; // x8
  int32_t v90; // w0
  struct System_Int32_array *CardSelectList; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct UserServantCollectionEntity_o *v94; // x8
  int32_t v95; // w0
  struct UserServantCollectionEntity_o *v96; // x8
  int32_t v97; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  struct UserServantCollectionEntity_o *v101; // x8
  int32_t v102; // w0
  struct UserServantCollectionEntity_o *v103; // x8
  int32_t v104; // w0
  struct System_Int32_array *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v112; // x8
  int32_t v113; // w0
  struct System_Int32_array *v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v118; // x8
  int32_t v119; // w0
  struct System_Int32_array *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x2
  struct UserServantCollectionEntity_o *v124; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v126; // x8
  const MethodInfo *v127; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16

  v9 = isEnableServantQuest;
  if ( (byte_4B41339 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, userSvtCollectionEntity);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v18);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v19);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v20);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v21);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v22);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v23);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_4B41339 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v26;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v29;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v35, v36, v37);
  v38 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v38,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v38;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v38, v39, v40);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v43, v44);
  this->fields.isEnableServantQuest = v9;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v47, v48);
  }
  this->fields.userSvtEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v47, v48);
  this->fields.equipIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v49, v50);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v51, v52);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v54,
    v55);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v56, v57);
  this->fields.equipTargetInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v58, v59);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v60 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v63 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
  v62 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v129.fields.currentCryptoKey = v63;
  *(_QWORD *)&v129.fields.fakeValue = v62;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v129, 0LL);
  if ( !v61 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v61,
             (int32_t)Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v66, v67);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v68 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v69 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v68->fields.svtId,
                                0LL);
  if ( !v69 )
    goto LABEL_35;
  v70 = ServantLimitMaster__GetEntity(v69, (int32_t)Instance, limitCount, 0LL);
  this->fields.svtLimitEntity = v70;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v70, v71, v72);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v73 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v74 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v73[1], 0LL);
  if ( !v74 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v74, (int32_t)Instance, limitCount, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v76, v77);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v79, v80);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.costumeIds = CostumeList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v82, v83);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v84);
  v85 = this->fields.userSvtCollectionEntity;
  if ( !v85 )
    goto LABEL_35;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v85->fields.svtId, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v86, limitCount, 1, 0, 0LL);
  v87 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v87 )
    goto LABEL_35;
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v87->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v88, limitCount, 1, 0, 0LL);
  v89 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v89 )
    goto LABEL_35;
  v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v89->fields.svtId, 0LL);
  CardSelectList = ImageLimitCount__GetCardSelectList(v90, limitCount, this->fields.costumeAndOtherIds, 0LL);
  this->fields.cardSelectList = CardSelectList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v92, v93);
  v94 = this->fields.userSvtCollectionEntity;
  if ( !v94 )
    goto LABEL_35;
  v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v94->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v95, limitCount, 0LL);
  v96 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v96 )
    goto LABEL_35;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v96->fields.svtId, 0LL);
  SelectList = ImageLimitCount__GetSelectList(v97, limitCount, this->fields.costumeIds, 0LL);
  this->fields.dispSelectList = SelectList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v99, v100);
  v101 = this->fields.userSvtCollectionEntity;
  if ( !v101 )
    goto LABEL_35;
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v101->fields.svtId, 0LL);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v102, limitCount, 0LL);
  v103 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v103 )
    goto LABEL_35;
  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v103->fields.svtId, 0LL);
  v105 = ImageLimitCount__GetSelectList(v104, limitCount, this->fields.costumeIds, 0LL);
  this->fields.commandCardSelectList = v105;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v105, v106, v107);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0LL);
  this->fields.commandCardParam = CommandCardParam;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v109, v110);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v112 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v112 )
    goto LABEL_35;
  v113 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v112->fields.svtId, 0LL);
  v114 = ImageLimitCount__GetCardSelectList(v113, limitCount, this->fields.costumeIds, 0LL);
  this->fields.iconSelectList = v114;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v114, v115, v116);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v118 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v118 )
    goto LABEL_35;
  v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v118->fields.svtId, 0LL);
  v120 = ImageLimitCount__GetSelectList(v119, limitCount, this->fields.costumeIds, 0LL);
  this->fields.portraitSelectList = v120;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v120, v121, v122);
  v124 = this->fields.userSvtCollectionEntity;
  if ( !v124 )
    goto LABEL_35;
  svtCommonFlag = v124->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v123);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_35:
    sub_1BDBAD4(Instance, v46);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0LL);
  v126 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v126 != 0LL && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v127);
}


void __fastcall ServantStatusListViewItem___ctor_34964852(
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
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_long__o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  DataManager_o *Instance; // x0
  __int64 v54; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v55; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x21
  __int64 v57; // x22
  __int64 v58; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ServantLimitMaster_o *v63; // x22
  struct ServantLimitEntity_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  ServantCommentMaster_o *v68; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  ServantLeaderInfo_o *v77; // x8
  struct ServantLeaderInfo_o *v78; // x8
  int32_t v79; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_39456080; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  ServantLeaderInfo_o *v85; // x8
  struct ServantLeaderInfo_o *v86; // x8
  struct System_Int32_array *SelectList_39455264; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  ServantLeaderInfo_o *v90; // x8
  struct ServantLeaderInfo_o *v91; // x8
  struct System_Int32_array *v92; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct ServantLeaderInfo_o *v97; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v99; // x8
  struct ServantLeaderInfo_o *v100; // x8
  struct System_Int32_array *v101; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  ServantLeaderInfo_o *v104; // x8
  struct ServantLeaderInfo_o *v105; // x8
  struct System_Int32_array *v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // x2
  const MethodInfo *v110; // x1
  struct ServantLeaderInfo_o *v111; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v113; // x21
  __int64 v114; // x22
  __int64 v115; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v116; // x21
  __int64 v117; // x22
  __int64 v118; // x23
  Il2CppObject *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  __int64 v122; // x8
  ServantLimitMaster_o *v123; // x21
  __int64 v124; // x8
  struct ServantLimitEntity_o *v125; // x0
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  const MethodInfo *v128; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4B4133A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, servantLeaderInfo);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v15);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v16);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v18);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v19);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v20);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B4133A = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v26;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v29;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v35, v36, v37);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v38, v39);
  this->fields.userSvtEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v40, v41);
  this->fields.equipIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v42, v43);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v44, v45);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v46, v47);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, (int32_t)servantLeaderInfo, v49, v50);
  this->fields.equipTargetInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v51, v52);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v55 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v58 = *(_QWORD *)&v55[3].fields.currentCryptoKey;
  v57 = *(_QWORD *)&v55[3].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v129.fields.currentCryptoKey = v58;
  *(_QWORD *)&v129.fields.fakeValue = v57;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v129, 0LL);
  if ( !v56 )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v56,
             (int32_t)Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v61, v62);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v63 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                (*p_servantLeaderInfo)[3],
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  if ( !v63 )
    goto LABEL_59;
  v64 = ServantLimitMaster__GetEntity(v63, (int32_t)Instance, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0LL);
  this->fields.svtLimitEntity = v64;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v64, v65, v66);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v67 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_59;
  v68 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v67[1], 0LL);
  if ( !v68 )
    goto LABEL_59;
  EntityList = ServantCommentMaster__GetEntityList(v68, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v70, v71);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)Instance, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v73, v74);
  this->fields.costumeIds = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v75, v76);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v77 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v77 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v77, 0, 0LL);
  v78 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v78 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v78->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v79 = (int)Instance;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList_39456080 = ImageLimitCount__GetCardSelectList_39456080(v79, currentCryptoKey, cardLimitCount, 0LL);
  this->fields.cardSelectList = CardSelectList_39456080;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList_39456080, v83, v84);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v85 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)Instance;
  if ( !v85 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v85, 0LL);
  v86 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v86 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v86->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  SelectList_39455264 = ImageLimitCount__GetSelectList_39455264(
                          (int32_t)Instance,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0LL);
  this->fields.dispSelectList = SelectList_39455264;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList_39455264, v88, v89);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v90 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v90 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v90, 0LL);
  v91 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  if ( !v91 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v91->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v92 = ImageLimitCount__GetSelectList_39455264(
          (int32_t)Instance,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.commandCardLimitCount,
          0,
          0LL);
  this->fields.commandCardSelectList = v92;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v92, v93, v94);
  v97 = this->fields.servantLeaderInfo;
  if ( !v97 )
    goto LABEL_59;
  commandCardParam = v97->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)commandCardParam, v95, v96);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v99 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)Instance;
  if ( !v99 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v99, 0, 0LL);
  v100 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)Instance;
  if ( !v100 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v100->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v101 = ImageLimitCount__GetCardSelectList_39456080(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.iconLimitCount,
           0LL);
  this->fields.iconSelectList = v101;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v101, v102, v103);
  Instance = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !Instance )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)Instance, 0LL);
  v104 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)Instance;
  if ( !v104 )
    goto LABEL_59;
  Instance = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v104, 0LL);
  v105 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)Instance;
  if ( !v105 )
    goto LABEL_59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v105->fields.svtId,
                                0LL);
  if ( !*p_servantLeaderInfo )
    goto LABEL_59;
  v106 = ImageLimitCount__GetSelectList_39455264(
           (int32_t)Instance,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.portraitLimitCount,
           0,
           0LL);
  this->fields.portraitSelectList = v106;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v106, v107, v108);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v109);
  ServantStatusListViewItem__SetEquipTargetIds(this, v110);
  v111 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v111 )
    goto LABEL_59;
  equipTarget1 = v111->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v114 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v113 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v130.fields.currentCryptoKey = v114;
    *(_QWORD *)&v130.fields.fakeValue = v113;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v130, 0LL) >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v115 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v115 )
          {
            v116 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            v118 = *(_QWORD *)(v115 + 56);
            v117 = *(_QWORD *)(v115 + 64);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v131.fields.currentCryptoKey = v118;
            *(_QWORD *)&v131.fields.fakeValue = v117;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v131, 0LL);
            if ( v116 )
            {
              v119 = DataMasterBase_object__object__int___GetEntity(
                       v116,
                       (int32_t)Instance,
                       (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v119;
              sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntity, (int32_t)v119, v120, v121);
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v122 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v122 )
                  {
                    v123 = (ServantLimitMaster_o *)Instance;
                    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v122 + 56),
                                                  0LL);
                    if ( *p_servantLeaderInfo )
                    {
                      v124 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v124 )
                      {
                        if ( v123 )
                        {
                          v125 = ServantLimitMaster__GetEntity(v123, (int32_t)Instance, *(_DWORD *)(v124 + 72), 0LL);
                          this->fields.equipSvtLimitEntity = v125;
                          sub_1BDB81C(
                            (CGThumbnailListItem_o *)&this->fields.equipSvtLimitEntity,
                            (int32_t)v125,
                            v126,
                            v127);
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
      sub_1BDBAD4(Instance, v54);
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
  ServantStatusListViewItem__ModifyInfo(this, v128);
}


void __fastcall ServantStatusListViewItem___ctor_34966928(
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
  bool v22; // w25
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_object__o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_long__o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct EquipTargetInfo_o **p_equipTargetInfo; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *Instance; // x0
  __int64 v54; // x1
  struct EquipTargetInfo_o *v55; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x20
  __int64 v57; // x22
  __int64 v58; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x20
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ServantLimitMaster_o *v63; // x22
  struct ServantLimitEntity_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  ServantCommentMaster_o *v68; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // x2
  const MethodInfo *v89; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_4B4133B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCommentMaster___, equipTargetInfo);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v14);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v15);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v17);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v18);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B4133B = 1;
  }
  v22 = isNpcFollowerServantEquip;
  v23 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v26;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v29;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v35, v36, v37);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v38, v39);
  this->fields.userSvtEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v40, v41);
  this->fields.equipIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v42, v43);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v44, v45);
  this->fields.userSvtCollectionEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v46, v47);
  this->fields.servantLeaderInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v48, v49);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, (int32_t)equipTargetInfo, v51, v52);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v22;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v55 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v58 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v90.fields.currentCryptoKey = v58;
  *(_QWORD *)&v90.fields.fakeValue = v57;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v90, 0LL);
  if ( !v56 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v56,
             (int32_t)Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v61, v62);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v63 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                               (*p_equipTargetInfo)->fields.svtId,
                               0LL);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  if ( !v63 )
    goto LABEL_16;
  v64 = ServantLimitMaster__GetEntity(v63, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0LL);
  this->fields.svtLimitEntity = v64;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v64, v65, v66);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (v67 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity) == 0LL)
    || (v68 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v67[1], 0LL),
        !v68) )
  {
LABEL_16:
    sub_1BDBAD4(Instance, v54);
  }
  EntityList = ServantCommentMaster__GetEntityList(v68, (int32_t)Instance, -1, 0, 0, 0, 0LL);
  this->fields.svtCommentEntityList = EntityList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v70, v71);
  this->fields.commandCodeIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v72, v73);
  this->fields.costumeIds = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v74, v75);
  this->fields.cardSelectList = 0LL;
  *(_QWORD *)&this->fields.cardLimitCount = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cardSelectList, 0, v76, v77);
  this->fields.dispSelectList = 0LL;
  *(_QWORD *)&this->fields.dispLimitCount = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dispSelectList, 0, v78, v79);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0LL;
  this->fields.commandCardSelectList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, 0, v80, v81);
  this->fields.commandCardParam = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardParam, 0, v82, v83);
  *(_QWORD *)&this->fields.iconLimitCount = 0LL;
  this->fields.iconSelectList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconSelectList, 0, v84, v85);
  *(_QWORD *)&this->fields.portraitLimitCount = 0LL;
  this->fields.portraitSelectList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, 0, v86, v87);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0LL, v88);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v89);
}


void __fastcall ServantStatusListViewItem___ctor_34968152(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_long__o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x21
  __int64 v45; // x22
  __int64 v46; // x23
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B4133C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, commandCode);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v13);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v15);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v16);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v17);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4B4133C = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v20;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v26;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v29;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v32,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v32, v33, v34);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.userGameEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v35, v36);
  this->fields.userCommandCodeEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, 0, v37, v38);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)commandCode, v39, v40);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v46 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v45 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v46;
  *(_QWORD *)&v49.fields.fakeValue = v45;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v49, 0LL);
  if ( !v44 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v44,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_32E1E88 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity, 0, v47, v48);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_1BDBAD4(Instance, v42);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0LL);
}


void __fastcall ServantStatusListViewItem___ctor_34968932(
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
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_long__o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int64_t Instance; // x0
  __int64 v44; // x1
  __int128 v45; // q1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v49; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x21
  __int64 v51; // x22
  __int64 v52; // x23
  Il2CppObject *Entity; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x21
  struct UserCommandCodeEntity_o *v58; // x8
  __int128 v59; // q0
  __int64 v60; // x21
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct UserCommandCodeEntity_o *v63; // x8
  __int128 v64; // q0
  UserCommandCodeCollectionMaster_o *v65; // x21
  struct UserCommandCodeEntity_o *v66; // x8
  int64_t v67; // x22
  __int64 v68; // x23
  __int64 v69; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x0
  int32_t v71; // w1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v73; // x8
  struct UserCommandCodeEntity_o *v74; // x8
  __int128 v75; // q0
  UserServantCommandCodeMaster_o *v76; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4B4133D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCode);
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v14);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v15);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v17);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v18);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1BDB878(&NetworkManager_TypeInfo, v20);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_4B4133D = 1;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v24;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v27;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v30;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v33;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v36;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v36, v37, v38);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v41, v42);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_46;
  v45 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v45;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v81 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v81, 0LL);
  if ( !p_fields->userGameEntity )
    goto LABEL_46;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v46, v47);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, (int32_t)userCommandCode, v46, v47);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v49 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v52 = *(_QWORD *)&v49->fields.commandCodeId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&v49->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v83.fields.currentCryptoKey = v52;
  *(_QWORD *)&v83.fields.fakeValue = v51;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v83, 0LL);
  if ( !v50 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v50,
             Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v54, v55);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_46;
  v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
               userCommandCodeEntity->fields.commandCodeId,
               0LL);
  if ( !v57 )
    goto LABEL_46;
  DataMasterBase_object__object__int___TryGetEntity(
    v57,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_32E1E88 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v44);
    byte_4B3ED56 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v58 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v59 = *(_OWORD *)&v58->fields.userId.fields.fakeValue;
  v60 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v58->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v59;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v80 = v82;
  if ( v60 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v80, 0LL) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v63 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v64 = *(_OWORD *)&v63->fields.userId.fields.fakeValue;
        v65 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v63->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v82.fields.fakeValue = v64;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v79 = v82;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v79, 0LL);
        v66 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v67 = Instance;
          v69 = *(_QWORD *)&v66->fields.commandCodeId.fields.currentCryptoKey;
          v68 = *(_QWORD *)&v66->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v84.fields.currentCryptoKey = v69;
          *(_QWORD *)&v84.fields.fakeValue = v68;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v84, 0LL);
          if ( v65 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v65, v67, Instance, 0LL);
            v71 = (int)EntityDefinitely;
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_46:
    sub_1BDBAD4(Instance, v44);
  }
  this->fields.userCommandCodeCollectionEntity = 0LL;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  v71 = 0;
LABEL_37:
  sub_1BDB81C((CGThumbnailListItem_o *)p_userCommandCodeCollectionEntity, v71, v61, v62);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0LL);
  v73 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v73 )
    goto LABEL_46;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v73, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v74 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v75 = *(_OWORD *)&v74->fields.id.fields.fakeValue;
  v76 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v74->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v82.fields.fakeValue = v75;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v78 = v82;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v78, 0LL);
  if ( !v76 )
    goto LABEL_46;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v76, Instance, 0LL);
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


void __fastcall ServantStatusListViewItem___ctor_34970444(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_long__o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v44; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x20
  __int64 v46; // x21
  __int64 v47; // x22
  Il2CppObject *Entity; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B4133E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, userCommandCodeCollection);
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, v5);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo_____ctor__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v13);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_1BDB878(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo, v15);
    sub_1BDB878(&System_Collections_Generic_List_SkillInfo____TypeInfo, v16);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v17);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4B4133E = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v20;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v26;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v29;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v32,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v32, v33, v34);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v37, v38);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, 0, v41, v42);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v41,
    v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v44 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v47 = *(_QWORD *)&v44->fields.commandCodeId.fields.currentCryptoKey;
  v46 = *(_QWORD *)&v44->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v47;
  *(_QWORD *)&v53.fields.fakeValue = v46;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v53, 0LL);
  if ( !v45 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v45,
             (int32_t)Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v49, v50);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v52 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0LL),
        !v52)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v52,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1BDBAD4(Instance, v40);
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
  __int64 v30; // x2
  struct System_String_array *transformedPassiveSkillExplanationMessageList; // x8
  CGThumbnailListItem_o *v32; // x25
  System_String_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4B4136F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_SkillLvMaster___, isTransformed);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BDB878(&LocalizationManager_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1BDB878(&StringLiteral_10099/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, v14);
    byte_4B4136F = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
    v20 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
    v22 = 480LL;
    if ( isTransformed )
      v22 = 632LL;
    v23 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&this->klass + v22);
    if ( v23 )
    {
      if ( !v20
        || (System_Collections_Generic_List_int___AddRange(
              v20,
              v23,
              (const MethodInfo_36B8FAC *)Method_System_Collections_Generic_List_int__AddRange__),
            (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
      {
LABEL_29:
        sub_1BDBAD4(Instance, v23);
      }
      NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                         (PartyOrganizationUtility_o *)Instance,
                                                                                         (System_Collections_Generic_IEnumerable_int__o *)v20,
                                                                                         FriendshipUpCampaignInfo,
                                                                                         0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10099/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0LL);
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
                   (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
          Instance = (Il2CppObject *)System_Linq_Enumerable__Contains_int_(
                                       NeedAddAnnotationSkillIds,
                                       Item,
                                       (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
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
              sub_1BDBADC(Instance, v23, v30);
            v32 = (CGThumbnailListItem_o *)((char *)transformedPassiveSkillExplanationMessageList + v28);
            v33 = System_String__Concat_62572260(
                    *(System_String_o **)((char *)&transformedPassiveSkillExplanationMessageList->obj.klass + v28),
                    v26,
                    0LL);
            v32->klass = (CGThumbnailListItem_c *)v33;
            sub_1BDB81C(v32, (int32_t)v33, v34, v35);
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

  if ( (byte_4B41341 & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusListViewItem_LimitCountCache_TypeInfo, ignoreRandomSettings);
    byte_4B41341 = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1BDBAC4(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0LL);
  this->fields.currentLimitCountCache = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.currentLimitCountCache, (int32_t)v5, v6, v7);
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
      sub_1BDBAD4(userSvtEntity, v9);
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
  sub_1BDB81C(
    (CGThumbnailListItem_o *)idList,
    (int32_t)appendPassiveSkillIdList,
    (int32_t)titleList,
    (const MethodInfo *)explanationList);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_1BDB81C((CGThumbnailListItem_o *)titleList, (int32_t)appendPassiveSkillTitleMessageList, v14, v15);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_1BDB81C((CGThumbnailListItem_o *)explanationList, (int32_t)appendPassiveSkillExplanationMessageList, v17, v18);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_1BDB81C((CGThumbnailListItem_o *)releaseStateList, (int32_t)appendPassiveSkillReleaseStateList, v20, v21);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_1BDB81C((CGThumbnailListItem_o *)lvList, (int32_t)appendPassiveSkillLvList, v23, v24);
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

  if ( (byte_4B4136E & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, *(_QWORD *)&targetDispLimitCount);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_4B4136E = 1;
  }
  v10 = 0LL;
  titleList = 0LL;
  idList = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
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
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( svtEntity && userSvtEntity )
    {
      UserServantEntity__getPassiveSkillInfo(
        userSvtEntity,
        &idList,
        &titleList,
        &v10,
        targetDispLimitCount,
        *((_QWORD *)svtEntity + 14),
        0LL);
      return idList;
    }
LABEL_15:
    sub_1BDBAD4(svtEntity, v6);
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
      sub_1BDBAD4(this, checkTransform);
  }
  return TransformedServant_k__BackingField->fields.cardIds;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItem__GetEquipAtkByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4B4135B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, *(_QWORD *)&index);
    byte_4B4135B = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._size;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1BDBAD4(equipUserGrandServantEntityList, *(_QWORD *)&index);
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.servantLeaderInfo;
  if ( equipUserGrandServantEntityList )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                                                     (ServantLeaderInfo_o *)equipUserGrandServantEntityList,
                                                                                     index,
                                                                                     0LL);
    if ( equipUserGrandServantEntityList )
      LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[2].monitor;
  }
  return (int)equipUserGrandServantEntityList;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItem__GetEquipCostByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x0

  if ( (byte_4B4135D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, *(_QWORD *)&index);
    byte_4B4135D = 1;
  }
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_9;
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               equipGrandServantEntityList,
                                                                               index,
                                                                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
  if ( equipGrandServantEntityList )
  {
    equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
    if ( equipGrandServantEntityList )
    {
      equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   equipGrandServantEntityList,
                                                                                   index,
                                                                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
      if ( equipGrandServantEntityList )
      {
        LODWORD(equipGrandServantEntityList) = equipGrandServantEntityList[3].fields._syncRoot;
        return (int)equipGrandServantEntityList;
      }
    }
LABEL_9:
    sub_1BDBAD4(equipGrandServantEntityList, *(_QWORD *)&index);
  }
  return (int)equipGrandServantEntityList;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItem__GetEquipExpByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserGrandServantEntityList; // x0
  ServantLeaderInfo_o *Item; // x0
  __int64 v7; // x1

  if ( (byte_4B41360 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, *(_QWORD *)&index);
    byte_4B41360 = 1;
  }
  equipUserGrandServantEntityList = this->fields.equipUserGrandServantEntityList;
  if ( equipUserGrandServantEntityList )
  {
    Item = (ServantLeaderInfo_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)equipUserGrandServantEntityList,
                                    index,
                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    if ( !Item )
      sub_1BDBAD4(0LL, v7);
    LODWORD(Item) = HIDWORD(Item->fields.afterTransformSvtInfo);
  }
  else
  {
    Item = this->fields.servantLeaderInfo;
    if ( Item )
    {
      Item = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(Item, index, 0LL);
      if ( Item )
        LODWORD(Item) = Item->fields.atk;
    }
  }
  return (int)Item;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusListViewItem__GetEquipExpInfoByIndex(
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

  if ( (byte_4B41361 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, *(_QWORD *)&index);
    byte_4B41361 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getExpInfo(
                 (UserServantEntity_o *)equipUserGrandServantEntityList,
                 exp,
                 lateExp,
                 barExp,
                 0LL);
    }
LABEL_12:
    sub_1BDBAD4(equipUserGrandServantEntityList, *(_QWORD *)&index);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(servantLeaderInfo, index, 0LL);
    if ( EquipTargetInfoByEquipIdx )
      return EquipTargetInfo__getExpInfo(EquipTargetInfoByEquipIdx, exp, lateExp, barExp, 0LL);
  }
  *lateExp = 0;
  *exp = 0;
  *barExp = 0.0;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItem__GetEquipHpByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4B4135C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, *(_QWORD *)&index);
    byte_4B4135C = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._version;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1BDBAD4(equipUserGrandServantEntityList, *(_QWORD *)&index);
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.servantLeaderInfo;
  if ( equipUserGrandServantEntityList )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                                                     (ServantLeaderInfo_o *)equipUserGrandServantEntityList,
                                                                                     index,
                                                                                     0LL);
    if ( equipUserGrandServantEntityList )
      LODWORD(equipUserGrandServantEntityList) = HIDWORD(equipUserGrandServantEntityList[2].klass);
  }
  return (int)equipUserGrandServantEntityList;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantStatusListViewItem__GetEquipIdByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x0

  if ( (byte_4B41362 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Item__, *(_QWORD *)&index);
    byte_4B41362 = 1;
  }
  grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
  if ( !grandServantEquipTargetIdList )
    sub_1BDBAD4(0LL, *(_QWORD *)&index);
  return System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_36BDB08 *)Method_System_Collections_Generic_List_long__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItem__GetEquipLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4B41357 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, *(_QWORD *)&index);
    byte_4B41357 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._items;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1BDBAD4(equipUserGrandServantEntityList, *(_QWORD *)&index);
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.servantLeaderInfo;
  if ( equipUserGrandServantEntityList )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                                                     (ServantLeaderInfo_o *)equipUserGrandServantEntityList,
                                                                                     index,
                                                                                     0LL);
    if ( equipUserGrandServantEntityList )
      LODWORD(equipUserGrandServantEntityList) = HIDWORD(equipUserGrandServantEntityList[1].fields._syncRoot);
  }
  return (int)equipUserGrandServantEntityList;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItem__GetEquipLimitCountByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0
  __int64 v7; // x19
  struct System_Object_array *items; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B4135A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, *(_QWORD *)&index);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B4135A = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        items = equipUserGrandServantEntityList[2].fields._items;
        v7 = *(_QWORD *)&equipUserGrandServantEntityList[2].fields._size;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v11.fields.currentCryptoKey = items;
        *(_QWORD *)&v11.fields.fakeValue = v7;
        LODWORD(servantLeaderInfo) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v11, 0LL);
        return (int)servantLeaderInfo;
      }
    }
LABEL_14:
    sub_1BDBAD4(equipUserGrandServantEntityList, *(_QWORD *)&index);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    servantLeaderInfo = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                 servantLeaderInfo,
                                                 index,
                                                 0LL);
    if ( servantLeaderInfo )
      LODWORD(servantLeaderInfo) = servantLeaderInfo->fields.exp;
  }
  return (int)servantLeaderInfo;
}


int32_t __fastcall ServantStatusListViewItem__GetEquipListCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *grandServantEquipIdList; // x8

  grandServantEquipIdList = this->fields.grandServantEquipIdList;
  if ( grandServantEquipIdList )
    return grandServantEquipIdList->max_length;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItem__GetEquipMaxLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0

  if ( (byte_4B41358 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, *(_QWORD *)&index);
    byte_4B41358 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getLevelMax((UserServantEntity_o *)equipUserGrandServantEntityList, 0LL);
    }
LABEL_12:
    sub_1BDBAD4(equipUserGrandServantEntityList, *(_QWORD *)&index);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo
    && (EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(servantLeaderInfo, index, 0LL)) != 0LL )
  {
    return EquipTargetInfo__getLevelMax(EquipTargetInfoByEquipIdx, 0LL);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantStatusListViewItem__GetEquipServantByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x0

  if ( (byte_4B41356 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, *(_QWORD *)&index);
    byte_4B41356 = 1;
  }
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    sub_1BDBAD4(0LL, *(_QWORD *)&index);
  return (ServantEntity_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)equipGrandServantEntityList,
                              index,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
  sub_1BDB81C((CGThumbnailListItem_o *)skillInfoList, (int32_t)equipSkillInfoList, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItem__GetEquipSkillInfoByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkillInfo____o *grandServantSkillInfoList; // x0
  SkillInfo_array *Item; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B41363 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo____get_Item__, *(_QWORD *)&index);
    byte_4B41363 = 1;
  }
  grandServantSkillInfoList = this->fields.grandServantSkillInfoList;
  if ( !grandServantSkillInfoList )
    sub_1BDBAD4(0LL, *(_QWORD *)&index);
  Item = (SkillInfo_array *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)grandServantSkillInfoList,
                              index,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_SkillInfo____get_Item__);
  *skillInfoList = Item;
  sub_1BDB81C((CGThumbnailListItem_o *)skillInfoList, (int32_t)Item, v9, v10);
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

  if ( (byte_4B41367 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_FriendshipMaster___, rank);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B41367 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v26, 0LL);
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
    sub_1BDBAD4(Instance, v15);
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

  if ( (byte_4B41370 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventCampaignMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v9);
    sub_1BDB878(&EventDropUpValInfo_TypeInfo, v10);
    sub_1BDB878(&FunctionEntity_TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, v15);
    sub_1BDB878(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v16);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    byte_4B41370 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v18 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 14),
               0LL);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v43 = v42;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v22 )
        break;
      current = v43.fields._current;
      if ( !v43.fields._current )
        sub_1BDBAD4(v22, v23);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v43.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v26 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v26 )
          sub_1BDBAD4(0LL, v27);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v26, svtId, 0LL);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL) )
        {
          v29 = sub_1BDBAC4(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v29, 0LL);
          if ( !v29 )
            sub_1BDBAD4(v30, v31);
          *(_QWORD *)(v29 + 24) = 111LL;
          v32 = (EventDropUpValInfo_o *)sub_1BDBAC4(EventDropUpValInfo_TypeInfo);
          EventDropUpValInfo___ctor(v32, 0, (FunctionEntity_o *)v29, 0LL);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0LL);
          if ( !v32 )
            sub_1BDBAD4(OnlyMaxFuncGroupId, v34);
          v32->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v18 )
            sub_1BDBAD4(OnlyMaxFuncGroupId, v34);
          items = v18->fields._items;
          v38 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1BDBAD4(OnlyMaxFuncGroupId, v34);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v32,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v32;
            sub_1BDB81C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v32, v35, v36);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v18 )
LABEL_35:
    sub_1BDBAD4(Instance, v21);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v18,
                                       (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
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
  sub_1BDB81C((CGThumbnailListItem_o *)tdInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isTdResult;
}


bool __fastcall ServantStatusListViewItem__GetNpInfo_34982668(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B41366 & 1) == 0 )
  {
    sub_1BDB878(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4B41366 = 1;
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
      sub_1BDBAD4(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1BDBAC4(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0LL);
    *tdInfo = v9;
    sub_1BDB81C((CGThumbnailListItem_o *)tdInfo, (int32_t)v9, v10, v11);
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
    sub_1BDB81C(
      (CGThumbnailListItem_o *)idList,
      (int32_t)transformedPassiveSkillIdList,
      (int32_t)titleList,
      (const MethodInfo *)explanationList);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_1BDB81C((CGThumbnailListItem_o *)titleList, (int32_t)transformedPassiveSkillTitleMessageList, v12, v13);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.transformedPassiveSkillExplanationMessageList;
  }
  else
  {
    passiveSkillIdList = this->fields.passiveSkillIdList;
    *idList = passiveSkillIdList;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)idList,
      (int32_t)passiveSkillIdList,
      (int32_t)titleList,
      (const MethodInfo *)explanationList);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_1BDB81C((CGThumbnailListItem_o *)titleList, (int32_t)passiveSkillTitleMessageList, v19, v20);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v21 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1BDB81C((CGThumbnailListItem_o *)explanationList, (int32_t)v21, v14, v15);
}


void __fastcall ServantStatusListViewItem__GetPassiveSkillInfo_34982172(
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

  if ( (byte_4B41365 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, idList);
    sub_1BDB878(&int___TypeInfo, v11);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_1BDB878(&string___TypeInfo, v13);
    byte_4B41365 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0LL) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( svtEntity && userSvtEntity )
      {
        UserServantEntity__getPassiveSkillInfo(
          userSvtEntity,
          idList,
          titleList,
          explanationList,
          dispLimitCount,
          *((_QWORD *)svtEntity + 14),
          0LL);
        return;
      }
LABEL_17:
      sub_1BDBAD4(svtEntity, idList);
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
    v17 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
    *idList = v17;
    sub_1BDB81C((CGThumbnailListItem_o *)idList, (int32_t)v17, v18, v19);
    v20 = (System_String_array *)sub_1BDB920(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v20;
    sub_1BDB81C((CGThumbnailListItem_o *)titleList, (int32_t)v20, v21, v22);
    v23 = (System_String_array *)sub_1BDB920(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v23;
    sub_1BDB81C((CGThumbnailListItem_o *)explanationList, (int32_t)v23, v24, v25);
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
  sub_1BDB81C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v6, checkTransform, method);
}


void __fastcall ServantStatusListViewItem__GetSkillInfo_34981760(
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

  if ( (byte_4B41364 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BDB878(&SkillInfo___TypeInfo, v7);
    byte_4B41364 = 1;
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
      v11 = (SkillInfo_array *)sub_1BDB920(SkillInfo___TypeInfo, (unsigned int)v10->static_fields->SvtSkillListMax);
      *skillInfoList = v11;
      sub_1BDB81C((CGThumbnailListItem_o *)skillInfoList, (int32_t)v11, v12, v13);
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
  ServantOverwriteStatus_o *OverwriteStatus_42125336; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  ServantLimitCountSealAfter = targetDispLimitCount;
  if ( (byte_4B4136D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, outOverwriteStatus);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v8);
    byte_4B4136D = 1;
  }
  *outOverwriteStatus = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)outOverwriteStatus, 0, targetDispLimitCount, method);
  if ( !this->fields.servantLeaderInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    OverwriteStatus_42125336 = UserServantEntity__GetOverwriteStatus_42125336(
                                 userSvtEntity,
                                 ServantLimitCountSealAfter,
                                 0LL);
LABEL_17:
    *outOverwriteStatus = OverwriteStatus_42125336;
    sub_1BDB81C((CGThumbnailListItem_o *)outOverwriteStatus, (int32_t)OverwriteStatus_42125336, v18, v19);
    return;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    OverwriteStatus_42125336 = ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0LL);
    goto LABEL_17;
  }
  if ( this->fields.isCollection )
  {
    SvtId = this->fields.userSvtCollectionEntity;
    if ( SvtId )
    {
      OverwriteStatus_42125336 = UserServantCollectionEntity__GetOverwriteStatus(SvtId, ServantLimitCountSealAfter, 0LL);
      goto LABEL_17;
    }
LABEL_19:
    sub_1BDBAD4(SvtId, v9);
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

  v2 = 592LL;
  if ( this->fields._IsTransformed_k__BackingField )
    v2 = 600LL;
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
  sub_1BDB81C((CGThumbnailListItem_o *)tdInfo, (int32_t)transformedTdInfo, (int32_t)method, v3);
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

  if ( (byte_4B41368 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___, illust);
    sub_1BDB878(&Method_DataManager_GetMasterData_CvMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_IllustratorMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11);
    sub_1BDB878(&DataManager_TypeInfo, v12);
    sub_1BDB878(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__, v13);
    sub_1BDB878(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v14);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__, v15);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v16);
    sub_1BDB878(&LocalizationManager_TypeInfo, v17);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BDB878(&StringLiteral_14792/*"UNKNOWN_NAME_ILLUST"*/, v20);
    sub_1BDB878(&StringLiteral_9322/*"NO_ENTRY_NAME_ILLUST"*/, v21);
    sub_1BDB878(&StringLiteral_1/*""*/, v22);
    byte_4B41368 = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)voice, (int32_t)StringLiteral_1/*""*/, (int32_t)voice, (const MethodInfo *)isPlayVoice);
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
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
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
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v36 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_32E1E3C *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v36 )
              {
                monitor = (System_String_o *)v36[1].monitor;
                *voice = monitor;
                sub_1BDB81C((CGThumbnailListItem_o *)voice, (int32_t)monitor, v37, v38);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1BDBAD4(Master_object, v24);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v26);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_32E1E88 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
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
        v44 = &StringLiteral_9322/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_42:
        v45 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
        LODWORD(v43) = (_DWORD)v45;
        *illust = v45;
        goto LABEL_43;
      }
    }
LABEL_41:
    v44 = &StringLiteral_14792/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v40 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_32E1E3C *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v40 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_41;
  }
  v43 = (System_String_o *)v40[1].monitor;
  *illust = v43;
LABEL_43:
  sub_1BDB81C((CGThumbnailListItem_o *)illust, (int32_t)v43, v41, v42);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusListViewItem__IsEquipByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x0
  bool v7; // cc
  __int64 v8; // x19
  struct System_Int64_array *items; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B41355 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Item__, *(_QWORD *)&index);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B41355 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
    if ( !grandServantEquipTargetIdList )
      return (char)grandServantEquipTargetIdList;
    v7 = System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_36BDB08 *)Method_System_Collections_Generic_List_long__get_Item__) <= 0;
    goto LABEL_11;
  }
  grandServantEquipTargetIdList = (System_Collections_Generic_List_long__o *)this->fields.servantLeaderInfo;
  if ( grandServantEquipTargetIdList )
  {
    grandServantEquipTargetIdList = (System_Collections_Generic_List_long__o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                                                 (ServantLeaderInfo_o *)grandServantEquipTargetIdList,
                                                                                 index,
                                                                                 0LL);
    if ( grandServantEquipTargetIdList )
    {
      items = grandServantEquipTargetIdList[1].fields._items;
      v8 = *(_QWORD *)&grandServantEquipTargetIdList[1].fields._size;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v11.fields.currentCryptoKey = items;
      *(_QWORD *)&v11.fields.fakeValue = v8;
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v11, 0LL) <= 0;
LABEL_11:
      LOBYTE(grandServantEquipTargetIdList) = !v7;
    }
  }
  return (char)grandServantEquipTargetIdList;
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
  int32_t paramLimitCount; // w8

  paramLimitCount = this->fields.paramLimitCount;
  this->fields.paramLimitCount = imageLimitCount;
  return paramLimitCount != imageLimitCount;
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
  const MethodInfo *v21; // x1

  if ( (byte_4B41342 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_1BDB878(&TreasureDvcInfo_TypeInfo, v3);
    byte_4B41342 = 1;
  }
  this->fields.isTdResult = 0;
  v4 = (TreasureDvcInfo_o *)sub_1BDBAC4(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v4, 0LL);
  this->fields.tdInfo = v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.tdInfo, (int32_t)v4, v5, v6);
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
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          *((_QWORD *)svtEntity + 14),
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
    sub_1BDBAD4(svtEntity, v8);
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
  ServantStatusListViewItem__SetGrandInfo(this, v19);
  ServantStatusListViewItem__SetTransformData(this, v20);
  ServantStatusListViewItem__SetCostumeData(this, v21);
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

  if ( (byte_4B4133F & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v4);
    sub_1BDB878(&UserServantEntity_TypeInfo, v5);
    byte_4B4133F = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
      v8 = sub_1BDBAC4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_42095292((UserServantEntity_o *)v8, userSvtEntity, 0LL);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0LL);
      if ( !v8 )
        sub_1BDBAD4(*(_QWORD *)&v10.fields.currentCryptoKey, *(_QWORD *)&v10.fields.fakeValue);
      v11 = *(_QWORD *)(v8 + 80);
      v12 = *(_QWORD *)(v8 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 208) = v10;
      *(_QWORD *)&v19.fields.currentCryptoKey = v11;
      *(_QWORD *)&v19.fields.fakeValue = v12;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v19, 0LL);
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

  if ( (byte_4B4136B & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&int___TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor___77024896, v7);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4B4136B = 1;
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
      v16 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
      v17 = v16;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_57378420(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_36B8674 *)Method_System_Collections_Generic_List_int___ctor___77024896);
      else
        System_Collections_Generic_List_int____ctor(
          v16,
          (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v17 )
      {
        items = v17->fields._items;
        method = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&svtEntity->fields.starRate + 912LL);
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
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = size + 1;
            items->m_Items[size + 1] = (int)method;
          }
          v25 = System_Collections_Generic_List_int___ToArray(
                  v17,
                  (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      v18 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, costumeIds->max_length);
      this->fields.costumeAndOtherIds = v18;
      v19 = &this->fields.costumeAndOtherIds;
      sub_1BDB81C((CGThumbnailListItem_o *)v19, (int32_t)v18, v20, v21);
      svtEntity = (ServantEntity_o *)*(v19 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v19, 0, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1BDBAD4(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0LL;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v13 = 0;
LABEL_25:
  sub_1BDB81C((CGThumbnailListItem_o *)p_costumeAndOtherIds, v13, v10, v11);
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
  if ( (byte_4B41344 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, equipUserSvtId);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    this = (ServantStatusListViewItem_o *)sub_1BDB878(&SkillInfo___TypeInfo, v14);
    byte_4B41344 = 1;
  }
  if ( equipUserSvtId >= 1 && v5->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v5->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v5->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
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
            PartyOrganizationListViewItem__SetEquipUserServantId(memberItem, equipUserSvtId, 0, 0LL);
          v5->fields.equipTargetId1 = equipUserSvtId;
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
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
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                      v45,
                                                      0LL);
              if ( v22 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                           (int32_t)this,
                           (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v5->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.equipServantEntity, (int32_t)Entity, v26, v27);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v28 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0LL);
                    v29 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v30 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                              v29[6],
                                                              0LL);
                      if ( v28 )
                      {
                        v31 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v28, v30, (int32_t)this, 0LL);
                        v5->fields.equipSvtLimitEntity = v31;
                        sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.equipSvtLimitEntity, (int32_t)v31, v32, v33);
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
          sub_1BDBAD4(this, equipUserSvtId);
        }
LABEL_39:
        sub_1BDBADC(this, equipUserSvtId, method);
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
    PartyOrganizationListViewItem__SetEquipUserServantId(v35, 0LL, 0, 0LL);
  v5->fields.equipTargetId1 = 0LL;
  v5->fields.equipUserSvtEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  v5->fields.equipServantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.equipServantEntity, 0, v36, v37);
  v5->fields.equipSvtLimitEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.equipSvtLimitEntity, 0, v38, v39);
  v40 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  v41 = sub_1BDB920(SkillInfo___TypeInfo, (unsigned int)v40->static_fields->SvtEquipSkillListMax);
  v5->fields.equipSkillInfoList = (struct SkillInfo_array *)v41;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.equipSkillInfoList, v41, v42, v43);
}


void __fastcall ServantStatusListViewItem__SetEquipTargetIds(
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_Int64_array *equipIdList; // x0
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x20
  struct System_Int64_array *v24; // x0
  __int64 v25; // x0
  int32_t v26; // w1
  struct System_Int64_array **p_grandServantEquipIdList; // x20
  System_Collections_Generic_List_long__o *v28; // x20
  SkillInfo_array *v29; // x1
  int32_t i; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *v33; // x22
  __int64 v34; // x23
  __int64 v35; // x24
  struct System_Int64_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x8
  struct System_Object_array *v42; // x9
  _QWORD *v43; // x10
  __int64 v44; // x11
  int v45; // w24
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x23
  __int64 v50; // x24
  __int64 v51; // x25
  struct System_Int64_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  struct System_Int64_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  System_Collections_Generic_List_object__o *v58; // x23
  Il2CppObject *v59; // x24
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x1
  Il2CppClass **v66; // x0
  System_Collections_Generic_List_object__o *v67; // x23
  Il2CppObject *v68; // x24
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x1
  Il2CppClass **v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x8
  CGThumbnailListItem_o *v82; // x0
  __int64 v83; // x8
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  __int64 v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  __int64 v97; // x8
  struct System_Int64_array *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  __int64 v101; // x2
  const MethodInfo *v102; // x3
  struct System_Int64_array *v103; // x8
  __int64 v104; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v106; // x23
  struct System_Int64_array *v107; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v110; // x8
  _QWORD *v111; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v113; // x8
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
  _QWORD *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x8
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  CGThumbnailListItem_o *v139; // x0
  __int64 v140; // x8
  struct System_Int64_array *grandServantEquipIdList; // x8
  __int64 v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v146; // x22
  void *v147; // x23
  Il2CppClass *v148; // x26
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  struct System_Object_array *items; // x8
  _QWORD *v152; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v154; // x1
  Il2CppClass **v155; // x0
  System_Collections_Generic_List_object__o *equipGrandServantLimitEntityList; // x21
  ServantLimitMaster_o *v157; // x22
  int32_t v158; // w23
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v164; // x1
  Il2CppClass **v165; // x0
  __int64 v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  __int64 v169; // x8
  ServantStatusListViewItem_o *v170; // x0
  UserServantEntity_o *v171; // x1
  const MethodInfo *v172; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-78h] BYREF
  SkillInfo_array *v174; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16

  if ( (byte_4B41343 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BDB878(&long___TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillInfo____Add__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantLimitEntity__Add__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v16);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v17);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    byte_4B41343 = 1;
  }
  v174 = 0LL;
  entity = 0LL;
  skillInfoList = 0LL;
  equipIdList = this->fields.equipIdList;
  if ( equipIdList && (int)equipIdList->max_length >= 2 && this->fields.userSvtEntity )
  {
    v20 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
    if ( v20 )
    {
      v23 = v20;
      v24 = (struct System_Int64_array *)sub_1BDB9B4(v20, long___TypeInfo);
      if ( !v24 || (this->fields.grandServantEquipIdList = v24, (v25 = sub_1BDB9B4(v23, long___TypeInfo)) == 0) )
      {
        sub_1BDBD94(v23);
        ServantStatusListViewItem__SetLimitCountInfo(v170, v171, v172);
        return;
      }
      v26 = v25;
      p_grandServantEquipIdList = &this->fields.grandServantEquipIdList;
    }
    else
    {
      v26 = 0;
      p_grandServantEquipIdList = &this->fields.grandServantEquipIdList;
      this->fields.grandServantEquipIdList = 0LL;
    }
    sub_1BDB81C((CGThumbnailListItem_o *)p_grandServantEquipIdList, v26, v21, v22);
    v103 = *p_grandServantEquipIdList;
    if ( *p_grandServantEquipIdList )
    {
      v104 = 4LL;
      do
      {
        max_length = v103->max_length;
        v106 = v104 - 4;
        if ( v104 - 4 >= (int)max_length )
          return;
        if ( v106 >= max_length )
          goto LABEL_165;
        if ( *((__int64 *)&v103->obj.klass + v104) < 1 )
          goto LABEL_102;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
        v107 = *p_grandServantEquipIdList;
        if ( !*p_grandServantEquipIdList )
          break;
        if ( v106 >= v107->max_length )
          goto LABEL_165;
        if ( !Master_object )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                        Master_object,
                                                                        &entity,
                                                                        *((_QWORD *)&v107->obj.klass + v104),
                                                                        (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_102;
        if ( !entity )
          break;
        klass = entity[5].klass;
        monitor = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v178.fields.currentCryptoKey = klass;
        *(_QWORD *)&v178.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v178, 0LL) >= 1 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v29 = (SkillInfo_array *)entity;
          v110 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v111 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v110 )
            break;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v110 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v29->obj,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
          }
          else
          {
            v113 = v110 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v113 + 32) = v29;
            sub_1BDB81C((CGThumbnailListItem_o *)(v113 + 32), (int32_t)v29, v101, v102);
          }
          grandServantEquipIdList = this->fields.grandServantEquipIdList;
          if ( !grandServantEquipIdList )
            break;
          if ( v106 >= grandServantEquipIdList->max_length )
LABEL_165:
            sub_1BDBADC(Master_object, v29, v101);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v29 = (SkillInfo_array *)*((_QWORD *)&grandServantEquipIdList->obj.klass + v104);
          v142 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v143 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v142 )
            break;
          v144 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v144 >= *(_DWORD *)(v142 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              (int64_t)v29,
              *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v144 + 1;
            *(_QWORD *)(v142 + 8 * v144 + 32) = v29;
          }
          equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !entity )
            break;
          v146 = Master_object;
          v148 = entity[5].klass;
          v147 = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v179.fields.currentCryptoKey = v148;
          *(_QWORD *)&v179.fields.fakeValue = v147;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                          v179,
                                                                          0LL);
          if ( !v146 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v146,
                                                                          (int32_t)Master_object,
                                                                          (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !equipGrandServantEntityList )
            break;
          items = equipGrandServantEntityList->fields._items;
          v152 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++equipGrandServantEntityList->fields._version;
          if ( !items )
            break;
          size = equipGrandServantEntityList->fields._size;
          v154 = Master_object;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
          }
          else
          {
            v155 = &items->obj.klass + size;
            equipGrandServantEntityList->fields._size = size + 1;
            v155[4] = (Il2CppClass *)v154;
            sub_1BDB81C((CGThumbnailListItem_o *)(v155 + 4), (int32_t)v154, v149, v150);
          }
          equipGrandServantLimitEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitMaster___);
          if ( !entity )
            break;
          v157 = (ServantLimitMaster_o *)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                                                          0LL);
          if ( !entity )
            break;
          v158 = (int)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                                                                          0LL);
          if ( !v157 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                          v157,
                                                                          v158,
                                                                          (int32_t)Master_object,
                                                                          0LL);
          if ( !equipGrandServantLimitEntityList )
            break;
          v161 = equipGrandServantLimitEntityList->fields._items;
          v162 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++equipGrandServantLimitEntityList->fields._version;
          if ( !v161 )
            break;
          v163 = equipGrandServantLimitEntityList->fields._size;
          v164 = Master_object;
          if ( (unsigned int)v163 >= v161->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantLimitEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
          }
          else
          {
            v165 = &v161->obj.klass + v163;
            equipGrandServantLimitEntityList->fields._size = v163 + 1;
            v165[4] = (Il2CppClass *)v164;
            sub_1BDB81C((CGThumbnailListItem_o *)(v165 + 4), (int32_t)v164, v159, v160);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
          if ( !entity )
            break;
          UserServantEntity__getEquipSkillInfo((UserServantEntity_o *)entity, &v174, 1, 0LL);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v29 = v174;
          v166 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v167 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v166 )
            break;
          v168 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v168 >= *(_DWORD *)(v166 + 24) )
          {
            v140 = v167[4];
            goto LABEL_128;
          }
          v169 = v166 + 8 * v168;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v168 + 1;
          *(_QWORD *)(v169 + 32) = v29;
          v139 = (CGThumbnailListItem_o *)(v169 + 32);
        }
        else
        {
LABEL_102:
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v114 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v115 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v114 )
            break;
          v116 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0LL,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
          }
          else
          {
            v117 = v114 + 8 * v116;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v116 + 1;
            *(_QWORD *)(v117 + 32) = 0LL;
            sub_1BDB81C((CGThumbnailListItem_o *)(v117 + 32), 0, v101, v102);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v120 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v121 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v120 )
            break;
          v122 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v122 >= *(_DWORD *)(v120 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              0LL,
              *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v122 + 1;
            *(_QWORD *)(v120 + 8 * v122 + 32) = 0LL;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
          if ( !Master_object )
            break;
          v123 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v124 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v123 )
            break;
          v125 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v125 >= *(_DWORD *)(v123 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0LL,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
          }
          else
          {
            v126 = v123 + 8 * v125;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v125 + 1;
            *(_QWORD *)(v126 + 32) = 0LL;
            sub_1BDB81C((CGThumbnailListItem_o *)(v126 + 32), 0, v118, v119);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
          if ( !Master_object )
            break;
          v129 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v130 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v129 )
            break;
          v131 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0LL,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
          }
          else
          {
            v132 = v129 + 8 * v131;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v131 + 1;
            *(_QWORD *)(v132 + 32) = 0LL;
            sub_1BDB81C((CGThumbnailListItem_o *)(v132 + 32), 0, v127, v128);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v135 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v136 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v135 )
            break;
          v137 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
          {
            v140 = v136[4];
            v29 = 0LL;
LABEL_128:
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v29->obj,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v140 + 192) + 112LL));
            goto LABEL_129;
          }
          v138 = v135 + 8 * v137;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v137 + 1;
          *(_QWORD *)(v138 + 32) = 0LL;
          v139 = (CGThumbnailListItem_o *)(v138 + 32);
          LODWORD(v29) = 0;
        }
        sub_1BDB81C(v139, (int32_t)v29, v133, v134);
LABEL_129:
        v103 = *p_grandServantEquipIdList;
        ++v104;
      }
      while ( *p_grandServantEquipIdList );
    }
LABEL_164:
    sub_1BDBAD4(Master_object, v29);
  }
  if ( !this->fields.servantLeaderInfo )
    return;
  v28 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v28,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
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
                                  0LL);
    if ( EquipTargetInfoByEquipIdx )
    {
      v33 = EquipTargetInfoByEquipIdx;
      v35 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v176.fields.currentCryptoKey = v35;
      *(_QWORD *)&v176.fields.fakeValue = v34;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                      v176,
                                                                      0LL);
      if ( !v28 )
        goto LABEL_164;
      v36 = v28->fields._items;
      v37 = Method_System_Collections_Generic_List_long__Add__;
      ++v28->fields._version;
      if ( !v36 )
        goto LABEL_164;
      v38 = v28->fields._size;
      if ( (unsigned int)v38 >= v36->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v28,
          (int)Master_object,
          *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = v38 + 1;
        v36->m_Items[v38] = (int)Master_object;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                      v33->fields.svtId,
                                                                      0LL);
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
      if ( !equipUserGrandServantEntityList )
        goto LABEL_164;
      v42 = equipUserGrandServantEntityList->fields._items;
      v43 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++equipUserGrandServantEntityList->fields._version;
      if ( !v42 )
        goto LABEL_164;
      v44 = equipUserGrandServantEntityList->fields._size;
      v45 = (int)Master_object;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          equipUserGrandServantEntityList,
          0LL,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &v42->obj.klass + v44;
        equipUserGrandServantEntityList->fields._size = v44 + 1;
        v46[4] = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)(v46 + 4), 0, v39, v40);
      }
      grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
      if ( v45 < 1 )
      {
        if ( !grandServantEquipTargetIdList )
          goto LABEL_164;
        v55 = grandServantEquipTargetIdList->fields._items;
        v56 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v55 )
          goto LABEL_164;
        v57 = grandServantEquipTargetIdList->fields._size;
        if ( (unsigned int)v57 >= v55->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            0LL,
            *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v57 + 1;
          v55->m_Items[v57] = 0LL;
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
        if ( !Master_object )
          goto LABEL_164;
        v84 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v85 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v84 )
          goto LABEL_164;
        v86 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0LL,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v87 = v84 + 8 * v86;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v86 + 1;
          *(_QWORD *)(v87 + 32) = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)(v87 + 32), 0, v47, v48);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
        if ( !Master_object )
          goto LABEL_164;
        v90 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v91 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v90 )
          goto LABEL_164;
        v92 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0LL,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
        }
        else
        {
          v93 = v90 + 8 * v92;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v92 + 1;
          *(_QWORD *)(v93 + 32) = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)(v93 + 32), 0, v88, v89);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_164;
        v94 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v95 = Method_System_Collections_Generic_List_SkillInfo____Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v94 )
          goto LABEL_164;
        v96 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v96 < *(_DWORD *)(v94 + 24) )
        {
          v97 = v94 + 8 * v96;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v96 + 1;
          *(_QWORD *)(v97 + 32) = 0LL;
          v82 = (CGThumbnailListItem_o *)(v97 + 32);
          LODWORD(v29) = 0;
          goto LABEL_75;
        }
        v83 = v95[4];
        v29 = 0LL;
      }
      else
      {
        v51 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
        v50 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v177.fields.currentCryptoKey = v51;
        *(_QWORD *)&v177.fields.fakeValue = v50;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                        v177,
                                                                        0LL);
        if ( !grandServantEquipTargetIdList )
          goto LABEL_164;
        v52 = grandServantEquipTargetIdList->fields._items;
        v53 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v52 )
          goto LABEL_164;
        v54 = grandServantEquipTargetIdList->fields._size;
        if ( (unsigned int)v54 >= v52->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            (int)Master_object,
            *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v54 + 1;
          v52->m_Items[v54] = (int)Master_object;
        }
        v58 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v59 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                        v33->fields.svtId,
                                                                        0LL);
        if ( !v59 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v59,
                                                                        (int32_t)Master_object,
                                                                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v58 )
          goto LABEL_164;
        v62 = v58->fields._items;
        v63 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v58->fields._version;
        if ( !v62 )
          goto LABEL_164;
        v64 = v58->fields._size;
        v65 = Master_object;
        if ( (unsigned int)v64 >= v62->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v58,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = &v62->obj.klass + v64;
          v58->fields._size = v64 + 1;
          v66[4] = (Il2CppClass *)v65;
          sub_1BDB81C((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v65, v60, v61);
        }
        v67 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
        v68 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                                        v33->fields.svtId,
                                                                        0LL);
        if ( !v68 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                        (ServantLimitMaster_o *)v68,
                                                                        (int32_t)Master_object,
                                                                        v33->fields.limitCount,
                                                                        0LL);
        if ( !v67 )
          goto LABEL_164;
        v71 = v67->fields._items;
        v72 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++v67->fields._version;
        if ( !v71 )
          goto LABEL_164;
        v73 = v67->fields._size;
        v74 = Master_object;
        if ( (unsigned int)v73 >= v71->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v67,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &v71->obj.klass + v73;
          v67->fields._size = v73 + 1;
          v75[4] = (Il2CppClass *)v74;
          sub_1BDB81C((CGThumbnailListItem_o *)(v75 + 4), (int32_t)v74, v69, v70);
        }
        EquipTargetInfo__getSkillInfo(v33, &skillInfoList, 0LL);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_164;
        v29 = skillInfoList;
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
          *(_QWORD *)(v81 + 32) = v29;
          v82 = (CGThumbnailListItem_o *)(v81 + 32);
LABEL_75:
          sub_1BDB81C(v82, (int32_t)v29, v76, v77);
          continue;
        }
        v83 = v79[4];
      }
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Master_object,
        &v29->obj,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v83 + 192) + 112LL));
    }
  }
  if ( !v28 )
    goto LABEL_164;
  v98 = System_Collections_Generic_List_long___ToArray(
          v28,
          (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.grandServantEquipIdList = v98;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.grandServantEquipIdList, (int32_t)v98, v99, v100);
}


void __fastcall ServantStatusListViewItem__SetGrandInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UserServantGrandInfo_c *v5; // x0
  struct UserServantGrandInfo_o *Empty; // x1
  UserServantEntity_o *userSvtEntity; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  if ( (byte_4B41371 & 1) == 0 )
  {
    sub_1BDB878(&UserServantGrandInfo_TypeInfo, method);
    byte_4B41371 = 1;
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
  if ( !this->fields._IsGrand_k__BackingField )
  {
    if ( userSvtEntity )
    {
      Empty = UserServantEntity__get_GrandInfo(this->fields.userSvtEntity, 0LL);
      if ( Empty )
        goto LABEL_11;
    }
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      Empty = ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0LL);
      if ( Empty )
        goto LABEL_11;
    }
    goto LABEL_4;
  }
  if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
  Empty = UserServantGrandInfo__Make(userSvtEntity, 1, 0LL);
LABEL_11:
  this->fields._GrandInfo_k__BackingField = Empty;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._GrandInfo_k__BackingField, (int32_t)Empty, v2, v3);
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

  if ( (byte_4B41340 & 1) == 0 )
  {
    sub_1BDB878(&ImageLimitCount_TypeInfo, entity);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B41340 = 1;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v40, 0LL);
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(entity->fields.limitCount, 0LL);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v11 = v9;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardSelectList = ImageLimitCount__GetCardSelectList(v8, v11, costumeAndOtherIds, 0LL);
    this->fields.cardSelectList = CardSelectList;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v13, v14);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0LL);
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(entity->fields.svtId, 0LL);
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(entity->fields.limitCount, 0LL);
    SelectList = ImageLimitCount__GetSelectList(v15, v16, this->fields.costumeIds, 0LL);
    this->fields.dispSelectList = SelectList;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v18, v19);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0LL);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0LL);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(entity->fields.svtId, 0LL);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(entity->fields.limitCount, 0LL);
    v22 = ImageLimitCount__GetSelectList(v20, v21, this->fields.costumeIds, 0LL);
    this->fields.commandCardSelectList = v22;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v22, v23, v24);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0LL);
    this->fields.commandCardParam = CommandCardParam;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v26, v27);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0LL);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(entity->fields.svtId, 0LL);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(entity->fields.limitCount, 0LL);
    v30 = ImageLimitCount__GetCardSelectList(v28, v29, this->fields.costumeIds, 0LL);
    this->fields.iconSelectList = v30;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v30, v31, v32);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0LL);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0LL);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(entity->fields.svtId, 0LL);
    v34 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v41.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v35 = v33;
    *(_QWORD *)&v41.fields.currentCryptoKey = v34;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v41, 0LL);
    v37 = ImageLimitCount__GetSelectList(v35, v36, this->fields.costumeIds, 0LL);
    this->fields.portraitSelectList = v37;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v37, v38, v39);
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
  if ( (byte_4B4135F & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1BDB878(&UserServantEntity_TypeInfo, *(_QWORD *)&index);
    byte_4B4135F = 1;
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
        sub_1BDBADC(this, *(_QWORD *)&index, method);
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
  struct UserServantEntity_o *v44; // x9
  int32_t LOT_RATE; // w8
  int32_t v46; // w23
  int32_t *p_adjustAtk; // x10
  struct ServantLeaderInfo_o *v48; // x10
  int32_t v49; // w24
  BalanceConfig_c *v50; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v52; // w8
  struct ServantLeaderInfo_o *p_adjustHp; // x9
  int32_t StatusUpAdjustHp; // w10
  const MethodInfo *v55; // x1
  UserServantEntity_o *v56; // x0
  UserServantEntity_o *v57; // x22
  int32_t v58; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  ServantLeaderInfo_o *v60; // x0
  ServantLeaderInfo_o *v61; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  int32_t v63; // w20
  int32_t LimitCount; // w0
  int32_t dispLimitCount; // w21
  int32_t transformedHp; // w22
  struct UserServantEntity_o *v67; // x8
  int32_t transformedAtk; // w23
  int32_t v69; // w24
  int32_t collectionLv; // w26
  int32_t adjustHp; // w25
  int32_t adjustAtk; // w28
  struct ServantLeaderInfo_o *v73; // x8
  struct EquipTargetInfo_o *v74; // x8
  UserServantGrandInfo_o *grandInfo; // x29
  __int64 v76; // x27
  const MethodInfo *v77; // x2
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B4136C & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&CheckCombineResStatus_TypeInfo, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantExpMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantTransformMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BDB878(&ServantOverwriteStatus_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11);
    byte_4B4136C = 1;
  }
  entity = 0LL;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = (void *)ServantStatusListViewItem__get_SvtId(this, v14);
    if ( !Master_object )
      goto LABEL_72;
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
      goto LABEL_72;
    this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
    this->fields._TransformedServantDispLimitCount_k__BackingField = v19->fields.aftDispLimitCount - 1;
    befTitle = v19->fields.befTitle;
    this->fields.transformNameBefore = befTitle;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.transformNameBefore, (int32_t)befTitle, v17, v18);
    if ( !entity )
      goto LABEL_72;
    aftTitle = entity->fields.aftTitle;
    this->fields.transformNameAfter = aftTitle;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.transformNameAfter, (int32_t)aftTitle, v21, v22);
    this->fields._IsTransformServant_k__BackingField = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SvtId )
      goto LABEL_72;
    v24 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
            this->fields._TransformedSvtId_k__BackingField,
            (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
    this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v24;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._TransformedServant_k__BackingField, (int32_t)v24, v26, v27);
    v28 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
    v30 = (ServantLimitMaster_o *)v28;
    SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v31);
    if ( !v30 )
      goto LABEL_72;
    v32 = ServantLimitMaster__GetEntity(v30, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0LL);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantExpMaster___);
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
              0LL);
    if ( !v32 )
      goto LABEL_72;
    v39 = SvtId;
    if ( !SvtId )
      goto LABEL_72;
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
      p_adjustAtk = &v44->fields.adjustAtk;
    }
    else
    {
      v48 = this->fields.servantLeaderInfo;
      if ( !v48 )
      {
        v49 = 0;
LABEL_35:
        v50 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v50 = BalanceConfig_TypeInfo;
          v44 = this->fields.userSvtEntity;
          LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
        }
        static_fields = v50->static_fields;
        this->fields.transformedAtk = v46 + static_fields->StatusUpAdjustAtk * v49;
        v52 = v39[7] * (v32->fields.hpMax - v32->fields.hpBase) / LOT_RATE + v32->fields.hpBase;
        if ( v44 )
        {
          p_adjustHp = (struct ServantLeaderInfo_o *)&v44->fields.adjustHp;
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
        this->fields.transformedServantLimitEntity = v32;
        this->fields.transformedHp = v52 + StatusUpAdjustHp * (_DWORD)p_adjustHp;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.transformedServantLimitEntity, (int32_t)v32, v37, v38);
        v56 = this->fields.userSvtEntity;
        if ( v56 )
        {
          UserServantEntity__GetTransformedSkillInfo(
            v56,
            &this->fields.transformedSkillInfoList,
            this->fields._TransformedSvtId_k__BackingField,
            -1,
            this->fields._TransformedServantDispLimitCount_k__BackingField,
            1,
            0,
            -1,
            0LL);
          v57 = this->fields.userSvtEntity;
          v58 = this->fields._TransformedSvtId_k__BackingField;
          TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
          SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !SvtId )
            goto LABEL_72;
          if ( !v57 )
            goto LABEL_72;
          UserServantEntity__GetTransformedPassiveSkillInfo(
            v57,
            &this->fields.transformedPassiveSkillIdList,
            &this->fields.transformedPassiveSkillTitleMessageList,
            &this->fields.transformedPassiveSkillExplanationMessageList,
            v58,
            TransformedServantDispLimitCount_k__BackingField,
            *((_QWORD *)SvtId + 14),
            0LL);
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
            0LL);
        }
        else
        {
          v60 = this->fields.servantLeaderInfo;
          if ( v60 )
          {
            ServantLeaderInfo__GetTransformedSkillInfo(
              v60,
              &this->fields.transformedSkillInfoList,
              this->fields._TransformedSvtId_k__BackingField,
              0LL);
            SvtId = this->fields.servantLeaderInfo;
            if ( !SvtId )
              goto LABEL_72;
            ServantLeaderInfo__GetTransformedPassiveSkillInfo(
              (ServantLeaderInfo_o *)SvtId,
              &this->fields.transformedPassiveSkillIdList,
              &this->fields.transformedPassiveSkillTitleMessageList,
              &this->fields.transformedPassiveSkillExplanationMessageList,
              this->fields._TransformedSvtId_k__BackingField,
              0LL);
            SvtId = this->fields.servantLeaderInfo;
            if ( !SvtId )
              goto LABEL_72;
            ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
              (ServantLeaderInfo_o *)SvtId,
              &this->fields.transformedTdInfo,
              this->fields._TransformedSvtId_k__BackingField,
              0LL);
            SvtId = this->fields.servantLeaderInfo;
            if ( !SvtId )
              goto LABEL_72;
            SvtId = (void *)ServantLeaderInfo__get_TransformedAtk((ServantLeaderInfo_o *)SvtId, 0LL);
            v61 = this->fields.servantLeaderInfo;
            this->fields.transformedAtk = (int)SvtId;
            if ( !v61 )
              goto LABEL_72;
            this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v61, 0LL);
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
                goto LABEL_72;
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
                goto LABEL_72;
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
        v63 = this->fields._TransformedSvtId_k__BackingField;
        LimitCount = ServantStatusListViewItem__get_LimitCount(this, v55);
        dispLimitCount = this->fields.dispLimitCount;
        transformedHp = this->fields.transformedHp;
        v67 = this->fields.userSvtEntity;
        transformedAtk = this->fields.transformedAtk;
        v69 = LimitCount;
        if ( v67 )
        {
          collectionLv = v67->fields.lv;
          adjustHp = v67->fields.adjustHp;
          adjustAtk = v67->fields.adjustAtk;
          goto LABEL_68;
        }
        v73 = this->fields.servantLeaderInfo;
        if ( v73 )
        {
          collectionLv = v73->fields.lv;
          adjustHp = v73->fields.adjustHp;
          adjustAtk = v73->fields.adjustAtk;
          goto LABEL_68;
        }
        v74 = this->fields.equipTargetInfo;
        if ( v74 )
        {
          collectionLv = v74->fields.lv;
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
        v76 = sub_1BDBAC4(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_33054660(
          (ServantOverwriteStatus_o *)v76,
          v63,
          v69,
          dispLimitCount,
          transformedHp,
          transformedAtk,
          collectionLv,
          adjustHp,
          adjustAtk,
          grandInfo,
          0LL);
        if ( v76 )
        {
          *(int32x2_t *)&this->fields.transformedAtk = vrev64_s32(*(int32x2_t *)(v76 + 16));
          ServantStatusListViewItem__AddDuplicationInfo(this, 1, v77);
          return;
        }
LABEL_72:
        sub_1BDBAD4(SvtId, v16);
      }
      p_adjustAtk = &v48->fields.adjustAtk;
    }
    v49 = *p_adjustAtk;
    goto LABEL_35;
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  _DWORD *klass; // x8
  CGThumbnailListItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v15; // x20
  int max_length; // w9
  unsigned int v17; // w10
  unsigned int v18; // w21
  char v19; // w21

  if ( (byte_4B4136A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    byte_4B4136A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
    sub_1BDBAD4(Master_object, v9);
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
      sub_1BDBADC(Master_object, v9, v10);
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
  sub_1BDB81C(p_svtCommentEntityList, (int32_t)v15, v10, v11);
  return v19 & 1;
}


int32_t __fastcall ServantStatusListViewItem__get_AdjustAtk(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
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


int32_t __fastcall ServantStatusListViewItem__get_AdjustHp(ServantStatusListViewItem_o *this, const MethodInfo *method)
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


int32_t __fastcall ServantStatusListViewItem__get_Agility(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1BDBAD4(this, method);
  return svtLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_Atk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t Atk_k__BackingField; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  UserServantEntity_o *userSvtEntity; // x0
  UserServantGrandInfo_o *GrandInfo_k__BackingField; // x0
  UserServantEntity_o *v9; // x20

  if ( (byte_4B41354 & 1) == 0 )
  {
    sub_1BDB878(&UserServantGrandInfo_TypeInfo, method);
    byte_4B41354 = 1;
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
      LOBYTE(userSvtEntity) = UserServantEntity__IsGrandServant(userSvtEntity, 0LL);
    if ( ((unsigned __int8)userSvtEntity & 1) != 0 || !this->fields._IsGrand_k__BackingField )
    {
      if ( !this->fields._IsForceNotGrand_k__BackingField || ((unsigned __int8)userSvtEntity & 1) == 0 )
        return Atk_k__BackingField;
      v9 = this->fields.userSvtEntity;
      if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      GrandInfo_k__BackingField = UserServantGrandInfo__Make(v9, 0, 0LL);
      if ( GrandInfo_k__BackingField )
      {
        Atk_k__BackingField -= UserServantGrandInfo__get_AddedAtk(GrandInfo_k__BackingField, 0LL);
        return Atk_k__BackingField;
      }
    }
    else
    {
      GrandInfo_k__BackingField = this->fields._GrandInfo_k__BackingField;
      if ( GrandInfo_k__BackingField )
      {
        Atk_k__BackingField += UserServantGrandInfo__get_AddedAtk(GrandInfo_k__BackingField, 0LL);
        return Atk_k__BackingField;
      }
    }
    sub_1BDBAD4(GrandInfo_k__BackingField, method);
  }
  return equipTargetInfo->fields.atk;
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

  if ( (byte_4B41346 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B41346 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v7, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userSvtEntity, 0LL);
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
  if ( (byte_4B4134C & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1BDB878(&ImageLimitCount_TypeInfo, method);
    byte_4B4134C = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1BDBAD4(this, method);
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
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userSvtEntity, 0LL);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userSvtEntity, 0LL);
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
      sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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

  if ( (byte_4B41359 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B41359 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v9, 0LL);
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


UserServantGrandInfo_o *__fastcall ServantStatusListViewItem__get_GrandInfo(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandInfo_k__BackingField;
}


int32_t __fastcall ServantStatusListViewItem__get_Hp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t Hp_k__BackingField; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  UserServantEntity_o *userSvtEntity; // x0
  UserServantGrandInfo_o *GrandInfo_k__BackingField; // x0
  UserServantEntity_o *v9; // x20

  if ( (byte_4B41353 & 1) == 0 )
  {
    sub_1BDB878(&UserServantGrandInfo_TypeInfo, method);
    byte_4B41353 = 1;
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
      LOBYTE(userSvtEntity) = UserServantEntity__IsGrandServant(userSvtEntity, 0LL);
    if ( ((unsigned __int8)userSvtEntity & 1) != 0 || !this->fields._IsGrand_k__BackingField )
    {
      if ( !this->fields._IsForceNotGrand_k__BackingField || ((unsigned __int8)userSvtEntity & 1) == 0 )
        return Hp_k__BackingField;
      v9 = this->fields.userSvtEntity;
      if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      GrandInfo_k__BackingField = UserServantGrandInfo__Make(v9, 0, 0LL);
      if ( GrandInfo_k__BackingField )
      {
        Hp_k__BackingField -= UserServantGrandInfo__get_AddedHp(GrandInfo_k__BackingField, 0LL);
        return Hp_k__BackingField;
      }
    }
    else
    {
      GrandInfo_k__BackingField = this->fields._GrandInfo_k__BackingField;
      if ( GrandInfo_k__BackingField )
      {
        Hp_k__BackingField += UserServantGrandInfo__get_AddedHp(GrandInfo_k__BackingField, 0LL);
        return Hp_k__BackingField;
      }
    }
    sub_1BDBAD4(GrandInfo_k__BackingField, method);
  }
  return equipTargetInfo->fields.hp;
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
    sub_1BDBAD4(0LL, method);
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


bool __fastcall ServantStatusListViewItem__get_IsForceNotGrand(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsForceNotGrand_k__BackingField;
}


bool __fastcall ServantStatusListViewItem__get_IsGrand(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsGrand_k__BackingField;
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

  if ( (byte_4B4134B & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4134B = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
    sub_1BDBAD4(ManualSetCommandCardLimit, method);
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

  if ( (byte_4B41349 & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B41349 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
    sub_1BDBAD4(ManualSetDispLimitCount, method);
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

  if ( (byte_4B4134E & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4134E = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
    sub_1BDBAD4(ManualSetIconLimitCount, method);
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

  if ( (byte_4B41350 & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B41350 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
    sub_1BDBAD4(ManualSetPortraitLimitCount, method);
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

  if ( (byte_4B41352 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B41352 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v7, 0LL) != this->fields.supportRandomLimitCount;
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

  if ( (byte_4B41347 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B41347 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v10, 0LL);
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
    sub_1BDBAD4(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1BDBAD4(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4B41348 & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B41348 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
      sub_1BDBAD4(v3, method);
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

  if ( (byte_4B4134D & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4134D = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
      sub_1BDBAD4(v3, method);
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

  if ( (byte_4B4134A & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4134A = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
      sub_1BDBAD4(v3, method);
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

  if ( (byte_4B4134F & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4134F = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
      sub_1BDBAD4(v3, method);
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

  if ( (byte_4B41351 & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B41351 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, method);
    byte_4B4080C = 1;
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
      sub_1BDBAD4(v3, method);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, method);
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
      sub_1BDBAD4(this, method);
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

  if ( (byte_4B41345 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B41345 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v7, 0LL);
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedAgility(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BDBAD4(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedDefense(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BDBAD4(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedLuck(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BDBAD4(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedMagic(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BDBAD4(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedNp(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BDBAD4(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t __fastcall ServantStatusListViewItem__get_TransformedPower(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1BDBAD4(this, method);
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
  if ( (byte_4B41369 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B41369 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v8, 0LL);
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
        sub_1BDBAD4(this, method);
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


void __fastcall ServantStatusListViewItem__set_GrandInfo(
        ServantStatusListViewItem_o *this,
        UserServantGrandInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandInfo_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._GrandInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  if ( (byte_4B4135E & 1) == 0 )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, value);
    byte_4B4135E = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4B4080C )
  {
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, value);
    byte_4B4080C = 1;
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


void __fastcall ServantStatusListViewItem__set_IsForceNotGrand(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsForceNotGrand_k__BackingField = value;
}


void __fastcall ServantStatusListViewItem__set_IsGrand(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrand_k__BackingField = value;
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
  sub_1BDB81C(
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