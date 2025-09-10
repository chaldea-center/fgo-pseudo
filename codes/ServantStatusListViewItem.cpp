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
  const MethodInfo *v30; // x1
  struct PartyOrganizationListViewItem_o *v31; // x0
  struct PartyOrganizationListViewItem_o **p_memberItem; // x26
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  char v36; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v43; // q0
  struct PartyOrganizationListViewItem_o *v44; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct PartyOrganizationListViewItem_o *v52; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v55; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x25
  __int64 v57; // x28
  __int64 v58; // x29
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x25
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ServantLimitMaster_o *v63; // x28
  int32_t v64; // w29
  struct ServantLimitEntity_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  ServantCommentMaster_o *v68; // x28
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v72; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // q1
  UserServantCollectionMaster_o *v74; // x28
  int64_t v75; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int v79; // w8
  QuestRestrictionInfo_o *v80; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x27
  int32_t lv; // w26
  __int64 v88; // x28
  __int64 v89; // x29
  struct System_Int32_array *CostumeList_42905040; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x1
  struct UserServantCollectionEntity_o *v94; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v96; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v98; // x8
  _BOOL8 IsChoice; // x0
  __int64 v100; // x1
  const MethodInfo *v101; // x2
  struct System_Int64_array *v102; // x8
  int64_t v103; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v106; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v107; // x8
  int32_t v108; // w2
  int v109; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v110; // x8
  int32_t v111; // w2
  int v112; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v113; // x8
  int32_t v114; // w2
  int v115; // w9
  struct System_Collections_Generic_List_long__o *v116; // x8
  int v117; // w9
  struct UserServantCollectionEntity_o *v118; // x8
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v122; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v124; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v126; // x8
  int32_t v127; // w0
  UserServantEntity_o *v128; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v130; // x2
  UserServantEntity_o *v131; // x0
  int32_t v132; // w0
  UserServantEntity_o *v133; // x8
  int32_t v134; // w0
  UserServantEntity_o *v135; // x1
  const MethodInfo *v136; // x1
  const MethodInfo *v137; // x2
  RandomLimitCountManager_c *v138; // x0
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // [xsp+0h] [xbp-B0h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_4C23830 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C23830 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v20, v22, v23);
  v24 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v24;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v24, v25, v26);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.partyItem = partyItem;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.partyItem, (int32_t)partyItem, v27, v28);
  if ( !partyItem )
    goto LABEL_97;
  v31 = PartyListViewItem__GetMember(partyItem, member, 0);
  this->fields.memberItem = v31;
  p_memberItem = &this->fields.memberItem;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberItem, (int32_t)v31, v33, v34);
  memberItem = this->fields.memberItem;
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  if ( !memberItem )
    goto LABEL_97;
  this->fields._IsTempGrandServant_k__BackingField = memberItem->fields._IsTempGrandServant_k__BackingField;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0) )
  {
    v36 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_97;
    v36 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v36;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  *(_BYTE *)(Instance + 181) = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v38, v39);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_97;
  v43 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v44 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v43;
  if ( !v44 )
    goto LABEL_97;
  userServantEntity = v44->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v40, v41);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_97;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
  this->fields.equipIdList = EquipList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v48, v49);
  v52 = this->fields.memberItem;
  if ( !v52 )
    goto LABEL_97;
  questRestrictionInfo = v52->fields.questRestrictionInfo;
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v50, v51);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v55 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v58 = *(_QWORD *)&v55[5].fields.currentCryptoKey;
  v57 = *(_QWORD *)&v55[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v143.fields.currentCryptoKey = v58;
  *(_QWORD *)&v143.fields.fakeValue = v57;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v143, 0);
  if ( !v56 )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v56,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v61, v62);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v63 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v64 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[6], 0);
  if ( !v63 )
    goto LABEL_97;
  v65 = ServantLimitMaster__GetEntity(v63, v64, Instance, 0);
  this->fields.svtLimitEntity = v65;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v65, v66, v67);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_97;
  v68 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_svtEntity)[1], 0);
  if ( !v68 )
    goto LABEL_97;
  EntityList = ServantCommentMaster__GetEntityList(v68, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v70, v71);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v72 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_97;
  v73 = v72[4];
  v74 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v142.fields.currentCryptoKey = v72[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v142.fields.fakeValue = v73;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v141 = v142;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v141, 0);
  if ( !*p_userSvtEntity
    || (v75 = Instance,
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[5], 0),
        !v74)
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v74, v75, Instance, 0),
        this->fields.userSvtCollectionEntity = EntityDefinitely,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v77, v78),
        (Instance = (int64_t)this->fields.memberItem) == 0) )
  {
LABEL_97:
    sub_1C2D6EC(Instance, v30);
  }
  v79 = *(unsigned __int8 *)(Instance + 247);
  this->fields.isConvertOverwriteImage = v79;
  if ( v79 )
  {
    v80 = this->fields.questRestrictionInfo;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
    if ( !*p_memberItem || !v80 )
      goto LABEL_97;
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
           v80,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v83, v84);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_97;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  v89 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v88 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v144.fields.currentCryptoKey = v89;
  *(_QWORD *)&v144.fields.fakeValue = v88;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v144, 0);
  if ( !userSvtCollectionEntity )
    goto LABEL_97;
  CostumeList_42905040 = UserServantCollectionEntity__getCostumeList_42905040(userSvtCollectionEntity, lv, Instance, 0);
  this->fields.costumeIds = CostumeList_42905040;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_42905040, v91, v92);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v93);
  v94 = this->fields.userSvtCollectionEntity;
  if ( !v94 )
    goto LABEL_97;
  svtCommonFlag = v94->fields.svtCommonFlag;
  v96 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v96 )
    goto LABEL_97;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                   v96->fields.battleVoice,
                                   0);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !Instance )
    goto LABEL_97;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v98 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v98 )
    goto LABEL_97;
  IsChoice = UserServantEntity__IsChoice(v98, 0);
  v102 = this->fields.equipIdList;
  this->fields.isChoice = IsChoice;
  this->fields.isUse = 0;
  if ( v102 )
  {
    if ( !LODWORD(v102->max_length) )
      sub_1C2D6F4(IsChoice, v100, v101);
    v103 = v102->m_Items[0];
  }
  else
  {
    v103 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v103, v101);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_97;
  size = equipGrandServantEntityList->fields._size;
  v106 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v106;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  v107 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_97;
  v108 = v107->fields._size;
  v109 = v107->fields._version + 1;
  v107->fields._size = 0;
  v107->fields._version = v109;
  if ( v108 >= 1 )
    System_Array__Clear((System_Array_o *)v107->fields._items, 0, v108, 0);
  v110 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_97;
  v111 = v110->fields._size;
  v112 = v110->fields._version + 1;
  v110->fields._size = 0;
  v110->fields._version = v112;
  if ( v111 >= 1 )
    System_Array__Clear((System_Array_o *)v110->fields._items, 0, v111, 0);
  v113 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_97;
  v114 = v113->fields._size;
  v115 = v113->fields._version + 1;
  v113->fields._size = 0;
  v113->fields._version = v115;
  if ( v114 >= 1 )
    System_Array__Clear((System_Array_o *)v113->fields._items, 0, v114, 0);
  v116 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_97;
  v117 = v116->fields._version + 1;
  v116->fields._size = 0;
  v116->fields._version = v117;
  ServantStatusListViewItem__SetEquipTargetIds(this, v30);
  v118 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v118 != 0;
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
  v122 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v122 != 0;
  if ( v122 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v122, 0);
    v122 = (UserServantEntity_o *)*p_userSvtEntity;
    v124 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v124 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v124;
  if ( !v122 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_80;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v122, 0);
  v126 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v126 )
  {
LABEL_80:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_81;
  }
  v127 = BasicHelper__DecryptValue_43904660(v126->fields.limitCountSupport, 0);
  v128 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v127;
  if ( v128 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v128, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_81:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v119,
    v120);
  v131 = this->fields.userSvtEntity;
  if ( v131 )
  {
    v132 = UserServantEntity__OwnRandomSettingSelectedButton(v131, 0);
    v133 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v132;
    if ( v133 )
    {
      v134 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v133, 0);
      v135 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_87;
    }
    v135 = 0;
  }
  else
  {
    v135 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v134 = 3;
LABEL_87:
  this->fields.supportRandomSettingButtonIndex = v134;
  ServantStatusListViewItem__SetLimitCountInfo(this, v135, v130);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
  }
  v138 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v138 = RandomLimitCountManager_TypeInfo;
  }
  if ( v138->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v137);
  ServantStatusListViewItem__ModifyInfo(this, v136);
}


void ServantStatusListViewItem___ctor_35338688(
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
  __int64 v27; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v37; // q0
  struct PartyOrganizationListViewItem_o *v38; // x8
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
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x21
  __int64 v50; // x22
  __int64 v51; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  ServantLimitMaster_o *v56; // x22
  int32_t v57; // w23
  struct ServantLimitEntity_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  ServantCommentMaster_o *v61; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // q1
  UserServantCollectionMaster_o *v67; // x22
  int64_t v68; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct PartyOrganizationListViewItem_o *v72; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_42905040; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x1
  struct UserServantCollectionEntity_o *v83; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v85; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v87; // x8
  _BOOL8 IsChoice; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x2
  struct System_Int64_array *v91; // x8
  int64_t v92; // x1
  struct UserServantCollectionEntity_o *v93; // x8
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v97; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v99; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v101; // x8
  int32_t v102; // w0
  UserServantEntity_o *v103; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v105; // x2
  UserServantEntity_o *v106; // x0
  int32_t v107; // w0
  UserServantEntity_o *v108; // x8
  int32_t v109; // w0
  UserServantEntity_o *v110; // x1
  const MethodInfo *v111; // x1
  const MethodInfo *v112; // x2
  RandomLimitCountManager_c *v113; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_4C23831 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23831 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v21;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v21, v22, v23);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.warBoardPartyItem = partyItem;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.warBoardPartyItem, (int32_t)partyItem, v24, v25);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0);
  this->fields.memberItem = MemberItem;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberItem, (int32_t)MemberItem, v29, v30);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v32, v33);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v37 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v38 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v37;
  if ( !v38 )
    goto LABEL_68;
  userServantEntity = v38->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServantEntity, v34, v35);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
  this->fields.equipIdList = EquipList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)EquipList, v42, v43);
  v46 = this->fields.memberItem;
  if ( !v46 )
    goto LABEL_68;
  questRestrictionInfo = v46->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v44, v45);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v51 = *(_QWORD *)&v48[5].fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v116.fields.currentCryptoKey = v51;
  *(_QWORD *)&v116.fields.fakeValue = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v116, 0);
  if ( !v49 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v49,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v54, v55);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v56 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v57 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[6], 0);
  if ( !v56 )
    goto LABEL_68;
  v58 = ServantLimitMaster__GetEntity(v56, v57, Instance, 0);
  this->fields.svtLimitEntity = v58;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v58, v59, v60);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v61 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_svtEntity)[1], 0);
  if ( !v61 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v61, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v63, v64);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v65 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v66 = v65[4];
  v67 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v115.fields.currentCryptoKey = v65[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v115.fields.fakeValue = v66;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v114 = v115;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v114, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v68 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[5], 0);
  if ( !v67 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v67, v68, Instance, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v70, v71);
  v72 = this->fields.memberItem;
  if ( !v72 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v72->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v74, v75);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userSvtEntity->fields.limitCount, 0);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_42905040 = UserServantCollectionEntity__getCostumeList_42905040(userSvtCollectionEntity, lv, Instance, 0);
  this->fields.costumeIds = CostumeList_42905040;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_42905040, v80, v81);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v82);
  v83 = this->fields.userSvtCollectionEntity;
  if ( !v83 )
    goto LABEL_68;
  svtCommonFlag = v83->fields.svtCommonFlag;
  v85 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v85 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                   v85->fields.battleVoice,
                                   0);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v87 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v87 )
    goto LABEL_68;
  IsChoice = UserServantEntity__IsChoice(v87, 0);
  v91 = this->fields.equipIdList;
  this->fields.isChoice = IsChoice;
  this->fields.isUse = 0;
  if ( v91 )
  {
    if ( !LODWORD(v91->max_length) )
      sub_1C2D6F4(IsChoice, v89, v90);
    v92 = v91->m_Items[0];
  }
  else
  {
    v92 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v92, v90);
  v93 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v93 != 0;
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
    sub_1C2D6EC(Instance, v27);
  }
  IsNameTrue = 0;
