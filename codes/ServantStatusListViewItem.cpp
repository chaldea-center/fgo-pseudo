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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x21
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // x24
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_List_long__o *v40; // x28
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int64_t Instance; // x0
  const MethodInfo *v55; // x1
  struct PartyOrganizationListViewItem_o *v56; // x0
  struct PartyOrganizationListViewItem_o **p_memberItem; // x26
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  char v65; // w8
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v80; // q0
  struct PartyOrganizationListViewItem_o *v81; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  struct PartyOrganizationListViewItem_o *v97; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v99; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v100; // x25
  __int64 v101; // x28
  __int64 v102; // x29
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x25
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  ServantLimitMaster_o *v111; // x28
  int32_t v112; // w29
  struct ServantLimitEntity_o *v113; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  ServantCommentMaster_o *v120; // x28
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v128; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // q1
  UserServantCollectionMaster_o *v130; // x28
  int64_t v131; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  int v139; // w8
  QuestRestrictionInfo_o *v140; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x27
  int32_t lv; // w26
  __int64 v152; // x28
  __int64 v153; // x29
  struct System_Int32_array *CostumeList_43677212; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  const MethodInfo *v161; // x1
  struct UserServantCollectionEntity_o *v162; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v164; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v166; // x8
  const MethodInfo *v167; // x2
  QuestRestrictionInfo_o *v168; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v169; // x8
  __int64 v170; // x28
  __int64 v171; // x29
  int32_t v172; // w0
  __int64 OverwriteTempTreasureDeviceLv; // x0
  struct System_Int64_array *v174; // x8
  int64_t v175; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v178; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v179; // x8
  int32_t v180; // w2
  int v181; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v182; // x8
  int32_t v183; // w2
  int v184; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v185; // x8
  int32_t v186; // w2
  int v187; // w9
  struct System_Collections_Generic_List_long__o *v188; // x8
  int v189; // w9
  struct UserServantCollectionEntity_o *v190; // x8
  int32_t v191; // w2
  int32_t v192; // w3
  System_String_o *v193; // x4
  int32_t v194; // w5
  int64_t v195; // x6
  System_String_o *v196; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v198; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v200; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v202; // x8
  int32_t v203; // w0
  UserServantEntity_o *v204; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v206; // x2
  UserServantEntity_o *v207; // x0
  int32_t v208; // w0
  UserServantEntity_o *v209; // x8
  int32_t v210; // w0
  UserServantEntity_o *v211; // x1
  const MethodInfo *v212; // x1
  const MethodInfo *v213; // x2
  RandomLimitCountManager_c *v214; // x0
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // [xsp+0h] [xbp-B0h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v217; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v218; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v220; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16

  if ( (byte_4CEB089 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEB089 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v11;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v18;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v25;
  p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v32;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v40,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  this->fields.grandServantEquipTargetIdList = v40;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.partyItem = partyItem;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, (int32_t)partyItem, v48, v49, v50, v51, v52, v53);
  if ( !partyItem )
    goto LABEL_103;
  v56 = PartyListViewItem__GetMember(partyItem, member, 0);
  this->fields.memberItem = v56;
  p_memberItem = &this->fields.memberItem;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.memberItem, (int32_t)v56, v58, v59, v60, v61, v62, v63);
  memberItem = this->fields.memberItem;
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  if ( !memberItem )
    goto LABEL_103;
  this->fields._IsTempGrandServant_k__BackingField = memberItem->fields._IsTempGrandServant_k__BackingField;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0) )
  {
    v65 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    v65 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v65;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  *(_BYTE *)(Instance + 205) = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v67, v68, v69, v70, v71, v72);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_103;
  v80 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v81 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v80;
  if ( !v81 )
    goto LABEL_103;
  userServantEntity = v81->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_103;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
  this->fields.equipIdList = EquipList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipIdList,
    (int32_t)EquipList,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  v97 = this->fields.memberItem;
  if ( !v97 )
    goto LABEL_103;
  questRestrictionInfo = v97->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v99 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v100 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v102 = *(_QWORD *)&v99[5].fields.currentCryptoKey;
  v101 = *(_QWORD *)&v99[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v219.fields.currentCryptoKey = v102;
  *(_QWORD *)&v219.fields.fakeValue = v101;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v219, 0);
  if ( !v100 )
    goto LABEL_103;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v100,
             Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v111 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v112 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[6], 0);
  if ( !v111 )
    goto LABEL_103;
  v113 = ServantLimitMaster__GetEntity(v111, v112, Instance, 0);
  this->fields.svtLimitEntity = v113;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v113,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_103;
  v120 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_svtEntity)[1], 0);
  if ( !v120 )
    goto LABEL_103;
  EntityList = ServantCommentMaster__GetEntityList(v120, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList,
    (int32_t)EntityList,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v128 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v129 = v128[4];
  v130 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v218.fields.currentCryptoKey = v128[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v218.fields.fakeValue = v129;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v217 = v218;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v217, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  v131 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
  if ( !v130 )
    goto LABEL_103;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v130, v131, Instance, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_103;
  v139 = *(unsigned __int8 *)(Instance + 247);
  this->fields.isConvertOverwriteImage = v139;
  if ( v139 )
  {
    v140 = this->fields.questRestrictionInfo;
    SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(SvtId, 0);
    if ( !*p_memberItem || !v140 )
      goto LABEL_103;
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
           v140,
           Instance,
           (*p_memberItem)->fields.isFollower,
           0) )
    {
      this->fields.isConvertOverwriteImage = 0;
    }
  }
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_103;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_103;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  v153 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
  v152 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v220.fields.currentCryptoKey = v153;
  *(_QWORD *)&v220.fields.fakeValue = v152;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v220, 0);
  if ( !userSvtCollectionEntity )
    goto LABEL_103;
  CostumeList_43677212 = UserServantCollectionEntity__getCostumeList_43677212(userSvtCollectionEntity, lv, Instance, 0);
  this->fields.costumeIds = CostumeList_43677212;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.costumeIds,
    (int32_t)CostumeList_43677212,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v161);
  v162 = this->fields.userSvtCollectionEntity;
  if ( !v162 )
    goto LABEL_103;
  svtCommonFlag = v162->fields.svtCommonFlag;
  v164 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v164 )
    goto LABEL_103;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                   v164->fields.battleVoice,
                                   0);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !Instance )
    goto LABEL_103;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v166 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v166 )
    goto LABEL_103;
  Instance = UserServantEntity__IsChoice(v166, 0);
  v168 = this->fields.questRestrictionInfo;
  this->fields.isChoice = Instance & 1;
  this->fields.isUse = 0;
  if ( v168 )
  {
    v169 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_103;
    v171 = *(_QWORD *)&v169[5].fields.currentCryptoKey;
    v170 = *(_QWORD *)&v169[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v221.fields.currentCryptoKey = v171;
    *(_QWORD *)&v221.fields.fakeValue = v170;
    v172 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v221, 0);
    OverwriteTempTreasureDeviceLv = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(v168, v172, 0);
  }
  else
  {
    OverwriteTempTreasureDeviceLv = 0;
  }
  v174 = this->fields.equipIdList;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = OverwriteTempTreasureDeviceLv;
  if ( v174 )
  {
    if ( !LODWORD(v174->max_length) )
      sub_1C7BD48(OverwriteTempTreasureDeviceLv);
    v175 = v174->m_Items[0];
  }
  else
  {
    v175 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v175, v167);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_103;
  size = equipGrandServantEntityList->fields._size;
  v178 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v178;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  v179 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_103;
  v180 = v179->fields._size;
  v181 = v179->fields._version + 1;
  v179->fields._size = 0;
  v179->fields._version = v181;
  if ( v180 >= 1 )
    System_Array__Clear((System_Array_o *)v179->fields._items, 0, v180, 0);
  v182 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_103;
  v183 = v182->fields._size;
  v184 = v182->fields._version + 1;
  v182->fields._size = 0;
  v182->fields._version = v184;
  if ( v183 >= 1 )
    System_Array__Clear((System_Array_o *)v182->fields._items, 0, v183, 0);
  v185 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_103;
  v186 = v185->fields._size;
  v187 = v185->fields._version + 1;
  v185->fields._size = 0;
  v185->fields._version = v187;
  if ( v186 >= 1 )
    System_Array__Clear((System_Array_o *)v185->fields._items, 0, v186, 0);
  v188 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_103;
  v189 = v188->fields._version + 1;
  v188->fields._size = 0;
  v188->fields._version = v189;
  ServantStatusListViewItem__SetEquipTargetIds(this, v55);
  v190 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v190 != 0;
  if ( !Instance )
LABEL_103:
    sub_1C7BD40(Instance, v55);
  if ( ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0) )
  {
    Instance = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
      goto LABEL_78;
    }
    goto LABEL_103;
  }
  IsNameTrue = 0;
LABEL_78:
  v198 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v198 != 0;
  if ( v198 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v198, 0);
    v198 = (UserServantEntity_o *)*p_userSvtEntity;
    v200 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v200 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v200;
  if ( !v198 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_86;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v198, 0);
  v202 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v202 )
  {
LABEL_86:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_87;
  }
  v203 = BasicHelper__DecryptValue_44666424(v202->fields.limitCountSupport, 0);
  v204 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v203;
  if ( v204 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v204, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_87:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196);
  v207 = this->fields.userSvtEntity;
  if ( v207 )
  {
    v208 = UserServantEntity__OwnRandomSettingSelectedButton(v207, 0);
    v209 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v208;
    if ( v209 )
    {
      v210 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v209, 0);
      v211 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_93;
    }
    v211 = 0;
  }
  else
  {
    v211 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v210 = 3;
LABEL_93:
  this->fields.supportRandomSettingButtonIndex = v210;
  ServantStatusListViewItem__SetLimitCountInfo(this, v211, v206);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
  }
  v214 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v214 = RandomLimitCountManager_TypeInfo;
  }
  if ( v214->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v213);
  ServantStatusListViewItem__ModifyInfo(this, v212);
}


void ServantStatusListViewItem___ctor_36618056(
        ServantStatusListViewItem_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_List_long__o *v37; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int64_t Instance; // x0
  __int64 v51; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v73; // q0
  struct PartyOrganizationListViewItem_o *v74; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  struct PartyOrganizationListViewItem_o *v90; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v92; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x21
  __int64 v94; // x22
  __int64 v95; // x23
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x21
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  ServantLimitMaster_o *v104; // x22
  int32_t v105; // w23
  struct ServantLimitEntity_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  ServantCommentMaster_o *v113; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v121; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // q1
  UserServantCollectionMaster_o *v123; // x22
  int64_t v124; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  struct PartyOrganizationListViewItem_o *v132; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t lv; // w23
  struct System_Int32_array *CostumeList_43677212; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  const MethodInfo *v150; // x1
  struct UserServantCollectionEntity_o *v151; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v153; // x8
  struct System_Int64_array *equipIdList; // x8
  UserServantEntity_o *v155; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v157; // x2
  struct System_Int64_array *v158; // x8
  int64_t v159; // x1
  struct UserServantCollectionEntity_o *v160; // x8
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v168; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v170; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v172; // x8
  int32_t v173; // w0
  UserServantEntity_o *v174; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v176; // x2
  UserServantEntity_o *v177; // x0
  int32_t v178; // w0
  UserServantEntity_o *v179; // x8
  int32_t v180; // w0
  UserServantEntity_o *v181; // x1
  const MethodInfo *v182; // x1
  const MethodInfo *v183; // x2
  RandomLimitCountManager_c *v184; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16

  if ( (byte_4CEB08A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB08A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v16;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v23;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v30;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v37;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.warBoardPartyItem = partyItem;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.warBoardPartyItem,
    (int32_t)partyItem,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !partyItem )
    goto LABEL_68;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0);
  this->fields.memberItem = MemberItem;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.memberItem,
    (int32_t)MemberItem,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v60, v61, v62, v63, v64, v65);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v73 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v74 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v73;
  if ( !v74 )
    goto LABEL_68;
  userServantEntity = v74->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
  this->fields.equipIdList = EquipList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipIdList,
    (int32_t)EquipList,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v90 = this->fields.memberItem;
  if ( !v90 )
    goto LABEL_68;
  questRestrictionInfo = v90->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v92 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v95 = *(_QWORD *)&v92[5].fields.currentCryptoKey;
  v94 = *(_QWORD *)&v92[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v187.fields.currentCryptoKey = v95;
  *(_QWORD *)&v187.fields.fakeValue = v94;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v187, 0);
  if ( !v93 )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v93,
             Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v98, v99, v100, v101, v102, v103);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v104 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v105 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[6], 0);
  if ( !v104 )
    goto LABEL_68;
  v106 = ServantLimitMaster__GetEntity(v104, v105, Instance, 0);
  this->fields.svtLimitEntity = v106;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_68;
  v113 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_svtEntity)[1], 0);
  if ( !v113 )
    goto LABEL_68;
  EntityList = ServantCommentMaster__GetEntityList(v113, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList,
    (int32_t)EntityList,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v121 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v122 = v121[4];
  v123 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v186.fields.currentCryptoKey = v121[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v186.fields.fakeValue = v122;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v185 = v186;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v185, 0);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v124 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
  if ( !v123 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v123, v124, Instance, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  v132 = this->fields.memberItem;
  if ( !v132 )
    goto LABEL_68;
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isConvertOverwriteImage = v132->fields.isConvertOverwriteImage;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  lv = userSvtEntity->fields.lv;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.limitCount, 0);
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  CostumeList_43677212 = UserServantCollectionEntity__getCostumeList_43677212(userSvtCollectionEntity, lv, Instance, 0);
  this->fields.costumeIds = CostumeList_43677212;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.costumeIds,
    (int32_t)CostumeList_43677212,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v150);
  v151 = this->fields.userSvtCollectionEntity;
  if ( !v151 )
    goto LABEL_68;
  svtCommonFlag = v151->fields.svtCommonFlag;
  v153 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v153 )
    goto LABEL_68;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                   v153->fields.battleVoice,
                                   0);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v155 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v155 )
    goto LABEL_68;
  IsChoice = UserServantEntity__IsChoice(v155, 0);
  v158 = this->fields.equipIdList;
  this->fields.isChoice = IsChoice;
  this->fields.isUse = 0;
  if ( v158 )
  {
    if ( !LODWORD(v158->max_length) )
      sub_1C7BD48(IsChoice);
    v159 = v158->m_Items[0];
  }
  else
  {
    v159 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v159, v157);
  v160 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v160 != 0;
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
    sub_1C7BD40(Instance, v51);
  }
  IsNameTrue = 0;
LABEL_43:
  v168 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v168 != 0;
  if ( v168 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v168, 0);
    v168 = (UserServantEntity_o *)*p_userSvtEntity;
    v170 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v170 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v170;
  if ( !v168 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_51;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v168, 0);
  v172 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v172 )
  {
LABEL_51:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_52;
  }
  v173 = BasicHelper__DecryptValue_44666424(v172->fields.limitCountSupport, 0);
  v174 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v173;
  if ( v174 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v174, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_52:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166);
  v177 = this->fields.userSvtEntity;
  if ( v177 )
  {
    v178 = UserServantEntity__OwnRandomSettingSelectedButton(v177, 0);
    v179 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v178;
    if ( v179 )
    {
      v180 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v179, 0);
      v181 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_58;
    }
    v181 = 0;
  }
  else
  {
    v181 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v180 = 3;
LABEL_58:
  this->fields.supportRandomSettingButtonIndex = v180;
  ServantStatusListViewItem__SetLimitCountInfo(this, v181, v176);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
  }
  v184 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v184 = RandomLimitCountManager_TypeInfo;
  }
  if ( v184->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v183);
  ServantStatusListViewItem__ModifyInfo(this, v182);
}


void ServantStatusListViewItem___ctor_36620100(
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
        int32_t tempOverwriteTdLv,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  bool v18; // w23
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_List_object__o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_List_object__o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_List_long__o *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x28
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int64_t Instance; // x0
  const MethodInfo *v63; // x1
  bool v64; // w8
  __int128 v65; // q1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x22
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v86; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v87; // x21
  __int64 v88; // x23
  __int64 v89; // x28
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x28
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  ServantLimitMaster_o *v98; // x21
  int32_t v99; // w23
  struct ServantLimitEntity_o *v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  ServantCommentMaster_o *v107; // x21
  int32_t v108; // w23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v116; // x8
  __int64 v117; // x21
  __int64 v118; // x23
  int32_t v119; // w0
  bool IsConvertOverwriteImage; // w0
  __int64 v121; // x20
  __int64 v122; // x21
  int32_t v123; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v124; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // q0
  __int64 v126; // x20
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v133; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // q0
  UserServantCollectionMaster_o *v135; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v136; // x8
  int64_t v137; // x21
  __int64 v138; // x23
  __int64 v139; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x20
  int32_t lv; // w21
  struct System_Int32_array *CostumeList_43677212; // x0
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  const MethodInfo *v164; // x1
  struct System_Int32_array *v165; // x0
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  int32_t v172; // w2
  int32_t v173; // w3
  System_String_o *v174; // x4
  int32_t v175; // w5
  int64_t v176; // x6
  System_String_o *v177; // x7
  int32_t v178; // w2
  int32_t v179; // w3
  System_String_o *v180; // x4
  int32_t v181; // w5
  int64_t v182; // x6
  System_String_o *v183; // x7
  struct UserServantCollectionEntity_o *v184; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v186; // x8
  __int64 v187; // x20
  __int64 v188; // x21
  int32_t v189; // w2
  int32_t v190; // w3
  System_String_o *v191; // x4
  int32_t v192; // w5
  int64_t v193; // x6
  System_String_o *v194; // x7
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  UserServantEntity_o *v201; // x8
  ServantEntity_o *svtEntity; // x8
  _BOOL8 IsServantEquip; // x0
  const MethodInfo *v204; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v205; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // q0
  UserDeckMaster_o *v207; // x20
  bool v208; // w8
  struct System_Int64_array *v209; // x9
  int64_t v210; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v213; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v214; // x8
  int32_t v215; // w2
  int v216; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v217; // x8
  int32_t v218; // w2
  int v219; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v220; // x8
  int32_t v221; // w2
  int v222; // w9
  struct System_Collections_Generic_List_long__o *v223; // x8
  int v224; // w9
  struct UserServantCollectionEntity_o *v225; // x8
  int32_t v226; // w2
  int32_t v227; // w3
  System_String_o *v228; // x4
  int32_t v229; // w5
  int64_t v230; // x6
  System_String_o *v231; // x7
  bool IsNameTrue; // w9
  UserServantEntity_o *v233; // x8
  bool IsEnableOwnRandomLimitCount; // w0
  bool v235; // w9
  bool IsEnableSupportRandomLimitCount; // w0
  struct UserServantEntity_o *v237; // x8
  int32_t v238; // w0
  UserServantEntity_o *v239; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v241; // x2
  UserServantEntity_o *v242; // x0
  int32_t v243; // w0
  UserServantEntity_o *v244; // x8
  int32_t v245; // w0
  UserServantEntity_o *v246; // x1
  const MethodInfo *v247; // x1
  const MethodInfo *v248; // x2
  RandomLimitCountManager_c *v249; // x0
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // [xsp+18h] [xbp-128h]
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // [xsp+20h] [xbp-120h]
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // [xsp+28h] [xbp-118h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+30h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v257; // [xsp+40h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v258; // [xsp+60h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v259; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v260; // [xsp+A0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v261; // [xsp+C0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v262; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v265; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v266; // 0:x0.16

  v18 = isEnableServantQuest;
  if ( (byte_4CEB08B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEB08B = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v19;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v26;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v33;
  p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v40;
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v47,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v47;
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v56, v57, v58, v59, v60, v61);
  this->fields.isEnableServantQuest = v18;
  this->fields._BeforeClearQuestId_k__BackingField = beforeClearQuestId;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  *(_BYTE *)(Instance + 205) = v18;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0);
  if ( (Instance & 1) != 0 )
  {
    v64 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
    v64 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v64;
  if ( !userServant )
    goto LABEL_124;
  v65 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v261.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v261.fields.fakeValue = v65;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v260 = v261;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v260, 0);
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
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v66, v67, v68, v69, v70, v71);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServant,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.equipIdList = equipIdList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipIdList,
    (int32_t)equipIdList,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields._IsTempGrandServant_k__BackingField = isTempGrandServant;
  this->fields._IsForceNotGrand_k__BackingField = isForceNotGrand;
  this->fields.isFriendShipEquipSkillChange = isChangeFriendShipSkill;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v86 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v87 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v89 = *(_QWORD *)&v86[5].fields.currentCryptoKey;
  v88 = *(_QWORD *)&v86[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v262.fields.currentCryptoKey = v89;
  *(_QWORD *)&v262.fields.fakeValue = v88;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v262, 0);
  if ( !v87 )
    goto LABEL_124;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v87,
             Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v92, v93, v94, v95, v96, v97);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v98 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v99 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[6], 0);
  if ( !v98 )
    goto LABEL_124;
  v100 = ServantLimitMaster__GetEntity(v98, v99, Instance, 0);
  this->fields.svtLimitEntity = v100;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_124;
  v107 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_svtEntity)[1], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v108 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[7], 0);
  if ( !v107 )
    goto LABEL_124;
  EntityList = ServantCommentMaster__GetEntityList(v107, v108, Instance, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList,
    (int32_t)EntityList,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  if ( !questRestrictionInfo )
    goto LABEL_37;
  v116 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_124;
  v118 = *(_QWORD *)&v116[5].fields.currentCryptoKey;
  v117 = *(_QWORD *)&v116[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v263.fields.currentCryptoKey = v118;
  *(_QWORD *)&v263.fields.fakeValue = v117;
  v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v263, 0);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v119, 0);
  this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  if ( IsConvertOverwriteImage )
  {
    v122 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
    v121 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v264.fields.currentCryptoKey = v122;
    *(_QWORD *)&v264.fields.fakeValue = v121;
    v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v264, 0);
    if ( QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(questRestrictionInfo, v123, 0, 0) )
LABEL_37:
      this->fields.isConvertOverwriteImage = 0;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v124 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