LABEL_43:
  v97 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v97 != 0;
  if ( v97 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v97, 0);
    v97 = (UserServantEntity_o *)*p_userSvtEntity;
    v99 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v99 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v99;
  if ( !v97 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v97, 0);
  v101 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v101 )
  {
LABEL_51:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_52;
  }
  v102 = BasicHelper__DecryptValue_43904660(v101->fields.limitCountSupport, 0);
  v103 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v102;
  if ( v103 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v103, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v94,
    v95);
  v106 = this->fields.userSvtEntity;
  if ( v106 )
  {
    v107 = UserServantEntity__OwnRandomSettingSelectedButton(v106, 0);
    v108 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v107;
    if ( v108 )
    {
      v109 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v108, 0);
      v110 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_58;
    }
    v110 = 0;
  }
  else
  {
    v110 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v109 = 3;
LABEL_58:
  this->fields.supportRandomSettingButtonIndex = v109;
  ServantStatusListViewItem__SetLimitCountInfo(this, v110, v105);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
  }
  v113 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v113 = RandomLimitCountManager_TypeInfo;
  }
  if ( v113->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v112);
  ServantStatusListViewItem__ModifyInfo(this, v111);
}


void ServantStatusListViewItem___ctor_35340724(
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
  const MethodInfo *v37; // x1
  bool v38; // w8
  __int128 v39; // q1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x21
  __int64 v50; // x23
  __int64 v51; // x28
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x28
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  ServantLimitMaster_o *v56; // x21
  int32_t v57; // w23
  struct ServantLimitEntity_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  ServantCommentMaster_o *v61; // x21
  int32_t v62; // w23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x8
  __int64 v67; // x21
  __int64 v68; // x23
  int32_t v69; // w0
  bool IsConvertOverwriteImage; // w0
  __int64 v71; // x20
  __int64 v72; // x21
  int32_t v73; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v74; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // q0
  __int64 v76; // x20
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v79; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // q0
  UserServantCollectionMaster_o *v81; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v82; // x8
  int64_t v83; // x21
  __int64 v84; // x23
  __int64 v85; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x20
  int32_t lv; // w21
  struct System_Int32_array *CostumeList_42905040; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  const MethodInfo *v98; // x1
  struct System_Int32_array *v99; // x0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct UserServantCollectionEntity_o *v106; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v108; // x8
  __int64 v109; // x20
  __int64 v110; // x21
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  UserServantEntity_o *v115; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  __int64 v118; // x1
  const MethodInfo *v119; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v120; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // q0
  UserDeckMaster_o *v122; // x20
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // x21
  bool v124; // w8
  struct System_Int64_array *v125; // x9
  int64_t v126; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v129; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v130; // x8
  int32_t v131; // w2
  int v132; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v133; // x8
  int32_t v134; // w2
  int v135; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v136; // x8
  int32_t v137; // w2
  int v138; // w9
  struct System_Collections_Generic_List_long__o *v139; // x8
  int v140; // w9
  struct UserServantCollectionEntity_o *v141; // x8
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  bool IsNameTrue; // w9
  UserServantEntity_o *v145; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v147; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v149; // x8
  int32_t v150; // w0
  UserServantEntity_o *v151; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v153; // x2
  UserServantEntity_o *v154; // x0
  int32_t v155; // w0
  UserServantEntity_o *v156; // x8
  int32_t v157; // w0
  UserServantEntity_o *v158; // x1
  const MethodInfo *v159; // x1
  const MethodInfo *v160; // x2
  RandomLimitCountManager_c *v161; // x0
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // [xsp+18h] [xbp-128h]
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // [xsp+20h] [xbp-120h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+30h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+60h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+A0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+C0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16

  v16 = isEnableServantQuest;
  if ( (byte_4C23832 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C23832 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v20;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v23;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v26;
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v29;
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v29, v30, v31);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v34, v35);
  this->fields.isEnableServantQuest = v16;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  *(_BYTE *)(Instance + 181) = v16;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0);
  if ( (Instance & 1) != 0 )
  {
    v38 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
    v38 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v38;
  if ( !userServant )
    goto LABEL_124;
  v39 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v172.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v171 = v172;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v171, 0);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v40, v41);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v40, v41);
  this->fields.equipIdList = equipIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)equipIdList, v44, v45);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v46, v47);
  this->fields._IsTempGrandServant_k__BackingField = isTempGrandServant;
  this->fields._IsForceNotGrand_k__BackingField = isForceNotGrand;
  this->fields.isFriendShipEquipSkillChange = isChangeFriendShipSkill;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v51 = *(_QWORD *)&v48[5].fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v173.fields.currentCryptoKey = v51;
  *(_QWORD *)&v173.fields.fakeValue = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v173, 0);
  if ( !v49 )
    goto LABEL_124;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v49,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v54, v55);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v56 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v57 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[6], 0);
  if ( !v56 )
    goto LABEL_124;
  v58 = ServantLimitMaster__GetEntity(v56, v57, Instance, 0);
  this->fields.svtLimitEntity = v58;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v58, v59, v60);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_124;
  v61 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_svtEntity)[1], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v62 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[7], 0);
  if ( !v61 )
    goto LABEL_124;
  EntityList = ServantCommentMaster__GetEntityList(v61, v62, Instance, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v64, v65);
  if ( !questRestrictionInfo )
    goto LABEL_37;
  v66 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v68 = *(_QWORD *)&v66[5].fields.currentCryptoKey;
  v67 = *(_QWORD *)&v66[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v174.fields.currentCryptoKey = v68;
  *(_QWORD *)&v174.fields.fakeValue = v67;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v174, 0);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v69, 0);
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( IsConvertOverwriteImage )
  {
    v72 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
    v71 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v175.fields.currentCryptoKey = v72;
    *(_QWORD *)&v175.fields.fakeValue = v71;
    v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v175, 0);
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(questRestrictionInfo, v73, 0, 0) )
LABEL_37:
      this->fields.isConvertOverwriteImage = 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v74 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_124:
    sub_1C2D6EC(Instance, v37);
  v75 = v74[4];
  v76 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v172.fields.currentCryptoKey = v74[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v172.fields.fakeValue = v75;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v170 = v172;
  if ( v76 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v170, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v79 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v80 = v79[4];
    v81 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v172.fields.currentCryptoKey = v79[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v172.fields.fakeValue = v80;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v169 = v172;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v169, 0);
    v82 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v83 = Instance;
    v85 = *(_QWORD *)&v82[5].fields.currentCryptoKey;
    v84 = *(_QWORD *)&v82[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v176.fields.currentCryptoKey = v85;
    *(_QWORD *)&v176.fields.fakeValue = v84;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v176, 0);
    if ( !v81 )
      goto LABEL_124;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v81, v83, Instance, 0);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v87, v88);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_124;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v90, v91);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_124;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userSvtEntity->fields.limitCount, 0);
    if ( !userSvtCollectionEntity )
      goto LABEL_124;
    CostumeList_42905040 = UserServantCollectionEntity__getCostumeList_42905040(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0);
    this->fields.costumeIds = CostumeList_42905040;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_42905040, v96, v97);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v98);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v77, v78);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_124;
    v99 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = v99;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v99, v100, v101);
    this->fields.costumeIds = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v102, v103);
    this->fields.costumeAndOtherIds = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeAndOtherIds, 0, v104, v105);
  }
  v106 = this->fields.userSvtCollectionEntity;
  if ( !v106 )
    goto LABEL_124;
  svtCommonFlag = v106->fields.svtCommonFlag;
  v108 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v108 )
    goto LABEL_124;
  v110 = *(_QWORD *)&v108->fields.battleVoice.fields.currentCryptoKey;
  v109 = *(_QWORD *)&v108->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v177.fields.currentCryptoKey = v110;
  *(_QWORD *)&v177.fields.fakeValue = v109;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v177, 0);
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  this->fields.servantLeaderInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v111, v112);
  this->fields.equipTargetInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v113, v114);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_124;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v115 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v115 )
    goto LABEL_124;
  Instance = UserServantEntity__IsChoice(v115, 0);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_124;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v120 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v121 = v120[2];
    v122 = (UserDeckMaster_o *)Instance;
    p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v172.fields.currentCryptoKey = v120[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v172.fields.fakeValue = v121;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v168 = v172;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v168, 0);
    if ( !v122 )
      goto LABEL_124;
    IsServantEquip = UserDeckMaster__IsEquip(v122, Instance, 0);
    v124 = IsServantEquip;
  }
  else
  {
    p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
    v124 = 0;
  }
  v125 = this->fields.equipIdList;
  this->fields.isUse = v124;
  if ( v125 )
  {
    if ( !LODWORD(v125->max_length) )
      sub_1C2D6F4(IsServantEquip, v118, v119);
    v126 = v125->m_Items[0];
  }
  else
  {
    v126 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v126, v119);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_124;
  size = equipGrandServantEntityList->fields._size;
  v129 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v129;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  v130 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_124;
  v131 = v130->fields._size;
  v132 = v130->fields._version + 1;
  v130->fields._size = 0;
  v130->fields._version = v132;
  if ( v131 >= 1 )
    System_Array__Clear((System_Array_o *)v130->fields._items, 0, v131, 0);
  v133 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_124;
  v134 = v133->fields._size;
  v135 = v133->fields._version + 1;
  v133->fields._size = 0;
  v133->fields._version = v135;
  if ( v134 >= 1 )
    System_Array__Clear((System_Array_o *)v133->fields._items, 0, v134, 0);
  v136 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_124;
  v137 = v136->fields._size;
  v138 = v136->fields._version + 1;
  v136->fields._size = 0;
  v136->fields._version = v138;
  if ( v137 >= 1 )
    System_Array__Clear((System_Array_o *)v136->fields._items, 0, v137, 0);
  v139 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_124;
  v140 = v139->fields._version + 1;
  v139->fields._size = 0;
  v139->fields._version = v140;
  ServantStatusListViewItem__SetEquipTargetIds(this, v37);
  v141 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v141 != 0 && enableTdSpeed;
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
  v145 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v145 != 0;
  if ( v145 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v145, 0);
    v145 = (UserServantEntity_o *)*p_userSvtEntity;
    v147 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v147 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v147;
  if ( !v145 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_107;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v145, 0);
  v149 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v149 )
  {
LABEL_107:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_108;
  }
  v150 = BasicHelper__DecryptValue_43904660(v149->fields.limitCountSupport, 0);
  v151 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v150;
  if ( v151 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v151, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_108:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v142,
    v143);
  v154 = this->fields.userSvtEntity;
  if ( v154 )
  {
    v155 = UserServantEntity__OwnRandomSettingSelectedButton(v154, 0);
    v156 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v155;
    if ( v156 )
    {
      v157 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v156, 0);
      v158 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_114;
    }
    v158 = 0;
  }
  else
  {
    v158 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v157 = 3;
LABEL_114:
  this->fields.supportRandomSettingButtonIndex = v157;
  ServantStatusListViewItem__SetLimitCountInfo(this, v158, v153);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
  }
  v161 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v161 = RandomLimitCountManager_TypeInfo;
  }
  if ( v161->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v160);
  ServantStatusListViewItem__ModifyInfo(this, v159);
}


void ServantStatusListViewItem___ctor_35343884(
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
  __int64 v28; // x1
  __int128 v29; // q1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v33; // q0
  bool v34; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v40; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x22
  __int64 v42; // x23
  __int64 v43; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  ServantLimitMaster_o *v48; // x23
  int32_t v49; // w24
  struct ServantLimitEntity_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  ServantCommentMaster_o *v53; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // q0
  __int64 v59; // x20
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // q0
  UserServantCollectionMaster_o *v64; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v65; // x8
  int64_t v66; // x24
  __int64 v67; // x25
  __int64 v68; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_42905040; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x1
  struct System_Int32_array *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct UserServantCollectionEntity_o *v89; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v91; // x8
  __int64 v92; // x23
  __int64 v93; // x24
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  UserServantEntity_o *v98; // x8
  const MethodInfo *v99; // x2
  struct UserServantCollectionEntity_o *v100; // x8
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v104; // x8
  int32_t v105; // w0
  UserServantEntity_o *v106; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v108; // x2
  UserServantEntity_o *v109; // x0
  int32_t v110; // w0
  UserServantEntity_o *v111; // x8
  int32_t v112; // w0
  UserServantEntity_o *v113; // x1
  const MethodInfo *v114; // x1
  const MethodInfo *v115; // x2
  RandomLimitCountManager_c *v116; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  v7 = isSkillChange;
  if ( (byte_4C23833 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23833 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v20, v21, v22);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v25, v26);
  this->fields.isEnableServantQuest = 0;
  this->fields.isFriendShipEquipSkillChange = v7;
  if ( !userServant )
    goto LABEL_77;
  v29 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v121.fields.fakeValue = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v120 = v121;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v120, 0);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_77;
  if ( Instance == userGameEntity->fields.userId )
  {
    v33 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
    v34 = 1;
    *(_OWORD *)&this->fields.favoriteUserSvtId = v33;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1;
    this->fields.pushUserSvtId = -1;
    this->fields.userGameEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v30, v31);
    v34 = 0;
  }
  this->fields._IsMyEquip_k__BackingField = v34;
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, (int32_t)userServant, v30, v31);
  this->fields.equipIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v36, v37);
  this->fields.questRestrictionInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v38, v39);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v40 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v43 = *(_QWORD *)&v40[5].fields.currentCryptoKey;
  v42 = *(_QWORD *)&v40[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v122.fields.currentCryptoKey = v43;
  *(_QWORD *)&v122.fields.fakeValue = v42;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v122, 0);
  if ( !v41 )
    goto LABEL_77;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v41,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v46, v47);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v48 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v49 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userSvtEntity)[6], 0);
  if ( !v48 )
    goto LABEL_77;
  v50 = ServantLimitMaster__GetEntity(v48, v49, Instance, 0);
  this->fields.svtLimitEntity = v50;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v50, v51, v52);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_77;
  v53 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_svtEntity)[1], 0);
  if ( !v53 )
    goto LABEL_77;
  EntityList = ServantCommentMaster__GetEntityList(v53, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v55, v56);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v57 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v58 = v57[4];
  v59 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v121.fields.currentCryptoKey = v57[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v121.fields.fakeValue = v58;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v119 = v121;
  if ( v59 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v119, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v62 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v63 = v62[4];
    v64 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v121.fields.currentCryptoKey = v62[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v121.fields.fakeValue = v63;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v118 = v121;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v118, 0);
    v65 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v66 = Instance;
    v68 = *(_QWORD *)&v65[5].fields.currentCryptoKey;
    v67 = *(_QWORD *)&v65[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v123.fields.currentCryptoKey = v68;
    *(_QWORD *)&v123.fields.fakeValue = v67;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v123, 0);
    if ( !v64 )
      goto LABEL_77;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v64, v66, Instance, 0);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, (int32_t)EntityDefinitely, v70, v71);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v73, v74);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_77;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(userSvtEntity->fields.limitCount, 0);
    if ( !userSvtCollectionEntity )
      goto LABEL_77;
    CostumeList_42905040 = UserServantCollectionEntity__getCostumeList_42905040(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0);
    this->fields.costumeIds = CostumeList_42905040;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList_42905040, v79, v80);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v81);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v60, v61);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    v82 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = v82;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v82, v83, v84);
    this->fields.costumeIds = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v85, v86);
    this->fields.costumeAndOtherIds = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeAndOtherIds, 0, v87, v88);
  }
  v89 = this->fields.userSvtCollectionEntity;
  if ( !v89 )
    goto LABEL_77;
  svtCommonFlag = v89->fields.svtCommonFlag;
  v91 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v91 )
    goto LABEL_77;
  v93 = *(_QWORD *)&v91->fields.battleVoice.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v91->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v124.fields.currentCryptoKey = v93;
  *(_QWORD *)&v124.fields.fakeValue = v92;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v124, 0);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v94, v95);
  this->fields.equipTargetInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v96, v97);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_77;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v98 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v98 )
    goto LABEL_77;
  this->fields.isChoice = UserServantEntity__IsChoice(v98, 0);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v99);
  v100 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v100 != 0;
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
    sub_1C2D6EC(Instance, v28);
  }
  IsNameTrue = 0;
LABEL_57:
  v104 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v104 )
  {
    v105 = BasicHelper__DecryptValue_43904660(v104->fields.limitCountSupport, 0);
    v106 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v105;
    if ( v106 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v106, this->fields.costumeIds, 0);
    else
      RandomLimitCountList = 0;
  }
  else
  {
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v101,
    v102);
  v109 = this->fields.userSvtEntity;
  if ( v109 )
  {
    v110 = UserServantEntity__OwnRandomSettingSelectedButton(v109, 0);
    v111 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v110;
    if ( v111 )
    {
      v112 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v111, 0);
      v113 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_68;
    }
    v113 = 0;
  }
  else
  {
    v113 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v112 = 3;
LABEL_68:
  this->fields.supportRandomSettingButtonIndex = v112;
  ServantStatusListViewItem__SetLimitCountInfo(this, v113, v108);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
  }
  v116 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v116 = RandomLimitCountManager_TypeInfo;
  }
  if ( v116->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v115);
  ServantStatusListViewItem__ModifyInfo(this, v114);
}


void ServantStatusListViewItem___ctor_35346140(
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
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct UserServantCollectionEntity_o *v42; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x22
  __int64 v44; // x23
  __int64 v45; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  ServantLimitMaster_o *v50; // x23
  struct ServantLimitEntity_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  ServantCommentMaster_o *v54; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Int32_array *CostumeList; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x1
  BalanceConfig_c *v65; // x0
  struct UserServantCollectionEntity_o *v66; // x8
  ServantEntity_o *v67; // x22
  __int64 v68; // x23
  __int64 v69; // x24
  int32_t v70; // w23
  int32_t maxLimitCount; // w24
  struct UserServantCollectionEntity_o *v72; // x8
  ServantEntity_o *svtEntity; // x22
  __int64 v74; // x23
  __int64 v75; // x24
  int32_t v76; // w23
  int32_t v77; // w24
  struct UserServantCollectionEntity_o *v78; // x8
  struct System_Int32_array *CardSelectList; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct UserServantCollectionEntity_o *v82; // x8
  ServantEntity_o *v83; // x22
  struct UserServantCollectionEntity_o *v84; // x8
  struct System_Int32_array *SelectList; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct UserServantCollectionEntity_o *v88; // x8
  ServantEntity_o *v89; // x22
  struct UserServantCollectionEntity_o *v90; // x8
  struct System_Int32_array *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v98; // x8
  struct System_Int32_array *v99; // x0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v103; // x8
  struct System_Int32_array *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x2
  struct UserServantCollectionEntity_o *v108; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v110; // x8
  const MethodInfo *v111; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  v7 = isEnableServantQuest;
  if ( (byte_4C23834 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23834 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v20, v21, v22);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v25, v26);
  this->fields.isEnableServantQuest = v7;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_60;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v29, v30);
  }
  this->fields.userSvtEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v29, v30);
  this->fields.equipIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v31, v32);
  this->fields.questRestrictionInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v33, v34);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v36,
    v37);
  this->fields.servantLeaderInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v38, v39);
  this->fields.equipTargetInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v40, v41);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v45 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v45;
  *(_QWORD *)&v113.fields.fakeValue = v44;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v113, 0);
  if ( !v43 )
    goto LABEL_60;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v43,
             (int32_t)Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v48, v49);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v50 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  if ( !v50 )
    goto LABEL_60;
  v51 = ServantLimitMaster__GetEntity(v50, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0);
  this->fields.svtLimitEntity = v51;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v51, v52, v53);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_60;
  v54 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_svtEntity)[1], 0);
  if ( !v54 )
    goto LABEL_60;
  EntityList = ServantCommentMaster__GetEntityList(v54, (int32_t)Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v56, v57);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v59, v60);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.costumeIds = CostumeList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v62, v63);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v64);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v66 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v67 = (ServantEntity_o *)*p_svtEntity;
      v69 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
      v68 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v114.fields.currentCryptoKey = v69;
      *(_QWORD *)&v114.fields.fakeValue = v68;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v114, 0);
      if ( *p_userSvtCollectionEntity )
      {
        v70 = (int)Instance;
        maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v70, maxLimitCount, 1, 0, 0);
        if ( v67 )
        {
          Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                        v67,
                                        (int32_t)Instance,
                                        0);
          goto LABEL_33;
        }
      }
    }
LABEL_60:
    sub_1C2D6EC(Instance, v28);
  }
  v65 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v65 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)(unsigned int)v65->static_fields->OtherImageLimitCount;
LABEL_33:
  v72 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v72 )
    goto LABEL_60;
  svtEntity = this->fields.svtEntity;
  v75 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v115.fields.currentCryptoKey = v75;
  *(_QWORD *)&v115.fields.fakeValue = v74;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v115, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v76 = (int)Instance;
  v77 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v76, v77, 1, 0, 0);
  if ( !svtEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(svtEntity, (int32_t)Instance, 0);
  v78 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v78 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v78->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0);
  this->fields.cardSelectList = CardSelectList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v80, v81);
  v82 = this->fields.userSvtCollectionEntity;
  if ( !v82 )
    goto LABEL_60;
  v83 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v82->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0);
  if ( !v83 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v83, (int32_t)Instance, 0);
  v84 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v84 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v84->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0);
  this->fields.dispSelectList = SelectList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v86, v87);
  v88 = this->fields.userSvtCollectionEntity;
  if ( !v88 )
    goto LABEL_60;
  v89 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v88->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0);
  if ( !v89 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v89, (int32_t)Instance, 0);
  v90 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v90 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v90->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v91 = ImageLimitCount__GetSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0);
  this->fields.commandCardSelectList = v91;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v91, v92, v93);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v95, v96);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v98 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v98 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v98->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v99 = ImageLimitCount__GetCardSelectList(
          (int32_t)Instance,
          (*p_userSvtCollectionEntity)->fields.maxLimitCount,
          this->fields.costumeIds,
          0);
  this->fields.iconSelectList = v99;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v99, v100, v101);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v103 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v103 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v103->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v104 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0);
  this->fields.portraitSelectList = v104;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v104, v105, v106);
  v108 = this->fields.userSvtCollectionEntity;
  if ( !v108 )
    goto LABEL_60;
  svtCommonFlag = v108->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v107);
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
  v110 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v110 != 0 && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v111);
}


void ServantStatusListViewItem___ctor_35348276(
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
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UserServantCollectionEntity_o *v44; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x22
  __int64 v46; // x24
  __int64 v47; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct UserServantCollectionEntity_o *v52; // x8
  ServantLimitMaster_o *v53; // x23
  struct ServantLimitEntity_o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  ServantCommentMaster_o *v58; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Int32_array *CostumeList; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x1
  struct UserServantCollectionEntity_o *v69; // x8
  int32_t v70; // w22
  struct UserServantCollectionEntity_o *v71; // x8
  int32_t v72; // w0
  struct UserServantCollectionEntity_o *v73; // x8
  int32_t v74; // w0
  struct System_Int32_array *CardSelectList; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct UserServantCollectionEntity_o *v78; // x8
  int32_t v79; // w0
  struct UserServantCollectionEntity_o *v80; // x8
  int32_t v81; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct UserServantCollectionEntity_o *v85; // x8
  int32_t v86; // w0
  struct UserServantCollectionEntity_o *v87; // x8
  int32_t v88; // w0
  struct System_Int32_array *v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v96; // x8
  int32_t v97; // w0
  struct System_Int32_array *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v102; // x8
  int32_t v103; // w0
  struct System_Int32_array *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x2
  struct UserServantCollectionEntity_o *v108; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v110; // x8
  const MethodInfo *v111; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  v9 = isEnableServantQuest;
  if ( (byte_4C23835 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23835 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v22, v23, v24);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v27, v28);
  this->fields.isEnableServantQuest = v9;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v31, v32);
  }
  this->fields.userSvtEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v31, v32);
  this->fields.equipIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v33, v34);
  this->fields.questRestrictionInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v35, v36);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v38,
    v39);
  this->fields.servantLeaderInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v40, v41);
  this->fields.equipTargetInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v42, v43);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v44 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v47 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
  v46 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v47;
  *(_QWORD *)&v113.fields.fakeValue = v46;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v113, 0);
  if ( !v45 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v45,
             (int32_t)Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v50, v51);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v52 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v53 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52->fields.svtId, 0);
  if ( !v53 )
    goto LABEL_35;
  v54 = ServantLimitMaster__GetEntity(v53, (int32_t)Instance, limitCount, 0);
  this->fields.svtLimitEntity = v54;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v54, v55, v56);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v57 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v58 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v57[1], 0);
  if ( !v58 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v58, (int32_t)Instance, limitCount, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v60, v61);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v63, v64);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.costumeIds = CostumeList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, (int32_t)CostumeList, v66, v67);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v68);
  v69 = this->fields.userSvtCollectionEntity;
  if ( !v69 )
    goto LABEL_35;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v69->fields.svtId, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v70, limitCount, 1, 0, 0);
  v71 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v71 )
    goto LABEL_35;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v71->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v72, limitCount, 1, 0, 0);
  v73 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v73 )
    goto LABEL_35;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v73->fields.svtId, 0);
  CardSelectList = ImageLimitCount__GetCardSelectList(v74, limitCount, this->fields.costumeAndOtherIds, 0);
  this->fields.cardSelectList = CardSelectList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v76, v77);
  v78 = this->fields.userSvtCollectionEntity;
  if ( !v78 )
    goto LABEL_35;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v78->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v79, limitCount, 0);
  v80 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v80 )
    goto LABEL_35;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v80->fields.svtId, 0);
  SelectList = ImageLimitCount__GetSelectList(v81, limitCount, this->fields.costumeIds, 0);
  this->fields.dispSelectList = SelectList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v83, v84);
  v85 = this->fields.userSvtCollectionEntity;
  if ( !v85 )
    goto LABEL_35;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v85->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v86, limitCount, 0);
  v87 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v87 )
    goto LABEL_35;
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v87->fields.svtId, 0);
  v89 = ImageLimitCount__GetSelectList(v88, limitCount, this->fields.costumeIds, 0);
  this->fields.commandCardSelectList = v89;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v89, v90, v91);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v93, v94);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v96 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v96 )
    goto LABEL_35;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v96->fields.svtId, 0);
  v98 = ImageLimitCount__GetCardSelectList(v97, limitCount, this->fields.costumeIds, 0);
  this->fields.iconSelectList = v98;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v98, v99, v100);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v102 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v102 )
    goto LABEL_35;
  v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v102->fields.svtId, 0);
  v104 = ImageLimitCount__GetSelectList(v103, limitCount, this->fields.costumeIds, 0);
  this->fields.portraitSelectList = v104;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v104, v105, v106);
  v108 = this->fields.userSvtCollectionEntity;
  if ( !v108 )
    goto LABEL_35;
  svtCommonFlag = v108->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v107);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_35:
    sub_1C2D6EC(Instance, v30);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0);
  v110 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v110 != 0 && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v111);
}