LABEL_124:
    sub_1C7BD40(Instance, v63);
  v125 = v124[4];
  v126 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v261.fields.currentCryptoKey = v124[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v261.fields.fakeValue = v125;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v259 = v261;
  if ( v126 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v259, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v133 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v134 = v133[4];
    v135 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v261.fields.currentCryptoKey = v133[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v261.fields.fakeValue = v134;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v258 = v261;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v258, 0);
    v136 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v137 = Instance;
    v139 = *(_QWORD *)&v136[5].fields.currentCryptoKey;
    v138 = *(_QWORD *)&v136[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v265.fields.currentCryptoKey = v139;
    *(_QWORD *)&v265.fields.fakeValue = v138;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v265, 0);
    if ( !v135 )
      goto LABEL_124;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v135, v137, Instance, 0);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
      (int32_t)EntityDefinitely,
      v141,
      v142,
      v143,
      v144,
      v145,
      v146);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_124;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_124;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.limitCount, 0);
    if ( !userSvtCollectionEntity )
      goto LABEL_124;
    CostumeList_43677212 = UserServantCollectionEntity__getCostumeList_43677212(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0);
    this->fields.costumeIds = CostumeList_43677212;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.costumeIds,
      (int32_t)CostumeList_43677212,
      v158,
      v159,
      v160,
      v161,
      v162,
      v163);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v164);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
      0,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_124;
    v165 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = v165;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)v165,
      v166,
      v167,
      v168,
      v169,
      v170,
      v171);
    this->fields.costumeIds = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.costumeIds, 0, v172, v173, v174, v175, v176, v177);
    this->fields.costumeAndOtherIds = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.costumeAndOtherIds, 0, v178, v179, v180, v181, v182, v183);
  }
  v184 = this->fields.userSvtCollectionEntity;
  if ( !v184 )
    goto LABEL_124;
  svtCommonFlag = v184->fields.svtCommonFlag;
  v186 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v186 )
    goto LABEL_124;
  v188 = *(_QWORD *)&v186->fields.battleVoice.fields.currentCryptoKey;
  v187 = *(_QWORD *)&v186->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v266.fields.currentCryptoKey = v188;
  *(_QWORD *)&v266.fields.fakeValue = v187;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v266, 0);
  this->fields.isEquipChangeMode = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  this->fields.servantLeaderInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v189, v190, v191, v192, v193, v194);
  this->fields.equipTargetInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v195, v196, v197, v198, v199, v200);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_124;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v201 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v201 )
    goto LABEL_124;
  Instance = UserServantEntity__IsChoice(v201, 0);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_124;
  IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0);
  if ( IsServantEquip )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_124;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v205 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_124;
    v206 = v205[2];
    v207 = (UserDeckMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v261.fields.currentCryptoKey = v205[1];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v261.fields.fakeValue = v206;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v257 = v261;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v257, 0);
    if ( !v207 )
      goto LABEL_124;
    IsServantEquip = UserDeckMaster__IsEquip(v207, Instance, 0);
    v208 = IsServantEquip;
  }
  else
  {
    v208 = 0;
  }
  v209 = this->fields.equipIdList;
  this->fields.isUse = v208;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = tempOverwriteTdLv;
  if ( v209 )
  {
    if ( !LODWORD(v209->max_length) )
      sub_1C7BD48(IsServantEquip);
    v210 = v209->m_Items[0];
  }
  else
  {
    v210 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v210, v204);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_124;
  size = equipGrandServantEntityList->fields._size;
  v213 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v213;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  v214 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_124;
  v215 = v214->fields._size;
  v216 = v214->fields._version + 1;
  v214->fields._size = 0;
  v214->fields._version = v216;
  if ( v215 >= 1 )
    System_Array__Clear((System_Array_o *)v214->fields._items, 0, v215, 0);
  v217 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_124;
  v218 = v217->fields._size;
  v219 = v217->fields._version + 1;
  v217->fields._size = 0;
  v217->fields._version = v219;
  if ( v218 >= 1 )
    System_Array__Clear((System_Array_o *)v217->fields._items, 0, v218, 0);
  v220 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_124;
  v221 = v220->fields._size;
  v222 = v220->fields._version + 1;
  v220->fields._size = 0;
  v220->fields._version = v222;
  if ( v221 >= 1 )
    System_Array__Clear((System_Array_o *)v220->fields._items, 0, v221, 0);
  v223 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_124;
  v224 = v223->fields._version + 1;
  v223->fields._size = 0;
  v223->fields._version = v224;
  ServantStatusListViewItem__SetEquipTargetIds(this, v63);
  v225 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v225 != 0 && enableTdSpeed;
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
  v233 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v233 != 0;
  if ( v233 )
  {
    IsEnableOwnRandomLimitCount = UserServantEntity__IsEnableOwnRandomLimitCount(v233, 0);
    v233 = (UserServantEntity_o *)*p_userSvtEntity;
    v235 = IsEnableOwnRandomLimitCount;
  }
  else
  {
    v235 = 0;
  }
  this->fields.isEnableOwnRandomSetting = v235;
  if ( !v233 )
  {
    this->fields.isEnableSupportRandomSetting = 0;
    goto LABEL_107;
  }
  IsEnableSupportRandomLimitCount = UserServantEntity__IsEnableSupportRandomLimitCount(v233, 0);
  v237 = this->fields.userSvtEntity;
  this->fields.isEnableSupportRandomSetting = IsEnableSupportRandomLimitCount;
  if ( !v237 )
  {
LABEL_107:
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
    goto LABEL_108;
  }
  v238 = BasicHelper__DecryptValue_44666424(v237->fields.limitCountSupport, 0);
  v239 = this->fields.userSvtEntity;
  this->fields.supportRandomLimitCount = v238;
  if ( v239 )
    RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v239, this->fields.costumeIds, 0);
  else
    RandomLimitCountList = 0;
LABEL_108:
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v226,
    v227,
    v228,
    v229,
    v230,
    v231);
  v242 = this->fields.userSvtEntity;
  if ( v242 )
  {
    v243 = UserServantEntity__OwnRandomSettingSelectedButton(v242, 0);
    v244 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v243;
    if ( v244 )
    {
      v245 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v244, 0);
      v246 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_114;
    }
    v246 = 0;
  }
  else
  {
    v246 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v245 = 3;
LABEL_114:
  this->fields.supportRandomSettingButtonIndex = v245;
  ServantStatusListViewItem__SetLimitCountInfo(this, v246, v241);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
  }
  v249 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v249 = RandomLimitCountManager_TypeInfo;
  }
  if ( v249->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v248);
  ServantStatusListViewItem__ModifyInfo(this, v247);
}


void ServantStatusListViewItem___ctor_36623276(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        bool isSkillChange,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_List_long__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int64_t Instance; // x0
  __int64 v52; // x1
  __int128 v53; // q1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v61; // q0
  bool v62; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // x22
  __int64 v78; // x23
  __int64 v79; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  ServantLimitMaster_o *v88; // x23
  int32_t v89; // w24
  struct ServantLimitEntity_o *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  ServantCommentMaster_o *v97; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v105; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // q0
  __int64 v107; // x20
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v114; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // q0
  UserServantCollectionMaster_o *v116; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v117; // x8
  int64_t v118; // x24
  __int64 v119; // x25
  __int64 v120; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  struct UserServantEntity_o *userSvtEntity; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x23
  int32_t lv; // w24
  struct System_Int32_array *CostumeList_43677212; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  const MethodInfo *v145; // x1
  struct System_Int32_array *v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x4
  int32_t v162; // w5
  int64_t v163; // x6
  System_String_o *v164; // x7
  struct UserServantCollectionEntity_o *v165; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v167; // x8
  __int64 v168; // x23
  __int64 v169; // x24
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  UserServantEntity_o *v182; // x8
  const MethodInfo *v183; // x2
  struct UserServantCollectionEntity_o *v184; // x8
  int32_t v185; // w2
  int32_t v186; // w3
  System_String_o *v187; // x4
  int32_t v188; // w5
  int64_t v189; // x6
  System_String_o *v190; // x7
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v192; // x8
  int32_t v193; // w0
  UserServantEntity_o *v194; // x8
  struct System_Int32_array *RandomLimitCountList; // x1
  const MethodInfo *v196; // x2
  UserServantEntity_o *v197; // x0
  int32_t v198; // w0
  UserServantEntity_o *v199; // x8
  int32_t v200; // w0
  UserServantEntity_o *v201; // x1
  const MethodInfo *v202; // x1
  const MethodInfo *v203; // x2
  RandomLimitCountManager_c *v204; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v207; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v208; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v209; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v212; // 0:x0.16

  v7 = isSkillChange;
  if ( (byte_4CEB08C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB08C = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v15;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v22;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v29;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v36;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v45, v46, v47, v48, v49, v50);
  this->fields.isEnableServantQuest = 0;
  this->fields.isFriendShipEquipSkillChange = v7;
  if ( !userServant )
    goto LABEL_77;
  v53 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v209.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v209.fields.fakeValue = v53;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v208 = v209;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v208, 0);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_77;
  if ( Instance == userGameEntity->fields.userId )
  {
    v61 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
    v62 = 1;
    *(_OWORD *)&this->fields.favoriteUserSvtId = v61;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1;
    this->fields.pushUserSvtId = -1;
    this->fields.userGameEntity = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v54, v55, v56, v57, v58, v59);
    v62 = 0;
  }
  this->fields._IsMyEquip_k__BackingField = v62;
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServant,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.equipIdList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v64, v65, v66, v67, v68, v69);
  this->fields.questRestrictionInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v70, v71, v72, v73, v74, v75);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v76 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v79 = *(_QWORD *)&v76[5].fields.currentCryptoKey;
  v78 = *(_QWORD *)&v76[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v210.fields.currentCryptoKey = v79;
  *(_QWORD *)&v210.fields.fakeValue = v78;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v210, 0);
  if ( !v77 )
    goto LABEL_77;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v77,
             Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v82, v83, v84, v85, v86, v87);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v88 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v89 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_userSvtEntity)[6], 0);
  if ( !v88 )
    goto LABEL_77;
  v90 = ServantLimitMaster__GetEntity(v88, v89, Instance, 0);
  this->fields.svtLimitEntity = v90;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity, (int32_t)v90, v91, v92, v93, v94, v95, v96);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_77;
  v97 = (ServantCommentMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_svtEntity)[1], 0);
  if ( !v97 )
    goto LABEL_77;
  EntityList = ServantCommentMaster__GetEntityList(v97, Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList,
    (int32_t)EntityList,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  this->fields.isConvertOverwriteImage = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v105 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_77;
  v106 = v105[4];
  v107 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v209.fields.currentCryptoKey = v105[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v209.fields.fakeValue = v106;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v207 = v209;
  if ( v107 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v207, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v114 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v115 = v114[4];
    v116 = (UserServantCollectionMaster_o *)Instance;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v209.fields.currentCryptoKey = v114[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v209.fields.fakeValue = v115;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v206 = v209;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v206, 0);
    v117 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_77;
    v118 = Instance;
    v120 = *(_QWORD *)&v117[5].fields.currentCryptoKey;
    v119 = *(_QWORD *)&v117[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v211.fields.currentCryptoKey = v120;
    *(_QWORD *)&v211.fields.fakeValue = v119;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v211, 0);
    if ( !v116 )
      goto LABEL_77;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v116, v118, Instance, 0);
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
      (int32_t)EntityDefinitely,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v129,
      v130,
      v131,
      v132,
      v133,
      v134);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_77;
    userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
    lv = userSvtEntity->fields.lv;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.limitCount, 0);
    if ( !userSvtCollectionEntity )
      goto LABEL_77;
    CostumeList_43677212 = UserServantCollectionEntity__getCostumeList_43677212(
                             userSvtCollectionEntity,
                             lv,
                             Instance,
                             0);
    this->fields.costumeIds = CostumeList_43677212;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.costumeIds,
      (int32_t)CostumeList_43677212,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    ServantStatusListViewItem__SetCostumeAndOtherIds(this, v145);
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
      0,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_77;
    v146 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = v146;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)v146,
      v147,
      v148,
      v149,
      v150,
      v151,
      v152);
    this->fields.costumeIds = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.costumeIds, 0, v153, v154, v155, v156, v157, v158);
    this->fields.costumeAndOtherIds = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.costumeAndOtherIds, 0, v159, v160, v161, v162, v163, v164);
  }
  v165 = this->fields.userSvtCollectionEntity;
  if ( !v165 )
    goto LABEL_77;
  svtCommonFlag = v165->fields.svtCommonFlag;
  v167 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v167 )
    goto LABEL_77;
  v169 = *(_QWORD *)&v167->fields.battleVoice.fields.currentCryptoKey;
  v168 = *(_QWORD *)&v167->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v212.fields.currentCryptoKey = v169;
  *(_QWORD *)&v212.fields.fakeValue = v168;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v212, 0);
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v170, v171, v172, v173, v174, v175);
  this->fields.equipTargetInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v176, v177, v178, v179, v180, v181);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_77;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v182 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v182 )
    goto LABEL_77;
  this->fields.isChoice = UserServantEntity__IsChoice(v182, 0);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v183);
  v184 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v184 != 0;
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
    sub_1C7BD40(Instance, v52);
  }
  IsNameTrue = 0;
LABEL_57:
  v192 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  *(_WORD *)&this->fields.isDisplayRandomLimitCount = 0;
  this->fields.isEnableSupportRandomSetting = 0;
  if ( v192 )
  {
    v193 = BasicHelper__DecryptValue_44666424(v192->fields.limitCountSupport, 0);
    v194 = this->fields.userSvtEntity;
    this->fields.supportRandomLimitCount = v193;
    if ( v194 )
      RandomLimitCountList = UserServantEntity__GetRandomLimitCountList(v194, this->fields.costumeIds, 0);
    else
      RandomLimitCountList = 0;
  }
  else
  {
    RandomLimitCountList = 0;
    this->fields.supportRandomLimitCount = -1;
  }
  this->fields.supportRandomLimitCountList = RandomLimitCountList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportRandomLimitCountList,
    (int32_t)RandomLimitCountList,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
  v197 = this->fields.userSvtEntity;
  if ( v197 )
  {
    v198 = UserServantEntity__OwnRandomSettingSelectedButton(v197, 0);
    v199 = this->fields.userSvtEntity;
    this->fields.ownRandomSettingButtonIndex = v198;
    if ( v199 )
    {
      v200 = UserServantEntity__SupportRandomSettingSelectedButtonIndex(v199, 0);
      v201 = (UserServantEntity_o *)*p_userSvtEntity;
      goto LABEL_68;
    }
    v201 = 0;
  }
  else
  {
    v201 = 0;
    this->fields.ownRandomSettingButtonIndex = 0;
  }
  v200 = 3;
LABEL_68:
  this->fields.supportRandomSettingButtonIndex = v200;
  ServantStatusListViewItem__SetLimitCountInfo(this, v201, v196);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
  }
  v204 = RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v204 = RandomLimitCountManager_TypeInfo;
  }
  if ( v204->static_fields->enableRandomLimitCount )
    ServantStatusListViewItem__CreateCurrentLimitCountCache(this, 1, v203);
  ServantStatusListViewItem__ModifyInfo(this, v202);
}


void ServantStatusListViewItem___ctor_36625540(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_List_long__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  DataManager_o *Instance; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x21
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  struct UserServantCollectionEntity_o *v90; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v91; // x22
  __int64 v92; // x23
  __int64 v93; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtEntity; // x22
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  ServantLimitMaster_o *v102; // x23
  struct ServantLimitEntity_o *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  ServantCommentMaster_o *v110; // x23
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  struct System_Int32_array *CostumeList; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  const MethodInfo *v132; // x1
  BalanceConfig_c *v133; // x0
  struct UserServantCollectionEntity_o *v134; // x8
  ServantEntity_o *v135; // x22
  __int64 v136; // x23
  __int64 v137; // x24
  int32_t v138; // w23
  int32_t maxLimitCount; // w24
  struct UserServantCollectionEntity_o *v140; // x8
  ServantEntity_o *svtEntity; // x22
  __int64 v142; // x23
  __int64 v143; // x24
  int32_t v144; // w23
  int32_t v145; // w24
  struct UserServantCollectionEntity_o *v146; // x8
  struct System_Int32_array *CardSelectList; // x0
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  struct UserServantCollectionEntity_o *v154; // x8
  ServantEntity_o *v155; // x22
  struct UserServantCollectionEntity_o *v156; // x8
  struct System_Int32_array *SelectList; // x0
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  struct UserServantCollectionEntity_o *v164; // x8
  ServantEntity_o *v165; // x22
  struct UserServantCollectionEntity_o *v166; // x8
  struct System_Int32_array *v167; // x0
  int32_t v168; // w2
  int32_t v169; // w3
  System_String_o *v170; // x4
  int32_t v171; // w5
  int64_t v172; // x6
  System_String_o *v173; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v175; // w2
  int32_t v176; // w3
  System_String_o *v177; // x4
  int32_t v178; // w5
  int64_t v179; // x6
  System_String_o *v180; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v182; // x8
  struct System_Int32_array *v183; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  System_String_o *v186; // x4
  int32_t v187; // w5
  int64_t v188; // x6
  System_String_o *v189; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v191; // x8
  struct System_Int32_array *v192; // x0
  int32_t v193; // w2
  int32_t v194; // w3
  System_String_o *v195; // x4
  int32_t v196; // w5
  int64_t v197; // x6
  System_String_o *v198; // x7
  const MethodInfo *v199; // x2
  struct UserServantCollectionEntity_o *v200; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v202; // x8
  const MethodInfo *v203; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16

  v7 = isEnableServantQuest;
  if ( (byte_4CEB08D & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB08D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v15;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v22;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v29;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v36;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v45, v46, v47, v48, v49, v50);
  this->fields.isEnableServantQuest = v7;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_60;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v53, v54, v55, v56, v57, v58);
  }
  this->fields.userSvtEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v53, v54, v55, v56, v57, v58);
  this->fields.equipIdList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v59, v60, v61, v62, v63, v64);
  this->fields.questRestrictionInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v65, v66, v67, v68, v69, v70);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.servantLeaderInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v78, v79, v80, v81, v82, v83);
  this->fields.equipTargetInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v84, v85, v86, v87, v88, v89);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v90 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v91 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v93 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v205.fields.currentCryptoKey = v93;
  *(_QWORD *)&v205.fields.fakeValue = v92;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v205, 0);
  if ( !v91 )
    goto LABEL_60;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v91,
             (int32_t)Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v96, v97, v98, v99, v100, v101);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v102 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  if ( !v102 )
    goto LABEL_60;
  v103 = ServantLimitMaster__GetEntity(v102, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0);
  this->fields.svtLimitEntity = v103;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !*p_svtEntity )
    goto LABEL_60;
  v110 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776((*p_svtEntity)[1], 0);
  if ( !v110 )
    goto LABEL_60;
  EntityList = ServantCommentMaster__GetEntityList(v110, (int32_t)Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList,
    (int32_t)EntityList,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.costumeIds = CostumeList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.costumeIds,
    (int32_t)CostumeList,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v132);
  Instance = (DataManager_o *)ConstantMaster__IsOtherImage(0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v134 = *p_userSvtCollectionEntity;
    if ( *p_userSvtCollectionEntity )
    {
      v135 = (ServantEntity_o *)*p_svtEntity;
      v137 = *(_QWORD *)&v134->fields.svtId.fields.currentCryptoKey;
      v136 = *(_QWORD *)&v134->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v206.fields.currentCryptoKey = v137;
      *(_QWORD *)&v206.fields.fakeValue = v136;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v206, 0);
      if ( *p_userSvtCollectionEntity )
      {
        v138 = (int)Instance;
        maxLimitCount = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v138, maxLimitCount, 1, 0, 0);
        if ( v135 )
        {
          Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                        v135,
                                        (int32_t)Instance,
                                        0);
          goto LABEL_33;
        }
      }
    }
LABEL_60:
    sub_1C7BD40(Instance, v52);
  }
  v133 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v133 = BalanceConfig_TypeInfo;
  }
  Instance = (DataManager_o *)(unsigned int)v133->static_fields->OtherImageLimitCount;
LABEL_33:
  v140 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v140 )
    goto LABEL_60;
  svtEntity = this->fields.svtEntity;
  v143 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
  v142 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v207.fields.currentCryptoKey = v143;
  *(_QWORD *)&v207.fields.fakeValue = v142;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v207, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v144 = (int)Instance;
  v145 = (*p_userSvtCollectionEntity)->fields.maxLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v144, v145, 1, 0, 0);
  if ( !svtEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(svtEntity, (int32_t)Instance, 0);
  v146 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v146 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v146->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  CardSelectList = ImageLimitCount__GetCardSelectList(
                     (int32_t)Instance,
                     (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                     this->fields.costumeAndOtherIds,
                     0);
  this->fields.cardSelectList = CardSelectList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cardSelectList,
    (int32_t)CardSelectList,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  v154 = this->fields.userSvtCollectionEntity;
  if ( !v154 )
    goto LABEL_60;
  v155 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v154->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0);
  if ( !v155 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v155, (int32_t)Instance, 0);
  v156 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v156 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v156->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  SelectList = ImageLimitCount__GetSelectList(
                 (int32_t)Instance,
                 (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                 this->fields.costumeIds,
                 0);
  this->fields.dispSelectList = SelectList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dispSelectList,
    (int32_t)SelectList,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  v164 = this->fields.userSvtCollectionEntity;
  if ( !v164 )
    goto LABEL_60;
  v165 = this->fields.svtEntity;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v164->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(
                                (int32_t)Instance,
                                (*p_userSvtCollectionEntity)->fields.maxLimitCount,
                                0);
  if ( !v165 )
    goto LABEL_60;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(v165, (int32_t)Instance, 0);
  v166 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v166 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v166->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v167 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0);
  this->fields.commandCardSelectList = v167;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardSelectList,
    (int32_t)v167,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_60;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)CommandCardParam,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v182 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v182 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v182->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v183 = ImageLimitCount__GetCardSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0);
  this->fields.iconSelectList = v183;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.iconSelectList,
    (int32_t)v183,
    v184,
    v185,
    v186,
    v187,
    v188,
    v189);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v191 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v191 )
    goto LABEL_60;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v191->fields.svtId, 0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_60;
  v192 = ImageLimitCount__GetSelectList(
           (int32_t)Instance,
           (*p_userSvtCollectionEntity)->fields.maxLimitCount,
           this->fields.costumeIds,
           0);
  this->fields.portraitSelectList = v192;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.portraitSelectList,
    (int32_t)v192,
    v193,
    v194,
    v195,
    v196,
    v197,
    v198);
  v200 = this->fields.userSvtCollectionEntity;
  if ( !v200 )
    goto LABEL_60;
  svtCommonFlag = v200->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v199);
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
  v202 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v202 != 0 && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v203);
}


void ServantStatusListViewItem___ctor_36627684(
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_long__o *v38; // x23
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  DataManager_o *Instance; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  struct UserServantCollectionEntity_o *v92; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x22
  __int64 v94; // x24
  __int64 v95; // x25
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  struct UserServantCollectionEntity_o *v104; // x8
  ServantLimitMaster_o *v105; // x23
  struct ServantLimitEntity_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x8
  ServantCommentMaster_o *v114; // x22
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  struct System_Int32_array *CostumeList; // x0
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  const MethodInfo *v136; // x1
  struct UserServantCollectionEntity_o *v137; // x8
  int32_t v138; // w22
  struct UserServantCollectionEntity_o *v139; // x8
  int32_t v140; // w0
  struct UserServantCollectionEntity_o *v141; // x8
  int32_t v142; // w0
  struct System_Int32_array *CardSelectList; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  struct UserServantCollectionEntity_o *v150; // x8
  int32_t v151; // w0
  struct UserServantCollectionEntity_o *v152; // x8
  int32_t v153; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  struct UserServantCollectionEntity_o *v161; // x8
  int32_t v162; // w0
  struct UserServantCollectionEntity_o *v163; // x8
  int32_t v164; // w0
  struct System_Int32_array *v165; // x0
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v173; // w2
  int32_t v174; // w3
  System_String_o *v175; // x4
  int32_t v176; // w5
  int64_t v177; // x6
  System_String_o *v178; // x7
  int32_t maxCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v180; // x8
  int32_t v181; // w0
  struct System_Int32_array *v182; // x0
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  int32_t commandCardLimitCount; // w9
  struct UserServantCollectionEntity_o *v190; // x8
  int32_t v191; // w0
  struct System_Int32_array *v192; // x0
  int32_t v193; // w2
  int32_t v194; // w3
  System_String_o *v195; // x4
  int32_t v196; // w5
  int64_t v197; // x6
  System_String_o *v198; // x7
  const MethodInfo *v199; // x2
  struct UserServantCollectionEntity_o *v200; // x8
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v202; // x8
  const MethodInfo *v203; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16

  v9 = isEnableServantQuest;
  if ( (byte_4CEB08E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB08E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v24;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v31;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v38,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v38;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v47, v48, v49, v50, v51, v52);
  this->fields.isEnableServantQuest = v9;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_35;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v55, v56, v57, v58, v59, v60);
  }
  this->fields.userSvtEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v55, v56, v57, v58, v59, v60);
  this->fields.equipIdList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v61, v62, v63, v64, v65, v66);
  this->fields.questRestrictionInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v67, v68, v69, v70, v71, v72);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.servantLeaderInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v80, v81, v82, v83, v84, v85);
  this->fields.equipTargetInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v86, v87, v88, v89, v90, v91);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v92 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v95 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
  v94 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v205.fields.currentCryptoKey = v95;
  *(_QWORD *)&v205.fields.fakeValue = v94;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v205, 0);
  if ( !v93 )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v93,
             (int32_t)Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v98, v99, v100, v101, v102, v103);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v104 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_35;
  v105 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v104->fields.svtId, 0);
  if ( !v105 )
    goto LABEL_35;
  v106 = ServantLimitMaster__GetEntity(v105, (int32_t)Instance, limitCount, 0);
  this->fields.svtLimitEntity = v106;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v113 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_35;
  v114 = (ServantCommentMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v113[1], 0);
  if ( !v114 )
    goto LABEL_35;
  EntityList = ServantCommentMaster__GetEntityList(v114, (int32_t)Instance, limitCount, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList,
    (int32_t)EntityList,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CostumeList = UserServantCollectionEntity__getCostumeList((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.costumeIds = CostumeList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.costumeIds,
    (int32_t)CostumeList,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  ServantStatusListViewItem__SetCostumeAndOtherIds(this, v136);
  v137 = this->fields.userSvtCollectionEntity;
  if ( !v137 )
    goto LABEL_35;
  v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v137->fields.svtId, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v138, limitCount, 1, 0, 0);
  v139 = this->fields.userSvtCollectionEntity;
  this->fields.cardLimitCount = (int)Instance;
  if ( !v139 )
    goto LABEL_35;
  v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v139->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetCardImageLimitCount(v140, limitCount, 1, 0, 0);
  v141 = this->fields.userSvtCollectionEntity;
  this->fields.maxCardLimitCount = (int)Instance;
  if ( !v141 )
    goto LABEL_35;
  v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v141->fields.svtId, 0);
  CardSelectList = ImageLimitCount__GetCardSelectList(v142, limitCount, this->fields.costumeAndOtherIds, 0);
  this->fields.cardSelectList = CardSelectList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cardSelectList,
    (int32_t)CardSelectList,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  v150 = this->fields.userSvtCollectionEntity;
  if ( !v150 )
    goto LABEL_35;
  v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v150->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v151, limitCount, 0);
  v152 = this->fields.userSvtCollectionEntity;
  this->fields.dispLimitCount = (int)Instance;
  this->fields.maxDispLimitCount = (int)Instance;
  if ( !v152 )
    goto LABEL_35;
  v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v152->fields.svtId, 0);
  SelectList = ImageLimitCount__GetSelectList(v153, limitCount, this->fields.costumeIds, 0);
  this->fields.dispSelectList = SelectList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dispSelectList,
    (int32_t)SelectList,
    v155,
    v156,
    v157,
    v158,
    v159,
    v160);
  v161 = this->fields.userSvtCollectionEntity;
  if ( !v161 )
    goto LABEL_35;
  v162 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v161->fields.svtId, 0);
  Instance = (DataManager_o *)ImageLimitCount__GetImageLimitCount(v162, limitCount, 0);
  v163 = this->fields.userSvtCollectionEntity;
  this->fields.maxCommandCardLimitCount = (int)Instance;
  this->fields.commandCardLimitCount = (int)Instance;
  if ( !v163 )
    goto LABEL_35;
  v164 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v163->fields.svtId, 0);
  v165 = ImageLimitCount__GetSelectList(v164, limitCount, this->fields.costumeIds, 0);
  this->fields.commandCardSelectList = v165;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardSelectList,
    (int32_t)v165,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  if ( !Instance )
    goto LABEL_35;
  CommandCardParam = UserServantCollectionEntity__GetCommandCardParam((UserServantCollectionEntity_o *)Instance, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)CommandCardParam,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  maxCardLimitCount = this->fields.maxCardLimitCount;
  v180 = this->fields.userSvtCollectionEntity;
  this->fields.maxIconLimitCount = maxCardLimitCount;
  this->fields.iconLimitCount = maxCardLimitCount;
  if ( !v180 )
    goto LABEL_35;
  v181 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v180->fields.svtId, 0);
  v182 = ImageLimitCount__GetCardSelectList(v181, limitCount, this->fields.costumeIds, 0);
  this->fields.iconSelectList = v182;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.iconSelectList,
    (int32_t)v182,
    v183,
    v184,
    v185,
    v186,
    v187,
    v188);
  commandCardLimitCount = this->fields.commandCardLimitCount;
  v190 = this->fields.userSvtCollectionEntity;
  this->fields.maxPortraitLimitCount = commandCardLimitCount;
  this->fields.portraitLimitCount = commandCardLimitCount;
  if ( !v190 )
    goto LABEL_35;
  v191 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v190->fields.svtId, 0);
  v192 = ImageLimitCount__GetSelectList(v191, limitCount, this->fields.costumeIds, 0);
  this->fields.portraitSelectList = v192;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.portraitSelectList,
    (int32_t)v192,
    v193,
    v194,
    v195,
    v196,
    v197,
    v198);
  v200 = this->fields.userSvtCollectionEntity;
  if ( !v200 )
    goto LABEL_35;
  svtCommonFlag = v200->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v199);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_35:
    sub_1C7BD40(Instance, v54);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0);
  v202 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v202 != 0 && enableTdSpeed;
  ServantStatusListViewItem__ModifyInfo(this, v203);
}


void ServantStatusListViewItem___ctor_36629516(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  bool v6; // w23
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_List_long__o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantLeaderInfo; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  DataManager_o *SelfUserGame; // x0
  __int64 v86; // x1
  bool v87; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v88; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v89; // x21
  __int64 v90; // x22
  __int64 v91; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  ServantLimitMaster_o *v100; // x22
  struct ServantLimitEntity_o *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x8
  ServantCommentMaster_o *v109; // x21
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  ServantLeaderInfo_o *v130; // x8
  struct ServantLeaderInfo_o *v131; // x8
  int32_t v132; // w21
  int32_t currentCryptoKey; // w22
  int32_t cardLimitCount; // w23
  struct System_Int32_array *CardSelectList_40995960; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  ServantLeaderInfo_o *v142; // x8
  struct ServantLeaderInfo_o *v143; // x8
  struct System_Int32_array *SelectList_40995144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  ServantLeaderInfo_o *v151; // x8
  struct ServantLeaderInfo_o *v152; // x8
  struct System_Int32_array *v153; // x0
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  struct ServantLeaderInfo_o *v166; // x8
  struct System_Int32_array *commandCardParam; // x1
  ServantLeaderInfo_o *v168; // x8
  struct ServantLeaderInfo_o *v169; // x8
  struct System_Int32_array *v170; // x0
  int32_t v171; // w2
  int32_t v172; // w3
  System_String_o *v173; // x4
  int32_t v174; // w5
  int64_t v175; // x6
  System_String_o *v176; // x7
  ServantLeaderInfo_o *v177; // x8
  struct ServantLeaderInfo_o *v178; // x8
  struct System_Int32_array *v179; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  const MethodInfo *v186; // x2
  const MethodInfo *v187; // x1
  struct ServantLeaderInfo_o *v188; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v190; // x21
  __int64 v191; // x22
  __int64 v192; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v193; // x21
  __int64 v194; // x22
  __int64 v195; // x23
  Il2CppObject *v196; // x0
  int32_t v197; // w2
  int32_t v198; // w3
  System_String_o *v199; // x4
  int32_t v200; // w5
  int64_t v201; // x6
  System_String_o *v202; // x7
  __int64 v203; // x8
  ServantLimitMaster_o *v204; // x21
  __int64 v205; // x8
  struct ServantLimitEntity_o *v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  System_String_o *v209; // x4
  int32_t v210; // w5
  int64_t v211; // x6
  System_String_o *v212; // x7
  const MethodInfo *v213; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4CEB08F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB08F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v21;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v28;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v35;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v42, v43, v44, v45, v46, v47);
  this->fields.userSvtEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v48, v49, v50, v51, v52, v53);
  this->fields.equipIdList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v54, v55, v56, v57, v58, v59);
  this->fields.questRestrictionInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v60, v61, v62, v63, v64, v65);
  this->fields.userSvtCollectionEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity, 0, v66, v67, v68, v69, v70, v71);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantLeaderInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)servantLeaderInfo,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.equipTargetInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v79, v80, v81, v82, v83, v84);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  this->fields.isEquipChangeMode = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_7;
  if ( !servantLeaderInfo )
    goto LABEL_64;
  if ( servantLeaderInfo->fields.userId == SelfUserGame->fields.m_CachedPtr )
    v87 = 1;
  else
LABEL_7:
    v87 = 0;
  this->fields._IsMyEquip_k__BackingField = v87;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v88 = *p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v89 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
  v91 = *(_QWORD *)&v88[3].fields.currentCryptoKey;
  v90 = *(_QWORD *)&v88[3].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v214.fields.currentCryptoKey = v91;
  *(_QWORD *)&v214.fields.fakeValue = v90;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v214, 0);
  if ( !v89 )
    goto LABEL_64;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v89,
             (int32_t)SelfUserGame,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v94, v95, v96, v97, v98, v99);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v100 = (ServantLimitMaster_o *)SelfUserGame;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                    (*p_servantLeaderInfo)[3],
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  if ( !v100 )
    goto LABEL_64;
  v101 = ServantLimitMaster__GetEntity(
           v100,
           (int32_t)SelfUserGame,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           0);
  this->fields.svtLimitEntity = v101;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v101,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v108 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity;
  if ( !*p_svtEntity )
    goto LABEL_64;
  v109 = (ServantCommentMaster_o *)SelfUserGame;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v108[1], 0);
  if ( !v109 )
    goto LABEL_64;
  EntityList = ServantCommentMaster__GetEntityList(v109, (int32_t)SelfUserGame, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList,
    (int32_t)EntityList,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)SelfUserGame, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  this->fields.costumeIds = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.costumeIds, 0, v124, v125, v126, v127, v128, v129);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v130 = this->fields.servantLeaderInfo;
  this->fields.cardLimitCount = (int)SelfUserGame;
  if ( !v130 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxCardImageLimitCount(v130, 0, 0);
  v131 = this->fields.servantLeaderInfo;
  this->fields.maxCardLimitCount = (int)SelfUserGame;
  if ( !v131 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                    v131->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v132 = (int)SelfUserGame;
  currentCryptoKey = (*p_servantLeaderInfo)[4].fields.currentCryptoKey;
  cardLimitCount = this->fields.cardLimitCount;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardSelectList_40995960 = ImageLimitCount__GetCardSelectList_40995960(v132, currentCryptoKey, cardLimitCount, 0);
  this->fields.cardSelectList = CardSelectList_40995960;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cardSelectList,
    (int32_t)CardSelectList_40995960,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v142 = this->fields.servantLeaderInfo;
  this->fields.dispLimitCount = (int)SelfUserGame;
  if ( !v142 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxDispLimitCount(v142, 0);
  v143 = this->fields.servantLeaderInfo;
  this->fields.maxDispLimitCount = (int)SelfUserGame;
  if ( !v143 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                    v143->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  SelectList_40995144 = ImageLimitCount__GetSelectList_40995144(
                          (int32_t)SelfUserGame,
                          (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
                          this->fields.dispLimitCount,
                          0,
                          0);
  this->fields.dispSelectList = SelectList_40995144;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dispSelectList,
    (int32_t)SelectList_40995144,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getCommandCardLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v151 = this->fields.servantLeaderInfo;
  this->fields.commandCardLimitCount = (int)SelfUserGame;
  if ( !v151 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxCommandCardLimitCount(v151, 0);
  v152 = this->fields.servantLeaderInfo;
  this->fields.maxCommandCardLimitCount = (int)SelfUserGame;
  if ( !v152 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                    v152->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v153 = ImageLimitCount__GetSelectList_40995144(
           (int32_t)SelfUserGame,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.commandCardLimitCount,
           0,
           0);
  this->fields.commandCardSelectList = v153;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardSelectList,
    (int32_t)v153,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  v166 = this->fields.servantLeaderInfo;
  if ( !v166 )
    goto LABEL_64;
  commandCardParam = v166->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)commandCardParam,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getIconLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v168 = this->fields.servantLeaderInfo;
  this->fields.iconLimitCount = (int)SelfUserGame;
  if ( !v168 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxIconLimitCount(v168, 0, 0);
  v169 = this->fields.servantLeaderInfo;
  this->fields.maxIconLimitCount = (int)SelfUserGame;
  if ( !v169 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                    v169->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v170 = ImageLimitCount__GetCardSelectList_40995960(
           (int32_t)SelfUserGame,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.iconLimitCount,
           0);
  this->fields.iconSelectList = v170;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.iconSelectList,
    (int32_t)v170,
    v171,
    v172,
    v173,
    v174,
    v175,
    v176);
  SelfUserGame = (DataManager_o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getPortraitLimitCount((ServantLeaderInfo_o *)SelfUserGame, 0);
  v177 = this->fields.servantLeaderInfo;
  this->fields.portraitLimitCount = (int)SelfUserGame;
  if ( !v177 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)ServantLeaderInfo__getMaxPortraitLimitCount(v177, 0);
  v178 = this->fields.servantLeaderInfo;
  this->fields.maxPortraitLimitCount = (int)SelfUserGame;
  if ( !v178 )
    goto LABEL_64;
  SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                    v178->fields.svtId,
                                    0);
  if ( !*p_servantLeaderInfo )
    goto LABEL_64;
  v179 = ImageLimitCount__GetSelectList_40995144(
           (int32_t)SelfUserGame,
           (*p_servantLeaderInfo)[4].fields.currentCryptoKey,
           this->fields.portraitLimitCount,
           0,
           0);
  this->fields.portraitSelectList = v179;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.portraitSelectList,
    (int32_t)v179,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v186);
  ServantStatusListViewItem__SetEquipTargetIds(this, v187);
  v188 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v188 )
    goto LABEL_64;
  equipTarget1 = v188->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v191 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v190 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v215.fields.currentCryptoKey = v191;
    *(_QWORD *)&v215.fields.fakeValue = v190;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v215, 0) >= 1 )
    {
      SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                          SelfUserGame,
                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v192 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
          if ( v192 )
          {
            v193 = (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame;
            v195 = *(_QWORD *)(v192 + 56);
            v194 = *(_QWORD *)(v192 + 64);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v216.fields.currentCryptoKey = v195;
            *(_QWORD *)&v216.fields.fakeValue = v194;
            SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v216, 0);
            if ( v193 )
            {
              v196 = DataMasterBase_object__object__int___GetEntity(
                       v193,
                       (int32_t)SelfUserGame,
                       (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v196;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity,
                (int32_t)v196,
                v197,
                v198,
                v199,
                v200,
                v201,
                v202);
              SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( SelfUserGame )
              {
                SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                                  SelfUserGame,
                                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v203 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                  if ( v203 )
                  {
                    v204 = (ServantLimitMaster_o *)SelfUserGame;
                    SelfUserGame = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v203 + 56),
                                                      0);
                    if ( *p_servantLeaderInfo )
                    {
                      v205 = *(_QWORD *)&(*p_servantLeaderInfo)[9].fields.currentCryptoKey;
                      if ( v205 )
                      {
                        if ( v204 )
                        {
                          v206 = ServantLimitMaster__GetEntity(v204, (int32_t)SelfUserGame, *(_DWORD *)(v205 + 72), 0);
                          this->fields.equipSvtLimitEntity = v206;
                          sub_1C7BA8C(
                            (GrandQuestFolderBoardItem_o *)&this->fields.equipSvtLimitEntity,
                            (int32_t)v206,
                            v207,
                            v208,
                            v209,
                            v210,
                            v211,
                            v212);
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
      sub_1C7BD40(SelfUserGame, v86);
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
  ServantStatusListViewItem__ModifyInfo(this, v213);
}


void ServantStatusListViewItem___ctor_36631648(
        ServantStatusListViewItem_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        bool isMyEquip,
        const MethodInfo *method)
{
  bool v9; // w26
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_long__o *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct EquipTargetInfo_o **p_equipTargetInfo; // x22
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  Il2CppObject *Instance; // x0
  __int64 v89; // x1
  struct EquipTargetInfo_o *v90; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v91; // x20
  __int64 v92; // x21
  __int64 v93; // x23
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x20
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  ServantLimitMaster_o *v102; // x21
  struct ServantLimitEntity_o *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v110; // x8
  ServantCommentMaster_o *v111; // x20
  struct ServantCommentEntity_array *EntityList; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  const MethodInfo *v167; // x2
  const MethodInfo *v168; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16

  if ( (byte_4CEB090 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB090 = 1;
  }
  v9 = isNpcFollowerServantEquip;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v24;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v31;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v38,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v38;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v45, v46, v47, v48, v49, v50);
  this->fields.userSvtEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v51, v52, v53, v54, v55, v56);
  this->fields.equipIdList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v57, v58, v59, v60, v61, v62);
  this->fields.questRestrictionInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v63, v64, v65, v66, v67, v68);
  this->fields.userSvtCollectionEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity, 0, v69, v70, v71, v72, v73, v74);
  this->fields.servantLeaderInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v75, v76, v77, v78, v79, v80);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo,
    (int32_t)equipTargetInfo,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields.isEnableServantQuest = 0;
  *(_WORD *)&this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v9;
  this->fields._IsMyEquip_k__BackingField = isMyEquip;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v90 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v91 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v93 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v169.fields.currentCryptoKey = v93;
  *(_QWORD *)&v169.fields.fakeValue = v92;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v169, 0);
  if ( !v91 )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v91,
             (int32_t)Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v96, v97, v98, v99, v100, v101);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  v102 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                               (*p_equipTargetInfo)->fields.svtId,
                               0);
  if ( !*p_equipTargetInfo )
    goto LABEL_16;
  if ( !v102 )
    goto LABEL_16;
  v103 = ServantLimitMaster__GetEntity(v102, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0);
  this->fields.svtLimitEntity = v103;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCommentMaster___),
        (v110 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtEntity) == 0)
    || (v111 = (ServantCommentMaster_o *)Instance,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v110[1], 0),
        !v111) )
  {
LABEL_16:
    sub_1C7BD40(Instance, v89);
  }
  EntityList = ServantCommentMaster__GetEntityList(v111, (int32_t)Instance, -1, 0, 0, 0, 0);
  this->fields.svtCommentEntityList = EntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList,
    (int32_t)EntityList,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  this->fields.commandCodeIdList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList, 0, v119, v120, v121, v122, v123, v124);
  this->fields.costumeIds = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.costumeIds, 0, v125, v126, v127, v128, v129, v130);
  this->fields.cardSelectList = 0;
  *(_QWORD *)&this->fields.cardLimitCount = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.cardSelectList, 0, v131, v132, v133, v134, v135, v136);
  this->fields.dispSelectList = 0;
  *(_QWORD *)&this->fields.dispLimitCount = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dispSelectList, 0, v137, v138, v139, v140, v141, v142);
  *(_QWORD *)&this->fields.commandCardLimitCount = 0;
  this->fields.commandCardSelectList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.commandCardSelectList, 0, v143, v144, v145, v146, v147, v148);
  this->fields.commandCardParam = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam, 0, v149, v150, v151, v152, v153, v154);
  *(_QWORD *)&this->fields.iconLimitCount = 0;
  this->fields.iconSelectList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.iconSelectList, 0, v155, v156, v157, v158, v159, v160);
  *(_QWORD *)&this->fields.portraitLimitCount = 0;
  this->fields.portraitSelectList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.portraitSelectList, 0, v161, v162, v163, v164, v165, v166);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v167);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__ModifyInfo(this, v168);
}


void ServantStatusListViewItem___ctor_36632892(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_List_long__o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  DataManager_o *Instance; // x0
  __int64 v61; // x1
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x21
  __int64 v64; // x22
  __int64 v65; // x23
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4CEB091 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB091 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v21;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v28;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v35;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v42, v43, v44, v45, v46, v47);
  this->fields.userCommandCodeEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeEntity, 0, v48, v49, v50, v51, v52, v53);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)commandCode,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v65 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v64 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v65;
  *(_QWORD *)&v72.fields.fakeValue = v64;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v72, 0);
  if ( !v63 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v63,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_342E348 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeCollectionEntity,
    0,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_1C7BD40(Instance, v61);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
}


void ServantStatusListViewItem___ctor_36633680(
        ServantStatusListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_List_long__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int64_t Instance; // x0
  __int64 v49; // x1
  __int128 v50; // q1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  struct UserCommandCodeEntity_o *v58; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x21
  __int64 v60; // x22
  __int64 v61; // x23
  Il2CppObject *Entity; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x21
  struct UserCommandCodeEntity_o *v71; // x8
  __int128 v72; // q0
  __int64 v73; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  struct UserCommandCodeEntity_o *v80; // x8
  __int128 v81; // q0
  UserCommandCodeCollectionMaster_o *v82; // x21
  struct UserCommandCodeEntity_o *v83; // x8
  int64_t v84; // x22
  __int64 v85; // x23
  __int64 v86; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x0
  int32_t v88; // w1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  UserCommandCodeEntity_o *v90; // x8
  struct UserCommandCodeEntity_o *v91; // x8
  __int128 v92; // q0
  UserServantCommandCodeMaster_o *v93; // x20
  bool IsAttach; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  if ( (byte_4CEB092 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB092 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v19;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v26;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v33;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v42, v43, v44, v45, v46, v47);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_46;
  v50 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v99.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v98 = v99;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v98, 0);
  if ( !p_fields->userGameEntity )
    goto LABEL_46;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v51, v52, v53, v54, v55, v56);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCode,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v58 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v61 = *(_QWORD *)&v58->fields.commandCodeId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v100.fields.currentCryptoKey = v61;
  *(_QWORD *)&v100.fields.fakeValue = v60;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v100, 0);
  if ( !v59 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v59,
             Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_46;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
               userCommandCodeEntity->fields.commandCodeId,
               0);
  if ( !v70 )
    goto LABEL_46;
  DataMasterBase_object__object__int___TryGetEntity(
    v70,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_342E348 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v71 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v72 = *(_OWORD *)&v71->fields.userId.fields.fakeValue;
  v73 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v71->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v99.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v97 = v99;
  if ( v73 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v97, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v80 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v81 = *(_OWORD *)&v80->fields.userId.fields.fakeValue;
        v82 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v80->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v99.fields.fakeValue = v81;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v96 = v99;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v96, 0);
        v83 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v84 = Instance;
          v86 = *(_QWORD *)&v83->fields.commandCodeId.fields.currentCryptoKey;
          v85 = *(_QWORD *)&v83->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v101.fields.currentCryptoKey = v86;
          *(_QWORD *)&v101.fields.fakeValue = v85;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v101, 0);
          if ( v82 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v82, v84, Instance, 0);
            v88 = (int)EntityDefinitely;
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_46:
    sub_1C7BD40(Instance, v49);
  }
  this->fields.userCommandCodeCollectionEntity = 0;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  v88 = 0;