void ServantStatusListViewItem___ctor_35350100(
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
  __int64 v38; // x1
  bool v39; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v40; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x21
  __int64 v42; // x22
  __int64 v43; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  ServantLimitMaster_o *v48; // x22
  struct ServantLimitEntity_o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v52; // x8
  ServantCommentMaster_o *v53; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  ServantLeaderInfo_o *v62; // x8
  struct ServantLeaderInfo_o *v63; // x8
  int32_t v64; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_40212780; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  ServantLeaderInfo_o *v70; // x8
  struct ServantLeaderInfo_o *v71; // x8
  struct System_Int32_array *SelectList_40211964; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  ServantLeaderInfo_o *v75; // x8
  struct ServantLeaderInfo_o *v76; // x8
  struct System_Int32_array *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct ServantLeaderInfo_o *v82; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v84; // x8
  struct ServantLeaderInfo_o *v85; // x8
  struct System_Int32_array *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  ServantLeaderInfo_o *v89; // x8
  struct ServantLeaderInfo_o *v90; // x8
  struct System_Int32_array *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x1
  struct ServantLeaderInfo_o *v96; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v98; // x21
  __int64 v99; // x22
  __int64 v100; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v101; // x21
  __int64 v102; // x22
  __int64 v103; // x23
  Il2CppObject *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  __int64 v107; // x8
  ServantLimitMaster_o *v108; // x21
  __int64 v109; // x8
  struct ServantLimitEntity_o *v110; // x0
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  const MethodInfo *v113; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4C23836 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23836 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v19, v20, v21);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v22, v23);
  this->fields.userSvtEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v24, v25);
  this->fields.equipIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v26, v27);
  this->fields.questRestrictionInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v28, v29);
  this->fields.userSvtCollectionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v30, v31);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, (int32_t)servantLeaderInfo, v33, v34);
  this->fields.equipTargetInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, 0, v35, v36);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_7;
  if ( !servantLeaderInfo )
    goto LABEL_64;
  if ( servantLeaderInfo->fields.userId == SelfUserGame->fields.m_CachedPtr )
    v39 = 1;
  else
LABEL_7:
    v39 = 0;
  this->fields._IsMyEquip_k__BackingField = v39;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v40 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  v43 = *(_QWORD *)&v40[3].fields.currentCryptoKey;
  v42 = *(_QWORD *)&v40[3].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v43;
  *(_QWORD *)&v114.fields.fakeValue = v42;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v114, 0);
  if ( !v41 )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v41,
             (int32_t)SelfUserGame,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v46, v47);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v48 = (ServantLimitMaster_o *)SelfUserGame;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                    (*p_servantLeaderInfo)[3],
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  if ( !v48 )
    goto LABEL_64;
  v49 = ServantLimitMaster__GetEntity(v48, (int32_t)SelfUserGame, (*p_servantLeaderInfo)[4].fields.currentCryptoKey, 0);
  this->fields.svtLimitEntity = v49;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v49, v50, v51);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v52 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_64;
  v53 = (ServantCommentMaster_o *)SelfUserGame;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52[1], 0);
  if ( !v53 )
    goto LABEL_64;
  EntityList = ServantCommentMaster__GetEntityList(v53, (int32_t)SelfUserGame, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v55, v56);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)SelfUserGame, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v58, v59);
  this->fields.costumeIds = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v60, v61);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v62 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)SelfUserGame;
  if ( !v62 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v62, 0, 0);
  v63 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)SelfUserGame;
  if ( !v63 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                    v63->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v64 = (int)SelfUserGame;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList_40212780 = ImageLimitCount__GetCardSelectList_40212780(v64, currentCryptoKey, cardLimitCount, 0);
  this->fields.cardSelectList = CardSelectList_40212780;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList_40212780, v68, v69);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v70 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)SelfUserGame;
  if ( !v70 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v70, 0);
  v71 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)SelfUserGame;
  if ( !v71 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                    v71->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  SelectList_40211964 = ImageLimitCount__GetSelectList_40211964(
                          (int32_t)SelfUserGame,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0);
  this->fields.dispSelectList = SelectList_40211964;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList_40211964, v73, v74);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v75 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)SelfUserGame;
  if ( !v75 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v75, 0);
  v76 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)SelfUserGame;
  if ( !v76 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                    v76->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v77 = ImageLimitCount__GetSelectList_40211964(
          (int32_t)SelfUserGame,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.commandCardLimitCount,
          0,
          0);
  this->fields.commandCardSelectList = v77;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v77, v78, v79);
  v82 = this->fields.servantLeaderInfo;
  if ( !v82 )
    goto LABEL_64;
  commandCardParam = v82->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)commandCardParam, v80, v81);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v84 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)SelfUserGame;
  if ( !v84 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v84, 0, 0);
  v85 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)SelfUserGame;
  if ( !v85 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                    v85->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v86 = ImageLimitCount__GetCardSelectList_40212780(
          (int32_t)SelfUserGame,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.iconLimitCount,
          0);
  this->fields.iconSelectList = v86;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v86, v87, v88);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v89 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)SelfUserGame;
  if ( !v89 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v89, 0);
  v90 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)SelfUserGame;
  if ( !v90 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                    v90->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v91 = ImageLimitCount__GetSelectList_40211964(
          (int32_t)SelfUserGame,
          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
          this->fields.portraitLimitCount,
          0,
          0);
  this->fields.portraitSelectList = v91;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v91, v92, v93);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v94);
  ServantStatusListViewItem__SetEquipTargetIds(this, v95);
  v96 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v96 )
    goto LABEL_64;
  equipTarget1 = v96->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v99 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v98 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v115.fields.currentCryptoKey = v99;
    *(_QWORD *)&v115.fields.fakeValue = v98;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v115, 0) >= 1 )
    {
      SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                          SelfUserGame,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v100 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v100 )
          {
            v101 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
            v103 = *(_QWORD *)(v100 + 56);
            v102 = *(_QWORD *)(v100 + 64);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v116.fields.currentCryptoKey = v103;
            *(_QWORD *)&v116.fields.fakeValue = v102;
            SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v116, 0);
            if ( v101 )
            {
              v104 = DataMasterBase_object__object__int___GetEntity(
                       v101,
                       (int32_t)SelfUserGame,
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v104;
              sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntity, (int32_t)v104, v105, v106);
              SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( SelfUserGame )
              {
                SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                                  SelfUserGame,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v107 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v107 )
                  {
                    v108 = (ServantLimitMaster_o *)SelfUserGame;
                    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v107 + 56),
                                                      0);
                    if ( *p_servantLeaderInfo )
                    {
                      v109 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v109 )
                      {
                        if ( v108 )
                        {
                          v110 = ServantLimitMaster__GetEntity(v108, (int32_t)SelfUserGame, *(_DWORD *)(v109 + 72), 0);
                          this->fields.equipSvtLimitEntity = v110;
                          sub_1C2D434(
                            (CGThumbnailListItem_o *)&this->fields.equipSvtLimitEntity,
                            (int32_t)v110,
                            v111,
                            v112);
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
      sub_1C2D6EC(SelfUserGame, v38);
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
  ServantStatusListViewItem__ModifyInfo(this, v113);
}


void ServantStatusListViewItem___ctor_35352224(
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
  __int64 v41; // x1
  struct EquipTargetInfo_o *v42; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x20
  __int64 v44; // x21
  __int64 v45; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  ServantLimitMaster_o *v50; // x21
  struct ServantLimitEntity_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v54; // x8
  ServantCommentMaster_o *v55; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4C23837 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23837 = 1;
  }
  v9 = isNpcFollowerServantEquip;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v22, v23, v24);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v25, v26);
  this->fields.userSvtEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtEntity, 0, v27, v28);
  this->fields.equipIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v29, v30);
  this->fields.questRestrictionInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v31, v32);
  this->fields.userSvtCollectionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userSvtCollectionEntity, 0, v33, v34);
  this->fields.servantLeaderInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantLeaderInfo, 0, v35, v36);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipTargetInfo, (int32_t)equipTargetInfo, v38, v39);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v9;
  this->fields._IsMyEquip_k__BackingField = isMyEquip;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v45 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v77.fields.currentCryptoKey = v45;
  *(_QWORD *)&v77.fields.fakeValue = v44;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v77, 0);
  if ( !v43 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v43,
             (int32_t)Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtEntity, (int32_t)Entity, v48, v49);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v50 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                               (*p_equipTargetInfo)->fields.svtId,
                               0);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  if ( !v50 )
    goto LABEL_16;
  v51 = ServantLimitMaster__GetEntity(v50, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0);
  this->fields.svtLimitEntity = v51;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtLimitEntity, (int32_t)v51, v52, v53);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (v54 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity) == 0)
    || (v55 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v54[1], 0),
        !v55) )
  {
LABEL_16:
    sub_1C2D6EC(Instance, v41);
  }
  EntityList = ServantCommentMaster__GetEntityList(v55, (int32_t)Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommentEntityList, (int32_t)EntityList, v57, v58);
  this->fields.commandCodeIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v59, v60);
  this->fields.costumeIds = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.costumeIds, 0, v61, v62);
  this->fields.cardSelectList = 0;
  *(_QWORD *)&this->fields.cardLimitCount = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cardSelectList, 0, v63, v64);
  this->fields.dispSelectList = 0;
  *(_QWORD *)&this->fields.dispLimitCount = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dispSelectList, 0, v65, v66);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0;
  this->fields.commandCardSelectList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, 0, v67, v68);
  this->fields.commandCardParam = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardParam, 0, v69, v70);
  *(_QWORD *)&this->fields.iconLimitCount = 0;
  this->fields.iconSelectList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconSelectList, 0, v71, v72);
  *(_QWORD *)&this->fields.portraitLimitCount = 0;
  this->fields.portraitSelectList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.portraitSelectList, 0, v73, v74);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v75);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v76);
}


void ServantStatusListViewItem___ctor_35353460(
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
  __int64 v29; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4C23838 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23838 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v19, v20, v21);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v22, v23);
  this->fields.userCommandCodeEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, 0, v24, v25);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)commandCode, v26, v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v33 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v32 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v33;
  *(_QWORD *)&v36.fields.fakeValue = v32;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0);
  if ( !v31 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v31,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity, 0, v34, v35);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(Instance, v29);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
}