LABEL_37:
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_userCommandCodeCollectionEntity, v88, v74, v75, v76, v77, v78, v79);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0);
  v90 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v90 )
    goto LABEL_46;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v90, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v91 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
  v93 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v99.fields.fakeValue = v92;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v95 = v99;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v95, 0);
  if ( !v93 )
    goto LABEL_46;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v93, Instance, 0);
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


void ServantStatusListViewItem___ctor_36635200(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_List_long__o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  struct UserCommandCodeCollectionEntity_o *v57; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x20
  __int64 v59; // x21
  __int64 v60; // x22
  Il2CppObject *Entity; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4CEB093 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB093 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v19;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v26;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v33;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  *(_QWORD *)&this->fields.currentCardLimitCount = -1;
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v42, v43, v44, v45, v46, v47);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v50, v51, v52, v53, v54, v55);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v57 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v60 = *(_QWORD *)&v57->fields.commandCodeId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v70.fields.currentCryptoKey = v60;
  *(_QWORD *)&v70.fields.fakeValue = v59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v70, 0);
  if ( !v58 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v58,
             (int32_t)Instance,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0),
        !v69)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v69,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_342E348 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1C7BD40(Instance, v49);
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
  GrandQuestFolderBoardItem_o *v21; // x25
  System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4CEB0C4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&StringLiteral_10131/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_4CEB0C4 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
    v10 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
    v12 = 528;
    if ( isTransformed )
      v12 = 680;
    v13 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&this->klass + v12);
    if ( v13 )
    {
      if ( !v10
        || (System_Collections_Generic_List_int___AddRange(
              v10,
              v13,
              (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__),
            (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
      {
LABEL_29:
        sub_1C7BD40(Instance, v13);
      }
      NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                         (PartyOrganizationUtility_o *)Instance,
                                                                                         (System_Collections_Generic_IEnumerable_int__o *)v10,
                                                                                         FriendshipUpCampaignInfo,
                                                                                         0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10131/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
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
                   (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
          Instance = (Il2CppObject *)System_Linq_Enumerable__Contains_int_(
                                       NeedAddAnnotationSkillIds,
                                       Item,
                                       (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
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
              sub_1C7BD48(Instance);
            v21 = (GrandQuestFolderBoardItem_o *)((char *)transformedPassiveSkillExplanationMessageList + v18);
            v22 = System_String__Concat_64176912(
                    *(System_String_o **)((char *)&transformedPassiveSkillExplanationMessageList->obj.klass + v18),
                    v16,
                    0);
            v21->klass = (GrandQuestFolderBoardItem_c *)v22;
            sub_1C7BA8C(v21, (int32_t)v22, v23, v24, v25, v26, v27, v28);
          }
          ++v17;
          v18 += 8;
        }
        while ( (__int64)v17 < v10->fields._size );
      }
    }
  }
}


void ServantStatusListViewItem__CacheDispLimitCountAfter(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x19

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    userSvtEntity->fields.dispLimitCountAfter = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                                  this,
                                                  method);
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


bool ServantStatusListViewItem__CheckModifyAndGetLimitCountStage(
        ServantStatusListViewItem_o *this,
        int32_t *cardImageLimitCountStage,
        int32_t *dispLimitCountStage,
        int32_t *commandCardLimitCountStage,
        int32_t *iconLimitCountStage,
        int32_t *portraitLimitCountStage,
        int32_t *supportLimitCountStage,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x0
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8

  cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_19;
  *cardImageLimitCountStage = cardImageLimitCountStageData->fields._ModifyStage_k__BackingField;
  dispLimitCountStageData = this->fields.dispLimitCountStageData;
  if ( !dispLimitCountStageData )
    goto LABEL_19;
  *dispLimitCountStage = dispLimitCountStageData->fields._ModifyStage_k__BackingField;
  commandCardLimitCountStageData = this->fields.commandCardLimitCountStageData;
  if ( !commandCardLimitCountStageData )
    goto LABEL_19;
  *commandCardLimitCountStage = commandCardLimitCountStageData->fields._ModifyStage_k__BackingField;
  iconLimitCountStageData = this->fields.iconLimitCountStageData;
  if ( !iconLimitCountStageData )
    goto LABEL_19;
  *iconLimitCountStage = iconLimitCountStageData->fields._ModifyStage_k__BackingField;
  portraitLimitCountStageData = this->fields.portraitLimitCountStageData;
  if ( !portraitLimitCountStageData )
    goto LABEL_19;
  *portraitLimitCountStage = portraitLimitCountStageData->fields._ModifyStage_k__BackingField;
  supportLimitCountStageData = this->fields.supportLimitCountStageData;
  if ( !supportLimitCountStageData )
    goto LABEL_19;
  *supportLimitCountStage = supportLimitCountStageData->fields._ModifyStage_k__BackingField;
  if ( ServantStatusListViewItem_LimitCountStageData__IsModify(cardImageLimitCountStageData, 0) )
    return 1;
  cardImageLimitCountStageData = this->fields.dispLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_19;
  if ( ServantStatusListViewItem_LimitCountStageData__IsModify(cardImageLimitCountStageData, 0) )
    return 1;
  cardImageLimitCountStageData = this->fields.commandCardLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_19;
  if ( ServantStatusListViewItem_LimitCountStageData__IsModify(cardImageLimitCountStageData, 0) )
    return 1;
  cardImageLimitCountStageData = this->fields.iconLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_19;
  if ( ServantStatusListViewItem_LimitCountStageData__IsModify(cardImageLimitCountStageData, 0) )
    return 1;
  cardImageLimitCountStageData = this->fields.portraitLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_19;
  if ( ServantStatusListViewItem_LimitCountStageData__IsModify(cardImageLimitCountStageData, 0) )
    return 1;
  cardImageLimitCountStageData = this->fields.supportLimitCountStageData;
  if ( !cardImageLimitCountStageData )
LABEL_19:
    sub_1C7BD40(cardImageLimitCountStageData, cardImageLimitCountStage);
  return ServantStatusListViewItem_LimitCountStageData__IsModify(cardImageLimitCountStageData, 0);
}


void ServantStatusListViewItem__CreateCurrentLimitCountCache(
        ServantStatusListViewItem_o *this,
        bool ignoreRandomSettings,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountCache_o *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v13; // x1
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x22
  struct ServantStatusListViewItem_LimitCountCache_o *v15; // x8
  struct ServantStatusListViewItem_LimitCountCache_o *v16; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v17; // x21
  struct ServantStatusListViewItem_LimitCountCache_o *v18; // x21

  if ( (byte_4CEB096 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusListViewItem_LimitCountCache_TypeInfo);
    byte_4CEB096 = 1;
  }
  v5 = (ServantStatusListViewItem_LimitCountCache_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountCache_TypeInfo);
  ServantStatusListViewItem_LimitCountCache___ctor(v5, 0);
  this->fields.currentLimitCountCache = v5;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentLimitCountCache,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  currentLimitCountCache = this->fields.currentLimitCountCache;
  if ( ignoreRandomSettings )
    v15 = 0;
  else
    v15 = this->fields.currentLimitCountCache;
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
    v16 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getIconLimitCount(userSvtEntity, 1, 0);
    if ( !v16 )
      goto LABEL_22;
    v16->fields.iconLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v17 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getCommandCardLimitCount(userSvtEntity, 1, 0);
    if ( !v17 )
      goto LABEL_22;
    v17->fields.commandCardLimitCount = (int)userSvtEntity;
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_22;
    v18 = this->fields.currentLimitCountCache;
    userSvtEntity = (UserServantEntity_o *)UserServantEntity__getDispLimitCount(userSvtEntity, 1, 0);
    if ( !v18 )
      goto LABEL_22;
    v18->fields.dispLimitCount = (int)userSvtEntity;
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
    if ( !v15 || (v15->fields.cardLimitCount = this->fields.cardLimitCount, !currentLimitCountCache) )
LABEL_22:
      sub_1C7BD40(userSvtEntity, v13);
    currentLimitCountCache->fields.iconLimitCount = this->fields.iconLimitCount;
    currentLimitCountCache->fields.commandCardLimitCount = this->fields.commandCardLimitCount;
    currentLimitCountCache->fields.dispLimitCount = this->fields.dispLimitCount;
    LODWORD(userSvtEntity) = this->fields.portraitLimitCount;
  }
  currentLimitCountCache->fields.portraitLimitCount = (int)userSvtEntity;
}


ServantStatusListViewItem_LimitCountStageData_o *ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
        ServantStatusListViewItem_o *this,
        int32_t limitCountStage,
        int32_t maxLimitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  int32_t v8; // w0
  System_Collections_Generic_IEnumerable_TSource__o *LimitCountStageList; // x20
  System_Int32_array *v10; // x20
  ServantStatusListViewItem_LimitCountStageData_o *v11; // x21

  if ( (byte_4CEB0C9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Append_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    byte_4CEB0C9 = 1;
  }
  if ( ((limitCountStage < maxLimitCountStage) & !LimitCountUtility__IsCostume(limitCountStage, 0)) != 0 )
    v8 = limitCountStage;
  else
    v8 = maxLimitCountStage;
  LimitCountStageList = (System_Collections_Generic_IEnumerable_TSource__o *)LimitCountUtility__GetLimitCountStageList(
                                                                               v8,
                                                                               hasRewardStage,
                                                                               0);
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
    LimitCountStageList = System_Linq_Enumerable__Append_int_(
                            LimitCountStageList,
                            limitCountStage,
                            (const MethodInfo_317E818 *)Method_System_Linq_Enumerable_Append_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          LimitCountStageList,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  v11 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v11, v10, limitCountStage, 0);
  return v11;
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
  System_String_o *v7; // x7
  System_Int32_array *appendPassiveSkillIdList; // x8
  System_String_array *appendPassiveSkillTitleMessageList; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_array *appendPassiveSkillExplanationMessageList; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Boolean_array *appendPassiveSkillReleaseStateList; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Int32_array *appendPassiveSkillLvList; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  *idList = appendPassiveSkillIdList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)idList,
    (int32_t)appendPassiveSkillIdList,
    (int32_t)titleList,
    (int32_t)explanationList,
    (System_String_o *)releaseStateList,
    (int32_t)lvList,
    (int64_t)method,
    v7);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)titleList,
    (int32_t)appendPassiveSkillTitleMessageList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)explanationList,
    (int32_t)appendPassiveSkillExplanationMessageList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)releaseStateList,
    (int32_t)appendPassiveSkillReleaseStateList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)lvList, (int32_t)appendPassiveSkillLvList, v36, v37, v38, v39, v40, v41);
}


int32_t ServantStatusListViewItem__GetCardImageLimitCountStage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x8

  cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    sub_1C7BD40(this, method);
  return cardImageLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetCardImageLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x8

  cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    sub_1C7BD40(this, method);
  return cardImageLimitCountStageData->fields._StageList_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetClassSkill(
        ServantStatusListViewItem_o *this,
        int32_t targetDispLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *svtEntity; // x0
  bool IsGrandServant; // w0
  UserServantEntity_o *userSvtEntity; // x21
  bool v9; // w22
  bool v10; // w7
  System_String_array *titleList; // [xsp+10h] [xbp-40h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CEB0C3 & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEB0C3 = 1;
  }
  titleList = 0;
  explanationList = 0;
  idList = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
  if ( this->fields.userSvtEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_19;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
    {
      svtEntity = this->fields.userSvtEntity;
      if ( !svtEntity
        || (IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)svtEntity, 0),
            userSvtEntity = this->fields.userSvtEntity,
            v9 = IsGrandServant,
            (svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
      {
LABEL_19:
        sub_1C7BD40(svtEntity, v5);
      }
      if ( this->fields._IsTempGrandServant_k__BackingField )
      {
        v10 = 1;
        if ( !userSvtEntity )
          goto LABEL_19;
      }
      else
      {
        v10 = v9 && !this->fields._IsForceNotGrand_k__BackingField;
        if ( !userSvtEntity )
          goto LABEL_19;
      }
      UserServantEntity__getPassiveSkillInfo(
        userSvtEntity,
        &idList,
        &explanationList,
        &titleList,
        targetDispLimitCount,
        *((_QWORD *)svtEntity + 17),
        0,
        v10,
        0);
    }
  }
  else if ( this->fields.userSvtCollectionEntity )
  {
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_19;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
    {
      svtEntity = this->fields.userSvtCollectionEntity;
      if ( !svtEntity )
        goto LABEL_19;
      UserServantCollectionEntity__getPassiveSkillInfo(
        (UserServantCollectionEntity_o *)svtEntity,
        &idList,
        &titleList,
        &explanationList,
        targetDispLimitCount,
        1,
        1,
        0);
    }
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
      sub_1C7BD40(this, checkTransform);
  }
  return TransformedServant_k__BackingField->fields.cardIds;
}


int32_t ServantStatusListViewItem__GetCommandCardLimitCountStage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x8

  commandCardLimitCountStageData = this->fields.commandCardLimitCountStageData;
  if ( !commandCardLimitCountStageData )
    sub_1C7BD40(this, method);
  return commandCardLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetCommandCardLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x8

  commandCardLimitCountStageData = this->fields.commandCardLimitCountStageData;
  if ( !commandCardLimitCountStageData )
    sub_1C7BD40(this, method);
  return commandCardLimitCountStageData->fields._StageList_k__BackingField;
}


int32_t ServantStatusListViewItem__GetDispLimitCountStage(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8

  dispLimitCountStageData = this->fields.dispLimitCountStageData;
  if ( !dispLimitCountStageData )
    sub_1C7BD40(this, method);
  return dispLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetDispLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8

  dispLimitCountStageData = this->fields.dispLimitCountStageData;
  if ( !dispLimitCountStageData )
    sub_1C7BD40(this, method);
  return dispLimitCountStageData->fields._StageList_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipAtkByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4CEB0B0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4CEB0B0 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._size;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C7BD40(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4CEB0B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4CEB0B2 = 1;
  }
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_9;
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               equipGrandServantEntityList,
                                                                               index,
                                                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
  if ( equipGrandServantEntityList )
  {
    equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
    if ( equipGrandServantEntityList )
    {
      equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   equipGrandServantEntityList,
                                                                                   index,
                                                                                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
      if ( equipGrandServantEntityList )
      {
        LODWORD(equipGrandServantEntityList) = equipGrandServantEntityList[3].fields._syncRoot;
        return (int)equipGrandServantEntityList;
      }
    }
LABEL_9:
    sub_1C7BD40(equipGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4CEB0B5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4CEB0B5 = 1;
  }
  equipUserGrandServantEntityList = this->fields.equipUserGrandServantEntityList;
  if ( equipUserGrandServantEntityList
    && System_Collections_Generic_List_object___get_Item(
         (System_Collections_Generic_List_object__o *)equipUserGrandServantEntityList,
         index,
         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( !Item
      || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                index,
                                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0 )
    {
      sub_1C7BD40(Item, v6);
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

  if ( (byte_4CEB0B6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4CEB0B6 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getExpInfo(
                 (UserServantEntity_o *)equipUserGrandServantEntityList,
                 exp,
                 lateExp,
                 barExp,
                 0);
    }
LABEL_12:
    sub_1C7BD40(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4CEB0B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4CEB0B1 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._version;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C7BD40(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4CEB0B7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_4CEB0B7 = 1;
  }
  grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
  if ( !grandServantEquipTargetIdList )
    sub_1C7BD40(0, *(_QWORD *)&index);
  return System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_3826B40 *)Method_System_Collections_Generic_List_long__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4CEB0AC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4CEB0AC = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[6].fields._items;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1C7BD40(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4CEB0AF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB0AF = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        items = equipUserGrandServantEntityList[2].fields._items;
        v6 = *(_QWORD *)&equipUserGrandServantEntityList[2].fields._size;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v10.fields.currentCryptoKey = items;
        *(_QWORD *)&v10.fields.fakeValue = v6;
        LODWORD(servantLeaderInfo) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v10, 0);
        return (int)servantLeaderInfo;
      }
    }
LABEL_14:
    sub_1C7BD40(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4CEB0AD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4CEB0AD = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getLevelMax((UserServantEntity_o *)equipUserGrandServantEntityList, 0);
    }
LABEL_12:
    sub_1C7BD40(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4CEB0AB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4CEB0AB = 1;
  }
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    sub_1C7BD40(0, *(_QWORD *)&index);
  return (ServantEntity_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)equipGrandServantEntityList,
                              index,
                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
}


void ServantStatusListViewItem__GetEquipSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SkillInfo_array *equipSkillInfoList; // x8

  equipSkillInfoList = this->fields.equipSkillInfoList;
  *skillInfoList = equipSkillInfoList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)skillInfoList,
    (int32_t)equipSkillInfoList,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEB0B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo____get_Item__);
    byte_4CEB0B8 = 1;
  }
  grandServantSkillInfoList = this->fields.grandServantSkillInfoList;
  if ( !grandServantSkillInfoList )
    sub_1C7BD40(0, *(_QWORD *)&index);
  Item = (SkillInfo_array *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)grandServantSkillInfoList,
                              index,
                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SkillInfo____get_Item__);
  *skillInfoList = Item;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)Item, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4CEB0BC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEB0BC = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_FriendshipMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v24, 0);
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
    sub_1C7BD40(Instance, v13);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4CEB0C5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C7BAE8(&EventDropUpValInfo_TypeInfo);
    sub_1C7BAE8(&FunctionEntity_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEB0C5 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 17),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v33,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v8 )
        break;
      current = v33.fields._current;
      if ( !v33.fields._current )
        sub_1C7BD40(v8, v9);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v33.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v12 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v12 )
          sub_1C7BD40(0, v13);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v12, svtId, 0);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0) )
        {
          v15 = sub_1C7BD34(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v15, 0);
          if ( !v15 )
            sub_1C7BD40(v16, v17);
          *(_QWORD *)(v15 + 24) = 111;
          v18 = (EventDropUpValInfo_o *)sub_1C7BD34(EventDropUpValInfo_TypeInfo);
          EventDropUpValInfo___ctor(v18, 0, (FunctionEntity_o *)v15, 0);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
          if ( !v18 )
            sub_1C7BD40(OnlyMaxFuncGroupId, v20);
          v18->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v4 )
            sub_1C7BD40(OnlyMaxFuncGroupId, v20);
          items = v4->fields._items;
          v28 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C7BD40(OnlyMaxFuncGroupId, v20);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v18,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v18;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v18, v21, v22, v23, v24, v25, v26);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v4 )
LABEL_35:
    sub_1C7BD40(Instance, v7);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v4,
                                       (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


int32_t ServantStatusListViewItem__GetIconLimitCountStage(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8

  iconLimitCountStageData = this->fields.iconLimitCountStageData;
  if ( !iconLimitCountStageData )
    sub_1C7BD40(this, method);
  return iconLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetIconLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8

  iconLimitCountStageData = this->fields.iconLimitCountStageData;
  if ( !iconLimitCountStageData )
    sub_1C7BD40(this, method);
  return iconLimitCountStageData->fields._StageList_k__BackingField;
}


bool ServantStatusListViewItem__GetNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TreasureDvcInfo_o *v8; // x8

  v8 = this->fields.tdInfo;
  *tdInfo = v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v8, (int32_t)method, v3, v4, v5, v6, v7);
  return this->fields.isTdResult;
}


bool ServantStatusListViewItem__GetNpInfo_36647840(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  UserServantEntity_o *svtEntity; // x0
  TreasureDvcInfo_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CEB0BB & 1) == 0 )
  {
    sub_1C7BAE8(&TreasureDvcInfo_TypeInfo);
    byte_4CEB0BB = 1;
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
      sub_1C7BD40(svtEntity, tdInfo);
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
    v9 = (TreasureDvcInfo_o *)sub_1C7BD34(TreasureDvcInfo_TypeInfo);
    TreasureDvcInfo___ctor(v9, 0);
    *tdInfo = v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItem__GetPassiveSkillInfo(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        bool checkTransform,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Int32_array *passiveSkillIdList; // x1
  System_String_array *passiveSkillTitleMessageList; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_array **p_transformedPassiveSkillExplanationMessageList; // x8
  System_String_array *v27; // x1
  System_Int32_array *transformedPassiveSkillIdList; // x1
  System_String_array *transformedPassiveSkillTitleMessageList; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( checkTransform
    && this->fields._IsTransformed_k__BackingField
    && !this->fields._TransformIsNotClassSkillChange_k__BackingField )
  {
    transformedPassiveSkillIdList = this->fields.transformedPassiveSkillIdList;
    *idList = transformedPassiveSkillIdList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)idList,
      (int32_t)transformedPassiveSkillIdList,
      (int32_t)titleList,
      (int32_t)explanationList,
      (System_String_o *)checkTransform,
      (int32_t)method,
      v6,
      v7);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)titleList,
      (int32_t)transformedPassiveSkillTitleMessageList,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.transformedPassiveSkillExplanationMessageList;
  }
  else
  {
    passiveSkillIdList = this->fields.passiveSkillIdList;
    *idList = passiveSkillIdList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)idList,
      (int32_t)passiveSkillIdList,
      (int32_t)titleList,
      (int32_t)explanationList,
      (System_String_o *)checkTransform,
      (int32_t)method,
      v6,
      v7);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)titleList,
      (int32_t)passiveSkillTitleMessageList,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v27 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v27, v20, v21, v22, v23, v24, v25);
}


void ServantStatusListViewItem__GetPassiveSkillInfo_36647256(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  void *svtEntity; // x0
  bool IsGrandServant; // w0
  UserServantEntity_o *userSvtEntity; // x24
  bool v14; // w25
  bool v15; // w7
  BalanceConfig_c *v16; // x0
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_String_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_String_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CEB0BA & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&string___TypeInfo);
    byte_4CEB0BA = 1;
  }
  if ( !this->fields.userSvtEntity )
  {
    if ( this->fields.userSvtCollectionEntity )
    {
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_21;
      if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
      {
        svtEntity = this->fields.userSvtCollectionEntity;
        if ( !svtEntity )
          goto LABEL_21;
        UserServantCollectionEntity__getPassiveSkillInfo(
          (UserServantCollectionEntity_o *)svtEntity,
          idList,
          titleList,
          explanationList,
          dispLimitCount,
          1,
          1,
          0);
        return;
      }
    }
LABEL_16:
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v17 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
    *idList = v17;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)idList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    v24 = (System_String_array *)sub_1C7BB90(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *titleList = v24;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v24, v25, v26, v27, v28, v29, v30);
    v31 = (System_String_array *)sub_1C7BB90(
                                   string___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
    *explanationList = v31;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v31, v32, v33, v34, v35, v36, v37);
    return;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_21;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
    goto LABEL_16;
  svtEntity = this->fields.userSvtEntity;
  if ( !svtEntity
    || (IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)svtEntity, 0),
        userSvtEntity = this->fields.userSvtEntity,
        v14 = IsGrandServant,
        (svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_21:
    sub_1C7BD40(svtEntity, idList);
  }
  if ( this->fields._IsTempGrandServant_k__BackingField )
  {
    v15 = 1;
    if ( !userSvtEntity )
      goto LABEL_21;
  }
  else
  {
    v15 = v14 && !this->fields._IsForceNotGrand_k__BackingField;
    if ( !userSvtEntity )
      goto LABEL_21;
  }
  UserServantEntity__getPassiveSkillInfo(
    userSvtEntity,
    idList,
    titleList,
    explanationList,
    dispLimitCount,
    *((_QWORD *)svtEntity + 17),
    0,
    v15,
    0);
}