void ServantStatusListViewItem___ctor_35354240(
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
  __int64 v25; // x1
  __int128 v26; // q1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  Il2CppObject *Entity; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x21
  struct UserCommandCodeEntity_o *v39; // x8
  __int128 v40; // q0
  __int64 v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UserCommandCodeEntity_o *v44; // x8
  __int128 v45; // q0
  UserCommandCodeCollectionMaster_o *v46; // x21
  struct UserCommandCodeEntity_o *v47; // x8
  int64_t v48; // x22
  __int64 v49; // x23
  __int64 v50; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x0
  int32_t v52; // w1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v54; // x8
  struct UserCommandCodeEntity_o *v55; // x8
  __int128 v56; // q0
  UserServantCommandCodeMaster_o *v57; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4C23839 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23839 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v17, v18, v19);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v22, v23);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_46;
  v26 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v26;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v62 = v63;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v62, 0);
  if ( !p_fields->userGameEntity )
    goto LABEL_46;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v27, v28);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, (int32_t)userCommandCode, v27, v28);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v30 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v33 = *(_QWORD *)&v30->fields.commandCodeId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v33;
  *(_QWORD *)&v64.fields.fakeValue = v32;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v64, 0);
  if ( !v31 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v35, v36);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_46;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
               userCommandCodeEntity->fields.commandCodeId,
               0);
  if ( !v38 )
    goto LABEL_46;
  DataMasterBase_object__object__int___TryGetEntity(
    v38,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v39 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v40 = *(_OWORD *)&v39->fields.userId.fields.fakeValue;
  v41 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v39->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v61 = v63;
  if ( v41 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v61, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v44 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v45 = *(_OWORD *)&v44->fields.userId.fields.fakeValue;
        v46 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v44->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v63.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v60 = v63;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v60, 0);
        v47 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v48 = Instance;
          v50 = *(_QWORD *)&v47->fields.commandCodeId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v47->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v65.fields.currentCryptoKey = v50;
          *(_QWORD *)&v65.fields.fakeValue = v49;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v65, 0);
          if ( v46 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v46, v48, Instance, 0);
            v52 = (int)EntityDefinitely;
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_46:
    sub_1C2D6EC(Instance, v25);
  }
  this->fields.userCommandCodeCollectionEntity = 0;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  v52 = 0;
LABEL_37:
  sub_1C2D434((CGThumbnailListItem_o *)p_userCommandCodeCollectionEntity, v52, v42, v43);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0);
  v54 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v54 )
    goto LABEL_46;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v54, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v55 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  v57 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v59 = v63;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v59, 0);
  if ( !v57 )
    goto LABEL_46;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v57, Instance, 0);
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


void ServantStatusListViewItem___ctor_35355752(
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
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v29; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x20
  __int64 v31; // x21
  __int64 v32; // x22
  Il2CppObject *Entity; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C2383A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2383A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantEntityList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserGrandServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipGrandServantLimitEntityList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantSkillInfoList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipTargetIdList, (int32_t)v17, v18, v19);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)SelfUserGame, v22, v23);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields, 0, v26, v27);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v26,
    v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v29 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v32 = *(_QWORD *)&v29->fields.commandCodeId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v32;
  *(_QWORD *)&v38.fields.fakeValue = v31;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v38, 0);
  if ( !v30 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v30,
             (int32_t)Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeEntity, (int32_t)Entity, v34, v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0),
        !v37)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v37,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1C2D6EC(Instance, v25);
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
  __int64 v20; // x2
  struct System_String_array *transformedPassiveSkillExplanationMessageList; // x8
  CGThumbnailListItem_o *v22; // x25
  System_String_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C2386B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_10094/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_4C2386B = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
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
    v10 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
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
              (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__),
            (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
      {
LABEL_29:
        sub_1C2D6EC(Instance, v13);
      }
      NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                         (PartyOrganizationUtility_o *)Instance,
                                                                                         (System_Collections_Generic_IEnumerable_int__o *)v10,
                                                                                         FriendshipUpCampaignInfo,
                                                                                         0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10094/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
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
                   (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
          Instance = (Il2CppObject *)System_Linq_Enumerable__Contains_int_(
                                       NeedAddAnnotationSkillIds,
                                       Item,
                                       (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
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
              sub_1C2D6F4(Instance, v13, v20);
            v22 = (CGThumbnailListItem_o *)((char *)transformedPassiveSkillExplanationMessageList + v18);
            v23 = System_String__Concat_63457864(
                    *(System_String_o **)((char *)&transformedPassiveSkillExplanationMessageList->obj.klass + v18),
                    v16,
                    0);
            v22->klass = (CGThumbnailListItem_c *)v23;
            sub_1C2D434(v22, (int32_t)v23, v24, v25);
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
  __int64 v9; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v11; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *v12; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v13; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v14; // x21

  if ( (byte_4C2383D & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItem_LimitCountCache_TypeInfo);
    byte_4C2383D = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1C2D6DC(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0);
  this->fields.currentLimitCountCache = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentLimitCountCache, (int32_t)v5, v6, v7);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
    v11 = 0;
  else
    v11 = this->fields.currentLimitCountCache;
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
    v12 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 1, 0);
    if ( !v12 )
      goto LABEL_22;
    v12->fields.iconLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v13 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getCommandCardLimitCount(userSvtEntity, 1, 0);
    if ( !v13 )
      goto LABEL_22;
    v13->fields.commandCardLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v14 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(userSvtEntity, 1, 0);
    if ( !v14 )
      goto LABEL_22;
    v14->fields.dispLimitCount = (int)userSvtEntity;
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
    if ( !v11 || (v11->fields.cardLimitCount = this->fields.cardLimitCount, !currentLimitCountCache) )
LABEL_22:
      sub_1C2D6EC(userSvtEntity, v9);
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
  sub_1C2D434(
    (CGThumbnailListItem_o *)idList,
    (int32_t)appendPassiveSkillIdList,
    (int32_t)titleList,
    (const MethodInfo *)explanationList);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_1C2D434((CGThumbnailListItem_o *)titleList, (int32_t)appendPassiveSkillTitleMessageList, v14, v15);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_1C2D434((CGThumbnailListItem_o *)explanationList, (int32_t)appendPassiveSkillExplanationMessageList, v17, v18);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_1C2D434((CGThumbnailListItem_o *)releaseStateList, (int32_t)appendPassiveSkillReleaseStateList, v20, v21);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_1C2D434((CGThumbnailListItem_o *)lvList, (int32_t)appendPassiveSkillLvList, v23, v24);
}


System_Int32_array *ServantStatusListViewItem__GetClassSkill(
        ServantStatusListViewItem_o *this,
        int32_t targetDispLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *svtEntity; // x0
  UserServantEntity_o *userSvtEntity; // x20
  System_String_array *v9; // [xsp+0h] [xbp-40h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C2386A & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C2386A = 1;
  }
  v9 = 0;
  titleList = 0;
  idList = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
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
          &v9,
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
    svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( svtEntity && userSvtEntity )
    {
      UserServantEntity__getPassiveSkillInfo(
        userSvtEntity,
        &idList,
        &titleList,
        &v9,
        targetDispLimitCount,
        *((_QWORD *)svtEntity + 14),
        0);
      return idList;
    }
LABEL_15:
    sub_1C2D6EC(svtEntity, v5);
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
      sub_1C2D6EC(this, checkTransform);
  }
  return TransformedServant_k__BackingField->fields.cardIds;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipAtkByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4C23857 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C23857 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._size;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C2D6EC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipCostByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x0

  if ( (byte_4C23859 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C23859 = 1;
  }
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_9;
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               equipGrandServantEntityList,
                                                                               index,
                                                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
  if ( equipGrandServantEntityList )
  {
    equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
    if ( equipGrandServantEntityList )
    {
      equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   equipGrandServantEntityList,
                                                                                   index,
                                                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
      if ( equipGrandServantEntityList )
      {
        LODWORD(equipGrandServantEntityList) = equipGrandServantEntityList[3].fields._syncRoot;
        return (int)equipGrandServantEntityList;
      }
    }
LABEL_9:
    sub_1C2D6EC(equipGrandServantEntityList, *(_QWORD *)&index);
  }
  return (int)equipGrandServantEntityList;
}


int32_t ServantStatusListViewItem__GetEquipExpByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserGrandServantEntityList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *Item; // x0

  if ( (byte_4C2385C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C2385C = 1;
  }
  equipUserGrandServantEntityList = this->fields.equipUserGrandServantEntityList;
  if ( equipUserGrandServantEntityList
    && System_Collections_Generic_List_object___get_Item(
         (System_Collections_Generic_List_object__o *)equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( !Item
      || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                index,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0 )
    {
      sub_1C2D6EC(Item, v6);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C2385D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C2385D = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getExpInfo(
                 (UserServantEntity_o *)equipUserGrandServantEntityList,
                 exp,
                 lateExp,
                 barExp,
                 0);
    }
LABEL_12:
    sub_1C2D6EC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipHpByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4C23858 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C23858 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._version;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C2D6EC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
int64_t ServantStatusListViewItem__GetEquipIdByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x0

  if ( (byte_4C2385E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_4C2385E = 1;
  }
  grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
  if ( !grandServantEquipTargetIdList )
    sub_1C2D6EC(0, *(_QWORD *)&index);
  return System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_37718C8 *)Method_System_Collections_Generic_List_long__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4C23853 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C23853 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._items;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C2D6EC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C23856 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C23856 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        items = equipUserGrandServantEntityList[2].fields._items;
        v6 = *(_QWORD *)&equipUserGrandServantEntityList[2].fields._size;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v10.fields.currentCryptoKey = items;
        *(_QWORD *)&v10.fields.fakeValue = v6;
        LODWORD(servantLeaderInfo) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
        return (int)servantLeaderInfo;
      }
    }
LABEL_14:
    sub_1C2D6EC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipMaxLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0

  if ( (byte_4C23854 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4C23854 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getLevelMax((UserServantEntity_o *)equipUserGrandServantEntityList, 0);
    }
LABEL_12:
    sub_1C2D6EC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *ServantStatusListViewItem__GetEquipServantByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x0

  if ( (byte_4C23852 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C23852 = 1;
  }
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    sub_1C2D6EC(0, *(_QWORD *)&index);
  return (ServantEntity_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)equipGrandServantEntityList,
                              index,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
  sub_1C2D434((CGThumbnailListItem_o *)skillInfoList, (int32_t)equipSkillInfoList, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C2385F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo____get_Item__);
    byte_4C2385F = 1;
  }
  grandServantSkillInfoList = this->fields.grandServantSkillInfoList;
  if ( !grandServantSkillInfoList )
    sub_1C2D6EC(0, *(_QWORD *)&index);
  Item = (SkillInfo_array *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)grandServantSkillInfoList,
                              index,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SkillInfo____get_Item__);
  *skillInfoList = Item;
  sub_1C2D434((CGThumbnailListItem_o *)skillInfoList, (int32_t)Item, v9, v10);
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

  if ( (byte_4C23863 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23863 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
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
    0);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity || UserServantEntity__IsAddFriendShipHeroine(userSvtEntity, 0) )
    return userSvtCollectionEntity != 0;
  Instance = (DataManager_o *)this->fields.svtEntity;
  if ( !Instance )
LABEL_19:
    sub_1C2D6EC(Instance, v13);
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
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  UserServantEntity_o *HeroineData; // x0
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  EventDropUpValInfo_o *v18; // x22
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4C2386C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C2D490(&EventDropUpValInfo_TypeInfo);
    sub_1C2D490(&FunctionEntity_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C2386C = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 14),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v29 = v28;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v29,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v8 )
        break;
      current = v29.fields._current;
      if ( !v29.fields._current )
        sub_1C2D6EC(v8, v9);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v29.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v12 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v12 )
          sub_1C2D6EC(0, v13);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v12, svtId, 0);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0) )
        {
          v15 = sub_1C2D6DC(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v15, 0);
          if ( !v15 )
            sub_1C2D6EC(v16, v17);
          *(_QWORD *)(v15 + 24) = 111;
          v18 = (EventDropUpValInfo_o *)sub_1C2D6DC(EventDropUpValInfo_TypeInfo);
          EventDropUpValInfo___ctor(v18, 0, (FunctionEntity_o *)v15, 0);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
          if ( !v18 )
            sub_1C2D6EC(OnlyMaxFuncGroupId, v20);
          v18->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v4 )
            sub_1C2D6EC(OnlyMaxFuncGroupId, v20);
          items = v4->fields._items;
          v24 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C2D6EC(OnlyMaxFuncGroupId, v20);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v18,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v18;
            sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v21, v22);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v4 )