int32_t ServantStatusListViewItem__GetPortraitLimitCountStage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x8

  portraitLimitCountStageData = this->fields.portraitLimitCountStageData;
  if ( !portraitLimitCountStageData )
    sub_1C7BD40(this, method);
  return portraitLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetPortraitLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x8

  portraitLimitCountStageData = this->fields.portraitLimitCountStageData;
  if ( !portraitLimitCountStageData )
    sub_1C7BD40(this, method);
  return portraitLimitCountStageData->fields._StageList_k__BackingField;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SkillInfo_array **p_transformedSkillInfoList; // x9
  SkillInfo_array *v10; // x1

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    p_transformedSkillInfoList = &this->fields.transformedSkillInfoList;
  else
    p_transformedSkillInfoList = &this->fields.skillInfoList;
  v10 = *p_transformedSkillInfoList;
  *skillInfoList = *p_transformedSkillInfoList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)skillInfoList,
    (int32_t)v10,
    checkTransform,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusListViewItem__GetSkillInfo_36646836(
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
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CEB0B9 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&SkillInfo___TypeInfo);
    byte_4CEB0B9 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    UserServantEntity__getSkillInfo(
      userSvtEntity,
      skillInfoList,
      this->fields._BeforeClearQuestId_k__BackingField,
      dispLimitCount,
      1,
      0,
      -1,
      0);
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
      v10 = (SkillInfo_array *)sub_1C7BB90(SkillInfo___TypeInfo, (unsigned int)v9->static_fields->SvtSkillListMax);
      *skillInfoList = v10;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    }
  }
}


void ServantStatusListViewItem__GetStatus(
        ServantStatusListViewItem_o *this,
        ServantOverwriteStatus_o **outOverwriteStatus,
        int32_t targetDispLimitCount,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t ServantLimitCountSealAfter; // w21
  __int64 v11; // x1
  Il2CppObject *Master_object; // x22
  const MethodInfo *v13; // x1
  int32_t LimitCount; // w23
  int32_t LimitCountByDispLimit; // w21
  const MethodInfo *v16; // x1
  UserServantCollectionEntity_o *SvtId; // x0
  UserServantEntity_o *userSvtEntity; // x0
  ServantOverwriteStatus_o *OverwriteStatus_43724332; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  ServantLimitCountSealAfter = targetDispLimitCount;
  if ( (byte_4CEB0C2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    byte_4CEB0C2 = 1;
  }
  *outOverwriteStatus = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)outOverwriteStatus,
    0,
    targetDispLimitCount,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.servantLeaderInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    LimitCount = ServantStatusListViewItem__get_LimitCount(this, v13);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(ServantLimitCountSealAfter, LimitCount, 0);
    SvtId = (UserServantCollectionEntity_o *)ServantStatusListViewItem__get_SvtId(this, v16);
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
    OverwriteStatus_43724332 = UserServantEntity__GetOverwriteStatus_43724332(
                                 userSvtEntity,
                                 ServantLimitCountSealAfter,
                                 0);
LABEL_17:
    *outOverwriteStatus = OverwriteStatus_43724332;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)outOverwriteStatus,
      (int32_t)OverwriteStatus_43724332,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    return;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    OverwriteStatus_43724332 = ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
    goto LABEL_17;
  }
  if ( this->fields.isCollection )
  {
    SvtId = this->fields.userSvtCollectionEntity;
    if ( SvtId )
    {
      OverwriteStatus_43724332 = UserServantCollectionEntity__GetOverwriteStatus(SvtId, ServantLimitCountSealAfter, 0);
      goto LABEL_17;
    }
LABEL_19:
    sub_1C7BD40(SvtId, v11);
  }
}


int32_t ServantStatusListViewItem__GetSupportLimitCountStage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8

  supportLimitCountStageData = this->fields.supportLimitCountStageData;
  if ( !supportLimitCountStageData )
    sub_1C7BD40(this, method);
  return supportLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetSupportLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8

  supportLimitCountStageData = this->fields.supportLimitCountStageData;
  if ( !supportLimitCountStageData )
    sub_1C7BD40(this, method);
  return supportLimitCountStageData->fields._StageList_k__BackingField;
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

  v2 = 640;
  if ( this->fields._IsTransformed_k__BackingField )
    v2 = 648;
  return *(System_String_o **)((char *)&this->klass + v2);
}


void ServantStatusListViewItem__GetTransformedNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TreasureDvcInfo_o *transformedTdInfo; // x8

  transformedTdInfo = this->fields.transformedTdInfo;
  *tdInfo = transformedTdInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)transformedTdInfo, (int32_t)method, v3, v4, v5, v6, v7);
}


bool ServantStatusListViewItem__GetVoiceInfo(
        ServantStatusListViewItem_o *this,
        System_String_o **illust,
        System_String_o **voice,
        bool *isPlayVoice,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantLimitAddMaster_o *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v15; // x1
  int32_t illustratorId; // w22
  struct ServantEntity_o *svtEntity; // x8
  int32_t currentCardLimitCount; // w25
  int cvId; // w24
  int32_t cardLimitCount; // w25
  struct ServantEntity_o *v21; // x8
  ServantLimitAddMaster_o *v22; // x23
  __int64 v23; // x26
  __int64 v24; // x27
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_String_o *monitor; // x1
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_String_o *v40; // x1
  __int64 *v41; // x8
  System_String_o *v42; // x0
  ServantLimitAddEntity_o *v44; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4CEB0BD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_IllustratorMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_14886/*"UNKNOWN_NAME_ILLUST"*/);
    sub_1C7BAE8(&StringLiteral_9351/*"NO_ENTRY_NAME_ILLUST"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB0BD = 1;
  }
  v44 = 0;
  entity = 0;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)voice,
    StringLiteral_1/*""*/,
    (int32_t)voice,
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
      if ( currentCardLimitCount < 0 )
      {
        cardLimitCount = this->fields.cardLimitCount;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        currentCardLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v21 = this->fields.svtEntity;
      if ( v21 )
      {
        v22 = Master_object;
        v24 = *(_QWORD *)&v21->fields.id.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v21->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v24;
        *(_QWORD *)&v46.fields.fakeValue = v23;
        Master_object = (ServantLimitAddMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                     v46,
                                                     0);
        if ( v22 )
        {
          if ( ServantLimitAddMaster__TryGetEntity(v22, &v44, (int32_t)Master_object, currentCardLimitCount, 0) )
          {
            Master_object = (ServantLimitAddMaster_o *)v44;
            if ( !v44 )
              goto LABEL_44;
            cvId = ServantLimitAddEntity__GetOverwriteCvId(v44, cvId, 0);
          }
          if ( cvId < 1 )
            goto LABEL_28;
          Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Master_object )
          {
            Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Master_object,
                                                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CvMaster___);
            if ( Master_object )
            {
              v25 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      cvId,
                      (const MethodInfo_342E2FC *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
              if ( v25 )
              {
                monitor = (System_String_o *)v25[1].monitor;
                *voice = monitor;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)voice, (int32_t)monitor, v26, v27, v28, v29, v30, v31);
                *isPlayVoice = 1;
              }
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_44:
    sub_1C7BD40(Master_object, v13);
  }
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Master_object = (ServantLimitAddMaster_o *)ServantStatusListViewItem__get_CommandCodeId(this, v15);
  if ( !MasterData_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                               &entity,
                                               (int32_t)Master_object,
                                               (const MethodInfo_342E348 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
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
        v41 = &StringLiteral_9351/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_42:
        v42 = LocalizationManager__Get((System_String_o *)*v41, 0);
        LODWORD(v40) = (_DWORD)v42;
        *illust = v42;
        goto LABEL_43;
      }
    }
LABEL_41:
    v41 = &StringLiteral_14886/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_44;
  illustratorId = (int32_t)entity[2].klass;
LABEL_28:
  if ( illustratorId < 1 )
    goto LABEL_34;
  Master_object = (ServantLimitAddMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (ServantLimitAddMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Master_object,
                                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v33 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          illustratorId,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v33 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_41;
  }
  v40 = (System_String_o *)v33[1].monitor;
  *illust = v40;
LABEL_43:
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)illust, (int32_t)v40, v34, v35, v36, v37, v38, v39);
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
      sub_1C7BD40(this, method);
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

  if ( (byte_4CEB0AA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB0AA = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
    if ( !grandServantEquipTargetIdList )
      return (char)grandServantEquipTargetIdList;
    v6 = System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_3826B40 *)Method_System_Collections_Generic_List_long__get_Item__) <= 0;
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
      v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v10, 0) <= 0;
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  void *TreasureDeviceInfo; // x0
  bool IsGrandServant; // w0
  UserServantEntity_o *userSvtEntity; // x22
  bool v17; // w23
  bool v18; // w7
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  ServantLeaderInfo_o *v20; // x8
  EquipTargetInfo_o *equipTargetInfo; // x0
  bool v22; // w0
  const MethodInfo *v23; // x1
  struct UserServantEntity_o *v24; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1

  if ( (byte_4CEB097 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&TreasureDvcInfo_TypeInfo);
    byte_4CEB097 = 1;
  }
  this->fields.isTdResult = 0;
  v3 = (TreasureDvcInfo_o *)sub_1C7BD34(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v3, 0);
  this->fields.tdInfo = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.tdInfo, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v10);
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
            v20 = this->fields.servantLeaderInfo;
            this->fields.isTdResult = (unsigned __int8)TreasureDeviceInfo & 1;
            if ( v20 )
            {
              ServantLeaderInfo__SetSkillChangeInfo(v20, 0);
              goto LABEL_25;
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
        goto LABEL_25;
      }
      if ( !this->fields.userSvtCollectionEntity )
        goto LABEL_25;
      TreasureDeviceInfo = this->fields.svtEntity;
      if ( !TreasureDeviceInfo )
        goto LABEL_39;
      if ( ServantEntity__get_IsServant((ServantEntity_o *)TreasureDeviceInfo, 0) )
        goto LABEL_31;
      TreasureDeviceInfo = this->fields.svtEntity;
      if ( !TreasureDeviceInfo )
        goto LABEL_39;
      if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)TreasureDeviceInfo, 0) )
      {
LABEL_31:
        TreasureDeviceInfo = this->fields.userSvtCollectionEntity;
        if ( !TreasureDeviceInfo )
          goto LABEL_39;
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
          goto LABEL_25;
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
              goto LABEL_25;
            }
          }
        }
      }
    }
    goto LABEL_39;
  }
  UserServantEntity__getSkillInfo(
    this->fields.userSvtEntity,
    &this->fields.skillInfoList,
    this->fields._BeforeClearQuestId_k__BackingField,
    ConvertOverwriteDispImageLimitCount,
    1,
    0,
    -1,
    0);
  TreasureDeviceInfo = this->fields.svtEntity;
  if ( !TreasureDeviceInfo )
    goto LABEL_39;
  if ( ServantEntity__get_IsServant((ServantEntity_o *)TreasureDeviceInfo, 0) )
  {
    TreasureDeviceInfo = this->fields.userSvtEntity;
    if ( TreasureDeviceInfo )
    {
      IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)TreasureDeviceInfo, 0);
      userSvtEntity = this->fields.userSvtEntity;
      v17 = IsGrandServant;
      TreasureDeviceInfo = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( TreasureDeviceInfo )
      {
        if ( this->fields._IsTempGrandServant_k__BackingField )
        {
          v18 = 1;
          if ( !userSvtEntity )
            goto LABEL_39;
        }
        else
        {
          v18 = v17 && !this->fields._IsForceNotGrand_k__BackingField;
          if ( !userSvtEntity )
            goto LABEL_39;
        }
        UserServantEntity__getPassiveSkillInfo(
          userSvtEntity,
          &this->fields.passiveSkillIdList,
          &this->fields.passiveSkillTitleMessageList,
          &this->fields.passiveSkillExplanationMessageList,
          ConvertOverwriteDispImageLimitCount,
          *((_QWORD *)TreasureDeviceInfo + 17),
          0,
          v18,
          0);
        TreasureDeviceInfo = this->fields.userSvtEntity;
        if ( !TreasureDeviceInfo )
          goto LABEL_39;
        UserServantEntity__GetAppendPassiveSkillInfo(
          (UserServantEntity_o *)TreasureDeviceInfo,
          &this->fields.appendPassiveSkillIdList,
          &this->fields.appendPassiveSkillTitleMessageList,
          &this->fields.appendPassiveSkillExplanationMessageList,
          &this->fields.appendPassiveSkillReleaseStateList,
          &this->fields.appendPassiveSkillLvList,
          0);
        goto LABEL_22;
      }
    }
LABEL_39:
    sub_1C7BD40(TreasureDeviceInfo, v11);
  }
LABEL_22:
  TreasureDeviceInfo = this->fields.userSvtEntity;
  if ( !TreasureDeviceInfo )
    goto LABEL_39;
  v22 = UserServantEntity__getTreasureDeviceInfo(
          (UserServantEntity_o *)TreasureDeviceInfo,
          &this->fields.tdInfo,
          -1,
          ConvertOverwriteDispImageLimitCount,
          0,
          0);
  v24 = this->fields.userSvtEntity;
  this->fields.isTdResult = v22;
  if ( v24 )
    v24->fields.dispLimitCountAfter = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(this, v23);
LABEL_25:
  ServantStatusListViewItem__AddDuplicationInfo(this, 0, v12);
  ServantStatusListViewItem__SetGrandInfo(this, v25);
  ServantStatusListViewItem__SetTransformData(this, v26);
  ServantStatusListViewItem__SetCostumeData(this, v27);
}


void ServantStatusListViewItem__RefreshLimitCountStageWithRandom(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        bool isRandom,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x0
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *v8; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *v9; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *v10; // x8

  cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_20;
  if ( isRandom )
  {
    cardImageLimitCountStageData = (ServantStatusListViewItem_LimitCountStageData_o *)LimitCountUtility__IsOtherImage(
                                                                                        cardImageLimitCountStageData->fields._ModifyStage_k__BackingField,
                                                                                        0);
    if ( ((unsigned __int8)cardImageLimitCountStageData & 1) == 0 )
    {
      dispLimitCountStageData = this->fields.dispLimitCountStageData;
      if ( !dispLimitCountStageData )
        goto LABEL_20;
      cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
      if ( !cardImageLimitCountStageData )
        goto LABEL_20;
      ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
        cardImageLimitCountStageData,
        userServantEntity,
        dispLimitCountStageData->fields._ModifyStage_k__BackingField,
        1,
        0);
    }
    cardImageLimitCountStageData = this->fields.dispLimitCountStageData;
    if ( cardImageLimitCountStageData )
    {
      ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
        cardImageLimitCountStageData,
        userServantEntity,
        cardImageLimitCountStageData->fields._ModifyStage_k__BackingField,
        0,
        0);
      v8 = this->fields.dispLimitCountStageData;
      if ( v8 )
      {
        cardImageLimitCountStageData = this->fields.commandCardLimitCountStageData;
        if ( cardImageLimitCountStageData )
        {
          ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
            cardImageLimitCountStageData,
            userServantEntity,
            v8->fields._ModifyStage_k__BackingField,
            0,
            0);
          v9 = this->fields.dispLimitCountStageData;
          if ( v9 )
          {
            cardImageLimitCountStageData = this->fields.iconLimitCountStageData;
            if ( cardImageLimitCountStageData )
            {
              ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
                cardImageLimitCountStageData,
                userServantEntity,
                v9->fields._ModifyStage_k__BackingField,
                1,
                0);
              v10 = this->fields.dispLimitCountStageData;
              if ( v10 )
              {
                cardImageLimitCountStageData = this->fields.portraitLimitCountStageData;
                if ( cardImageLimitCountStageData )
                {
                  ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
                    cardImageLimitCountStageData,
                    userServantEntity,
                    v10->fields._ModifyStage_k__BackingField,
                    0,
                    0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C7BD40(cardImageLimitCountStageData, userServantEntity);
  }
  ServantStatusListViewItem_LimitCountStageData__RevertRandomStage(cardImageLimitCountStageData, 0);
  cardImageLimitCountStageData = this->fields.dispLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_20;
  ServantStatusListViewItem_LimitCountStageData__RevertRandomStage(cardImageLimitCountStageData, 0);
  cardImageLimitCountStageData = this->fields.commandCardLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_20;
  ServantStatusListViewItem_LimitCountStageData__RevertRandomStage(cardImageLimitCountStageData, 0);
  cardImageLimitCountStageData = this->fields.iconLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_20;
  ServantStatusListViewItem_LimitCountStageData__RevertRandomStage(cardImageLimitCountStageData, 0);
  cardImageLimitCountStageData = this->fields.portraitLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_20;
  ServantStatusListViewItem_LimitCountStageData__RevertRandomStage(cardImageLimitCountStageData, 0);
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

  if ( (byte_4CEB094 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    sub_1C7BAE8(&UserServantEntity_TypeInfo);
    byte_4CEB094 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
      v5 = sub_1C7BD34(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43695236((UserServantEntity_o *)v5, userSvtEntity, 0);
      ownRandomSettingButtonIndex = this->fields.ownRandomSettingButtonIndex;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(ownRandomSettingButtonIndex, 0);
      if ( !v5 )
        sub_1C7BD40(*(_QWORD *)&v7.fields.currentCryptoKey, *(_QWORD *)&v7.fields.fakeValue);
      v8 = *(_QWORD *)(v5 + 80);
      v9 = *(_QWORD *)(v5 + 88);
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v5 + 208) = v7;
      *(_QWORD *)&v16.fields.currentCryptoKey = v8;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v16, 0);
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


void ServantStatusListViewItem__ResetTransformData(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_StaticFields *v11; // x8
  struct System_String_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7

  if ( (byte_4CEB0CC & 1) == 0 )
  {
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEB0CC = 1;
  }
  HIBYTE(this->fields._TransformedServantDispLimitCount_k__BackingField) = 0;
  *(_QWORD *)&this->fields._IsTransformServant_k__BackingField = 0;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.transformNameBefore = static_fields->Empty;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.transformNameBefore, (int32_t)Empty, v2, v3, v4, v5, v6, v7);
  v11 = string_TypeInfo->static_fields;
  v12 = v11->Empty;
  this->fields.transformNameAfter = v11->Empty;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformNameAfter,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._TransformedServant_k__BackingField = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransformedServant_k__BackingField,
    0,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.transformedServantLimitEntity = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformedServantLimitEntity,
    0,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.transformedSkillInfoList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.transformedSkillInfoList, 0, v31, v32, v33, v34, v35, v36);
  this->fields.transformedPassiveSkillIdList = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformedPassiveSkillIdList,
    0,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.transformedPassiveSkillTitleMessageList = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformedPassiveSkillTitleMessageList,
    0,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.transformedPassiveSkillExplanationMessageList = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformedPassiveSkillExplanationMessageList,
    0,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.transformedTdInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.transformedTdInfo, 0, v55, v56, v57, v58, v59, v60);
  *(_QWORD *)&this->fields.transformedAtk = 0;
  this->fields._TransformNameLabelColor_k__BackingField = TransformHelper__get_DefaultCondTitleLabelColor(0);
  this->fields._TransformNameSpriteColor_k__BackingField = TransformHelper__get_DefaultCondTitleSpriteColor(0);
  *(_WORD *)&this->fields._TransformIsNotSkillChange_k__BackingField = 0;
}


bool ServantStatusListViewItem__SelectCardImageLimitCountStage(
        ServantStatusListViewItem_o *this,
        int32_t stage,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x0

  cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    sub_1C7BD40(0, stage);
  return ServantStatusListViewItem_LimitCountStageData__SelectStage(cardImageLimitCountStageData, stage, 0);
}


bool ServantStatusListViewItem__SelectCommandCardLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x0

  commandCardLimitCountStageData = this->fields.commandCardLimitCountStageData;
  if ( !commandCardLimitCountStageData )
    sub_1C7BD40(0, index);
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(commandCardLimitCountStageData, index, 0);
}


bool ServantStatusListViewItem__SelectDispLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x0

  dispLimitCountStageData = this->fields.dispLimitCountStageData;
  if ( !dispLimitCountStageData )
    sub_1C7BD40(0, index);
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(dispLimitCountStageData, index, 0);
}


bool ServantStatusListViewItem__SelectIconLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x0

  iconLimitCountStageData = this->fields.iconLimitCountStageData;
  if ( !iconLimitCountStageData )
    sub_1C7BD40(0, index);
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(iconLimitCountStageData, index, 0);
}


bool ServantStatusListViewItem__SelectPortraitLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x0

  portraitLimitCountStageData = this->fields.portraitLimitCountStageData;
  if ( !portraitLimitCountStageData )
    sub_1C7BD40(0, index);
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(portraitLimitCountStageData, index, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantStatusListViewItem__SelectSupportLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x19
  ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8
  int32_t Stage_k__BackingField; // w21
  ServantStatusListViewItem_LimitCountStageData_o *v8; // x19

  v4 = this;
  if ( (byte_4CEB0CB & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C7BAE8(&UserServantEntity_TypeInfo);
    byte_4CEB0CB = 1;
  }
  supportLimitCountStageData = v4->fields.supportLimitCountStageData;
  if ( !supportLimitCountStageData )
    goto LABEL_14;
  if ( index != -1 )
    return ServantStatusListViewItem_LimitCountStageData__SelectStageList(supportLimitCountStageData, index, 0);
  Stage_k__BackingField = supportLimitCountStageData->fields._Stage_k__BackingField;
  this = (ServantStatusListViewItem_o *)UserServantEntity_TypeInfo;
  if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
    this = (ServantStatusListViewItem_o *)UserServantEntity_TypeInfo;
  }
  if ( (CommandCodeCommentEntity_c *)Stage_k__BackingField == this->fields.commandCodeCommentEntity->klass )
    return 0;
  v8 = v4->fields.supportLimitCountStageData;
  if ( !this->fields.cardLimitCount )
    j_il2cpp_runtime_class_init_0(this);
  if ( !v8 )
LABEL_14:
    sub_1C7BD40(this, *(_QWORD *)&index);
  ServantStatusListViewItem_LimitCountStageData__SelectStage(
    v8,
    UserServantEntity_TypeInfo->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
    0);
  return 1;
}


void ServantStatusListViewItem__SetCostumeAndOtherIds(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_Int32_array **p_costumeAndOtherIds; // x0
  int32_t v11; // w1
  bool IsOtherImage; // w0
  struct System_Int32_array *costumeIds; // x21
  System_Collections_Generic_List_int__o *v14; // x0
  System_Collections_Generic_List_int__o *v15; // x20
  struct System_Int32_array *v16; // x0
  struct System_Int32_array **v17; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  struct System_Int32_array *v27; // x0

  if ( (byte_4CEB0C0 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor___78742272);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEB0C0 = 1;
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
      v14 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
      v15 = v14;
      if ( costumeIds )
        System_Collections_Generic_List_int____ctor_58857132(
          v14,
          (System_Collections_Generic_IEnumerable_T__o *)costumeIds,
          (const MethodInfo_38216AC *)Method_System_Collections_Generic_List_int___ctor___78742272);
      else
        System_Collections_Generic_List_int____ctor(
          v14,
          (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
      svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        svtEntity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( v15 )
      {
        items = v15->fields._items;
        method = (const MethodInfo *)*(unsigned int *)(*(_QWORD *)&svtEntity->fields.starRate + 928LL);
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( items )
        {
          size = v15->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              (int32_t)method,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size] = (int)method;
          }
          v27 = System_Collections_Generic_List_int___ToArray(
                  v15,
                  (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
          this->fields.costumeAndOtherIds = v27;
          v11 = (int)v27;
          p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
          goto LABEL_25;
        }
      }
    }
    else
    {
      if ( !costumeIds )
        goto LABEL_5;
      v16 = (struct System_Int32_array *)sub_1C7BB90(int___TypeInfo, LODWORD(costumeIds->max_length));
      this->fields.costumeAndOtherIds = v16;
      v17 = &this->fields.costumeAndOtherIds;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v17, (int32_t)v16, v18, v19, v20, v21, v22, v23);
      svtEntity = (ServantEntity_o *)*(v17 - 1);
      if ( svtEntity )
      {
        System_Array__CopyTo((System_Array_o *)svtEntity, (System_Array_o *)*v17, 0, 0);
        return;
      }
    }
LABEL_26:
    sub_1C7BD40(svtEntity, method);
  }
LABEL_5:
  this->fields.costumeAndOtherIds = 0;
  p_costumeAndOtherIds = &this->fields.costumeAndOtherIds;
  v11 = 0;
LABEL_25:
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_costumeAndOtherIds, v11, v4, v5, v6, v7, v8, v9);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusListViewItem_o *v9; // x19
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_equipUserSvtEntity; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v12; // x8
  __int64 v13; // x22
  __int64 v14; // x23
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v17; // x8
  ServantStatusListViewItem_o *v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  Il2CppObject *Entity; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  ServantStatusListViewItem_o *v28; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v29; // x8
  int32_t v30; // w20
  ServantLimitEntity_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Int64_array *v38; // x8
  PartyOrganizationListViewItem_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  BalanceConfig_c *v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v9 = this;
  if ( (byte_4CEB099 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantStatusListViewItem_o *)sub_1C7BAE8(&SkillInfo___TypeInfo);
    byte_4CEB099 = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v9->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v9->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = *p_equipUserSvtEntity;
      if ( !*p_equipUserSvtEntity )
        goto LABEL_38;
      v14 = *(_QWORD *)&v12[5].fields.currentCryptoKey;
      v13 = *(_QWORD *)&v12[5].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v60.fields.currentCryptoKey = v14;
      *(_QWORD *)&v60.fields.fakeValue = v13;
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v60, 0);
      if ( (int)this >= 1 )
      {
        equipIdList = v9->fields.equipIdList;
        if ( !equipIdList )
          goto LABEL_16;
        if ( LODWORD(equipIdList->max_length) )
        {
          equipIdList->m_Items[0] = equipUserSvtId;
LABEL_16:
          memberItem = v9->fields.memberItem;
          if ( memberItem )
            PartyOrganizationListViewItem__SetEquipUserServantId(memberItem, equipUserSvtId, 0, 0);
          v9->fields.equipTargetId1 = equipUserSvtId;
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
            v17 = *p_equipUserSvtEntity;
            if ( *p_equipUserSvtEntity )
            {
              v18 = this;
              v20 = *(_QWORD *)&v17[5].fields.currentCryptoKey;
              v19 = *(_QWORD *)&v17[5].fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v61.fields.currentCryptoKey = v20;
              *(_QWORD *)&v61.fields.fakeValue = v19;
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                      v61,
                                                      0);
              if ( v18 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                           (int32_t)this,
                           (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v9->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&v9->fields.equipServantEntity,
                  (int32_t)Entity,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v28 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0);
                    v29 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v30 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                              v29[6],
                                                              0);
                      if ( v28 )
                      {
                        v31 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v28, v30, (int32_t)this, 0);
                        v9->fields.equipSvtLimitEntity = v31;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)&v9->fields.equipSvtLimitEntity,
                          (int32_t)v31,
                          v32,
                          v33,
                          v34,
                          v35,
                          v36,
                          v37);
                        this = (ServantStatusListViewItem_o *)v9->fields.equipUserSvtEntity;
                        if ( this )
                        {
                          UserServantEntity__getEquipSkillInfo(
                            (UserServantEntity_o *)this,
                            &v9->fields.equipSkillInfoList,
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
          sub_1C7BD40(this, v10);
        }
LABEL_39:
        sub_1C7BD48(this);
      }
    }
  }
  v38 = v9->fields.equipIdList;
  if ( v38 )
  {
    if ( !LODWORD(v38->max_length) )
      goto LABEL_39;
    v38->m_Items[0] = 0;
  }
  v39 = v9->fields.memberItem;
  if ( v39 && !v39->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v39, 0, 0, 0);
  v9->fields.equipTargetId1 = 0;
  v9->fields.equipUserSvtEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->fields.equipUserSvtEntity, 0, (int32_t)method, v3, v4, v5, v6, v7);
  v9->fields.equipServantEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->fields.equipServantEntity, 0, v40, v41, v42, v43, v44, v45);
  v9->fields.equipSvtLimitEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->fields.equipSvtLimitEntity, 0, v46, v47, v48, v49, v50, v51);
  v52 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v52 = BalanceConfig_TypeInfo;
  }
  v53 = sub_1C7BB90(SkillInfo___TypeInfo, (unsigned int)v52->static_fields->SvtEquipSkillListMax);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v53;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->fields.equipSkillInfoList, v53, v54, v55, v56, v57, v58, v59);
}


void ServantStatusListViewItem__SetEquipTargetIds(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x0
  Il2CppObject *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *v11; // x20
  struct System_Int64_array *v12; // x0
  __int64 v13; // x0
  int32_t v14; // w1
  struct System_Int64_array **p_grandServantEquipIdList; // x20
  System_Collections_Generic_List_long__o *v16; // x20
  SkillInfo_array *v17; // x1
  int32_t i; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *v21; // x22
  __int64 v22; // x23
  __int64 v23; // x24
  struct System_Int64_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x8
  struct System_Object_array *v34; // x9
  _QWORD *v35; // x10
  __int64 v36; // x11
  int v37; // w24
  Il2CppClass **v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x23
  __int64 v46; // x24
  __int64 v47; // x25
  struct System_Int64_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  struct System_Int64_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  System_Collections_Generic_List_object__o *v54; // x23
  Il2CppObject *v55; // x24
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x1
  Il2CppClass **v66; // x0
  System_Collections_Generic_List_object__o *v67; // x23
  Il2CppObject *v68; // x24
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v78; // x1
  Il2CppClass **v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  GrandQuestFolderBoardItem_o *v90; // x0
  __int64 v91; // x8
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  __int64 v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  __int64 v105; // x8
  __int64 v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  __int64 v109; // x8
  struct System_Int64_array *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  struct System_Int64_array *v123; // x8
  __int64 v124; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v126; // x23
  struct System_Int64_array *v127; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v130; // x8
  _QWORD *v131; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v133; // x8
  __int64 v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x8
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  __int64 v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  __int64 v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  __int64 v150; // x8
  int32_t v151; // w2
  int32_t v152; // w3
  System_String_o *v153; // x4
  int32_t v154; // w5
  int64_t v155; // x6
  System_String_o *v156; // x7
  __int64 v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  __int64 v160; // x8
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  __int64 v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  __int64 v170; // x8
  GrandQuestFolderBoardItem_o *v171; // x0
  __int64 v172; // x8
  struct System_Int64_array *grandServantEquipIdList; // x8
  __int64 v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v178; // x22
  void *v179; // x23
  Il2CppClass *v180; // x26
  int32_t v181; // w2
  int32_t v182; // w3
  System_String_o *v183; // x4
  int32_t v184; // w5
  int64_t v185; // x6
  System_String_o *v186; // x7
  struct System_Object_array *items; // x8
  _QWORD *v188; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v190; // x1
  Il2CppClass **v191; // x0
  System_Collections_Generic_List_object__o *equipGrandServantLimitEntityList; // x21
  ServantLimitMaster_o *v193; // x22
  int32_t v194; // w23
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  struct System_Object_array *v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v204; // x1
  Il2CppClass **v205; // x0
  __int64 v206; // x8
  _QWORD *v207; // x9
  __int64 v208; // x10
  __int64 v209; // x8
  ServantStatusListViewItem_o *v210; // x0
  UserServantEntity_o *v211; // x1
  const MethodInfo *v212; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-78h] BYREF
  SkillInfo_array *v214; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // 0:x0.16

  if ( (byte_4CEB098 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C7BAE8(&long___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkillInfo____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantLimitEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB098 = 1;
  }
  v214 = 0;
  entity = 0;
  skillInfoList = 0;
  equipIdList = this->fields.equipIdList;
  if ( equipIdList && SLODWORD(equipIdList->max_length) >= 2 && this->fields.userSvtEntity )
  {
    v4 = System_Array__Clone((System_Array_o *)equipIdList, 0);
    if ( v4 )
    {
      v11 = v4;
      v12 = (struct System_Int64_array *)sub_1C7BC24(v4, long___TypeInfo);
      if ( !v12 || (this->fields.grandServantEquipIdList = v12, (v13 = sub_1C7BC24(v11, long___TypeInfo)) == 0) )
      {
        sub_1C7C0DC(v11);
        ServantStatusListViewItem__SetLimitCountInfo(v210, v211, v212);
        return;
      }
      v14 = v13;
      p_grandServantEquipIdList = &this->fields.grandServantEquipIdList;
    }
    else
    {
      v14 = 0;
      p_grandServantEquipIdList = &this->fields.grandServantEquipIdList;
      this->fields.grandServantEquipIdList = 0;
    }
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_grandServantEquipIdList, v14, v5, v6, v7, v8, v9, v10);
    v123 = *p_grandServantEquipIdList;
    if ( *p_grandServantEquipIdList )
    {
      v124 = 4;
      do
      {
        max_length_low = LODWORD(v123->max_length);
        v126 = v124 - 4;
        if ( v124 - 4 >= (int)max_length_low )
          return;
        if ( v126 >= max_length_low )
          goto LABEL_165;
        if ( *((__int64 *)&v123->obj.klass + v124) < 1 )
          goto LABEL_102;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
        v127 = *p_grandServantEquipIdList;
        if ( !*p_grandServantEquipIdList )
          break;
        if ( v126 >= LODWORD(v127->max_length) )
          goto LABEL_165;
        if ( !Master_object )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                        Master_object,
                                                                        &entity,
                                                                        *((_QWORD *)&v127->obj.klass + v124),
                                                                        (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_102;
        if ( !entity )
          break;
        klass = entity[5].klass;
        monitor = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v218.fields.currentCryptoKey = klass;
        *(_QWORD *)&v218.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v218, 0) >= 1 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v17 = (SkillInfo_array *)entity;
          v130 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v131 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v130 )
            break;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v130 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v17->obj,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
          }
          else
          {
            v133 = v130 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v133 + 32) = v17;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v133 + 32), (int32_t)v17, v117, v118, v119, v120, v121, v122);
          }
          grandServantEquipIdList = this->fields.grandServantEquipIdList;
          if ( !grandServantEquipIdList )
            break;
          if ( v126 >= LODWORD(grandServantEquipIdList->max_length) )
LABEL_165:
            sub_1C7BD48(Master_object);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v17 = (SkillInfo_array *)*((_QWORD *)&grandServantEquipIdList->obj.klass + v124);
          v174 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v175 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v174 )
            break;
          v176 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v176 >= *(_DWORD *)(v174 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              (int64_t)v17,
              *(const MethodInfo_3826E30 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v176 + 1;
            *(_QWORD *)(v174 + 8 * v176 + 32) = v17;
          }
          equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !entity )
            break;
          v178 = Master_object;
          v180 = entity[5].klass;
          v179 = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v219.fields.currentCryptoKey = v180;
          *(_QWORD *)&v219.fields.fakeValue = v179;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                          v219,
                                                                          0);
          if ( !v178 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v178,
                                                                          (int32_t)Master_object,
                                                                          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !equipGrandServantEntityList )
            break;
          items = equipGrandServantEntityList->fields._items;
          v188 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++equipGrandServantEntityList->fields._version;
          if ( !items )
            break;
          size = equipGrandServantEntityList->fields._size;
          v190 = Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
          }
          else
          {
            v191 = &items->obj.klass + size;
            equipGrandServantEntityList->fields._size = size + 1;
            v191[4] = (Il2CppClass *)v190;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v191 + 4), (int32_t)v190, v181, v182, v183, v184, v185, v186);
          }
          equipGrandServantLimitEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
          if ( !entity )
            break;
          v193 = (ServantLimitMaster_o *)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                                                          0);
          if ( !entity )
            break;
          v194 = (int)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                                                                          0);
          if ( !v193 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                          v193,
                                                                          v194,
                                                                          (int32_t)Master_object,
                                                                          0);
          if ( !equipGrandServantLimitEntityList )
            break;
          v201 = equipGrandServantLimitEntityList->fields._items;
          v202 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++equipGrandServantLimitEntityList->fields._version;
          if ( !v201 )
            break;
          v203 = equipGrandServantLimitEntityList->fields._size;
          v204 = Master_object;
          if ( (unsigned int)v203 >= LODWORD(v201->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantLimitEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
          }
          else
          {
            v205 = &v201->obj.klass + v203;
            equipGrandServantLimitEntityList->fields._size = v203 + 1;
            v205[4] = (Il2CppClass *)v204;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v205 + 4), (int32_t)v204, v195, v196, v197, v198, v199, v200);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
          if ( !entity )
            break;
          UserServantEntity__getEquipSkillInfo((UserServantEntity_o *)entity, &v214, 1, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v17 = v214;
          v206 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v207 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v206 )
            break;
          v208 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v208 >= *(_DWORD *)(v206 + 24) )
          {
            v172 = v207[4];
            goto LABEL_128;
          }
          v209 = v206 + 8 * v208;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v208 + 1;
          *(_QWORD *)(v209 + 32) = v17;
          v171 = (GrandQuestFolderBoardItem_o *)(v209 + 32);
        }
        else
        {
LABEL_102:
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v134 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v135 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v134 )
            break;
          v136 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v136 >= *(_DWORD *)(v134 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
          }
          else
          {
            v137 = v134 + 8 * v136;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v136 + 1;
            *(_QWORD *)(v137 + 32) = 0;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v137 + 32), 0, v117, v118, v119, v120, v121, v122);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v144 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v145 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v144 )
            break;
          v146 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v146 >= *(_DWORD *)(v144 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              0,
              *(const MethodInfo_3826E30 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v146 + 1;
            *(_QWORD *)(v144 + 8 * v146 + 32) = 0;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
          if ( !Master_object )
            break;
          v147 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v148 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v147 )
            break;
          v149 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v149 >= *(_DWORD *)(v147 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v150 = v147 + 8 * v149;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v149 + 1;
            *(_QWORD *)(v150 + 32) = 0;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v150 + 32), 0, v138, v139, v140, v141, v142, v143);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
          if ( !Master_object )
            break;
          v157 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v158 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v157 )
            break;
          v159 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v159 >= *(_DWORD *)(v157 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
          }
          else
          {
            v160 = v157 + 8 * v159;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v159 + 1;
            *(_QWORD *)(v160 + 32) = 0;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v160 + 32), 0, v151, v152, v153, v154, v155, v156);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v167 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v168 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v167 )
            break;
          v169 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v169 >= *(_DWORD *)(v167 + 24) )
          {
            v172 = v168[4];
            v17 = 0;
LABEL_128:
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v17->obj,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v172 + 192) + 112LL));
            goto LABEL_129;
          }
          v170 = v167 + 8 * v169;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v169 + 1;
          *(_QWORD *)(v170 + 32) = 0;
          v171 = (GrandQuestFolderBoardItem_o *)(v170 + 32);
          LODWORD(v17) = 0;
        }
        sub_1C7BA8C(v171, (int32_t)v17, v161, v162, v163, v164, v165, v166);
LABEL_129:
        v123 = *p_grandServantEquipIdList;
        ++v124;
      }
      while ( *p_grandServantEquipIdList );
    }