LABEL_35:
    sub_1C2D6EC(Instance, v7);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v4,
                                       (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
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
  sub_1C2D434((CGThumbnailListItem_o *)tdInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isTdResult;
}


bool ServantStatusListViewItem__GetNpInfo_35368000(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C23862 & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcInfo_TypeInfo);
    byte_4C23862 = 1;
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
      sub_1C2D6EC(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1C2D6DC(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0);
    *tdInfo = v9;
    sub_1C2D434((CGThumbnailListItem_o *)tdInfo, (int32_t)v9, v10, v11);
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
    sub_1C2D434(
      (CGThumbnailListItem_o *)idList,
      (int32_t)transformedPassiveSkillIdList,
      (int32_t)titleList,
      (const MethodInfo *)explanationList);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_1C2D434((CGThumbnailListItem_o *)titleList, (int32_t)transformedPassiveSkillTitleMessageList, v12, v13);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.transformedPassiveSkillExplanationMessageList;
  }
  else
  {
    passiveSkillIdList = this->fields.passiveSkillIdList;
    *idList = passiveSkillIdList;
    sub_1C2D434(
      (CGThumbnailListItem_o *)idList,
      (int32_t)passiveSkillIdList,
      (int32_t)titleList,
      (const MethodInfo *)explanationList);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_1C2D434((CGThumbnailListItem_o *)titleList, (int32_t)passiveSkillTitleMessageList, v19, v20);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v21 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1C2D434((CGThumbnailListItem_o *)explanationList, (int32_t)v21, v14, v15);
}


void ServantStatusListViewItem__GetPassiveSkillInfo_35367504(
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

  if ( (byte_4C23861 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    byte_4C23861 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_17;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      sub_1C2D6EC(svtEntity, idList);
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
    v14 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v13->static_fields->SvtPassiveSkillListMax);
    *idList = v14;
    sub_1C2D434((CGThumbnailListItem_o *)idList, (int32_t)v14, v15, v16);
    v17 = (System_String_array *)sub_1C2D538(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v17;
    sub_1C2D434((CGThumbnailListItem_o *)titleList, (int32_t)v17, v18, v19);
    v20 = (System_String_array *)sub_1C2D538(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v20;
    sub_1C2D434((CGThumbnailListItem_o *)explanationList, (int32_t)v20, v21, v22);
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
  sub_1C2D434((CGThumbnailListItem_o *)skillInfoList, (int32_t)v6, checkTransform, method);
}


void ServantStatusListViewItem__GetSkillInfo_35367092(
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

  if ( (byte_4C23860 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&SkillInfo___TypeInfo);
    byte_4C23860 = 1;
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
      v10 = (SkillInfo_array *)sub_1C2D538(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
      *skillInfoList = v10;
      sub_1C2D434((CGThumbnailListItem_o *)skillInfoList, (int32_t)v10, v11, v12);
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
  __int64 v7; // x1
  Il2CppObject *Master_object; // x22
  const MethodInfo *v9; // x1
  int32_t LimitCount; // w23
  int32_t LimitCountByDispLimit; // w21
  const MethodInfo *v12; // x1
  UserServantCollectionEntity_o *SvtId; // x0
  UserServantEntity_o *userSvtEntity; // x0
  ServantOverwriteStatus_o *OverwriteStatus_42952520; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  ServantLimitCountSealAfter = targetDispLimitCount;
  if ( (byte_4C23869 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    byte_4C23869 = 1;
  }
  *outOverwriteStatus = 0;
  sub_1C2D434((CGThumbnailListItem_o *)outOverwriteStatus, 0, targetDispLimitCount, method);
  if ( !this->fields.servantLeaderInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    LimitCount = ServantStatusListViewItem__get_LimitCount(this, v9);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(ServantLimitCountSealAfter, LimitCount, 0);
    SvtId = (UserServantCollectionEntity_o *)ServantStatusListViewItem__get_SvtId(this, v12);
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
    OverwriteStatus_42952520 = UserServantEntity__GetOverwriteStatus_42952520(
                                 userSvtEntity,
                                 ServantLimitCountSealAfter,
                                 0);
LABEL_17:
    *outOverwriteStatus = OverwriteStatus_42952520;
    sub_1C2D434((CGThumbnailListItem_o *)outOverwriteStatus, (int32_t)OverwriteStatus_42952520, v16, v17);
    return;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    OverwriteStatus_42952520 = ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
    goto LABEL_17;
  }
  if ( this->fields.isCollection )
  {
    SvtId = this->fields.userSvtCollectionEntity;
    if ( SvtId )
    {
      OverwriteStatus_42952520 = UserServantCollectionEntity__GetOverwriteStatus(SvtId, ServantLimitCountSealAfter, 0);
      goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(SvtId, v7);
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
  sub_1C2D434((CGThumbnailListItem_o *)tdInfo, (int32_t)transformedTdInfo, (int32_t)method, v3);
}


bool ServantStatusListViewItem__GetVoiceInfo(
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
  const MethodInfo *v24; // x3
  System_String_o *monitor; // x1
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x1
  __int64 *v30; // x8
  System_String_o *v31; // x0
  ServantLimitAddEntity_o *v33; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C23864 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_CvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_IllustratorMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_14820/*"UNKNOWN_NAME_ILLUST"*/);
    sub_1C2D490(&StringLiteral_9319/*"NO_ENTRY_NAME_ILLUST"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23864 = 1;
  }
  v33 = 0;
  entity = 0;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)voice, StringLiteral_1/*""*/, (int32_t)voice, (const MethodInfo *)isPlayVoice);
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
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                     v35,
                                                     0);
        if ( v19 )
        {
          if ( ServantLimitAddMaster__TryGetEntity(v19, &v33, (int32_t)Master_object, currentCardLimitCount, 0) )
          {
            Master_object = (ServantLimitAddMaster_o *)v33;
            if ( !v33 )
              goto LABEL_44;
            cvId = ServantLimitAddEntity__GetOverwriteCvId(v33, cvId, 0);
          }
          if ( cvId < 1 )
            goto LABEL_28;
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v22 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_3387D98 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v22 )
              {
                monitor = (System_String_o *)v22[1].monitor;
                *voice = monitor;
                sub_1C2D434((CGThumbnailListItem_o *)voice, (int32_t)monitor, v23, v24);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1C2D6EC(Master_object, v10);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v12);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
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
        v30 = &StringLiteral_9319/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_42:
        v31 = LocalizationManager__Get((System_String_o *)*v30, 0);
        LODWORD(v29) = (_DWORD)v31;
        *illust = v31;
        goto LABEL_43;
      }
    }
LABEL_41:
    v30 = &StringLiteral_14820/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v26 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v26 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_41;
  }
  v29 = (System_String_o *)v26[1].monitor;
  *illust = v29;
LABEL_43:
  sub_1C2D434((CGThumbnailListItem_o *)illust, (int32_t)v29, v27, v28);
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
      sub_1C2D6EC(this, method);
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

  if ( (byte_4C23851 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C23851 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
    if ( !grandServantEquipTargetIdList )
      return (char)grandServantEquipTargetIdList;
    v6 = System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_37718C8 *)Method_System_Collections_Generic_List_long__get_Item__) <= 0;
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
      v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0) <= 0;
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *TreasureDeviceInfo; // x0
  UserServantEntity_o *userSvtEntity; // x22
  bool v12; // w0
  struct UserServantEntity_o *v13; // x20
  const MethodInfo *v14; // x1
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  ServantLeaderInfo_o *v16; // x8
  EquipTargetInfo_o *equipTargetInfo; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4C2383E & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&TreasureDvcInfo_TypeInfo);
    byte_4C2383E = 1;
  }
  this->fields.isTdResult = 0;
  v3 = (TreasureDvcInfo_o *)sub_1C2D6DC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v3, 0);
  this->fields.tdInfo = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tdInfo, (int32_t)v3, v4, v5);
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
            v16 = this->fields.servantLeaderInfo;
            this->fields.isTdResult = (unsigned __int8)TreasureDeviceInfo & 1;
            if ( v16 )
            {
              ServantLeaderInfo__SetSkillChangeInfo(v16, 0);
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
    TreasureDeviceInfo = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    sub_1C2D6EC(TreasureDeviceInfo, v7);
  }
LABEL_10:
  TreasureDeviceInfo = this->fields.userSvtEntity;
  if ( !TreasureDeviceInfo )
    goto LABEL_35;
  v12 = UserServantEntity__getTreasureDeviceInfo(
          (UserServantEntity_o *)TreasureDeviceInfo,
          &this->fields.tdInfo,
          -1,
          ConvertOverwriteDispImageLimitCount,
          0,
          0);
  v13 = this->fields.userSvtEntity;
  this->fields.isTdResult = v12;
  TreasureDeviceInfo = (void *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v14);
  if ( !v13 )
    goto LABEL_35;
  v13->fields.dispLimitCountAfter = (int)TreasureDeviceInfo;
LABEL_21:
  ServantStatusListViewItem__AddDuplicationInfo(this, 0, v8);
  ServantStatusListViewItem__SetGrandInfo(this, v18);
  ServantStatusListViewItem__SetTransformData(this, v19);
  ServantStatusListViewItem__SetCostumeData(this, v20);
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

  if ( (byte_4C2383B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C2383B = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
      v5 = sub_1C2D6DC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_42922220((UserServantEntity_o *)v5, userSvtEntity, 0);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0);
      if ( !v5 )
        sub_1C2D6EC(*(_QWORD *)&v7.fields.currentCryptoKey, *(_QWORD *)&v7.fields.fakeValue);
      v8 = *(_QWORD *)(v5 + 80);
      v9 = *(_QWORD *)(v5 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 208) = v7;
      *(_QWORD *)&v16.fields.currentCryptoKey = v8;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v16, 0);
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
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Int32_array *v19; // x0

  if ( (byte_4C23867 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C23867 = 1;
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
      v10 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
      v11 = v10;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_58115124(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
      else
        System_Collections_Generic_List_int____ctor(
          v10,
          (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v11 )
      {
        items = v11->fields._items;
        method = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&svtEntity->fields.starRate + 912LL);
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              (int32_t)method,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size] = (int)method;
          }
          v19 = System_Collections_Generic_List_int___ToArray(
                  v11,
                  (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      v12 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, LODWORD(costumeIds->max_length));
      this->fields.costumeAndOtherIds = v12;
      v13 = &this->fields.costumeAndOtherIds;
      sub_1C2D434((CGThumbnailListItem_o *)v13, (int32_t)v12, v14, v15);
      svtEntity = (ServantEntity_o *)*(v13 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v13, 0, 0);
        return;
      }
    }
LABEL_26:
    sub_1C2D6EC(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v7 = 0;
LABEL_25:
  sub_1C2D434((CGThumbnailListItem_o *)p_costumeAndOtherIds, v7, v4, v5);
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
  if ( (byte_4C23840 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantStatusListViewItem_o *)sub_1C2D490(&SkillInfo___TypeInfo);
    byte_4C23840 = 1;
  }
  if ( equipUserSvtId >= 1 && v5->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v5->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v5->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v35, 0);
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
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
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
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                      v36,
                                                      0);
              if ( v13 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                           (int32_t)this,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v5->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.equipServantEntity, (int32_t)Entity, v17, v18);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v19 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0);
                    v20 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v21 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                              v20[6],
                                                              0);
                      if ( v19 )
                      {
                        v22 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v19, v21, (int32_t)this, 0);
                        v5->fields.equipSvtLimitEntity = v22;
                        sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.equipSvtLimitEntity, (int32_t)v22, v23, v24);
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
          sub_1C2D6EC(this, equipUserSvtId);
        }