LABEL_164:
    sub_1C7BD40(Master_object, v17);
  }
  if ( !this->fields.servantLeaderInfo )
    return;
  v16 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
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
      v21 = EquipTargetInfoByEquipIdx;
      v23 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v216.fields.currentCryptoKey = v23;
      *(_QWORD *)&v216.fields.fakeValue = v22;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                      v216,
                                                                      0);
      if ( !v16 )
        goto LABEL_164;
      v24 = v16->fields._items;
      v25 = Method_System_Collections_Generic_List_long__Add__;
      ++v16->fields._version;
      if ( !v24 )
        goto LABEL_164;
      v26 = v16->fields._size;
      if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v16,
          (int)Master_object,
          *(const MethodInfo_3826E30 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v16->fields._size = v26 + 1;
        v24->m_Items[v26] = (int)Master_object;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                      v21->fields.svtId,
                                                                      0);
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
      if ( !equipUserGrandServantEntityList )
        goto LABEL_164;
      v34 = equipUserGrandServantEntityList->fields._items;
      v35 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++equipUserGrandServantEntityList->fields._version;
      if ( !v34 )
        goto LABEL_164;
      v36 = equipUserGrandServantEntityList->fields._size;
      v37 = (int)Master_object;
      if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          equipUserGrandServantEntityList,
          0,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &v34->obj.klass + v36;
        equipUserGrandServantEntityList->fields._size = v36 + 1;
        v38[4] = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v38 + 4), 0, v27, v28, v29, v30, v31, v32);
      }
      grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
      if ( v37 < 1 )
      {
        if ( !grandServantEquipTargetIdList )
          goto LABEL_164;
        v51 = grandServantEquipTargetIdList->fields._items;
        v52 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v51 )
          goto LABEL_164;
        v53 = grandServantEquipTargetIdList->fields._size;
        if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            0,
            *(const MethodInfo_3826E30 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v53 + 1;
          v51->m_Items[v53] = 0;
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
        if ( !Master_object )
          goto LABEL_164;
        v92 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v93 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v92 )
          goto LABEL_164;
        v94 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
        }
        else
        {
          v95 = v92 + 8 * v94;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v94 + 1;
          *(_QWORD *)(v95 + 32) = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v95 + 32), 0, v39, v40, v41, v42, v43, v44);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
        if ( !Master_object )
          goto LABEL_164;
        v102 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v103 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v102 )
          goto LABEL_164;
        v104 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v104 >= *(_DWORD *)(v102 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
        }
        else
        {
          v105 = v102 + 8 * v104;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v104 + 1;
          *(_QWORD *)(v105 + 32) = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v105 + 32), 0, v96, v97, v98, v99, v100, v101);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_164;
        v106 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v107 = Method_System_Collections_Generic_List_SkillInfo____Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v106 )
          goto LABEL_164;
        v108 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v108 < *(_DWORD *)(v106 + 24) )
        {
          v109 = v106 + 8 * v108;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v108 + 1;
          *(_QWORD *)(v109 + 32) = 0;
          v90 = (GrandQuestFolderBoardItem_o *)(v109 + 32);
          LODWORD(v17) = 0;
          goto LABEL_75;
        }
        v91 = v107[4];
        v17 = 0;
      }
      else
      {
        v47 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
        v46 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v217.fields.currentCryptoKey = v47;
        *(_QWORD *)&v217.fields.fakeValue = v46;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                        v217,
                                                                        0);
        if ( !grandServantEquipTargetIdList )
          goto LABEL_164;
        v48 = grandServantEquipTargetIdList->fields._items;
        v49 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v48 )
          goto LABEL_164;
        v50 = grandServantEquipTargetIdList->fields._size;
        if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            (int)Master_object,
            *(const MethodInfo_3826E30 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v50 + 1;
          v48->m_Items[v50] = (int)Master_object;
        }
        v54 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v55 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                        v21->fields.svtId,
                                                                        0);
        if ( !v55 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v55,
                                                                        (int32_t)Master_object,
                                                                        (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v54 )
          goto LABEL_164;
        v62 = v54->fields._items;
        v63 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v54->fields._version;
        if ( !v62 )
          goto LABEL_164;
        v64 = v54->fields._size;
        v65 = Master_object;
        if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v54,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = &v62->obj.klass + v64;
          v54->fields._size = v64 + 1;
          v66[4] = (Il2CppClass *)v65;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v66 + 4), (int32_t)v65, v56, v57, v58, v59, v60, v61);
        }
        v67 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
        v68 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                        v21->fields.svtId,
                                                                        0);
        if ( !v68 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                        (ServantLimitMaster_o *)v68,
                                                                        (int32_t)Master_object,
                                                                        v21->fields.limitCount,
                                                                        0);
        if ( !v67 )
          goto LABEL_164;
        v75 = v67->fields._items;
        v76 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++v67->fields._version;
        if ( !v75 )
          goto LABEL_164;
        v77 = v67->fields._size;
        v78 = Master_object;
        if ( (unsigned int)v77 >= LODWORD(v75->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v67,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = &v75->obj.klass + v77;
          v67->fields._size = v77 + 1;
          v79[4] = (Il2CppClass *)v78;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v79 + 4), (int32_t)v78, v69, v70, v71, v72, v73, v74);
        }
        EquipTargetInfo__getSkillInfo(v21, &skillInfoList, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_164;
        v17 = skillInfoList;
        v86 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v87 = Method_System_Collections_Generic_List_SkillInfo____Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v86 )
          goto LABEL_164;
        v88 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v88 < *(_DWORD *)(v86 + 24) )
        {
          v89 = v86 + 8 * v88;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v88 + 1;
          *(_QWORD *)(v89 + 32) = v17;
          v90 = (GrandQuestFolderBoardItem_o *)(v89 + 32);
LABEL_75:
          sub_1C7BA8C(v90, (int32_t)v17, v80, v81, v82, v83, v84, v85);
          continue;
        }
        v91 = v87[4];
      }
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Master_object,
        &v17->obj,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v91 + 192) + 112LL));
    }
  }
  if ( !v16 )
    goto LABEL_164;
  v110 = System_Collections_Generic_List_long___ToArray(
           v16,
           (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.grandServantEquipIdList = v110;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipIdList,
    (int32_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
}


void ServantStatusListViewItem__SetGrandInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UserServantGrandInfo_c *v9; // x0
  struct UserServantGrandInfo_o *Empty; // x1
  UserServantEntity_o *userSvtEntity; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  if ( (byte_4CEB0C6 & 1) == 0 )
  {
    sub_1C7BAE8(&UserServantGrandInfo_TypeInfo);
    byte_4CEB0C6 = 1;
  }
  if ( this->fields._IsForceNotGrand_k__BackingField )
  {
LABEL_4:
    v9 = UserServantGrandInfo_TypeInfo;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      v9 = UserServantGrandInfo_TypeInfo;
    }
    Empty = v9->static_fields->Empty;
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandInfo_k__BackingField,
    (int32_t)Empty,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w21
  int32_t v19; // w0
  struct System_Int32_array *SelectList; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w22
  int32_t v28; // w0
  struct System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w22
  int32_t v44; // w0
  struct System_Int32_array *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w0
  __int64 v53; // x8
  int32_t v54; // w20
  int32_t v55; // w0
  struct System_Int32_array *v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4CEB095 & 1) == 0 )
  {
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB095 = 1;
  }
  if ( entity )
  {
    this->fields.cardLimitCount = UserServantEntity__getCardImageLimitCount(entity, 0, 0);
    this->fields.maxCardLimitCount = UserServantEntity__getMaxCardImageLimitCount(entity, 0);
    v6 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v63.fields.currentCryptoKey = v6;
    *(_QWORD *)&v63.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v63, 0);
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(entity->fields.limitCount, 0);
    costumeAndOtherIds = this->fields.costumeAndOtherIds;
    v10 = v8;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    CardSelectList = ImageLimitCount__GetCardSelectList(v7, v10, costumeAndOtherIds, 0);
    this->fields.cardSelectList = CardSelectList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.cardSelectList,
      (int32_t)CardSelectList,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.dispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0);
    this->fields.maxDispLimitCount = UserServantEntity__getMaxDispLimitCount(entity, 0);
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(entity->fields.svtId, 0);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(entity->fields.limitCount, 0);
    SelectList = ImageLimitCount__GetSelectList(v18, v19, this->fields.costumeIds, 0);
    this->fields.dispSelectList = SelectList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.dispSelectList,
      (int32_t)SelectList,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    this->fields.commandCardLimitCount = UserServantEntity__getCommandCardLimitCount(entity, 0, 0);
    this->fields.maxCommandCardLimitCount = UserServantEntity__getMaxCommandCardLimitCount(entity, 0);
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(entity->fields.svtId, 0);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(entity->fields.limitCount, 0);
    v29 = ImageLimitCount__GetSelectList(v27, v28, this->fields.costumeIds, 0);
    this->fields.commandCardSelectList = v29;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCardSelectList,
      (int32_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    CommandCardParam = UserServantEntity__GetCommandCardParam(entity, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this->fields.iconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0);
    this->fields.maxIconLimitCount = UserServantEntity__getMaxIconLimitCount(entity, 0);
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(entity->fields.svtId, 0);
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(entity->fields.limitCount, 0);
    v45 = ImageLimitCount__GetCardSelectList(v43, v44, this->fields.costumeIds, 0);
    this->fields.iconSelectList = v45;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.iconSelectList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
    this->fields.portraitLimitCount = UserServantEntity__getPortraitLimitCount(entity, 0, 0);
    this->fields.maxPortraitLimitCount = UserServantEntity__getMaxPortraitLimitCount(entity, 0);
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(entity->fields.svtId, 0);
    v53 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v64.fields.fakeValue = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
    v54 = v52;
    *(_QWORD *)&v64.fields.currentCryptoKey = v53;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v64, 0);
    v56 = ImageLimitCount__GetSelectList(v54, v55, this->fields.costumeIds, 0);
    this->fields.portraitSelectList = v56;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.portraitSelectList,
      (int32_t)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
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
  UserServantEntity_c *v8; // x0

  v4 = this;
  if ( (byte_4CEB0B4 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C7BAE8(&UserServantEntity_TypeInfo);
    byte_4CEB0B4 = 1;
  }
  if ( index == -1 )
  {
    v8 = UserServantEntity_TypeInfo;
    if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v8 = UserServantEntity_TypeInfo;
    }
    LIMIT_SUPPORT_NOT_ASSIGN = v8->static_fields->LIMIT_SUPPORT_NOT_ASSIGN;
    goto LABEL_12;
  }
  supportRandomLimitCountList = v4->fields.supportRandomLimitCountList;
  if ( supportRandomLimitCountList )
  {
    max_length = supportRandomLimitCountList->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C7BD48(this);
      LIMIT_SUPPORT_NOT_ASSIGN = supportRandomLimitCountList->m_Items[index];
LABEL_12:
      v4->fields.supportRandomLimitCount = LIMIT_SUPPORT_NOT_ASSIGN;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ServantTransformEntity_o *v14; // x8
  struct System_String_o *befTitle; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_String_o *aftTitle; // x1
  Il2CppObject *v23; // x0
  struct ServantEntity_o **p_TransformedServant_k__BackingField; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *v31; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v33; // x22
  const MethodInfo *v34; // x1
  ServantLimitEntity_o *v35; // x20
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t lv; // w2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x9
  struct EquipTargetInfo_o *equipTargetInfo; // x9
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  _DWORD *v46; // x21
  int32_t atkMax; // w24
  int32_t atkBase; // w25
  int v49; // w23
  CheckCombineResStatus_c *v50; // x0
  struct UserServantEntity_o *v51; // x9
  int32_t LOT_RATE; // w8
  int32_t v53; // w23
  int32_t *p_adjustAtk; // x10
  struct ServantLeaderInfo_o *v55; // x10
  int32_t v56; // w24
  BalanceConfig_c *v57; // x0
  struct BalanceConfig_StaticFields *static_fields; // x10
  int v59; // w8
  struct ServantLeaderInfo_o *p_adjustHp; // x9
  int32_t StatusUpAdjustHp; // w10
  System_String_o *CondLabelColor; // x20
  System_String_o *CondSpriteColor; // x20
  bool v64; // w0
  const MethodInfo *v65; // x1
  UserServantEntity_o *v66; // x8
  unsigned __int8 v67; // w23
  UserServantEntity_o *v68; // x22
  int32_t v69; // w21
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  bool v71; // w8
  ServantLeaderInfo_o *v72; // x0
  ServantLeaderInfo_o *v73; // x8
  int32_t v74; // w20
  int32_t LimitCount; // w0
  int32_t dispLimitCount; // w21
  int32_t transformedHp; // w22
  struct UserServantEntity_o *v78; // x8
  int32_t transformedAtk; // w23
  int32_t v80; // w24
  int32_t collectionLv; // w26
  int32_t adjustHp; // w25
  int32_t adjustAtk; // w28
  struct ServantLeaderInfo_o *v84; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  struct EquipTargetInfo_o *v86; // x8
  UserServantGrandInfo_o *GrandInfo_k__BackingField; // x29
  __int64 v88; // x27
  const MethodInfo *v89; // x2
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEB0C1 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&CheckCombineResStatus_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&ServantOverwriteStatus_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CEB0C1 = 1;
  }
  entity = 0;
  ServantStatusListViewItem__ResetTransformData(this, method);
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = (void *)ServantStatusListViewItem__get_SvtId(this, v5);
    if ( !Master_object )
      goto LABEL_82;
    if ( !ServantTransformMaster__TryGetEntity(
            (ServantTransformMaster_o *)Master_object,
            &entity,
            (int32_t)SvtId,
            this->fields.dispLimitCount + 1,
            0) )
      return;
    SvtId = entity;
    if ( !entity )
      goto LABEL_82;
    SvtId = (void *)ServantTransformEntity__IsUnlockTransformed(
                      entity,
                      this->fields._BeforeClearQuestId_k__BackingField,
                      0);
    if ( ((unsigned __int8)SvtId & 1) == 0 )
      return;
    v14 = entity;
    if ( !entity )
      goto LABEL_82;
    this->fields._TransformedSvtId_k__BackingField = entity->fields.aftSvtId;
    this->fields._TransformedServantDispLimitCount_k__BackingField = v14->fields.aftDispLimitCount - 1;
    befTitle = v14->fields.befTitle;
    this->fields.transformNameBefore = befTitle;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.transformNameBefore,
      (int32_t)befTitle,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( !entity )
      goto LABEL_82;
    aftTitle = entity->fields.aftTitle;
    this->fields.transformNameAfter = aftTitle;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.transformNameAfter,
      (int32_t)aftTitle,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    this->fields._IsTransformServant_k__BackingField = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SvtId )
      goto LABEL_82;
    v23 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)SvtId,
            this->fields._TransformedSvtId_k__BackingField,
            (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_TransformedServant_k__BackingField = &this->fields._TransformedServant_k__BackingField;
    this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v23;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._TransformedServant_k__BackingField,
      (int32_t)v23,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v31 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
    v33 = (ServantLimitMaster_o *)v31;
    SvtId = (void *)ServantStatusListViewItem__get_LimitCount(this, v34);
    if ( !v33 )
      goto LABEL_82;
    v35 = ServantLimitMaster__GetEntity(v33, TransformedSvtId_k__BackingField, (int32_t)SvtId, 0);
    SvtId = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantExpMaster___);
    if ( !*p_TransformedServant_k__BackingField )
      goto LABEL_82;
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
      goto LABEL_82;
    SvtId = ServantExpMaster__GetEntity(
              (ServantExpMaster_o *)SvtId,
              (*p_TransformedServant_k__BackingField)->fields.expType,
              lv,
              0);
    if ( !v35 )
      goto LABEL_82;
    v46 = SvtId;
    if ( !SvtId )
      goto LABEL_82;
    atkBase = v35->fields.atkBase;
    atkMax = v35->fields.atkMax;
    v49 = *((_DWORD *)SvtId + 7);
    v50 = CheckCombineResStatus_TypeInfo;
    if ( !CheckCombineResStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CheckCombineResStatus_TypeInfo);
      v50 = CheckCombineResStatus_TypeInfo;
    }
    v51 = this->fields.userSvtEntity;
    LOT_RATE = v50->static_fields->LOT_RATE;
    v53 = v49 * (atkMax - atkBase) / LOT_RATE + v35->fields.atkBase;
    this->fields.transformedAtk = v53;
    if ( v51 )
    {
      p_adjustAtk = &v51->fields.adjustAtk;
    }
    else
    {
      v55 = this->fields.servantLeaderInfo;
      if ( !v55 )
      {
        v56 = 0;
LABEL_37:
        v57 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v57 = BalanceConfig_TypeInfo;
          v51 = this->fields.userSvtEntity;
          LOT_RATE = CheckCombineResStatus_TypeInfo->static_fields->LOT_RATE;
        }
        static_fields = v57->static_fields;
        this->fields.transformedAtk = v53 + static_fields->StatusUpAdjustAtk * v56;
        v59 = v46[7] * (v35->fields.hpMax - v35->fields.hpBase) / LOT_RATE + v35->fields.hpBase;
        if ( v51 )
        {
          p_adjustHp = (struct ServantLeaderInfo_o *)&v51->fields.adjustHp;
        }
        else
        {
          p_adjustHp = this->fields.servantLeaderInfo;
          if ( !p_adjustHp )
          {
LABEL_44:
            StatusUpAdjustHp = static_fields->StatusUpAdjustHp;
            this->fields.transformedServantLimitEntity = v35;
            this->fields.transformedHp = v59 + StatusUpAdjustHp * (_DWORD)p_adjustHp;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields.transformedServantLimitEntity,
              (int32_t)v35,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
            SvtId = entity;
            if ( !entity )
              goto LABEL_82;
            CondLabelColor = ServantTransformEntity__GetCondLabelColor(entity, 0);
            DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
            this->fields._TransformNameLabelColor_k__BackingField = ColorHelper__ParseColorCode_44672296(
                                                                      CondLabelColor,
                                                                      DefaultCondTitleLabelColor,
                                                                      0);
            SvtId = entity;
            if ( !entity )
              goto LABEL_82;
            CondSpriteColor = ServantTransformEntity__GetCondSpriteColor(entity, 0);
            DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
            this->fields._TransformNameSpriteColor_k__BackingField = ColorHelper__ParseColorCode_44672296(
                                                                       CondSpriteColor,
                                                                       DefaultCondTitleSpriteColor,
                                                                       0);
            SvtId = entity;
            if ( !entity )
              goto LABEL_82;
            this->fields._TransformIsNotSkillChange_k__BackingField = ServantTransformEntity__IsNotSkillChange(
                                                                        entity,
                                                                        0);
            SvtId = entity;
            if ( !entity )
              goto LABEL_82;
            v64 = ServantTransformEntity__IsNotClassSkillChange(entity, 0);
            v66 = this->fields.userSvtEntity;
            this->fields._TransformIsNotClassSkillChange_k__BackingField = v64;
            if ( v66 )
            {
              SvtId = (void *)UserServantEntity__IsGrandServant(v66, 0);
              if ( !this->fields.userSvtEntity )
                goto LABEL_82;
              v67 = (unsigned __int8)SvtId;
              UserServantEntity__GetTransformedSkillInfo(
                this->fields.userSvtEntity,
                &this->fields.transformedSkillInfoList,
                this->fields._TransformedSvtId_k__BackingField,
                this->fields._BeforeClearQuestId_k__BackingField,
                this->fields._TransformedServantDispLimitCount_k__BackingField,
                1,
                0,
                -1,
                0);
              v68 = this->fields.userSvtEntity;
              v69 = this->fields._TransformedSvtId_k__BackingField;
              TransformedServantDispLimitCount_k__BackingField = this->fields._TransformedServantDispLimitCount_k__BackingField;
              SvtId = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !SvtId )
                goto LABEL_82;
              v71 = this->fields._IsTempGrandServant_k__BackingField
                 || v67 & !this->fields._IsForceNotGrand_k__BackingField;
              if ( !v68 )
                goto LABEL_82;
              UserServantEntity__GetTransformedPassiveSkillInfo(
                v68,
                &this->fields.transformedPassiveSkillIdList,
                &this->fields.transformedPassiveSkillTitleMessageList,
                &this->fields.transformedPassiveSkillExplanationMessageList,
                v69,
                TransformedServantDispLimitCount_k__BackingField,
                *((_QWORD *)SvtId + 17),
                0,
                v71,
                0);
              SvtId = this->fields.userSvtEntity;
              if ( !SvtId )
                goto LABEL_82;
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
              v72 = this->fields.servantLeaderInfo;
              if ( v72 )
              {
                ServantLeaderInfo__GetTransformedSkillInfo(
                  v72,
                  &this->fields.transformedSkillInfoList,
                  this->fields._TransformedSvtId_k__BackingField,
                  0);
                SvtId = this->fields.servantLeaderInfo;
                if ( !SvtId )
                  goto LABEL_82;
                ServantLeaderInfo__GetTransformedPassiveSkillInfo(
                  (ServantLeaderInfo_o *)SvtId,
                  &this->fields.transformedPassiveSkillIdList,
                  &this->fields.transformedPassiveSkillTitleMessageList,
                  &this->fields.transformedPassiveSkillExplanationMessageList,
                  this->fields._TransformedSvtId_k__BackingField,
                  0);
                SvtId = this->fields.servantLeaderInfo;
                if ( !SvtId )
                  goto LABEL_82;
                ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
                  (ServantLeaderInfo_o *)SvtId,
                  &this->fields.transformedTdInfo,
                  this->fields._TransformedSvtId_k__BackingField,
                  0);
                SvtId = this->fields.servantLeaderInfo;
                if ( !SvtId )
                  goto LABEL_82;
                SvtId = (void *)ServantLeaderInfo__get_TransformedAtk((ServantLeaderInfo_o *)SvtId, 0);
                v73 = this->fields.servantLeaderInfo;
                this->fields.transformedAtk = (int)SvtId;
                if ( !v73 )
                  goto LABEL_82;
                this->fields.transformedHp = ServantLeaderInfo__get_TransformedHp(v73, 0);
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
                    goto LABEL_82;
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
                    goto LABEL_82;
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
            v74 = this->fields._TransformedSvtId_k__BackingField;
            LimitCount = ServantStatusListViewItem__get_LimitCount(this, v65);
            dispLimitCount = this->fields.dispLimitCount;
            transformedHp = this->fields.transformedHp;
            v78 = this->fields.userSvtEntity;
            transformedAtk = this->fields.transformedAtk;
            v80 = LimitCount;
            if ( v78 )
            {
              collectionLv = v78->fields.lv;
              adjustHp = v78->fields.adjustHp;
              adjustAtk = v78->fields.adjustAtk;
              goto LABEL_78;
            }
            v84 = this->fields.servantLeaderInfo;
            if ( v84 )
            {
              collectionLv = v84->fields.lv;
              adjustHp = v84->fields.adjustHp;
              adjustAtk = v84->fields.adjustAtk;
              goto LABEL_78;
            }
            v86 = this->fields.equipTargetInfo;
            if ( v86 )
            {
              collectionLv = v86->fields.lv;
            }
            else
            {
              if ( !this->fields.isCollection )
              {
                adjustHp = 0;
                collectionLv = 0;
                goto LABEL_77;
              }
              collectionLv = this->fields.collectionLv;
            }
            adjustHp = 0;
LABEL_77:
            adjustAtk = 0;
LABEL_78:
            GrandInfo_k__BackingField = this->fields._GrandInfo_k__BackingField;
            v88 = sub_1C7BD34(ServantOverwriteStatus_TypeInfo);
            ServantOverwriteStatus___ctor_35656640(
              (ServantOverwriteStatus_o *)v88,
              v74,
              v80,
              dispLimitCount,
              transformedHp,
              transformedAtk,
              collectionLv,
              adjustHp,
              adjustAtk,
              GrandInfo_k__BackingField,
              0);
            if ( v88 )
            {
              *(int32x2_t *)&this->fields.transformedAtk = vrev64_s32(*(int32x2_t *)(v88 + 16));
              ServantStatusListViewItem__AddDuplicationInfo(this, 1, v89);
              return;
            }
LABEL_82:
            sub_1C7BD40(SvtId, v7);
          }
          p_adjustHp = (struct ServantLeaderInfo_o *)((char *)p_adjustHp + 84);
        }
        LODWORD(p_adjustHp) = p_adjustHp->klass;
        goto LABEL_44;
      }
      p_adjustAtk = &v55->fields.adjustAtk;
    }
    v56 = *p_adjustAtk;
    goto LABEL_37;
  }
}