LABEL_39:
        sub_1C2D6F4(this, equipUserSvtId, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.equipUserSvtEntity, 0, (int32_t)method, v3);
  v5->fields.equipServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.equipServantEntity, 0, v27, v28);
  v5->fields.equipSvtLimitEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.equipSvtLimitEntity, 0, v29, v30);
  v31 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  v32 = sub_1C2D538(SkillInfo___TypeInfo, (unsigned int)v31->static_fields->SvtEquipSkillListMax);
  v5->fields.equipSkillInfoList = (struct SkillInfo_array *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.equipSkillInfoList, v32, v33, v34);
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
  SkillInfo_array *v13; // x1
  int32_t i; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  struct System_Int64_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x8
  struct System_Object_array *v26; // x9
  _QWORD *v27; // x10
  __int64 v28; // x11
  int v29; // w24
  Il2CppClass **v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x23
  __int64 v34; // x24
  __int64 v35; // x25
  struct System_Int64_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct System_Int64_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  System_Collections_Generic_List_object__o *v42; // x23
  Il2CppObject *v43; // x24
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x1
  Il2CppClass **v50; // x0
  System_Collections_Generic_List_object__o *v51; // x23
  Il2CppObject *v52; // x24
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x1
  Il2CppClass **v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
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
  __int64 v85; // x2
  const MethodInfo *v86; // x3
  struct System_Int64_array *v87; // x8
  __int64 v88; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v90; // x23
  struct System_Int64_array *v91; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v94; // x8
  _QWORD *v95; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v97; // x8
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  __int64 v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  __int64 v110; // x8
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  __int64 v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  __int64 v116; // x8
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  __int64 v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  __int64 v122; // x8
  CGThumbnailListItem_o *v123; // x0
  __int64 v124; // x8
  struct System_Int64_array *grandServantEquipIdList; // x8
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v130; // x22
  void *v131; // x23
  Il2CppClass *v132; // x26
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  struct System_Object_array *items; // x8
  _QWORD *v136; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v138; // x1
  Il2CppClass **v139; // x0
  System_Collections_Generic_List_object__o *equipGrandServantLimitEntityList; // x21
  ServantLimitMaster_o *v141; // x22
  int32_t v142; // w23
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v148; // x1
  Il2CppClass **v149; // x0
  __int64 v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  __int64 v153; // x8
  ServantStatusListViewItem_o *v154; // x0
  UserServantEntity_o *v155; // x1
  const MethodInfo *v156; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-78h] BYREF
  SkillInfo_array *v158; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_4C2383F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantLimitEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2383F = 1;
  }
  v158 = 0;
  entity = 0;
  skillInfoList = 0;
  equipIdList = this->fields.equipIdList;
  if ( equipIdList && SLODWORD(equipIdList->max_length) >= 2 && this->fields.userSvtEntity )
  {
    v4 = System_Array__Clone((System_Array_o *)equipIdList, 0);
    if ( v4 )
    {
      v7 = v4;
      v8 = (struct System_Int64_array *)sub_1C2D5CC(v4, long___TypeInfo);
      if ( !v8 || (this->fields.grandServantEquipIdList = v8, (v9 = sub_1C2D5CC(v7, long___TypeInfo)) == 0) )
      {
        sub_1C2D9AC(v7);
        ServantStatusListViewItem__SetLimitCountInfo(v154, v155, v156);
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
    sub_1C2D434((CGThumbnailListItem_o *)p_grandServantEquipIdList, v10, v5, v6);
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
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
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
                                                                        (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_102;
        if ( !entity )
          break;
        klass = entity[5].klass;
        monitor = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v162.fields.currentCryptoKey = klass;
        *(_QWORD *)&v162.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v162, 0) >= 1 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v13 = (SkillInfo_array *)entity;
          v94 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v95 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v94 )
            break;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v94 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v13->obj,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
          }
          else
          {
            v97 = v94 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v97 + 32) = v13;
            sub_1C2D434((CGThumbnailListItem_o *)(v97 + 32), (int32_t)v13, v85, v86);
          }
          grandServantEquipIdList = this->fields.grandServantEquipIdList;
          if ( !grandServantEquipIdList )
            break;
          if ( v90 >= LODWORD(grandServantEquipIdList->max_length) )
LABEL_165:
            sub_1C2D6F4(Master_object, v13, v85);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v13 = (SkillInfo_array *)*((_QWORD *)&grandServantEquipIdList->obj.klass + v88);
          v126 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v127 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v126 )
            break;
          v128 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              (int64_t)v13,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v128 + 1;
            *(_QWORD *)(v126 + 8 * v128 + 32) = v13;
          }
          equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !entity )
            break;
          v130 = Master_object;
          v132 = entity[5].klass;
          v131 = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v163.fields.currentCryptoKey = v132;
          *(_QWORD *)&v163.fields.fakeValue = v131;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                          v163,
                                                                          0);
          if ( !v130 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v130,
                                                                          (int32_t)Master_object,
                                                                          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !equipGrandServantEntityList )
            break;
          items = equipGrandServantEntityList->fields._items;
          v136 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++equipGrandServantEntityList->fields._version;
          if ( !items )
            break;
          size = equipGrandServantEntityList->fields._size;
          v138 = Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            v139 = &items->obj.klass + size;
            equipGrandServantEntityList->fields._size = size + 1;
            v139[4] = (Il2CppClass *)v138;
            sub_1C2D434((CGThumbnailListItem_o *)(v139 + 4), (int32_t)v138, v133, v134);
          }
          equipGrandServantLimitEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitMaster___);
          if ( !entity )
            break;
          v141 = (ServantLimitMaster_o *)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                                                          0);
          if ( !entity )
            break;
          v142 = (int)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                                                                          0);
          if ( !v141 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                          v141,
                                                                          v142,
                                                                          (int32_t)Master_object,
                                                                          0);
          if ( !equipGrandServantLimitEntityList )
            break;
          v145 = equipGrandServantLimitEntityList->fields._items;
          v146 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++equipGrandServantLimitEntityList->fields._version;
          if ( !v145 )
            break;
          v147 = equipGrandServantLimitEntityList->fields._size;
          v148 = Master_object;
          if ( (unsigned int)v147 >= LODWORD(v145->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantLimitEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
          }
          else
          {
            v149 = &v145->obj.klass + v147;
            equipGrandServantLimitEntityList->fields._size = v147 + 1;
            v149[4] = (Il2CppClass *)v148;
            sub_1C2D434((CGThumbnailListItem_o *)(v149 + 4), (int32_t)v148, v143, v144);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
          if ( !entity )
            break;
          UserServantEntity__getEquipSkillInfo((UserServantEntity_o *)entity, &v158, 1, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v13 = v158;
          v150 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v151 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v150 )
            break;
          v152 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v152 >= *(_DWORD *)(v150 + 24) )
          {
            v124 = v151[4];
            goto LABEL_128;
          }
          v153 = v150 + 8 * v152;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v152 + 1;
          *(_QWORD *)(v153 + 32) = v13;
          v123 = (CGThumbnailListItem_o *)(v153 + 32);
        }
        else
        {
LABEL_102:
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v98 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v99 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v98 )
            break;
          v100 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
          }
          else
          {
            v101 = v98 + 8 * v100;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v100 + 1;
            *(_QWORD *)(v101 + 32) = 0;
            sub_1C2D434((CGThumbnailListItem_o *)(v101 + 32), 0, v85, v86);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v104 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v105 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v104 )
            break;
          v106 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v106 >= *(_DWORD *)(v104 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              0,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v106 + 1;
            *(_QWORD *)(v104 + 8 * v106 + 32) = 0;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
          if ( !Master_object )
            break;
          v107 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v108 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v107 )
            break;
          v109 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            v110 = v107 + 8 * v109;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v109 + 1;
            *(_QWORD *)(v110 + 32) = 0;
            sub_1C2D434((CGThumbnailListItem_o *)(v110 + 32), 0, v102, v103);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
          if ( !Master_object )
            break;
          v113 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v114 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v113 )
            break;
          v115 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v115 >= *(_DWORD *)(v113 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
          }
          else
          {
            v116 = v113 + 8 * v115;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v115 + 1;
            *(_QWORD *)(v116 + 32) = 0;
            sub_1C2D434((CGThumbnailListItem_o *)(v116 + 32), 0, v111, v112);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v119 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v120 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v119 )
            break;
          v121 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v121 >= *(_DWORD *)(v119 + 24) )
          {
            v124 = v120[4];
            v13 = 0;
LABEL_128:
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v13->obj,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v124 + 192) + 112LL));
            goto LABEL_129;
          }
          v122 = v119 + 8 * v121;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v121 + 1;
          *(_QWORD *)(v122 + 32) = 0;
          v123 = (CGThumbnailListItem_o *)(v122 + 32);
          LODWORD(v13) = 0;
        }
        sub_1C2D434(v123, (int32_t)v13, v117, v118);
LABEL_129:
        v87 = *p_grandServantEquipIdList;
        ++v88;
      }
      while ( *p_grandServantEquipIdList );
    }
LABEL_164:
    sub_1C2D6EC(Master_object, v13);
  }
  if ( !this->fields.servantLeaderInfo )
    return;
  v12 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
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
      v17 = EquipTargetInfoByEquipIdx;
      v19 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v160.fields.currentCryptoKey = v19;
      *(_QWORD *)&v160.fields.fakeValue = v18;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                      v160,
                                                                      0);
      if ( !v12 )
        goto LABEL_164;
      v20 = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_long__Add__;
      ++v12->fields._version;
      if ( !v20 )
        goto LABEL_164;
      v22 = v12->fields._size;
      if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v12,
          (int)Master_object,
          *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = v22 + 1;
        v20->m_Items[v22] = (int)Master_object;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                      v17->fields.svtId,
                                                                      0);
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
      if ( !equipUserGrandServantEntityList )
        goto LABEL_164;
      v26 = equipUserGrandServantEntityList->fields._items;
      v27 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++equipUserGrandServantEntityList->fields._version;
      if ( !v26 )
        goto LABEL_164;
      v28 = equipUserGrandServantEntityList->fields._size;
      v29 = (int)Master_object;
      if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          equipUserGrandServantEntityList,
          0,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &v26->obj.klass + v28;
        equipUserGrandServantEntityList->fields._size = v28 + 1;
        v30[4] = 0;
        sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), 0, v23, v24);
      }
      grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
      if ( v29 < 1 )
      {
        if ( !grandServantEquipTargetIdList )
          goto LABEL_164;
        v39 = grandServantEquipTargetIdList->fields._items;
        v40 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v39 )
          goto LABEL_164;
        v41 = grandServantEquipTargetIdList->fields._size;
        if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            0,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v41 + 1;
          v39->m_Items[v41] = 0;
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = v68 + 8 * v70;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v70 + 1;
          *(_QWORD *)(v71 + 32) = 0;
          sub_1C2D434((CGThumbnailListItem_o *)(v71 + 32), 0, v31, v32);
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = v74 + 8 * v76;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v76 + 1;
          *(_QWORD *)(v77 + 32) = 0;
          sub_1C2D434((CGThumbnailListItem_o *)(v77 + 32), 0, v72, v73);
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
          LODWORD(v13) = 0;
          goto LABEL_75;
        }
        v67 = v79[4];
        v13 = 0;
      }
      else
      {
        v35 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
        v34 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v161.fields.currentCryptoKey = v35;
        *(_QWORD *)&v161.fields.fakeValue = v34;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                        v161,
                                                                        0);
        if ( !grandServantEquipTargetIdList )
          goto LABEL_164;
        v36 = grandServantEquipTargetIdList->fields._items;
        v37 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v36 )
          goto LABEL_164;
        v38 = grandServantEquipTargetIdList->fields._size;
        if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            (int)Master_object,
            *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v38 + 1;
          v36->m_Items[v38] = (int)Master_object;
        }
        v42 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v43 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                        v17->fields.svtId,
                                                                        0);
        if ( !v43 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v43,
                                                                        (int32_t)Master_object,
                                                                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v42 )
          goto LABEL_164;
        v46 = v42->fields._items;
        v47 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v42->fields._version;
        if ( !v46 )
          goto LABEL_164;
        v48 = v42->fields._size;
        v49 = Master_object;
        if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &v46->obj.klass + v48;
          v42->fields._size = v48 + 1;
          v50[4] = (Il2CppClass *)v49;
          sub_1C2D434((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v49, v44, v45);
        }
        v51 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
        v52 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                        v17->fields.svtId,
                                                                        0);
        if ( !v52 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                        (ServantLimitMaster_o *)v52,
                                                                        (int32_t)Master_object,
                                                                        v17->fields.limitCount,
                                                                        0);
        if ( !v51 )
          goto LABEL_164;
        v55 = v51->fields._items;
        v56 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++v51->fields._version;
        if ( !v55 )
          goto LABEL_164;
        v57 = v51->fields._size;
        v58 = Master_object;
        if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v51,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &v55->obj.klass + v57;
          v51->fields._size = v57 + 1;
          v59[4] = (Il2CppClass *)v58;
          sub_1C2D434((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v58, v53, v54);
        }
        EquipTargetInfo__getSkillInfo(v17, &skillInfoList, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_164;
        v13 = skillInfoList;
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
          *(_QWORD *)(v65 + 32) = v13;
          v66 = (CGThumbnailListItem_o *)(v65 + 32);
LABEL_75:
          sub_1C2D434(v66, (int32_t)v13, v60, v61);
          continue;
        }
        v67 = v63[4];
      }
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Master_object,
        &v13->obj,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v67 + 192) + 112LL));
    }
  }
  if ( !v12 )
    goto LABEL_164;
  v82 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.grandServantEquipIdList = v82;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandServantEquipIdList, (int32_t)v82, v83, v84);
}