void ServantStatusListViewItem__SetupLimitCountStage(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v8; // x19
  int32_t lv; // w21
  __int64 v10; // x24
  __int64 v11; // x25
  System_Int32_array *LimitCountStageList_43682576; // x0
  int32_t v13; // w24
  System_Int32_array *v14; // x21
  int32_t v15; // w0
  ServantStatusListViewItem_o *v16; // x22
  int32_t PortraitLimitCountStage; // w23
  ServantStatusListViewItem_o *v18; // x24
  int32_t CardImageLimitCountStage; // w25
  ServantStatusListViewItem_LimitCountStageData_o *v20; // x26
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t DispLimitCountStage; // w24
  ServantStatusListViewItem_LimitCountStageData_o *v28; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t CommandCardLimitCountStage; // w24
  ServantStatusListViewItem_LimitCountStageData_o *v36; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t IconLimitCountStage; // w24
  ServantStatusListViewItem_LimitCountStageData_o *v44; // x25
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  ServantStatusListViewItem___c_c *v51; // x0
  System_Func_int__bool__o *_9__494_0; // x23
  Il2CppObject *v53; // x24
  struct ServantStatusListViewItem___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x23
  BalanceConfig_c *v62; // x0
  System_Int32_array *v63; // x23
  int32_t v64; // w24
  int32_t v65; // w25
  ServantStatusListViewItem_LimitCountStageData_o *v66; // x26
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  int32_t v73; // w24
  ServantStatusListViewItem_LimitCountStageData_o *v74; // x25
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int32_t v81; // w24
  ServantStatusListViewItem_LimitCountStageData_o *v82; // x25
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  int32_t v89; // w24
  ServantStatusListViewItem_LimitCountStageData_o *v90; // x25
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  int32_t v97; // w24
  ServantStatusListViewItem_LimitCountStageData_o *v98; // x25
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  int32_t SupportLimitCount; // w22
  int32_t v106; // w23
  ServantStatusListViewItem_LimitCountStageData_o *v107; // x20
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  v8 = this;
  if ( (byte_4CEB0C7 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Append_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_ServantStatusListViewItem___c__SetupLimitCountStage_b__494_0__);
    this = (ServantStatusListViewItem_o *)sub_1C7BAE8(&ServantStatusListViewItem___c_TypeInfo);
    byte_4CEB0C7 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_24;
  lv = userServantEntity->fields.lv;
  v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v11;
  *(_QWORD *)&v114.fields.fakeValue = v10;
  this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v114, 0);
  if ( !userServantCollectionEntity )
    goto LABEL_24;
  LimitCountStageList_43682576 = UserServantCollectionEntity__GetLimitCountStageList_43682576(
                                   userServantCollectionEntity,
                                   lv,
                                   (int32_t)this,
                                   1,
                                   0);
  v13 = userServantEntity->fields.lv;
  v14 = LimitCountStageList_43682576;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userServantEntity->fields.limitCount, 0);
  this = (ServantStatusListViewItem_o *)UserServantCollectionEntity__GetLimitCountStageList_43682576(
                                          userServantCollectionEntity,
                                          v13,
                                          v15,
                                          0,
                                          0);
  v16 = this;
  if ( v8->fields.isConvertOverwriteImage )
  {
    if ( questRestrictionInfo )
    {
      PortraitLimitCountStage = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43972224(
                                  questRestrictionInfo,
                                  userServantEntity,
                                  0);
      this = (ServantStatusListViewItem_o *)sub_1C7BB90(int___TypeInfo, 1);
      if ( this )
      {
        v18 = this;
        if ( !LODWORD(this->fields.partyItem) )
          sub_1C7BD48(this);
        LODWORD(this->fields.memberItem) = PortraitLimitCountStage;
        CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(userServantEntity, 1, 0, 0);
        v20 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
        ServantStatusListViewItem_LimitCountStageData___ctor_37888964(
          v20,
          (System_Int32_array *)v18,
          PortraitLimitCountStage,
          CardImageLimitCountStage,
          0);
        v8->fields.cardImageLimitCountStageData = v20;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v8->fields.cardImageLimitCountStageData,
          (int32_t)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(userServantEntity, 1, 0);
        v28 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
        ServantStatusListViewItem_LimitCountStageData___ctor_37888964(
          v28,
          (System_Int32_array *)v16,
          PortraitLimitCountStage,
          DispLimitCountStage,
          0);
        v8->fields.dispLimitCountStageData = v28;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v8->fields.dispLimitCountStageData,
          (int32_t)v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        CommandCardLimitCountStage = UserServantEntity__GetCommandCardLimitCountStage(userServantEntity, 1, 0);
        v36 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
        ServantStatusListViewItem_LimitCountStageData___ctor_37888964(
          v36,
          (System_Int32_array *)v16,
          PortraitLimitCountStage,
          CommandCardLimitCountStage,
          0);
        v8->fields.commandCardLimitCountStageData = v36;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v8->fields.commandCardLimitCountStageData,
          (int32_t)v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        IconLimitCountStage = UserServantEntity__GetIconLimitCountStage(userServantEntity, 1, 0);
        v44 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
        ServantStatusListViewItem_LimitCountStageData___ctor_37888964(
          v44,
          v14,
          PortraitLimitCountStage,
          IconLimitCountStage,
          0);
        v8->fields.iconLimitCountStageData = v44;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v8->fields.iconLimitCountStageData,
          (int32_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        goto LABEL_23;
      }
    }
LABEL_24:
    sub_1C7BD40(this, userServantEntity);
  }
  v51 = ServantStatusListViewItem___c_TypeInfo;
  if ( !ServantStatusListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItem___c_TypeInfo);
    v51 = ServantStatusListViewItem___c_TypeInfo;
  }
  _9__494_0 = v51->static_fields->__9__494_0;
  if ( !_9__494_0 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = ServantStatusListViewItem___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v51->static_fields->__9;
    _9__494_0 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__494_0,
      v53,
      Method_ServantStatusListViewItem___c__SetupLimitCountStage_b__494_0__,
      0);
    static_fields = ServantStatusListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__494_0 = _9__494_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__494_0,
      (int32_t)_9__494_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  appended = System_Linq_Enumerable__Where_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v14,
               (System_Func_TSource__bool__o *)_9__494_0,
               (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  if ( ConstantMaster__IsOtherImage(0) )
  {
    v62 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v62 = BalanceConfig_TypeInfo;
    }
    appended = System_Linq_Enumerable__Append_int_(
                 appended,
                 v62->static_fields->OtherImageLimitCount,
                 (const MethodInfo_317E818 *)Method_System_Linq_Enumerable_Append_int___);
  }
  v63 = System_Linq_Enumerable__ToArray_int_(
          appended,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  v64 = UserServantEntity__GetCardImageLimitCountStage(userServantEntity, 0, 0, 0);
  v65 = UserServantEntity__GetCardImageLimitCountStage(userServantEntity, 1, 0, 0);
  v66 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_37888964(v66, v63, v64, v65, 0);
  v8->fields.cardImageLimitCountStageData = v66;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields.cardImageLimitCountStageData,
    (int32_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  LODWORD(v63) = UserServantEntity__GetDispLimitCountStage(userServantEntity, 0, 0);
  v73 = UserServantEntity__GetDispLimitCountStage(userServantEntity, 1, 0);
  v74 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_37888964(v74, (System_Int32_array *)v16, (int32_t)v63, v73, 0);
  v8->fields.dispLimitCountStageData = v74;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields.dispLimitCountStageData,
    (int32_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  LODWORD(v63) = UserServantEntity__GetCommandCardLimitCountStage(userServantEntity, 0, 0);
  v81 = UserServantEntity__GetCommandCardLimitCountStage(userServantEntity, 1, 0);
  v82 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_37888964(v82, (System_Int32_array *)v16, (int32_t)v63, v81, 0);
  v8->fields.commandCardLimitCountStageData = v82;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields.commandCardLimitCountStageData,
    (int32_t)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  LODWORD(v63) = UserServantEntity__GetIconLimitCountStage(userServantEntity, 0, 0);
  v89 = UserServantEntity__GetIconLimitCountStage(userServantEntity, 1, 0);
  v90 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_37888964(v90, v14, (int32_t)v63, v89, 0);
  v8->fields.iconLimitCountStageData = v90;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields.iconLimitCountStageData,
    (int32_t)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  PortraitLimitCountStage = UserServantEntity__GetPortraitLimitCountStage(userServantEntity, 0, 0);
LABEL_23:
  v97 = UserServantEntity__GetPortraitLimitCountStage(userServantEntity, 1, 0);
  v98 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_37888964(
    v98,
    (System_Int32_array *)v16,
    PortraitLimitCountStage,
    v97,
    0);
  v8->fields.portraitLimitCountStageData = v98;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields.portraitLimitCountStageData,
    (int32_t)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  SupportLimitCount = UserServantEntity__GetSupportLimitCount(userServantEntity, 0);
  v106 = UserServantEntity__GetSupportLimitCount(userServantEntity, 0);
  v107 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_37888964(v107, v14, SupportLimitCount, v106, 0);
  v8->fields.supportLimitCountStageData = v107;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v8->fields.supportLimitCountStageData,
    (int32_t)v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
}


void ServantStatusListViewItem__SetupLimitCountStage_36653336(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x19
  int32_t CardImageLimitCountStage; // w21
  ServantStatusListViewItem_o *v6; // x22
  ServantStatusListViewItem_LimitCountStageData_o *v7; // x23
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t MaxLimitCountStage; // w22
  int32_t v15; // w21
  ServantStatusListViewItem_o *DispLimitCountStage; // x0
  const MethodInfo *v17; // x4
  ServantStatusListViewItem_LimitCountStageData_o *LimitCountStageDataForOtherServant; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  ServantStatusListViewItem_o *CommandCardLimitCountStage; // x0
  const MethodInfo *v26; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  ServantStatusListViewItem_o *IconLimitCountStage; // x0
  const MethodInfo *v35; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  ServantStatusListViewItem_o *PortraitLimitCountStage; // x0
  const MethodInfo *v44; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7

  v4 = this;
  if ( (byte_4CEB0C8 & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_1C7BAE8(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    byte_4CEB0C8 = 1;
  }
  if ( !servantLeaderInfo
    || (CardImageLimitCountStage = ServantLeaderInfo__GetCardImageLimitCountStage(servantLeaderInfo, 0),
        (this = (ServantStatusListViewItem_o *)sub_1C7BB90(int___TypeInfo, 1)) == 0) )
  {
    sub_1C7BD40(this, servantLeaderInfo);
  }
  v6 = this;
  if ( !LODWORD(this->fields.partyItem) )
    sub_1C7BD48(this);
  LODWORD(this->fields.memberItem) = CardImageLimitCountStage;
  v7 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v7, (System_Int32_array *)v6, CardImageLimitCountStage, 0);
  v4->fields.cardImageLimitCountStageData = v7;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.cardImageLimitCountStageData,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  MaxLimitCountStage = ServantLeaderInfo__GetMaxLimitCountStage(servantLeaderInfo, 1, 0);
  v15 = ServantLeaderInfo__GetMaxLimitCountStage(servantLeaderInfo, 0, 0);
  DispLimitCountStage = (ServantStatusListViewItem_o *)ServantLeaderInfo__GetDispLimitCountStage(servantLeaderInfo, 0);
  LimitCountStageDataForOtherServant = ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
                                         DispLimitCountStage,
                                         (int32_t)DispLimitCountStage,
                                         v15,
                                         0,
                                         v17);
  v4->fields.dispLimitCountStageData = LimitCountStageDataForOtherServant;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.dispLimitCountStageData,
    (int32_t)LimitCountStageDataForOtherServant,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  CommandCardLimitCountStage = (ServantStatusListViewItem_o *)ServantLeaderInfo__GetCommandCardLimitCountStage(
                                                                servantLeaderInfo,
                                                                0);
  v27 = ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
          CommandCardLimitCountStage,
          (int32_t)CommandCardLimitCountStage,
          v15,
          0,
          v26);
  v4->fields.commandCardLimitCountStageData = v27;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.commandCardLimitCountStageData,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  IconLimitCountStage = (ServantStatusListViewItem_o *)ServantLeaderInfo__GetIconLimitCountStage(servantLeaderInfo, 0);
  v36 = ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
          IconLimitCountStage,
          (int32_t)IconLimitCountStage,
          MaxLimitCountStage,
          1,
          v35);
  v4->fields.iconLimitCountStageData = v36;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.iconLimitCountStageData,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  PortraitLimitCountStage = (ServantStatusListViewItem_o *)ServantLeaderInfo__GetPortraitLimitCountStage(
                                                             servantLeaderInfo,
                                                             0);
  v45 = ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
          PortraitLimitCountStage,
          (int32_t)PortraitLimitCountStage,
          v15,
          0,
          v44);
  v4->fields.portraitLimitCountStageData = v45;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.portraitLimitCountStageData,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
}


void ServantStatusListViewItem__SetupLimitCountStage_36654008(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x19
  int32_t LimitCountStage; // w21
  int32_t v6; // w20
  System_Collections_Generic_IEnumerable_TSource__o *LimitCountStageList; // x23
  System_Int32_array *v8; // x0
  ServantStatusListViewItem___c_c *v9; // x8
  System_Int32_array *v10; // x22
  System_Func_int__bool__o *_9__497_0; // x24
  Il2CppObject *v12; // x25
  struct ServantStatusListViewItem___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x24
  BalanceConfig_c *v21; // x0
  int32_t OtherImageLimitCount; // w25
  System_Int32_array *v23; // x24
  ServantStatusListViewItem_LimitCountStageData_o *v24; // x26
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v31; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v38; // x24
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  v4 = this;
  if ( (byte_4CEB0CA & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Append_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C7BAE8(&System_Func_int__bool__TypeInfo);
    sub_1C7BAE8(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    sub_1C7BAE8(&Method_ServantStatusListViewItem___c__SetupLimitCountStage_b__497_0__);
    this = (ServantStatusListViewItem_o *)sub_1C7BAE8(&ServantStatusListViewItem___c_TypeInfo);
    byte_4CEB0CA = 1;
  }
  if ( !userServantCollectionEntity )
    sub_1C7BD40(this, userServantCollectionEntity);
  LimitCountStage = UserServantCollectionEntity__GetLimitCountStage(userServantCollectionEntity, 1, 0);
  v6 = UserServantCollectionEntity__GetLimitCountStage(userServantCollectionEntity, 0, 0);
  LimitCountStageList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__GetLimitCountStageList(
                                                                               userServantCollectionEntity,
                                                                               1,
                                                                               0);
  v8 = UserServantCollectionEntity__GetLimitCountStageList(userServantCollectionEntity, 0, 0);
  v9 = ServantStatusListViewItem___c_TypeInfo;
  v10 = v8;
  if ( !ServantStatusListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItem___c_TypeInfo);
    v9 = ServantStatusListViewItem___c_TypeInfo;
  }
  _9__497_0 = v9->static_fields->__9__497_0;
  if ( !_9__497_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantStatusListViewItem___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__497_0 = (System_Func_int__bool__o *)sub_1C7BD34(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__497_0,
      v12,
      Method_ServantStatusListViewItem___c__SetupLimitCountStage_b__497_0__,
      0);
    static_fields = ServantStatusListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__497_0 = _9__497_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__497_0,
      (int32_t)_9__497_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  appended = System_Linq_Enumerable__Where_int_(
               LimitCountStageList,
               (System_Func_TSource__bool__o *)_9__497_0,
               (const MethodInfo_31B5D58 *)Method_System_Linq_Enumerable_Where_int___);
  if ( ConstantMaster__IsOtherImage(0) )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    OtherImageLimitCount = v21->static_fields->OtherImageLimitCount;
    appended = System_Linq_Enumerable__Append_int_(
                 appended,
                 OtherImageLimitCount,
                 (const MethodInfo_317E818 *)Method_System_Linq_Enumerable_Append_int___);
  }
  else
  {
    OtherImageLimitCount = LimitCountStage;
  }
  v23 = System_Linq_Enumerable__ToArray_int_(
          appended,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  v24 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v24, v23, OtherImageLimitCount, 0);
  v4->fields.cardImageLimitCountStageData = v24;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.cardImageLimitCountStageData,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v31, v10, v6, 0);
  v4->fields.dispLimitCountStageData = v31;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.dispLimitCountStageData,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v38, v10, v6, 0);
  v4->fields.commandCardLimitCountStageData = v38;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.commandCardLimitCountStageData,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(
    v45,
    (System_Int32_array *)LimitCountStageList,
    LimitCountStage,
    0);
  v4->fields.iconLimitCountStageData = v45;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.iconLimitCountStageData,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1C7BD34(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v52, v10, v6, 0);
  v4->fields.portraitLimitCountStageData = v52;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.portraitLimitCountStageData,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
}


bool ServantStatusListViewItem__UpdateServantComment(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ServantCommentEntity_array *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  _DWORD *klass; // x8
  GrandQuestFolderBoardItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v18; // x20
  int max_length; // w9
  unsigned int v20; // w10
  unsigned int v21; // w21
  char v22; // w21

  if ( (byte_4CEB0BF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEB0BF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
  p_svtCommentEntityList = (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList;
  klass = svtCommentEntityList;
  v18 = Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_18:
    v22 = 0;
    goto LABEL_21;
  }
  if ( !Master_object )
LABEL_17:
    sub_1C7BD40(Master_object, v8);
  max_length = klass[6];
  if ( max_length != LODWORD(Master_object->max_length) )
  {
    v22 = 1;
    goto LABEL_21;
  }
  if ( max_length < 1 )
    goto LABEL_18;
  v20 = 0;
  while ( 1 )
  {
    if ( v20 >= klass[6] || (v21 = v20, v20 >= max_length) )
      sub_1C7BD48(Master_object);
    Master_object = *(ServantCommentEntity_array **)&klass[2 * v20 + 8];
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, ServantCommentEntity_o *, const MethodInfo *))Master_object->obj.klass->vtable[0].methodPtr)(
                                                    Master_object,
                                                    v18->m_Items[v20],
                                                    Master_object->obj.klass->vtable[0].method);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      break;
    max_length = v18->max_length;
    v20 = v21 + 1;
    if ( (int)(v21 + 1) >= max_length )
      break;
    klass = p_svtCommentEntityList->klass;
    if ( !p_svtCommentEntityList->klass )
      goto LABEL_17;
  }
  v22 = (unsigned __int8)Master_object ^ 1;
LABEL_21:
  p_svtCommentEntityList->klass = (GrandQuestFolderBoardItem_c *)v18;
  sub_1C7BA8C(p_svtCommentEntityList, (int32_t)v18, v9, v10, v11, v12, v13, v14);
  return v22 & 1;
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
    sub_1C7BD40(this, method);
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

  if ( (byte_4CEB0A9 & 1) == 0 )
  {
    sub_1C7BAE8(&UserServantGrandInfo_TypeInfo);
    byte_4CEB0A9 = 1;
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
    sub_1C7BD40(GrandInfo_k__BackingField, method);
  }
  return equipTargetInfo->fields.atk;
}


int32_t ServantStatusListViewItem__get_BeforeClearQuestId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._BeforeClearQuestId_k__BackingField;
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

  if ( (byte_4CEB09B & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB09B = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v7, 0);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43972224(questRestrictionInfo, userSvtEntity, 0);
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
  if ( (byte_4CEB0A1 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    byte_4CEB0A1 = 1;
  }
  if ( v2->fields._IsTransformed_k__BackingField )
  {
    TransformedServant_k__BackingField = v2->fields._TransformedServant_k__BackingField;
    if ( !TransformedServant_k__BackingField )
      sub_1C7BD40(this, method);
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
    result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43972224(questRestrictionInfo, userSvtEntity, 0);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43972224(questRestrictionInfo, userSvtEntity, 0);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43972224(questRestrictionInfo, userSvtEntity, 0);
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
  result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43972224(questRestrictionInfo, userSvtEntity, 0);
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
      sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
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

  if ( (byte_4CEB0AE & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB0AE = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v9, 0);
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

  if ( (byte_4CEB0A8 & 1) == 0 )
  {
    sub_1C7BAE8(&UserServantGrandInfo_TypeInfo);
    byte_4CEB0A8 = 1;
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
    sub_1C7BD40(GrandInfo_k__BackingField, method);
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
    sub_1C7BD40(0, method);
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

  if ( (byte_4CEB0A0 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB0A0 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
    sub_1C7BD40(ManualSetCommandCardLimit, method);
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

  if ( (byte_4CEB09E & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB09E = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
    sub_1C7BD40(ManualSetDispLimitCount, method);
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

  if ( (byte_4CEB0A3 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB0A3 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
    sub_1C7BD40(ManualSetIconLimitCount, method);
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

  if ( (byte_4CEB0A5 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB0A5 = 1;
  }
  if ( !this->fields.userSvtEntity )
    return 0;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
    sub_1C7BD40(ManualSetPortraitLimitCount, method);
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

  if ( (byte_4CEB0A7 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB0A7 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v7, 0) != this->fields.supportRandomLimitCount;
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

  if ( (byte_4CEB09C & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB09C = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v10, 0);
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
    sub_1C7BD40(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1C7BD40(this, method);
  return svtLimitEntity->fields.magic;
}


int32_t ServantStatusListViewItem__get_ManualSetCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v3; // x0
  struct ServantStatusListViewItem_LimitCountCache_o *currentLimitCountCache; // x8
  int32_t *p_cardLimitCount; // x8

  if ( (byte_4CEB09D & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB09D = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
      sub_1C7BD40(v3, method);
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

  if ( (byte_4CEB0A2 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB0A2 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
      sub_1C7BD40(v3, method);
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

  if ( (byte_4CEB09F & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB09F = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
      sub_1C7BD40(v3, method);
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

  if ( (byte_4CEB0A4 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB0A4 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
      sub_1C7BD40(v3, method);
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

  if ( (byte_4CEB0A6 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB0A6 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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
      sub_1C7BD40(v3, method);
    p_portraitLimitCount = &currentLimitCountCache->fields.portraitLimitCount;
  }
  else
  {
    p_portraitLimitCount = &this->fields.portraitLimitCount;
  }
  return *p_portraitLimitCount;
}


int32_t ServantStatusListViewItem__get_MaxCommandCardLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.maxCommandCardLimitCount;
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
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
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
      sub_1C7BD40(this, method);
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

  if ( (byte_4CEB09A & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEB09A = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v7, 0);
}


int32_t ServantStatusListViewItem__get_TempOverwriteTreasureDeviceLv(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
}


bool ServantStatusListViewItem__get_TransformIsNotClassSkillChange(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransformIsNotClassSkillChange_k__BackingField;
}


bool ServantStatusListViewItem__get_TransformIsNotSkillChange(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TransformIsNotSkillChange_k__BackingField;
}


UnityEngine_Color_o ServantStatusListViewItem__get_TransformNameLabelColor(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._TransformNameLabelColor_k__BackingField.fields.r;
  g = this->fields._TransformNameLabelColor_k__BackingField.fields.g;
  b = this->fields._TransformNameLabelColor_k__BackingField.fields.b;
  a = this->fields._TransformNameLabelColor_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Color_o ServantStatusListViewItem__get_TransformNameSpriteColor(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._TransformNameSpriteColor_k__BackingField.fields.r;
  g = this->fields._TransformNameSpriteColor_k__BackingField.fields.g;
  b = this->fields._TransformNameSpriteColor_k__BackingField.fields.b;
  a = this->fields._TransformNameSpriteColor_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


int32_t ServantStatusListViewItem__get_TransformedAgility(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C7BD40(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t ServantStatusListViewItem__get_TransformedDefense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C7BD40(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t ServantStatusListViewItem__get_TransformedLuck(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C7BD40(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_TransformedMagic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C7BD40(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t ServantStatusListViewItem__get_TransformedNp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C7BD40(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t ServantStatusListViewItem__get_TransformedPower(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1C7BD40(this, method);
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
  if ( (byte_4CEB0BE & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEB0BE = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v8, 0);
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
        sub_1C7BD40(this, method);
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


void ServantStatusListViewItem__set_BeforeClearQuestId(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BeforeClearQuestId_k__BackingField = value;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandInfo_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4CEB0B3 & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEB0B3 = 1;
  }
  this->fields.isEnableOwnRandomSetting = v4;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4CEA089 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEA089 = 1;
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


void ServantStatusListViewItem__set_TempOverwriteTreasureDeviceLv(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = value;
}


void ServantStatusListViewItem__set_TransformIsNotClassSkillChange(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._TransformIsNotClassSkillChange_k__BackingField = value;
}


void ServantStatusListViewItem__set_TransformIsNotSkillChange(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._TransformIsNotSkillChange_k__BackingField = value;
}


void ServantStatusListViewItem__set_TransformNameLabelColor(
        ServantStatusListViewItem_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._TransformNameLabelColor_k__BackingField = value;
}


void ServantStatusListViewItem__set_TransformNameSpriteColor(
        ServantStatusListViewItem_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._TransformNameSpriteColor_k__BackingField = value;
}


void ServantStatusListViewItem__set_TransformedServant(
        ServantStatusListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._TransformedServant_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransformedServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void ServantStatusListViewItem_LimitCountStageData___ctor(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        System_Int32_array *stageList,
        int32_t stage,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  *(_QWORD *)&this->fields._ModifyStage_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._StageList_k__BackingField = stageList;
  v6 = (ServantStatusListViewItem_LimitCountStageData_o *)((char *)v6 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v6, (int32_t)stageList, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = stage;
}


void ServantStatusListViewItem_LimitCountStageData___ctor_37888964(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        System_Int32_array *stageList,
        int32_t stage,
        int32_t originStage,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  *(_QWORD *)&this->fields._ModifyStage_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._StageList_k__BackingField = stageList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)stageList, v9, v10, v11, v12, v13, v14);
  this->fields._Stage_k__BackingField = stage;
  this->fields.originStage = originStage;
  this->fields._ModifyStage_k__BackingField = originStage;
}


bool ServantStatusListViewItem_LimitCountStageData__IsModify(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  int32_t originStage; // w8

  originStage = this->fields.originStage;
  return (originStage & 0x80000000) == 0 && this->fields._ModifyStage_k__BackingField != originStage;
}


void ServantStatusListViewItem_LimitCountStageData__RevertRandomStage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  this->fields._Stage_k__BackingField = this->fields._ModifyStage_k__BackingField;
}


bool ServantStatusListViewItem_LimitCountStageData__SelectStage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        int32_t stage,
        const MethodInfo *method)
{
  int32_t Stage_k__BackingField; // w8

  Stage_k__BackingField = this->fields._Stage_k__BackingField;
  this->fields._Stage_k__BackingField = stage;
  this->fields._ModifyStage_k__BackingField = stage;
  return Stage_k__BackingField != stage;
}


bool ServantStatusListViewItem_LimitCountStageData__SelectStageList(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *StageList_k__BackingField; // x8
  int32_t max_length; // w9
  int32_t v5; // w8
  int32_t Stage_k__BackingField; // w9

  if ( index < 0 )
    return 0;
  StageList_k__BackingField = this->fields._StageList_k__BackingField;
  if ( !StageList_k__BackingField )
    sub_1C7BD40(this, index);
  max_length = StageList_k__BackingField->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C7BD48(this);
  v5 = StageList_k__BackingField->m_Items[index];
  Stage_k__BackingField = this->fields._Stage_k__BackingField;
  this->fields._Stage_k__BackingField = v5;
  this->fields._ModifyStage_k__BackingField = v5;
  return Stage_k__BackingField != v5;
}


void ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t dispLimitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  if ( (byte_4CEBBAE & 1) == 0 )
  {
    sub_1C7BAE8(&RandomLimitCountManager_TypeInfo);
    byte_4CEBBAE = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  this->fields._Stage_k__BackingField = RandomLimitCountManager__ChoiceLimitCount(
                                          userServantEntity,
                                          dispLimitCountStage,
                                          hasRewardStage,
                                          0);
}


int32_t ServantStatusListViewItem_LimitCountStageData__get_ModifyStage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._ModifyStage_k__BackingField;
}


int32_t ServantStatusListViewItem_LimitCountStageData__get_Stage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem_LimitCountStageData__get_StageList(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        const MethodInfo *method)
{
  return this->fields._StageList_k__BackingField;
}


void ServantStatusListViewItem_LimitCountStageData__set_ModifyStage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ModifyStage_k__BackingField = value;
}


void ServantStatusListViewItem_LimitCountStageData__set_Stage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Stage_k__BackingField = value;
}


void ServantStatusListViewItem_LimitCountStageData__set_StageList(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._StageList_k__BackingField = value;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void ServantStatusListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEBBAF & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusListViewItem___c_TypeInfo);
    byte_4CEBBAF = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ServantStatusListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItem___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItem___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ServantStatusListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusListViewItem___c___ctor(ServantStatusListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusListViewItem___c___SetupLimitCountStage_b__494_0(
        ServantStatusListViewItem___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return e > 0;
}


bool ServantStatusListViewItem___c___SetupLimitCountStage_b__497_0(
        ServantStatusListViewItem___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return e > 0;
}