void ServantStatusListViewItem__SetGrandInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UserServantGrandInfo_c *v5; // x0
  struct UserServantGrandInfo_o *Empty; // x1
  UserServantEntity_o *userSvtEntity; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  if ( (byte_4C2386D & 1) == 0 )
  {
    sub_1C2D490(&UserServantGrandInfo_TypeInfo);
    byte_4C2386D = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._GrandInfo_k__BackingField, (int32_t)Empty, v2, v3);
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

  if ( (byte_4C2383C & 1) == 0 )
  {
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2383C = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v39, 0);
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(entity->fields.limitCount, 0);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v10 = v8;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardSelectList = ImageLimitCount__GetCardSelectList(v7, v10, costumeAndOtherIds, 0);
    this->fields.cardSelectList = CardSelectList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cardSelectList, (int32_t)CardSelectList, v12, v13);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0);
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(entity->fields.svtId, 0);
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(entity->fields.limitCount, 0);
    SelectList = ImageLimitCount__GetSelectList(v14, v15, this->fields.costumeIds, 0);
    this->fields.dispSelectList = SelectList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dispSelectList, (int32_t)SelectList, v17, v18);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(entity->fields.svtId, 0);
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(entity->fields.limitCount, 0);
    v21 = ImageLimitCount__GetSelectList(v19, v20, this->fields.costumeIds, 0);
    this->fields.commandCardSelectList = v21;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardSelectList, (int32_t)v21, v22, v23);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCardParam, (int32_t)CommandCardParam, v25, v26);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0);
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(entity->fields.svtId, 0);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(entity->fields.limitCount, 0);
    v29 = ImageLimitCount__GetCardSelectList(v27, v28, this->fields.costumeIds, 0);
    this->fields.iconSelectList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconSelectList, (int32_t)v29, v30, v31);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0);
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(entity->fields.svtId, 0);
    v33 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v34 = v32;
    *(_QWORD *)&v40.fields.currentCryptoKey = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40, 0);
    v36 = ImageLimitCount__GetSelectList(v34, v35, this->fields.costumeIds, 0);
    this->fields.portraitSelectList = v36;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.portraitSelectList, (int32_t)v36, v37, v38);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C2385B & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C2385B = 1;
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
        sub_1C2D6F4(this, *(_QWORD *)&index, method);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ServantTransformEntity_o *v10; // x8
  struct System_String_o *befTitle; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_o *aftTitle; // x1
  Il2CppObject *v15; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
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
  const MethodInfo *v29; // x3
  _DWORD *v30; // x21
  int32_t atkMax; // w24
  int32_t atkBase; // w25
  int v33; // w23
  CheckCombineResStatus_c *v34; // x0
  struct UserServantEntity_o *v35; // x9
  int32_t LOT_RATE; // w8
  int32_t v37; // w23
  int32_t *p_adjustAtk; // x10
  struct ServantLeaderInfo_o *v39; // x10
  int32_t v40; // w24
  BalanceConfig_c *v41; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v43; // w8
  struct ServantLeaderInfo_o *p_adjustHp; // x9
  int32_t StatusUpAdjustHp; // w10
  const MethodInfo *v46; // x1
  UserServantEntity_o *v47; // x0
  UserServantEntity_o *v48; // x22
  int32_t v49; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  ServantLeaderInfo_o *v51; // x0
  ServantLeaderInfo_o *v52; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  int32_t v54; // w20
  int32_t LimitCount; // w0
  int32_t dispLimitCount; // w21
  int32_t transformedHp; // w22
  struct UserServantEntity_o *v58; // x8
  int32_t transformedAtk; // w23
  int32_t v60; // w24
  int32_t collectionLv; // w26
  int32_t adjustHp; // w25
  int32_t adjustAtk; // w28
  struct ServantLeaderInfo_o *v64; // x8
  struct EquipTargetInfo_o *v65; // x8
  UserServantGrandInfo_o *grandInfo; // x29
  __int64 v67; // x27
  const MethodInfo *v68; // x2
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C23868 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CheckCombineResStatus_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&ServantOverwriteStatus_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C23868 = 1;
  }
  entity = 0;
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantTransformMaster___);
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
    v10 = entity;
    if ( !entity )
      goto LABEL_72;
    this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
    this->fields._TransformedServantDispLimitCount_k__BackingField = v10->fields.aftDispLimitCount - 1;
    befTitle = v10->fields.befTitle;
    this->fields.transformNameBefore = befTitle;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.transformNameBefore, (int32_t)befTitle, v8, v9);
    if ( !entity )
      goto LABEL_72;
    aftTitle = entity->fields.aftTitle;
    this->fields.transformNameAfter = aftTitle;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.transformNameAfter, (int32_t)aftTitle, v12, v13);
    this->fields._IsTransformServant_k__BackingField = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SvtId )
      goto LABEL_72;
    v15 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
            this->fields._TransformedSvtId_k__BackingField,
            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
    this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v15;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._TransformedServant_k__BackingField, (int32_t)v15, v17, v18);
    v19 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitMaster___);
    TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
    v21 = (ServantLimitMaster_o *)v19;
    SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v22);
    if ( !v21 )
      goto LABEL_72;
    v23 = ServantLimitMaster__GetEntity(v21, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantExpMaster___);
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
    if ( !v23 )
      goto LABEL_72;
    v30 = SvtId;
    if ( !SvtId )
      goto LABEL_72;
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
      p_adjustAtk = &v35->fields.adjustAtk;
    }
    else
    {
      v39 = this->fields.servantLeaderInfo;
      if ( !v39 )
      {
        v40 = 0;
LABEL_35:
        v41 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v41 = BalanceConfig_TypeInfo;
          v35 = this->fields.userSvtEntity;
          LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
        }
        static_fields = v41->static_fields;
        this->fields.transformedAtk = v37 + static_fields->StatusUpAdjustAtk * v40;
        v43 = v30[7] * (v23->fields.hpMax - v23->fields.hpBase) / LOT_RATE + v23->fields.hpBase;
        if ( v35 )
        {
          p_adjustHp = (struct ServantLeaderInfo_o *)&v35->fields.adjustHp;
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
        this->fields.transformedServantLimitEntity = v23;
        this->fields.transformedHp = v43 + StatusUpAdjustHp * (_DWORD)p_adjustHp;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.transformedServantLimitEntity, (int32_t)v23, v28, v29);
        v47 = this->fields.userSvtEntity;
        if ( v47 )
        {
          UserServantEntity__GetTransformedSkillInfo(
            v47,
            &this->fields.transformedSkillInfoList,
            this->fields._TransformedSvtId_k__BackingField,
            -1,
            this->fields._TransformedServantDispLimitCount_k__BackingField,
            1,
            0,
            -1,
            0);
          v48 = this->fields.userSvtEntity;
          v49 = this->fields._TransformedSvtId_k__BackingField;
          TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
          SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !SvtId )
            goto LABEL_72;
          if ( !v48 )
            goto LABEL_72;
          UserServantEntity__GetTransformedPassiveSkillInfo(
            v48,
            &this->fields.transformedPassiveSkillIdList,
            &this->fields.transformedPassiveSkillTitleMessageList,
            &this->fields.transformedPassiveSkillExplanationMessageList,
            v49,
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
          v51 = this->fields.servantLeaderInfo;
          if ( v51 )
          {
            ServantLeaderInfo__GetTransformedSkillInfo(
              v51,
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
            v52 = this->fields.servantLeaderInfo;
            this->fields.transformedAtk = (int)SvtId;
            if ( !v52 )
              goto LABEL_72;
            this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v52, 0);
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
        v54 = this->fields._TransformedSvtId_k__BackingField;
        LimitCount = ServantStatusListViewItem__get_LimitCount(this, v46);
        dispLimitCount = this->fields.dispLimitCount;
        transformedHp = this->fields.transformedHp;
        v58 = this->fields.userSvtEntity;
        transformedAtk = this->fields.transformedAtk;
        v60 = LimitCount;
        if ( v58 )
        {
          collectionLv = v58->fields.lv;
          adjustHp = v58->fields.adjustHp;
          adjustAtk = v58->fields.adjustAtk;
          goto LABEL_68;
        }
        v64 = this->fields.servantLeaderInfo;
        if ( v64 )
        {
          collectionLv = v64->fields.lv;
          adjustHp = v64->fields.adjustHp;
          adjustAtk = v64->fields.adjustAtk;
          goto LABEL_68;
        }
        v65 = this->fields.equipTargetInfo;
        if ( v65 )
        {
          collectionLv = v65->fields.lv;
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
        v67 = sub_1C2D6DC(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_33445880(
          (ServantOverwriteStatus_o *)v67,
          v54,
          v60,
          dispLimitCount,
          transformedHp,
          transformedAtk,
          collectionLv,
          adjustHp,
          adjustAtk,
          grandInfo,
          0);
        if ( v67 )
        {
          *(int32x2_t *)&this->fields.transformedAtk = vrev64_s32(*(int32x2_t *)(v67 + 16));
          ServantStatusListViewItem__AddDuplicationInfo(this, 1, v68);
          return;
        }
LABEL_72:
        sub_1C2D6EC(SvtId, v7);
      }
      p_adjustAtk = &v39->fields.adjustAtk;
    }
    v40 = *p_adjustAtk;
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
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  _DWORD *klass; // x8
  CGThumbnailListItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v14; // x20
  int max_length; // w9
  unsigned int v16; // w10
  unsigned int v17; // w21
  char v18; // w21

  if ( (byte_4C23866 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C23866 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
  v14 = Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_18:
    v18 = 0;
    goto LABEL_21;
  }
  if ( !Master_object )
LABEL_17:
    sub_1C2D6EC(Master_object, v8);
  max_length = klass[6];
  if ( max_length != LODWORD(Master_object->max_length) )
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
      sub_1C2D6F4(Master_object, v8, v9);
    Master_object = *(ServantCommentEntity_array **)&klass[2 * v16 + 8];
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, ServantCommentEntity_o *, const MethodInfo *))Master_object->obj.klass->vtable[0].methodPtr)(
                                                    Master_object,
                                                    v14->m_Items[v16],
                                                    Master_object->obj.klass->vtable[0].method);
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
  p_svtCommentEntityList->klass = (CGThumbnailListItem_c *)v14;
  sub_1C2D434(p_svtCommentEntityList, (int32_t)v14, v9, v10);
  return v18 & 1;
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C23850 & 1) == 0 )
  {
    sub_1C2D490(&UserServantGrandInfo_TypeInfo);
    byte_4C23850 = 1;
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
    sub_1C2D6EC(GrandInfo_k__BackingField, method);
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

  if ( (byte_4C23842 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C23842 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7, 0);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userSvtEntity, 0);
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
  if ( (byte_4C23848 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C2D490(&ImageLimitCount_TypeInfo);
    byte_4C23848 = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1C2D6EC(this, method);
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
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userSvtEntity, 0);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userSvtEntity, 0);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userSvtEntity, 0);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userSvtEntity, 0);
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
      sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C23855 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C23855 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
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

  if ( (byte_4C2384F & 1) == 0 )
  {
    sub_1C2D490(&UserServantGrandInfo_TypeInfo);
    byte_4C2384F = 1;
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
    sub_1C2D6EC(GrandInfo_k__BackingField, method);
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
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C23847 & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C23847 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
    sub_1C2D6EC(ManualSetCommandCardLimit, method);
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

  if ( (byte_4C23845 & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C23845 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
    sub_1C2D6EC(ManualSetDispLimitCount, method);
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

  if ( (byte_4C2384A & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2384A = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
    sub_1C2D6EC(ManualSetIconLimitCount, method);
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

  if ( (byte_4C2384C & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2384C = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
    sub_1C2D6EC(ManualSetPortraitLimitCount, method);
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

  if ( (byte_4C2384E & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2384E = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7, 0) != this->fields.supportRandomLimitCount;
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

  if ( (byte_4C23843 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C23843 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
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
    sub_1C2D6EC(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C2D6EC(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4C23844 & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C23844 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
      sub_1C2D6EC(v3, method);
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

  if ( (byte_4C23849 & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C23849 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
      sub_1C2D6EC(v3, method);
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

  if ( (byte_4C23846 & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C23846 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
      sub_1C2D6EC(v3, method);
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

  if ( (byte_4C2384B & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2384B = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
      sub_1C2D6EC(v3, method);
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

  if ( (byte_4C2384D & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2384D = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
      sub_1C2D6EC(v3, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
      sub_1C2D6EC(this, method);
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

  if ( (byte_4C23841 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C23841 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7, 0);
}


int32_t ServantStatusListViewItem__get_TransformedAgility(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C2D6EC(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t ServantStatusListViewItem__get_TransformedDefense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C2D6EC(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t ServantStatusListViewItem__get_TransformedLuck(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C2D6EC(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_TransformedMagic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C2D6EC(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t ServantStatusListViewItem__get_TransformedNp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C2D6EC(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t ServantStatusListViewItem__get_TransformedPower(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C2D6EC(this, method);
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
  if ( (byte_4C23865 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C23865 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v8, 0);
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
        sub_1C2D6EC(this, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._GrandInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  if ( (byte_4C2385A & 1) == 0 )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2385A = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4C2302F )
  {
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C2302F = 1;
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
  sub_1C2D434(
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