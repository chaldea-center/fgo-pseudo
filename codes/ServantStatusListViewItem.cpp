void ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x20
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_List_long__o *v40; // x28
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // x20
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
  struct PartyOrganizationListViewItem_o **p_memberItem; // x25
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  bool v64; // w0
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v79; // q0
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x24
  struct System_Int64_array *EquipList; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  struct PartyOrganizationListViewItem_o *v96; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  const MethodInfo *v98; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v99; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // q1
  UserServantCollectionMaster_o *v101; // x25
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x8
  int64_t v104; // x26
  __int64 v105; // x27
  __int64 v106; // x28
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  const MethodInfo *v114; // x4
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w26
  struct ServantEntity_o *BaseServantEntity; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x25
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  ServantLimitMaster_o *v133; // x27
  struct ServantLimitEntity_o *v134; // x0
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  System_String_o *v144; // x4
  int32_t v145; // w5
  int64_t v146; // x6
  System_String_o *v147; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v157; // x8
  int32_t v158; // w8
  struct System_Int64_array *equipIdList; // x9
  UserServantEntity_o *v160; // x8
  const MethodInfo *v161; // x2
  QuestRestrictionInfo_o *v162; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v163; // x8
  __int64 v164; // x24
  __int64 v165; // x27
  int32_t v166; // w0
  __int64 OverwriteTempTreasureDeviceLv; // x0
  struct System_Int64_array *v168; // x8
  int64_t v169; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v172; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v173; // x8
  int32_t v174; // w2
  int v175; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v176; // x8
  int32_t v177; // w2
  int v178; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v179; // x8
  int32_t v180; // w2
  int v181; // w9
  struct System_Collections_Generic_List_long__o *v182; // x8
  int v183; // w9
  struct UserServantCollectionEntity_o *v184; // x8
  bool IsNameTrue; // w0
  bool v186; // w8
  const MethodInfo *v187; // x1
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v189; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v190; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16

  if ( (byte_4E73D52 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E73D52 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v11;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v18;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v25;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v32;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v40,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  this->fields.grandServantEquipTargetIdList = v40;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.partyItem = partyItem;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, (int32_t)partyItem, v48, v49, v50, v51, v52, v53);
  if ( !partyItem )
    goto LABEL_68;
  v56 = PartyListViewItem__GetMember(partyItem, member, 0);
  this->fields.memberItem = v56;
  p_memberItem = &this->fields.memberItem;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.memberItem, (int32_t)v56, v58, v59, v60, v61, v62, v63);
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = isEnableServantQuest;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0) )
  {
    v64 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    v64 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v64;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  *(_BYTE *)(Instance + 205) = isEnableServantQuest;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v66, v67, v68, v69, v70, v71);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_68;
  v79 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  memberItem = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v79;
  if ( !memberItem )
    goto LABEL_68;
  userServantEntity = memberItem->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  Instance = (int64_t)this->fields.memberItem;
  if ( !Instance )
    goto LABEL_68;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
  this->fields.equipIdList = EquipList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipIdList,
    (int32_t)EquipList,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v96 = this->fields.memberItem;
  if ( !v96 )
    goto LABEL_68;
  questRestrictionInfo = v96->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsGrandServant((UserServantEntity_o *)Instance, 0);
  if ( !*p_memberItem )
    goto LABEL_68;
  ServantStatusListViewItem__SetGrandInfo(
    this,
    Instance & 1,
    (*p_memberItem)->fields._IsTempGrandServant_k__BackingField,
    0,
    v98);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v99 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v100 = v99[4];
  v101 = (UserServantCollectionMaster_o *)Instance;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v190.fields.currentCryptoKey = v99[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v190.fields.fakeValue = v100;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
  v189 = v190;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v189, 0);
  v103 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v104 = Instance;
  v106 = *(_QWORD *)&v103[5].fields.currentCryptoKey;
  v105 = *(_QWORD *)&v103[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v191.fields.currentCryptoKey = v106;
  *(_QWORD *)&v191.fields.fakeValue = v105;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v191, 0);
  if ( !v101 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v101, v104, Instance, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  ServantStatusListViewItem__SetupTempLimitCountSetting_37067544(
    this,
    this->fields.userSvtEntity,
    this->fields.userSvtCollectionEntity,
    this->fields.questRestrictionInfo,
    v114);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(userSvtEntity->fields.transformVal, 0);
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  this->fields._ModifyTransformVal_k__BackingField = Instance;
  if ( !currentLimitCountSetting )
    goto LABEL_68;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  SvtId_k__BackingField = currentLimitCountSetting->fields._SvtId_k__BackingField;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  this->fields.baseSvtEntity = BaseServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)BaseServantEntity,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             SvtId_k__BackingField,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v133 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200((*p_userSvtEntity)[6], 0);
  if ( !v133 )
    goto LABEL_68;
  v134 = ServantLimitMaster__GetEntity(v133, SvtId_k__BackingField, Instance, 0);
  this->fields.svtLimitEntity = v134;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_68;
  CommandCardParam = UserServantEntity__GetCommandCardParam((UserServantEntity_o *)Instance, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)CommandCardParam,
    v149,
    v150,
    v151,
    v152,
    v153,
    v154);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  svtCommonFlag = userSvtCollectionEntity->fields.svtCommonFlag;
  v157 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v157 )
    goto LABEL_68;
  v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v157->fields.battleVoice, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v158;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v160 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v160 )
    goto LABEL_68;
  Instance = UserServantEntity__IsChoice(v160, 0);
  v162 = this->fields.questRestrictionInfo;
  this->fields.isChoice = Instance & 1;
  this->fields.isUse = 0;
  if ( v162 )
  {
    v163 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_68;
    v165 = *(_QWORD *)&v163[5].fields.currentCryptoKey;
    v164 = *(_QWORD *)&v163[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v192.fields.currentCryptoKey = v165;
    *(_QWORD *)&v192.fields.fakeValue = v164;
    v166 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v192, 0);
    OverwriteTempTreasureDeviceLv = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(v162, v166, 0);
  }
  else
  {
    OverwriteTempTreasureDeviceLv = 0;
  }
  v168 = this->fields.equipIdList;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = OverwriteTempTreasureDeviceLv;
  if ( v168 )
  {
    if ( !LODWORD(v168->max_length) )
      sub_1D0F314(OverwriteTempTreasureDeviceLv);
    v169 = v168->m_Items[0];
  }
  else
  {
    v169 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v169, v161);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_68;
  size = equipGrandServantEntityList->fields._size;
  v172 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v172;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  v173 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_68;
  v174 = v173->fields._size;
  v175 = v173->fields._version + 1;
  v173->fields._size = 0;
  v173->fields._version = v175;
  if ( v174 >= 1 )
    System_Array__Clear((System_Array_o *)v173->fields._items, 0, v174, 0);
  v176 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_68;
  v177 = v176->fields._size;
  v178 = v176->fields._version + 1;
  v176->fields._size = 0;
  v176->fields._version = v178;
  if ( v177 >= 1 )
    System_Array__Clear((System_Array_o *)v176->fields._items, 0, v177, 0);
  v179 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_68;
  v180 = v179->fields._size;
  v181 = v179->fields._version + 1;
  v179->fields._size = 0;
  v179->fields._version = v181;
  if ( v180 >= 1 )
    System_Array__Clear((System_Array_o *)v179->fields._items, 0, v180, 0);
  v182 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_68;
  v183 = v182->fields._version + 1;
  v182->fields._size = 0;
  v182->fields._version = v183;
  ServantStatusListViewItem__SetEquipTargetIds(this, v55);
  v184 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v184 != 0;
  if ( !Instance )
    goto LABEL_68;
  if ( !ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0) )
  {
    IsNameTrue = 0;
    goto LABEL_67;
  }
  Instance = (int64_t)*p_svtEntity;
  if ( !*p_svtEntity )
LABEL_68:
    sub_1D0F30C(Instance, v55);
  IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
LABEL_67:
  v186 = this->fields.userSvtEntity != 0;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v186;
  this->fields._IsOpenSourceMySvt_k__BackingField = 1;
  ServantStatusListViewItem__UpdateServantComment(this, v55);
  ServantStatusListViewItem__ModifyInfo(this, v187);
}


void ServantStatusListViewItem___ctor_37073548(
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
  int64_t userSvtEntity; // x0
  const MethodInfo *v51; // x1
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
  struct UserServantEntity_o **p_userSvtEntity; // x20
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
  bool IsGrandServant; // w0
  const MethodInfo *v93; // x4
  struct UserServantEntity_o *v94; // x8
  __int128 v95; // q1
  UserServantCollectionMaster_o *v96; // x21
  struct UserServantEntity_o *v97; // x8
  int64_t v98; // x22
  __int64 v99; // x23
  __int64 v100; // x24
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  const MethodInfo *v108; // x4
  struct UserServantEntity_o *v109; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w22
  struct ServantEntity_o *BaseServantEntity; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v127; // x8
  ServantLimitMaster_o *v128; // x20
  struct ServantLimitEntity_o *v129; // x0
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v152; // x8
  int32_t v153; // w8
  struct System_Int64_array *equipIdList; // x9
  UserServantEntity_o *v155; // x8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v157; // x2
  struct System_Int64_array *v158; // x8
  int64_t v159; // x1
  struct UserServantCollectionEntity_o *v160; // x8
  bool IsNameTrue; // w0
  bool v162; // w8
  const MethodInfo *v163; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_4E73D53 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D53 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v16;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v23;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v30;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v37;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.warBoardPartyItem = partyItem;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.warBoardPartyItem,
    (int32_t)partyItem,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !partyItem )
    goto LABEL_42;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0);
  this->fields.memberItem = MemberItem;
  sub_1D0F058(
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v60, v61, v62, v63, v64, v65);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_42;
  v73 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  v74 = this->fields.memberItem;
  *(_OWORD *)&this->fields.favoriteUserSvtId = v73;
  if ( !v74 )
    goto LABEL_42;
  userServantEntity = v74->fields.userServantEntity;
  this->fields.userSvtEntity = userServantEntity;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServantEntity,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  userSvtEntity = (int64_t)this->fields.memberItem;
  if ( !userSvtEntity )
    goto LABEL_42;
  EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)userSvtEntity, 0);
  this->fields.equipIdList = EquipList;
  sub_1D0F058(
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
    goto LABEL_42;
  questRestrictionInfo = v90->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_42;
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)userSvtEntity, 0);
  ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, 0, 0, v93);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  userSvtEntity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v94 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_42;
  v95 = *(_OWORD *)&v94->fields.userId.fields.fakeValue;
  v96 = (UserServantCollectionMaster_o *)userSvtEntity;
  *(_OWORD *)&v165.fields.currentCryptoKey = *(_OWORD *)&v94->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v165.fields.fakeValue = v95;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v164 = v165;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v164, 0);
  v97 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_42;
  v98 = userSvtEntity;
  v100 = *(_QWORD *)&v97->fields.svtId.fields.currentCryptoKey;
  v99 = *(_QWORD *)&v97->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v166.fields.currentCryptoKey = v100;
  *(_QWORD *)&v166.fields.fakeValue = v99;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v166, 0);
  if ( !v96 )
    goto LABEL_42;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v96, v98, userSvtEntity, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  ServantStatusListViewItem__SetupTempLimitCountSetting_37067544(
    this,
    this->fields.userSvtEntity,
    this->fields.userSvtCollectionEntity,
    this->fields.questRestrictionInfo,
    v108);
  v109 = this->fields.userSvtEntity;
  if ( !v109 )
    goto LABEL_42;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v109->fields.transformVal, 0);
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  this->fields._ModifyTransformVal_k__BackingField = userSvtEntity;
  if ( !currentLimitCountSetting )
    goto LABEL_42;
  userSvtEntity = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_42;
  SvtId_k__BackingField = currentLimitCountSetting->fields._SvtId_k__BackingField;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)userSvtEntity, 0);
  this->fields.baseSvtEntity = BaseServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)BaseServantEntity,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_42;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userSvtEntity )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
             SvtId_k__BackingField,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_42;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v127 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_42;
  v128 = (ServantLimitMaster_o *)userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v127[6], 0);
  if ( !v128 )
    goto LABEL_42;
  v129 = ServantLimitMaster__GetEntity(v128, SvtId_k__BackingField, userSvtEntity, 0);
  this->fields.svtLimitEntity = v129;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v129,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_42;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)userSvtEntity, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_42;
  CommandCardParam = UserServantEntity__GetCommandCardParam((UserServantEntity_o *)userSvtEntity, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)CommandCardParam,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_42;
  svtCommonFlag = userSvtCollectionEntity->fields.svtCommonFlag;
  v152 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v152 )
    goto LABEL_42;
  v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v152->fields.battleVoice, 0);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v153;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !userSvtEntity )
    goto LABEL_42;
  userSvtEntity = UserServantEntity__IsLock((UserServantEntity_o *)userSvtEntity, 0);
  v155 = this->fields.userSvtEntity;
  this->fields.isLock = userSvtEntity & 1;
  if ( !v155 )
    goto LABEL_42;
  IsChoice = UserServantEntity__IsChoice(v155, 0);
  v158 = this->fields.equipIdList;
  this->fields.isChoice = IsChoice;
  this->fields.isUse = 0;
  if ( v158 )
  {
    if ( !LODWORD(v158->max_length) )
      sub_1D0F314(IsChoice);
    v159 = v158->m_Items[0];
  }
  else
  {
    v159 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v159, v157);
  v160 = this->fields.userSvtCollectionEntity;
  userSvtEntity = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v160 != 0;
  if ( !userSvtEntity )
    goto LABEL_42;
  if ( !ServantEntity__IsNameHide((ServantEntity_o *)userSvtEntity, 0) )
  {
    IsNameTrue = 0;
    goto LABEL_41;
  }
  userSvtEntity = (int64_t)*p_svtEntity;
  if ( !*p_svtEntity )
LABEL_42:
    sub_1D0F30C(userSvtEntity, v51);
  IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)userSvtEntity, 0);
LABEL_41:
  v162 = this->fields.userSvtEntity != 0;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v162;
  this->fields._IsOpenSourceMySvt_k__BackingField = 1;
  ServantStatusListViewItem__UpdateServantComment(this, v51);
  ServantStatusListViewItem__ModifyInfo(this, v163);
}


void ServantStatusListViewItem___ctor_37075184(
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
  bool v18; // w21
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
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_List_object__o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_List_long__o *v47; // x20
  struct System_Collections_Generic_List_long__o **p_grandServantEquipTargetIdList; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int64_t Instance; // x0
  const MethodInfo *v64; // x1
  bool v65; // w8
  __int128 v66; // q1
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  struct UserServantEntity_o **p_userSvtEntity; // x29
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct UserServantEntity_o *v87; // x8
  __int128 v88; // q0
  UserServantCollectionMaster_o *v89; // x20
  struct UserServantEntity_o *v90; // x8
  int64_t v91; // x21
  __int64 v92; // x22
  __int64 v93; // x23
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  const MethodInfo *v101; // x4
  __int64 v102; // x20
  __int64 v103; // x21
  int32_t v104; // w0
  const MethodInfo *v105; // x2
  bool IsGrandServant; // w0
  const MethodInfo *v107; // x4
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  const MethodInfo *v122; // x4
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v124; // x20
  __int64 v125; // x21
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct System_Collections_Generic_List_SkillInfo____o **p_grandServantSkillInfoList; // x28
  int32_t SvtId_k__BackingField; // w20
  struct ServantEntity_o *BaseServantEntity; // x0
  int32_t v130; // w2
  int32_t v131; // w3
  System_String_o *v132; // x4
  int32_t v133; // w5
  int64_t v134; // x6
  System_String_o *v135; // x7
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x27
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  struct UserServantEntity_o *v144; // x8
  ServantLimitMaster_o *v145; // x21
  __int64 v146; // x22
  __int64 v147; // x23
  struct ServantLimitEntity_o *v148; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v157; // x8
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  UserServantEntity_o *v170; // x8
  ServantEntity_o *svtEntity; // x8
  const MethodInfo *v172; // x2
  struct UserServantEntity_o *v173; // x8
  __int128 v174; // q0
  UserDeckMaster_o *v175; // x20
  _BOOL8 IsEquip; // x0
  struct System_Int64_array *v177; // x8
  int64_t v178; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v181; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *v182; // x8
  int32_t v183; // w2
  int v184; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *v185; // x8
  int32_t v186; // w2
  int v187; // w9
  struct System_Collections_Generic_List_SkillInfo____o *v188; // x8
  int32_t v189; // w2
  int v190; // w9
  struct System_Collections_Generic_List_long__o *v191; // x8
  int v192; // w9
  struct UserServantCollectionEntity_o *v193; // x8
  bool IsNameTrue; // w8
  struct UserServantEntity_o *v195; // x9
  const MethodInfo *v196; // x1
  struct System_Collections_Generic_List_ServantLimitEntity__o **p_equipGrandServantLimitEntityList; // [xsp+18h] [xbp-F8h]
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserGrandServantEntityList; // [xsp+20h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v202; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v203; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v208; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16

  v18 = isEnableServantQuest;
  if ( (byte_4E73D54 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E73D54 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v19;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v26;
  p_equipUserGrandServantEntityList = &this->fields.equipUserGrandServantEntityList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v33;
  p_equipGrandServantLimitEntityList = &this->fields.equipGrandServantLimitEntityList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v40;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v47,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  p_grandServantEquipTargetIdList = &this->fields.grandServantEquipTargetIdList;
  this->fields.grandServantEquipTargetIdList = v47;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v57, v58, v59, v60, v61, v62);
  this->fields.isEnableServantQuest = v18;
  this->fields._BeforeClearQuestId_k__BackingField = beforeClearQuestId;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  *(_BYTE *)(Instance + 205) = v18;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0);
  if ( (Instance & 1) != 0 )
  {
    v65 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_81;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
    v65 = Instance & 1;
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v65;
  if ( !userServant )
    goto LABEL_81;
  v66 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v205.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v205.fields.fakeValue = v66;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v204 = v205;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v204, 0);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_81;
  if ( Instance == userGameEntity->fields.userId )
  {
    *(_OWORD *)&this->fields.favoriteUserSvtId = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1;
    this->fields.pushUserSvtId = -1;
    this->fields.userGameEntity = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v67, v68, v69, v70, v71, v72);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServant,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.equipIdList = equipIdList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipIdList,
    (int32_t)equipIdList,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v87 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v88 = *(_OWORD *)&v87->fields.userId.fields.fakeValue;
  v89 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v205.fields.currentCryptoKey = *(_OWORD *)&v87->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v205.fields.fakeValue = v88;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v203 = v205;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v203, 0);
  v90 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v91 = Instance;
  v93 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v206.fields.currentCryptoKey = v93;
  *(_QWORD *)&v206.fields.fakeValue = v92;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v206, 0);
  if ( !v89 )
    goto LABEL_81;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v89, v91, Instance, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  if ( UserServantEntity__get_IsEquip(userServant, 0) )
  {
    ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v101);
    v103 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
    v102 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v207.fields.currentCryptoKey = v103;
    *(_QWORD *)&v207.fields.fakeValue = v102;
    v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v207, 0);
    ServantStatusListViewItem__SetupTempLimitCountSetting(this, v104, v105);
  }
  else
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_81;
    IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)Instance, 0);
    ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, isTempGrandServant, isForceNotGrand, v107);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_81;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_81;
    CommandCardParam = UserServantEntity__GetCommandCardParam((UserServantEntity_o *)Instance, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
    ServantStatusListViewItem__SetupTempLimitCountSetting_37067544(
      this,
      this->fields.userSvtEntity,
      this->fields.userSvtCollectionEntity,
      questRestrictionInfo,
      v122);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_81;
    v125 = *(_QWORD *)&userSvtEntity->fields.transformVal.fields.currentCryptoKey;
    v124 = *(_QWORD *)&userSvtEntity->fields.transformVal.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v208.fields.currentCryptoKey = v125;
    *(_QWORD *)&v208.fields.fakeValue = v124;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v208, 0);
    this->fields._ModifyTransformVal_k__BackingField = Instance;
  }
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    goto LABEL_81;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  p_grandServantSkillInfoList = &this->fields.grandServantSkillInfoList;
  SvtId_k__BackingField = currentLimitCountSetting->fields._SvtId_k__BackingField;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  this->fields.baseSvtEntity = BaseServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)BaseServantEntity,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  this->fields.isFriendShipEquipSkillChange = isChangeFriendShipSkill;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_81;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             SvtId_k__BackingField,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v144 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v145 = (ServantLimitMaster_o *)Instance;
  v147 = *(_QWORD *)&v144->fields.limitCount.fields.currentCryptoKey;
  v146 = *(_QWORD *)&v144->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v209.fields.currentCryptoKey = v147;
  *(_QWORD *)&v209.fields.fakeValue = v146;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v209, 0);
  if ( !v145 )
    goto LABEL_81;
  v148 = ServantLimitMaster__GetEntity(v145, SvtId_k__BackingField, Instance, 0);
  this->fields.svtLimitEntity = v148;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v148,
    v149,
    v150,
    v151,
    v152,
    v153,
    v154);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_81;
  svtCommonFlag = userSvtCollectionEntity->fields.svtCommonFlag;
  v157 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v157 )
    goto LABEL_81;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                   v157->fields.battleVoice,
                                   0);
  this->fields.isEquipShowMode = equipIdList != 0;
  this->fields.servantLeaderInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v158, v159, v160, v161, v162, v163);
  this->fields.equipTargetInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v164, v165, v166, v167, v168, v169);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_81;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v170 = this->fields.userSvtEntity;
  this->fields.isLock = Instance & 1;
  if ( !v170 )
    goto LABEL_81;
  Instance = UserServantEntity__IsChoice(v170, 0);
  svtEntity = this->fields.svtEntity;
  this->fields.isChoice = Instance & 1;
  if ( !svtEntity )
    goto LABEL_81;
  if ( ServantEntity__get_IsServantEquip(svtEntity, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_81;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v173 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_81;
    v174 = *(_OWORD *)&v173->fields.id.fields.fakeValue;
    v175 = (UserDeckMaster_o *)Instance;
    *(_OWORD *)&v205.fields.currentCryptoKey = *(_OWORD *)&v173->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v205.fields.fakeValue = v174;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v202 = v205;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v202, 0);
    if ( !v175 )
      goto LABEL_81;
    IsEquip = UserDeckMaster__IsEquip(v175, Instance, 0);
  }
  else
  {
    IsEquip = 0;
  }
  v177 = this->fields.equipIdList;
  this->fields.isUse = IsEquip;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = tempOverwriteTdLv;
  if ( v177 )
  {
    if ( !LODWORD(v177->max_length) )
      sub_1D0F314(IsEquip);
    v178 = v177->m_Items[0];
  }
  else
  {
    v178 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v178, v172);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_81;
  size = equipGrandServantEntityList->fields._size;
  v181 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v181;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  v182 = *p_equipUserGrandServantEntityList;
  if ( !*p_equipUserGrandServantEntityList )
    goto LABEL_81;
  v183 = v182->fields._size;
  v184 = v182->fields._version + 1;
  v182->fields._size = 0;
  v182->fields._version = v184;
  if ( v183 >= 1 )
    System_Array__Clear((System_Array_o *)v182->fields._items, 0, v183, 0);
  v185 = *p_equipGrandServantLimitEntityList;
  if ( !*p_equipGrandServantLimitEntityList )
    goto LABEL_81;
  v186 = v185->fields._size;
  v187 = v185->fields._version + 1;
  v185->fields._size = 0;
  v185->fields._version = v187;
  if ( v186 >= 1 )
    System_Array__Clear((System_Array_o *)v185->fields._items, 0, v186, 0);
  v188 = *p_grandServantSkillInfoList;
  if ( !*p_grandServantSkillInfoList )
    goto LABEL_81;
  v189 = v188->fields._size;
  v190 = v188->fields._version + 1;
  v188->fields._size = 0;
  v188->fields._version = v190;
  if ( v189 >= 1 )
    System_Array__Clear((System_Array_o *)v188->fields._items, 0, v189, 0);
  v191 = *p_grandServantEquipTargetIdList;
  if ( !*p_grandServantEquipTargetIdList )
    goto LABEL_81;
  v192 = v191->fields._version + 1;
  v191->fields._size = 0;
  v191->fields._version = v192;
  ServantStatusListViewItem__SetEquipTargetIds(this, v64);
  v193 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v193 != 0 && enableTdSpeed;
  if ( !Instance )
    goto LABEL_81;
  if ( !ServantEntity__IsNameHide((ServantEntity_o *)Instance, 0) )
  {
    IsNameTrue = 0;
    goto LABEL_80;
  }
  Instance = (int64_t)*p_svtEntity;
  if ( !*p_svtEntity )
LABEL_81:
    sub_1D0F30C(Instance, v64);
  IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
LABEL_80:
  v195 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v195 != 0;
  this->fields._IsOpenSourceMySvt_k__BackingField = 1;
  ServantStatusListViewItem__UpdateServantComment(this, v64);
  ServantStatusListViewItem__ModifyInfo(this, v196);
}


void ServantStatusListViewItem___ctor_37077932(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        bool isSkillChange,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_List_long__o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int64_t userSvtEntity; // x0
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
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
  bool IsGrandServant; // w0
  const MethodInfo *v77; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x22
  __int64 v80; // x24
  __int64 v81; // x25
  Il2CppObject *Entity; // x24
  struct ServantEntity_o **p_svtEntity; // x22
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  ServantLimitMaster_o *v96; // x24
  int32_t v97; // w25
  struct ServantLimitEntity_o *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v105; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // q0
  __int64 v107; // x21
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v114; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // q0
  UserServantCollectionMaster_o *v116; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v117; // x8
  int64_t v118; // x23
  __int64 v119; // x25
  __int64 v120; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v122; // w1
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct UserServantCollectionEntity_o **v124; // x0
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v134; // x8
  __int64 v135; // x23
  __int64 v136; // x24
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
  UserServantEntity_o *v149; // x8
  const MethodInfo *v150; // x2
  struct UserServantCollectionEntity_o *v151; // x8
  bool IsNameTrue; // w0
  __int64 v153; // x20
  __int64 v154; // x21
  int32_t v155; // w0
  const MethodInfo *v156; // x2
  const MethodInfo *v157; // x1
  const MethodInfo *v158; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v162; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v163; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16

  v7 = isSkillChange;
  if ( (byte_4E73D55 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D55 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v15;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v22;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v29;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v36;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v45, v46, v47, v48, v49, v50);
  this->fields.isEnableServantQuest = 0;
  this->fields.isFriendShipEquipSkillChange = v7;
  if ( !userServant )
    goto LABEL_55;
  v53 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v163.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v163.fields.fakeValue = v53;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v162 = v163;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v162, 0);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_55;
  if ( userSvtEntity == userGameEntity->fields.userId )
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
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v54, v55, v56, v57, v58, v59);
    v62 = 0;
  }
  this->fields._IsMyEquip_k__BackingField = v62;
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServant,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.equipIdList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v64, v65, v66, v67, v68, v69);
  this->fields.questRestrictionInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v70, v71, v72, v73, v74, v75);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_55;
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)userSvtEntity, 0);
  ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, 0, 0, v77);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_55;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v78 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_55;
  v79 = (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity;
  v81 = *(_QWORD *)&v78[5].fields.currentCryptoKey;
  v80 = *(_QWORD *)&v78[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v164.fields.currentCryptoKey = v81;
  *(_QWORD *)&v164.fields.fakeValue = v80;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v164, 0);
  if ( !v79 )
    goto LABEL_55;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v79,
             userSvtEntity,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v84, v85, v86, v87, v88, v89);
  this->fields.baseSvtEntity = (struct ServantEntity_o *)Entity;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.baseSvtEntity, (int32_t)Entity, v90, v91, v92, v93, v94, v95);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_55;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_55;
  v96 = (ServantLimitMaster_o *)userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_55;
  v97 = userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200((*p_userSvtEntity)[6], 0);
  if ( !v96 )
    goto LABEL_55;
  v98 = ServantLimitMaster__GetEntity(v96, v97, userSvtEntity, 0);
  this->fields.svtLimitEntity = v98;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
  }
  userSvtEntity = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    userSvtEntity = (int64_t)NetworkManager_TypeInfo;
  }
  v105 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_55;
  v106 = v105[4];
  v107 = *(_QWORD *)(*(_QWORD *)(userSvtEntity + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.currentCryptoKey = v105[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.fakeValue = v106;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v161 = v163;
  if ( v107 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v161, 0) )
  {
    userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !userSvtEntity )
      goto LABEL_55;
    userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)userSvtEntity,
                               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v114 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_55;
    v115 = v114[4];
    v116 = (UserServantCollectionMaster_o *)userSvtEntity;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.currentCryptoKey = v114[3];
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v163.fields.fakeValue = v115;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v160 = v163;
    userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v160, 0);
    v117 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_55;
    v118 = userSvtEntity;
    v120 = *(_QWORD *)&v117[5].fields.currentCryptoKey;
    v119 = *(_QWORD *)&v117[5].fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v165.fields.currentCryptoKey = v120;
    *(_QWORD *)&v165.fields.fakeValue = v119;
    userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v165, 0);
    if ( !v116 )
      goto LABEL_55;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v116, v118, userSvtEntity, 0);
    v122 = (int)EntityDefinitely;
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    v124 = &this->fields.userSvtCollectionEntity;
  }
  else
  {
    this->fields.userSvtCollectionEntity = 0;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
    v124 = &this->fields.userSvtCollectionEntity;
    v122 = 0;
  }
  sub_1D0F058((GrandQuestFolderBoardItem_o *)v124, v122, v108, v109, v110, v111, v112, v113);
  userSvtEntity = (int64_t)*(p_userSvtCollectionEntity - 3);
  if ( !userSvtEntity )
    goto LABEL_55;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)userSvtEntity, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_55;
  svtCommonFlag = userSvtCollectionEntity->fields.svtCommonFlag;
  v134 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v134 )
    goto LABEL_55;
  v136 = *(_QWORD *)&v134->fields.battleVoice.fields.currentCryptoKey;
  v135 = *(_QWORD *)&v134->fields.battleVoice.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v166.fields.currentCryptoKey = v136;
  *(_QWORD *)&v166.fields.fakeValue = v135;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v166, 0);
  this->fields.isEquipShowMode = 0;
  this->fields.servantLeaderInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v137, v138, v139, v140, v141, v142);
  this->fields.equipTargetInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v143, v144, v145, v146, v147, v148);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_55;
  userSvtEntity = UserServantEntity__IsLock((UserServantEntity_o *)userSvtEntity, 0);
  v149 = this->fields.userSvtEntity;
  this->fields.isLock = userSvtEntity & 1;
  if ( !v149 )
    goto LABEL_55;
  this->fields.isChoice = UserServantEntity__IsChoice(v149, 0);
  this->fields.isUse = isUse;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v150);
  v151 = this->fields.userSvtCollectionEntity;
  userSvtEntity = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v151 != 0;
  if ( !userSvtEntity )
    goto LABEL_55;
  if ( ServantEntity__IsNameHide((ServantEntity_o *)userSvtEntity, 0) )
  {
    userSvtEntity = (int64_t)*p_svtEntity;
    if ( *p_svtEntity )
    {
      IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)userSvtEntity, 0);
      goto LABEL_52;
    }
LABEL_55:
    sub_1D0F30C(userSvtEntity, v52);
  }
  IsNameTrue = 0;
LABEL_52:
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableChangeVoice = IsNameTrue;
  v154 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
  v153 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v167.fields.currentCryptoKey = v154;
  *(_QWORD *)&v167.fields.fakeValue = v153;
  v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v167, 0);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, v155, v156);
  ServantStatusListViewItem__UpdateServantComment(this, v157);
  ServantStatusListViewItem__ModifyInfo(this, v158);
}


void ServantStatusListViewItem___ctor_37079744(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_List_long__o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
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
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x22
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
  DataMasterBase_TMaster__TEntity__PKType__o *v91; // x23
  __int64 v92; // x24
  __int64 v93; // x25
  Il2CppObject *Entity; // x23
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  ServantLimitMaster_o *v107; // x23
  struct ServantLimitEntity_o *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  const MethodInfo *v115; // x4
  struct ServantEntity_o *baseSvtEntity; // x8
  __int64 v117; // x21
  __int64 v118; // x23
  int32_t v119; // w0
  const MethodInfo *v120; // x2
  const MethodInfo *v121; // x2
  bool IsGrandServant; // w0
  const MethodInfo *v123; // x4
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  const MethodInfo *v138; // x3
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v140; // x8
  const MethodInfo *v141; // x1
  const MethodInfo *v142; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16

  v7 = isEnableServantQuest;
  if ( (byte_4E73D56 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D56 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v15;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v22;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v29;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v36;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v45, v46, v47, v48, v49, v50);
  this->fields.isEnableServantQuest = v7;
  this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_26;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v53, v54, v55, v56, v57, v58);
  }
  this->fields.userSvtEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v53, v54, v55, v56, v57, v58);
  this->fields.equipIdList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v59, v60, v61, v62, v63, v64);
  this->fields.questRestrictionInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v65, v66, v67, v68, v69, v70);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.servantLeaderInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v78, v79, v80, v81, v82, v83);
  this->fields.equipTargetInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v84, v85, v86, v87, v88, v89);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v90 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_26;
  v91 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v93 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v144.fields.currentCryptoKey = v93;
  *(_QWORD *)&v144.fields.fakeValue = v92;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v144, 0);
  if ( !v91 )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v91,
             (int32_t)Instance,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v95, v96, v97, v98, v99, v100);
  this->fields.baseSvtEntity = (struct ServantEntity_o *)Entity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)Entity,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_26;
  v107 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_26;
  if ( !v107 )
    goto LABEL_26;
  v108 = ServantLimitMaster__GetEntity(v107, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0);
  this->fields.svtLimitEntity = v108;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  Instance = (DataManager_o *)this->fields.baseSvtEntity;
  if ( !Instance )
    goto LABEL_26;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
  {
    ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v115);
    baseSvtEntity = this->fields.baseSvtEntity;
    if ( !baseSvtEntity )
      goto LABEL_26;
    v118 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
    v117 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v145.fields.currentCryptoKey = v118;
    *(_QWORD *)&v145.fields.fakeValue = v117;
    v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v145, 0);
    ServantStatusListViewItem__SetupTempLimitCountSetting(this, v119, v120);
  }
  else
  {
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtCollectionEntity, 0);
    ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, 0, 0, v123);
    CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList(userSvtCollectionEntity, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
    CommandCardParam = UserServantCollectionEntity__GetCommandCardParam(userSvtCollectionEntity, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v132,
      v133,
      v134,
      v135,
      v136,
      v137);
    ServantStatusListViewItem__SetupTempLimitCountSetting_37081072(
      this,
      this->fields.svtEntity,
      userSvtCollectionEntity,
      v138);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_26;
  svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v121);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_26:
    sub_1D0F30C(Instance, v52);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0);
  v140 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.enableTdSpeed = v140 != 0 && enableTdSpeed;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__UpdateServantComment(this, v141);
  ServantStatusListViewItem__ModifyInfo(this, v142);
}


void ServantStatusListViewItem___ctor_37081464(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v8; // w24
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
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  DataManager_o *Instance; // x0
  __int64 v53; // x1
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
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
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
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  struct UserServantCollectionEntity_o *v91; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x24
  __int64 v93; // x25
  __int64 v94; // x26
  Il2CppObject *Entity; // x24
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  ServantLimitMaster_o *v108; // x24
  struct ServantLimitEntity_o *v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  const MethodInfo *v116; // x4
  struct ServantEntity_o *baseSvtEntity; // x8
  __int64 v118; // x21
  __int64 v119; // x22
  int32_t v120; // w0
  const MethodInfo *v121; // x2
  const MethodInfo *v122; // x2
  bool IsGrandServant; // w0
  const MethodInfo *v124; // x4
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  struct System_Int32_array *CommandCardParam; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  const MethodInfo *v139; // x3
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v141; // x8
  const MethodInfo *v142; // x1
  const MethodInfo *v143; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  v8 = isEnableServantQuest;
  if ( (byte_4E73D57 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D57 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v16;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v23;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v30;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v37;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v46, v47, v48, v49, v50, v51);
  this->fields.isEnableServantQuest = v8;
  this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_25;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v54, v55, v56, v57, v58, v59);
  }
  this->fields.userSvtEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v54, v55, v56, v57, v58, v59);
  this->fields.equipIdList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v60, v61, v62, v63, v64, v65);
  this->fields.questRestrictionInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v66, v67, v68, v69, v70, v71);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.servantLeaderInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v79, v80, v81, v82, v83, v84);
  this->fields.equipTargetInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v85, v86, v87, v88, v89, v90);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v91 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_25;
  v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v94 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v146.fields.currentCryptoKey = v94;
  *(_QWORD *)&v146.fields.fakeValue = v93;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v146, 0);
  if ( !v92 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v92,
             (int32_t)Instance,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v96, v97, v98, v99, v100, v101);
  this->fields.baseSvtEntity = (struct ServantEntity_o *)Entity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)Entity,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_25;
  v108 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0);
  if ( !v108 )
    goto LABEL_25;
  v109 = ServantLimitMaster__GetEntity(v108, (int32_t)Instance, limitCount, 0);
  this->fields.svtLimitEntity = v109;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  Instance = (DataManager_o *)this->fields.baseSvtEntity;
  if ( !Instance )
    goto LABEL_25;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
  {
    ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v116);
    baseSvtEntity = this->fields.baseSvtEntity;
    if ( !baseSvtEntity )
      goto LABEL_25;
    v119 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
    v118 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v147.fields.currentCryptoKey = v119;
    *(_QWORD *)&v147.fields.fakeValue = v118;
    v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v147, 0);
    ServantStatusListViewItem__SetupTempLimitCountSetting(this, v120, v121);
  }
  else
  {
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtCollectionEntity, 0);
    ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, 0, 0, v124);
    CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList(userSvtCollectionEntity, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v126,
      v127,
      v128,
      v129,
      v130,
      v131);
    CommandCardParam = UserServantCollectionEntity__GetCommandCardParam(userSvtCollectionEntity, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v133,
      v134,
      v135,
      v136,
      v137,
      v138);
    ServantStatusListViewItem__SetupTempLimitCountSetting_37081072(
      this,
      this->fields.svtEntity,
      userSvtCollectionEntity,
      v139);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_25;
  svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v122);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_25:
    sub_1D0F30C(Instance, v53);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0);
  v141 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.enableTdSpeed = v141 != 0 && enableTdSpeed;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__UpdateServantComment(this, v142);
  ServantStatusListViewItem__ModifyInfo(this, v143);
}


void ServantStatusListViewItem___ctor_37082784(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  bool v6; // w23
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_List_long__o *v35; // x21
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
  struct ServantLeaderInfo_o **p_servantLeaderInfo; // x21
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
  DataMasterBase_TMaster__TEntity__PKType__o *SelfUserGame; // x0
  __int64 v86; // x1
  bool IsGrandSvt; // w0
  const MethodInfo *v88; // x4
  const MethodInfo *v89; // x2
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w22
  struct ServantEntity_o *BaseServantEntity; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  Il2CppObject *Entity; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  struct ServantLimitEntity_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  struct ServantLeaderInfo_o *v126; // x8
  struct System_Int32_array *commandCardParam; // x1
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x1
  struct ServantLeaderInfo_o *v130; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v132; // x22
  __int64 v133; // x23
  struct EquipTargetInfo_o *v134; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v135; // x22
  __int64 v136; // x23
  __int64 v137; // x24
  Il2CppObject *v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  struct EquipTargetInfo_o *v145; // x8
  ServantLimitMaster_o *v146; // x22
  struct EquipTargetInfo_o *v147; // x8
  struct ServantLimitEntity_o *v148; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  const MethodInfo *v155; // x1
  const MethodInfo *v156; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_4E73D58 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D58 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v21;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v28;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v35;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v42, v43, v44, v45, v46, v47);
  this->fields.userSvtEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v48, v49, v50, v51, v52, v53);
  this->fields.equipIdList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v54, v55, v56, v57, v58, v59);
  this->fields.questRestrictionInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v60, v61, v62, v63, v64, v65);
  this->fields.userSvtCollectionEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity, 0, v66, v67, v68, v69, v70, v71);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = &this->fields.servantLeaderInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)servantLeaderInfo,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.equipTargetInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo, 0, v79, v80, v81, v82, v83, v84);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = v6;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0);
  if ( SelfUserGame )
  {
    if ( !servantLeaderInfo )
      goto LABEL_34;
    this->fields._IsMyEquip_k__BackingField = servantLeaderInfo->fields.userId == *(_QWORD *)&SelfUserGame->fields._MasterKind_k__BackingField;
  }
  else
  {
    this->fields._IsMyEquip_k__BackingField = 0;
    if ( !servantLeaderInfo )
      goto LABEL_34;
  }
  IsGrandSvt = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
  ServantStatusListViewItem__SetGrandInfo(this, IsGrandSvt, 0, 0, v88);
  ServantStatusListViewItem__SetupTempLimitCountSetting_37084248(this, servantLeaderInfo, v89);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLeaderInfo__get_TransformVal(servantLeaderInfo, 0);
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  this->fields._ModifyTransformVal_k__BackingField = (int)SelfUserGame;
  if ( !currentLimitCountSetting )
    goto LABEL_34;
  SvtId_k__BackingField = currentLimitCountSetting->fields._SvtId_k__BackingField;
  BaseServantEntity = ServantLeaderInfo__get_BaseServantEntity(servantLeaderInfo, 0);
  this->fields.baseSvtEntity = BaseServantEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)BaseServantEntity,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_34;
  Entity = DataMasterBase_object__object__int___GetEntity(
             SelfUserGame,
             SvtId_k__BackingField,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !SelfUserGame )
    goto LABEL_34;
  v106 = ServantLimitMaster__GetEntity(
           (ServantLimitMaster_o *)SelfUserGame,
           SvtId_k__BackingField,
           servantLeaderInfo->fields.limitCount,
           0);
  this->fields.svtLimitEntity = v106;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_34;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)SelfUserGame, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v126 = this->fields.servantLeaderInfo;
  if ( !v126 )
    goto LABEL_34;
  commandCardParam = v126->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)commandCardParam,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v128);
  ServantStatusListViewItem__SetEquipTargetIds(this, v129);
  v130 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v130 )
    goto LABEL_34;
  equipTarget1 = v130->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v133 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v132 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v157.fields.currentCryptoKey = v133;
    *(_QWORD *)&v157.fields.fakeValue = v132;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v157, 0) >= 1 )
    {
      SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v134 = (*p_servantLeaderInfo)->fields.equipTarget1;
          if ( v134 )
          {
            v135 = SelfUserGame;
            v137 = *(_QWORD *)&v134->fields.svtId.fields.currentCryptoKey;
            v136 = *(_QWORD *)&v134->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v158.fields.currentCryptoKey = v137;
            *(_QWORD *)&v158.fields.fakeValue = v136;
            SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                           v158,
                                                                           0);
            if ( v135 )
            {
              v138 = DataMasterBase_object__object__int___GetEntity(
                       v135,
                       (int32_t)SelfUserGame,
                       (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v138;
              sub_1D0F058(
                (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity,
                (int32_t)v138,
                v139,
                v140,
                v141,
                v142,
                v143,
                v144);
              SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( SelfUserGame )
              {
                SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                               (DataManager_o *)SelfUserGame,
                                                                               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v145 = (*p_servantLeaderInfo)->fields.equipTarget1;
                  if ( v145 )
                  {
                    v146 = (ServantLimitMaster_o *)SelfUserGame;
                    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                   v145->fields.svtId,
                                                                                   0);
                    if ( *p_servantLeaderInfo )
                    {
                      v147 = (*p_servantLeaderInfo)->fields.equipTarget1;
                      if ( v147 )
                      {
                        if ( v146 )
                        {
                          v148 = ServantLimitMaster__GetEntity(v146, (int32_t)SelfUserGame, v147->fields.limitCount, 0);
                          this->fields.equipSvtLimitEntity = v148;
                          sub_1D0F058(
                            (GrandQuestFolderBoardItem_o *)&this->fields.equipSvtLimitEntity,
                            (int32_t)v148,
                            v149,
                            v150,
                            v151,
                            v152,
                            v153,
                            v154);
                          goto LABEL_32;
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
LABEL_34:
      sub_1D0F30C(SelfUserGame, v86);
    }
  }
LABEL_32:
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_34;
  ServantLeaderInfo__getEquipSkillInfo((ServantLeaderInfo_o *)SelfUserGame, &this->fields.equipSkillInfoList, 0);
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields._IsOpenSourceOtherSvt_k__BackingField = servantLeaderInfo->fields._IsUserServant_k__BackingField;
  ServantStatusListViewItem__UpdateServantComment(this, v155);
  ServantStatusListViewItem__ModifyInfo(this, v156);
}


void ServantStatusListViewItem___ctor_37084504(
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
  DataMasterBase_TMaster__TEntity__PKType__o *v91; // x21
  __int64 v92; // x23
  __int64 v93; // x24
  Il2CppObject *Entity; // x21
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  ServantLimitMaster_o *v107; // x21
  struct ServantLimitEntity_o *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  const MethodInfo *v127; // x2
  const MethodInfo *v128; // x4
  int32_t v129; // w0
  const MethodInfo *v130; // x2
  const MethodInfo *v131; // x1
  const MethodInfo *v132; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_4E73D59 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D59 = 1;
  }
  v9 = isNpcFollowerServantEquip;
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v10;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v24;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v31;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v38,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v38;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v45, v46, v47, v48, v49, v50);
  this->fields.userSvtEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v51, v52, v53, v54, v55, v56);
  this->fields.equipIdList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v57, v58, v59, v60, v61, v62);
  this->fields.questRestrictionInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v63, v64, v65, v66, v67, v68);
  this->fields.userSvtCollectionEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.userSvtCollectionEntity, 0, v69, v70, v71, v72, v73, v74);
  this->fields.servantLeaderInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.servantLeaderInfo, 0, v75, v76, v77, v78, v79, v80);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipTargetInfo,
    (int32_t)equipTargetInfo,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields.isEnableServantQuest = 0;
  this->fields.isEquipShowMode = 0;
  this->fields.isNpcFollowerServantEquip = v9;
  this->fields._IsMyEquip_k__BackingField = isMyEquip;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v90 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_14;
  v91 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v93 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v133.fields.currentCryptoKey = v93;
  *(_QWORD *)&v133.fields.fakeValue = v92;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v133, 0);
  if ( !v91 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v91,
             (int32_t)Instance,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.svtEntity, (int32_t)Entity, v95, v96, v97, v98, v99, v100);
  this->fields.baseSvtEntity = (struct ServantEntity_o *)Entity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)Entity,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_14;
  v107 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                               (*p_equipTargetInfo)->fields.svtId,
                               0);
  if ( !*p_equipTargetInfo )
    goto LABEL_14;
  if ( !v107 )
    goto LABEL_14;
  v108 = ServantLimitMaster__GetEntity(v107, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0);
  this->fields.svtLimitEntity = v108;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  this->fields.commandCodeIdList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList, 0, v115, v116, v117, v118, v119, v120);
  this->fields.commandCardParam = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.commandCardParam, 0, v121, v122, v123, v124, v125, v126);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v127);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v128);
  if ( !equipTargetInfo )
LABEL_14:
    sub_1D0F30C(Instance, v89);
  v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(equipTargetInfo->fields.svtId, 0);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, v129, v130);
  ServantStatusListViewItem__UpdateServantComment(this, v131);
  ServantStatusListViewItem__ModifyInfo(this, v132);
}


void ServantStatusListViewItem___ctor_37085592(
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
  const MethodInfo *v72; // x4
  const MethodInfo *v73; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4E73D5A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D5A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v21;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v28;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v35;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.userGameEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v42, v43, v44, v45, v46, v47);
  this->fields.userCommandCodeEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeEntity, 0, v48, v49, v50, v51, v52, v53);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)commandCode,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v65 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v64 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v74.fields.currentCryptoKey = v65;
  *(_QWORD *)&v74.fields.fakeValue = v64;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v74, 0);
  if ( !v63 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v63,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_3535BC8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0;
  sub_1D0F058(
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
    sub_1D0F30C(Instance, v61);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
  ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v72);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, 0, v73);
}


void ServantStatusListViewItem___ctor_37086404(
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
  const MethodInfo *v95; // x4
  const MethodInfo *v96; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4E73D5B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D5B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v19;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v26;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v33;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v42, v43, v44, v45, v46, v47);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_46;
  v50 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v101.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v100 = v101;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v100, 0);
  if ( !p_fields->userGameEntity )
    goto LABEL_46;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v51, v52, v53, v54, v55, v56);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCode,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v58 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v61 = *(_QWORD *)&v58->fields.commandCodeId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v102.fields.currentCryptoKey = v61;
  *(_QWORD *)&v102.fields.fakeValue = v60;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v102, 0);
  if ( !v59 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v59,
             Instance,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_46;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
               userCommandCodeEntity->fields.commandCodeId,
               0);
  if ( !v70 )
    goto LABEL_46;
  DataMasterBase_object__object__int___TryGetEntity(
    v70,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_3535BC8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4E710BF )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E710BF = 1;
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
  *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v71->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v101.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v99 = v101;
  if ( v73 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v99, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v80 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v81 = *(_OWORD *)&v80->fields.userId.fields.fakeValue;
        v82 = (UserCommandCodeCollectionMaster_o *)Instance;
        *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v80->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v101.fields.fakeValue = v81;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v98 = v101;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v98, 0);
        v83 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v84 = Instance;
          v86 = *(_QWORD *)&v83->fields.commandCodeId.fields.currentCryptoKey;
          v85 = *(_QWORD *)&v83->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v103.fields.currentCryptoKey = v86;
          *(_QWORD *)&v103.fields.fakeValue = v85;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v103, 0);
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
    sub_1D0F30C(Instance, v49);
  }
  this->fields.userCommandCodeCollectionEntity = 0;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  v88 = 0;
LABEL_37:
  sub_1D0F058((GrandQuestFolderBoardItem_o *)p_userCommandCodeCollectionEntity, v88, v74, v75, v76, v77, v78, v79);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  Instance = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0);
  v90 = this->fields.userCommandCodeEntity;
  this->fields.isLock = Instance & 1;
  if ( !v90 )
    goto LABEL_46;
  this->fields.isChoice = UserCommandCodeEntity__IsChoice(v90, 0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v91 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
  v93 = (UserServantCommandCodeMaster_o *)Instance;
  *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v101.fields.fakeValue = v92;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v97 = v101;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v97, 0);
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
  ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v95);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, 0, v96);
}


void ServantStatusListViewItem___ctor_37087948(
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
  const MethodInfo *v70; // x4
  const MethodInfo *v71; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4E73D5C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D5C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v19;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v26;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v33;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v42, v43, v44, v45, v46, v47);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, 0, v50, v51, v52, v53, v54, v55);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v57 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v60 = *(_QWORD *)&v57->fields.commandCodeId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v60;
  *(_QWORD *)&v72.fields.fakeValue = v59;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v72, 0);
  if ( !v58 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v58,
             (int32_t)Instance,
             (const MethodInfo_3535B7C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0),
        !v69)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v69,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_1D0F30C(Instance, v49);
  }
  UserCommandCodeCollectionEntity__GetSkillInfo(
    (UserCommandCodeCollectionEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
  ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v70);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, 0, v71);
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

  if ( (byte_4E73D7C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1D0F0B4(&StringLiteral_10223/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_4E73D7C = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
    v10 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v10,
      (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
    v12 = 392;
    if ( isTransformed )
      v12 = 528;
    v13 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&this->klass + v12);
    if ( v13 )
    {
      if ( !v10
        || (System_Collections_Generic_List_int___AddRange(
              v10,
              v13,
              (const MethodInfo_393F5F8 *)Method_System_Collections_Generic_List_int__AddRange__),
            (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
      {
LABEL_29:
        sub_1D0F30C(Instance, v13);
      }
      NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                         (PartyOrganizationUtility_o *)Instance,
                                                                                         (System_Collections_Generic_IEnumerable_int__o *)v10,
                                                                                         FriendshipUpCampaignInfo,
                                                                                         0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10223/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
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
                   (const MethodInfo_393F0FC *)Method_System_Collections_Generic_List_int__get_Item__);
          Instance = (Il2CppObject *)System_Linq_Enumerable__Contains_int_(
                                       NeedAddAnnotationSkillIds,
                                       Item,
                                       (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___);
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
              sub_1D0F314(Instance);
            v21 = (GrandQuestFolderBoardItem_o *)((char *)transformedPassiveSkillExplanationMessageList + v18);
            v22 = System_String__Concat_65562772(
                    *(System_String_o **)((char *)&transformedPassiveSkillExplanationMessageList->obj.klass + v18),
                    v16,
                    0);
            v21->klass = (GrandQuestFolderBoardItem_c *)v22;
            sub_1D0F058(v21, (int32_t)v22, v23, v24, v25, v26, v27, v28);
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


void ServantStatusListViewItem__ChangeMainServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_1D0F30C(this, method);
  this->fields._ModifyTransformVal_k__BackingField = currentLimitCountSetting->fields._TransformVal_k__BackingField;
}


void ServantStatusListViewItem__ChangeTransform(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusListViewItem_o *v8; // x19
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x9
  bool v11; // zf
  __int64 v12; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v13; // x1
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v14; // x8
  int32_t SvtId_k__BackingField; // w20
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *Master_object; // x21
  const MethodInfo *v24; // x1
  ServantLimitEntity_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1

  v8 = this;
  if ( (byte_4E73D87 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4E73D87 = 1;
  }
  tempLimitCountSetting = v8->fields.tempLimitCountSetting;
  if ( !tempLimitCountSetting )
    goto LABEL_13;
  this = (ServantStatusListViewItem_o *)&v8->fields.currentLimitCountSetting;
  currentLimitCountSetting = v8->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    goto LABEL_13;
  v11 = tempLimitCountSetting->fields._TransformVal_k__BackingField == currentLimitCountSetting->fields._TransformVal_k__BackingField;
  v12 = 224;
  if ( !v11 )
    v12 = 216;
  v13 = *(struct ServantStatusListViewItem_TempLimitCountSetting_o **)((char *)&v8->klass + v12);
  v8->fields.currentLimitCountSetting = v13;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)this, (int32_t)v13, v2, v3, v4, v5, v6, v7);
  v14 = v8->fields.currentLimitCountSetting;
  if ( !v14 )
    goto LABEL_13;
  SvtId_k__BackingField = v14->fields._SvtId_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   SvtId_k__BackingField,
                   (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        v8->fields.svtEntity = (struct ServantEntity_o *)Entity,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.svtEntity, (int32_t)Entity, v17, v18, v19, v20, v21, v22),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitMaster___),
        this = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(v8, v24),
        !Master_object) )
  {
LABEL_13:
    sub_1D0F30C(this, method);
  }
  v25 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, SvtId_k__BackingField, (int32_t)this, 0);
  v8->fields.svtLimitEntity = v25;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.svtLimitEntity, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusListViewItem__UpdateServantComment(v8, v32);
  ServantStatusListViewItem__ModifyInfo(v8, v33);
}


bool ServantStatusListViewItem__CheckCurrentMainServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_1D0F30C(this, method);
  return this->fields._ModifyTransformVal_k__BackingField == currentLimitCountSetting->fields._TransformVal_k__BackingField;
}


bool ServantStatusListViewItem__CheckEnableOwnRandomSetting(
        ServantStatusListViewItem_o *this,
        ServantStatusListViewItem_TempLimitCountSetting_o *setting,
        const MethodInfo *method)
{
  int32_t randomLimitCount; // w8

  if ( (byte_4E73D6D & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&OptionManager_TypeInfo);
    byte_4E73D6D = 1;
  }
  if ( !setting )
    sub_1D0F30C(this, setting);
  randomLimitCount = setting->fields.randomLimitCount;
  if ( randomLimitCount )
    return randomLimitCount == 1;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  return OptionManager__GetRandomLimitCountOwn(0);
}


bool ServantStatusListViewItem__CheckModifyAndGetLimitCountSetting(
        ServantStatusListViewItem_o *this,
        ServantStatusListViewItem_LimitCountSetting_o **setting,
        ServantStatusListViewItem_LimitCountSetting_o **transformSetting,
        const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  __int64 v8; // x1
  ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x0
  ServantStatusListViewItem_LimitCountSetting_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UserServantEntity_o *userSvtEntity; // x9
  int32_t imageLimitCount; // w26
  __int64 v19; // x22
  __int64 v20; // x23
  struct UserServantEntity_o *v21; // x9
  int32_t dispLimitCount; // w26
  __int64 v23; // x22
  __int64 v24; // x23
  struct UserServantEntity_o *v25; // x9
  int32_t commandCardLimitCount; // w26
  __int64 v27; // x22
  __int64 v28; // x23
  struct UserServantEntity_o *v29; // x9
  int32_t iconLimitCount; // w26
  __int64 v31; // x22
  __int64 v32; // x23
  struct UserServantEntity_o *v33; // x9
  int32_t portraitLimitCount; // w26
  __int64 v35; // x22
  __int64 v36; // x23
  struct UserServantEntity_o *v37; // x9
  int32_t randomLimitCount; // w26
  __int64 v39; // x22
  __int64 v40; // x23
  struct UserServantEntity_o *v41; // x9
  int32_t randomLimitCountSupport; // w26
  __int64 v43; // x22
  __int64 v44; // x23
  struct UserServantEntity_o *v45; // x9
  int32_t limitCountSupport; // w23
  __int64 v47; // x21
  __int64 v48; // x22
  _BOOL4 v49; // w21
  ServantStatusListViewItem_LimitCountSetting_o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  ServantStatusListViewItem_LimitCountSetting_o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  ServantStatusListViewItem_TempLimitCountSetting_o *tempTransformLimitCountSetting; // x0
  ServantStatusListViewItem_LimitCountSetting_o *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct UserServantEntity_o *v73; // x9
  int32_t v74; // w23
  __int64 v75; // x21
  __int64 v76; // x22
  struct UserServantEntity_o *v77; // x9
  int32_t v78; // w23
  __int64 v79; // x21
  __int64 v80; // x22
  struct UserServantEntity_o *v81; // x9
  int32_t v82; // w23
  __int64 v83; // x21
  __int64 v84; // x22
  struct UserServantEntity_o *v85; // x9
  int32_t v86; // w23
  __int64 v87; // x21
  __int64 v88; // x22
  struct UserServantEntity_o *v89; // x9
  int32_t v90; // w23
  __int64 v91; // x21
  __int64 v92; // x22
  struct UserServantEntity_o *v93; // x9
  int32_t v94; // w23
  __int64 v95; // x21
  __int64 v96; // x22
  struct UserServantEntity_o *v97; // x9
  int32_t v98; // w23
  __int64 v99; // x21
  __int64 v100; // x22
  struct UserServantEntity_o *v101; // x9
  int32_t v102; // w21
  __int64 v103; // x19
  __int64 v104; // x20
  ServantStatusListViewItem_LimitCountSetting_o *v105; // x20
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16

  if ( (byte_4E73D88 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D88 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity || !ServantEntity__get_IsServant(svtEntity, 0) )
  {
    v50 = (ServantStatusListViewItem_LimitCountSetting_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    ServantStatusListViewItem_LimitCountSetting___ctor(v50, 0);
    *setting = v50;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)setting, (int32_t)v50, v51, v52, v53, v54, v55, v56);
    v57 = (ServantStatusListViewItem_LimitCountSetting_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    ServantStatusListViewItem_LimitCountSetting___ctor(v57, 0);
    *transformSetting = v57;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)transformSetting, (int32_t)v57, v58, v59, v60, v61, v62, v63);
    return 0;
  }
  tempLimitCountSetting = this->fields.tempLimitCountSetting;
  if ( !tempLimitCountSetting )
    goto LABEL_93;
  v10 = ServantStatusListViewItem_TempLimitCountSetting__Export(tempLimitCountSetting, 0);
  *setting = v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)setting, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !*setting )
    goto LABEL_93;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_93;
  imageLimitCount = (*setting)->fields.imageLimitCount;
  v20 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v20;
  *(_QWORD *)&v112.fields.fakeValue = v19;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                 v112,
                                                                                 0);
  if ( imageLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v21 = this->fields.userSvtEntity;
  if ( !v21 )
    goto LABEL_93;
  dispLimitCount = (*setting)->fields.dispLimitCount;
  v24 = *(_QWORD *)&v21->fields.dispLimitCount.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v24;
  *(_QWORD *)&v113.fields.fakeValue = v23;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                 v113,
                                                                                 0);
  if ( dispLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v25 = this->fields.userSvtEntity;
  if ( !v25 )
    goto LABEL_93;
  commandCardLimitCount = (*setting)->fields.commandCardLimitCount;
  v28 = *(_QWORD *)&v25->fields.commandCardLimitCount.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.commandCardLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v28;
  *(_QWORD *)&v114.fields.fakeValue = v27;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                 v114,
                                                                                 0);
  if ( commandCardLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v29 = this->fields.userSvtEntity;
  if ( !v29 )
    goto LABEL_93;
  iconLimitCount = (*setting)->fields.iconLimitCount;
  v32 = *(_QWORD *)&v29->fields.iconLimitCount.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.iconLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v115.fields.currentCryptoKey = v32;
  *(_QWORD *)&v115.fields.fakeValue = v31;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                 v115,
                                                                                 0);
  if ( iconLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v33 = this->fields.userSvtEntity;
  if ( !v33 )
    goto LABEL_93;
  portraitLimitCount = (*setting)->fields.portraitLimitCount;
  v36 = *(_QWORD *)&v33->fields.portraitLimitCount.fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33->fields.portraitLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v116.fields.currentCryptoKey = v36;
  *(_QWORD *)&v116.fields.fakeValue = v35;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                 v116,
                                                                                 0);
  if ( portraitLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v37 = this->fields.userSvtEntity;
  if ( !v37 )
    goto LABEL_93;
  randomLimitCount = (*setting)->fields.randomLimitCount;
  v40 = *(_QWORD *)&v37->fields.randomLimitCount.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v117.fields.currentCryptoKey = v40;
  *(_QWORD *)&v117.fields.fakeValue = v39;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                 v117,
                                                                                 0);
  if ( randomLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v41 = this->fields.userSvtEntity;
  if ( !v41 )
    goto LABEL_93;
  randomLimitCountSupport = (*setting)->fields.randomLimitCountSupport;
  v44 = *(_QWORD *)&v41->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.randomLimitCountSupport.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v118.fields.currentCryptoKey = v44;
  *(_QWORD *)&v118.fields.fakeValue = v43;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                 v118,
                                                                                 0);
  if ( randomLimitCountSupport == (_DWORD)tempLimitCountSetting )
  {
    if ( !*setting )
      goto LABEL_93;
    v45 = this->fields.userSvtEntity;
    if ( !v45 )
      goto LABEL_93;
    limitCountSupport = (*setting)->fields.limitCountSupport;
    v48 = *(_QWORD *)&v45->fields.limitCountSupport.fields.currentCryptoKey;
    v47 = *(_QWORD *)&v45->fields.limitCountSupport.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v119.fields.currentCryptoKey = v48;
    *(_QWORD *)&v119.fields.fakeValue = v47;
    v49 = limitCountSupport != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v119, 0);
  }
  else
  {
LABEL_47:
    v49 = 1;
  }
  tempTransformLimitCountSetting = this->fields.tempTransformLimitCountSetting;
  if ( tempTransformLimitCountSetting )
  {
    v66 = ServantStatusListViewItem_TempLimitCountSetting__Export(tempTransformLimitCountSetting, 0);
    *transformSetting = v66;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)transformSetting, (int32_t)v66, v67, v68, v69, v70, v71, v72);
    if ( !v49 )
    {
      if ( !*transformSetting )
        goto LABEL_93;
      v73 = this->fields.userSvtEntity;
      if ( !v73 )
        goto LABEL_93;
      v74 = (*transformSetting)->fields.imageLimitCount;
      v76 = *(_QWORD *)&v73->fields.imageLimitCount2.fields.currentCryptoKey;
      v75 = *(_QWORD *)&v73->fields.imageLimitCount2.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v120.fields.currentCryptoKey = v76;
      *(_QWORD *)&v120.fields.fakeValue = v75;
      tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                     v120,
                                                                                     0);
      if ( v74 == (_DWORD)tempLimitCountSetting )
      {
        if ( !*transformSetting )
          goto LABEL_93;
        v77 = this->fields.userSvtEntity;
        if ( !v77 )
          goto LABEL_93;
        v78 = (*transformSetting)->fields.dispLimitCount;
        v80 = *(_QWORD *)&v77->fields.dispLimitCount2.fields.currentCryptoKey;
        v79 = *(_QWORD *)&v77->fields.dispLimitCount2.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v121.fields.currentCryptoKey = v80;
        *(_QWORD *)&v121.fields.fakeValue = v79;
        tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                       v121,
                                                                                       0);
        if ( v78 == (_DWORD)tempLimitCountSetting )
        {
          if ( !*transformSetting )
            goto LABEL_93;
          v81 = this->fields.userSvtEntity;
          if ( !v81 )
            goto LABEL_93;
          v82 = (*transformSetting)->fields.commandCardLimitCount;
          v84 = *(_QWORD *)&v81->fields.commandCardLimitCount2.fields.currentCryptoKey;
          v83 = *(_QWORD *)&v81->fields.commandCardLimitCount2.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v122.fields.currentCryptoKey = v84;
          *(_QWORD *)&v122.fields.fakeValue = v83;
          tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                         v122,
                                                                                         0);
          if ( v82 == (_DWORD)tempLimitCountSetting )
          {
            if ( !*transformSetting )
              goto LABEL_93;
            v85 = this->fields.userSvtEntity;
            if ( !v85 )
              goto LABEL_93;
            v86 = (*transformSetting)->fields.iconLimitCount;
            v88 = *(_QWORD *)&v85->fields.iconLimitCount2.fields.currentCryptoKey;
            v87 = *(_QWORD *)&v85->fields.iconLimitCount2.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v123.fields.currentCryptoKey = v88;
            *(_QWORD *)&v123.fields.fakeValue = v87;
            tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                           v123,
                                                                                           0);
            if ( v86 == (_DWORD)tempLimitCountSetting )
            {
              if ( !*transformSetting )
                goto LABEL_93;
              v89 = this->fields.userSvtEntity;
              if ( !v89 )
                goto LABEL_93;
              v90 = (*transformSetting)->fields.portraitLimitCount;
              v92 = *(_QWORD *)&v89->fields.portraitLimitCount2.fields.currentCryptoKey;
              v91 = *(_QWORD *)&v89->fields.portraitLimitCount2.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v124.fields.currentCryptoKey = v92;
              *(_QWORD *)&v124.fields.fakeValue = v91;
              tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                             v124,
                                                                                             0);
              if ( v90 == (_DWORD)tempLimitCountSetting )
              {
                if ( !*transformSetting )
                  goto LABEL_93;
                v93 = this->fields.userSvtEntity;
                if ( !v93 )
                  goto LABEL_93;
                v94 = (*transformSetting)->fields.randomLimitCount;
                v96 = *(_QWORD *)&v93->fields.randomLimitCount2.fields.currentCryptoKey;
                v95 = *(_QWORD *)&v93->fields.randomLimitCount2.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v125.fields.currentCryptoKey = v96;
                *(_QWORD *)&v125.fields.fakeValue = v95;
                tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                               v125,
                                                                                               0);
                if ( v94 == (_DWORD)tempLimitCountSetting )
                {
                  if ( !*transformSetting )
                    goto LABEL_93;
                  v97 = this->fields.userSvtEntity;
                  if ( !v97 )
                    goto LABEL_93;
                  v98 = (*transformSetting)->fields.randomLimitCountSupport;
                  v100 = *(_QWORD *)&v97->fields.randomLimitCountSupport2.fields.currentCryptoKey;
                  v99 = *(_QWORD *)&v97->fields.randomLimitCountSupport2.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v126.fields.currentCryptoKey = v100;
                  *(_QWORD *)&v126.fields.fakeValue = v99;
                  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                                                 v126,
                                                                                                 0);
                  if ( v98 == (_DWORD)tempLimitCountSetting )
                  {
                    if ( *transformSetting )
                    {
                      v101 = this->fields.userSvtEntity;
                      if ( v101 )
                      {
                        v102 = (*transformSetting)->fields.limitCountSupport;
                        v104 = *(_QWORD *)&v101->fields.limitCountSupport2.fields.currentCryptoKey;
                        v103 = *(_QWORD *)&v101->fields.limitCountSupport2.fields.fakeValue;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v127.fields.currentCryptoKey = v104;
                        *(_QWORD *)&v127.fields.fakeValue = v103;
                        return v102 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v127, 0);
                      }
                    }
LABEL_93:
                    sub_1D0F30C(tempLimitCountSetting, v8);
                  }
                }
              }
            }
          }
        }
      }
    }
    return 1;
  }
  else
  {
    v105 = (ServantStatusListViewItem_LimitCountSetting_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    ServantStatusListViewItem_LimitCountSetting___ctor(v105, 0);
    *transformSetting = v105;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)transformSetting, (int32_t)v105, v106, v107, v108, v109, v110, v111);
  }
  return v49;
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

  if ( (byte_4E73D83 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Append_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    byte_4E73D83 = 1;
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
                            (const MethodInfo_325F6C0 *)Method_System_Linq_Enumerable_Append_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          LimitCountStageList,
          (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
  v11 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v11, v10, limitCountStage, 0);
  return v11;
}


ServantStatusListViewItem_TempLimitCountSetting_o *ServantStatusListViewItem__CreateTempLimitCountSetting(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t transformVal,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  int32_t ServantId; // w22
  __int64 v11; // x19
  int32_t v12; // w24
  int32_t lv; // w22
  __int64 v14; // x25
  __int64 v15; // x27
  System_Int32_array *LimitCountStageList_44512076; // x0
  int32_t v17; // w24
  int32_t v18; // w25
  System_Int32_array *v19; // x22
  int32_t v20; // w0
  System_Int32_array *v21; // x25
  bool v22; // w0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_limitCountSupport; // x8
  int32_t *p_fakeValue; // x9
  __int64 v25; // x24
  int32_t v26; // w27
  int32_t DispLimitCountStage; // w0
  ServantStatusListViewItem_o *v28; // x26
  int32_t v29; // w27
  int32_t CardImageLimitCountStage; // w28
  ServantStatusListViewItem_LimitCountStageData_o *v31; // x29
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w26
  int32_t v39; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v40; // x28
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w26
  int32_t CommandCardLimitCountStage; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v49; // x28
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w26
  int32_t IconLimitCountStage; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v58; // x28
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t PortraitLimitCountStage; // w26
  ServantStatusListViewItem___c_c *v66; // x0
  System_Func_int__bool__o *_9__380_0; // x26
  Il2CppObject *v68; // x27
  struct ServantStatusListViewItem___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Int32_array *v77; // x26
  int32_t v78; // w27
  int32_t v79; // w28
  ServantStatusListViewItem_LimitCountStageData_o *v80; // x29
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int32_t v87; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v88; // x28
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  int32_t v95; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v96; // x28
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  int32_t v103; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v104; // x28
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  int32_t v111; // w20
  ServantStatusListViewItem_LimitCountStageData_o *v112; // x21
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  int32_t v119; // w21
  int32_t v120; // w23
  ServantStatusListViewItem_LimitCountStageData_o *v121; // x20
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  if ( (byte_4E73D81 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
    sub_1D0F0B4(&Method_ServantStatusListViewItem___c__CreateTempLimitCountSetting_b__380_0__);
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&ServantStatusListViewItem___c_TypeInfo);
    byte_4E73D81 = 1;
  }
  *(_DWORD *)&value.fields.inited = 0;
  if ( !userServantEntity )
    goto LABEL_26;
  ServantId = UserServantEntity__GetServantId(userServantEntity, transformVal, 0);
  v11 = sub_1D0F300(ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
  ServantStatusListViewItem_TempLimitCountSetting___ctor(
    (ServantStatusListViewItem_TempLimitCountSetting_o *)v11,
    ServantId,
    transformVal,
    0);
  if ( !v11 )
    goto LABEL_26;
  v12 = *(_DWORD *)(v11 + 16);
  lv = userServantEntity->fields.lv;
  v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v130.fields.currentCryptoKey = v15;
  *(_QWORD *)&v130.fields.fakeValue = v14;
  this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v130, 0);
  if ( !userServantCollectionEntity )
    goto LABEL_26;
  LimitCountStageList_44512076 = UserServantCollectionEntity__GetLimitCountStageList_44512076(
                                   userServantCollectionEntity,
                                   v12,
                                   lv,
                                   (int32_t)this,
                                   1,
                                   0);
  v17 = *(_DWORD *)(v11 + 16);
  v18 = userServantEntity->fields.lv;
  v19 = LimitCountStageList_44512076;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(userServantEntity->fields.limitCount, 0);
  v21 = UserServantCollectionEntity__GetLimitCountStageList_44512076(userServantCollectionEntity, v17, v18, v20, 0, 0);
  v22 = UserServantEntity__CheckBaseServant(userServantEntity, transformVal, 0);
  p_limitCountSupport = &userServantEntity->fields.limitCountSupport;
  p_fakeValue = &userServantEntity->fields.limitCountSupport.fields.fakeValue;
  if ( !v22 )
  {
    p_fakeValue = &userServantEntity->fields.limitCountSupport2.fields.fakeValue;
    p_limitCountSupport = &userServantEntity->fields.limitCountSupport2;
  }
  v25 = *(_QWORD *)p_fakeValue;
  *(_QWORD *)&value.fields.currentCryptoKey = *(_QWORD *)&p_limitCountSupport->fields.currentCryptoKey;
  if ( questRestrictionInfo )
  {
    if ( !QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
            questRestrictionInfo,
            *(_DWORD *)(v11 + 16),
            0,
            0) )
    {
      v26 = *(_DWORD *)(v11 + 16);
      DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(
                              userServantEntity,
                              transformVal,
                              1,
                              questRestrictionInfo,
                              0);
      if ( QuestRestrictionInfo__TryConvertOverwriteImageLimitCount(
             questRestrictionInfo,
             v26,
             DispLimitCountStage,
             (int32_t *)&value.fields.inited,
             0) )
      {
        *(_BYTE *)(v11 + 24) = 1;
        this = (ServantStatusListViewItem_o *)sub_1D0F15C(int___TypeInfo, 1);
        if ( this )
        {
          v28 = this;
          if ( !LODWORD(this->fields.partyItem) )
            sub_1D0F314(this);
          LODWORD(this->fields.memberItem) = *(_DWORD *)&value.fields.inited;
          v29 = *(_DWORD *)&value.fields.inited;
          CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(
                                       userServantEntity,
                                       transformVal,
                                       1,
                                       0,
                                       0);
          v31 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_38205836(
            v31,
            (System_Int32_array *)v28,
            v29,
            CardImageLimitCountStage,
            0);
          *(_QWORD *)(v11 + 32) = v31;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
          v38 = *(_DWORD *)&value.fields.inited;
          v39 = UserServantEntity__GetDispLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
          v40 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v40, v21, v38, v39, 0);
          *(_QWORD *)(v11 + 40) = v40;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)v40, v41, v42, v43, v44, v45, v46);
          v47 = *(_DWORD *)&value.fields.inited;
          CommandCardLimitCountStage = UserServantEntity__GetCommandCardLimitCountStage(
                                         userServantEntity,
                                         transformVal,
                                         1,
                                         0);
          v49 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v49, v21, v47, CommandCardLimitCountStage, 0);
          *(_QWORD *)(v11 + 48) = v49;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)v49, v50, v51, v52, v53, v54, v55);
          v56 = *(_DWORD *)&value.fields.inited;
          IconLimitCountStage = UserServantEntity__GetIconLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
          v58 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v58, v19, v56, IconLimitCountStage, 0);
          *(_QWORD *)(v11 + 56) = v58;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 56), (int32_t)v58, v59, v60, v61, v62, v63, v64);
          PortraitLimitCountStage = *(_DWORD *)&value.fields.inited;
          goto LABEL_23;
        }
LABEL_26:
        sub_1D0F30C(this, userServantEntity);
      }
    }
  }
  v66 = ServantStatusListViewItem___c_TypeInfo;
  if ( !ServantStatusListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItem___c_TypeInfo);
    v66 = ServantStatusListViewItem___c_TypeInfo;
  }
  _9__380_0 = v66->static_fields->__9__380_0;
  if ( !_9__380_0 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = ServantStatusListViewItem___c_TypeInfo;
    }
    v68 = (Il2CppObject *)v66->static_fields->__9;
    _9__380_0 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__380_0,
      v68,
      Method_ServantStatusListViewItem___c__CreateTempLimitCountSetting_b__380_0__,
      0);
    static_fields = ServantStatusListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__380_0 = _9__380_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__380_0,
      (int32_t)_9__380_0,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  v76 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (System_Func_TSource__bool__o *)_9__380_0,
          (const MethodInfo_3297274 *)Method_System_Linq_Enumerable_Where_int___);
  v77 = System_Linq_Enumerable__ToArray_int_(
          v76,
          (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
  v78 = UserServantEntity__GetCardImageLimitCountStage(userServantEntity, transformVal, 0, 0, 0);
  v79 = UserServantEntity__GetCardImageLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
  v80 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v80, v77, v78, v79, 0);
  *(_QWORD *)(v11 + 32) = v80;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v80, v81, v82, v83, v84, v85, v86);
  LODWORD(v77) = UserServantEntity__GetDispLimitCountStage(userServantEntity, transformVal, 0, 0, 0);
  v87 = UserServantEntity__GetDispLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
  v88 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v88, v21, (int32_t)v77, v87, 0);
  *(_QWORD *)(v11 + 40) = v88;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)v88, v89, v90, v91, v92, v93, v94);
  LODWORD(v77) = UserServantEntity__GetCommandCardLimitCountStage(userServantEntity, transformVal, 0, 0);
  v95 = UserServantEntity__GetCommandCardLimitCountStage(userServantEntity, transformVal, 1, 0);
  v96 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v96, v21, (int32_t)v77, v95, 0);
  *(_QWORD *)(v11 + 48) = v96;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)v96, v97, v98, v99, v100, v101, v102);
  LODWORD(v77) = UserServantEntity__GetIconLimitCountStage(userServantEntity, transformVal, 0, 0, 0);
  v103 = UserServantEntity__GetIconLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
  v104 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v104, v19, (int32_t)v77, v103, 0);
  *(_QWORD *)(v11 + 56) = v104;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 56), (int32_t)v104, v105, v106, v107, v108, v109, v110);
  PortraitLimitCountStage = UserServantEntity__GetPortraitLimitCountStage(userServantEntity, transformVal, 0, 0);
LABEL_23:
  v111 = UserServantEntity__GetPortraitLimitCountStage(userServantEntity, transformVal, 1, 0);
  v112 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v112, v21, PortraitLimitCountStage, v111, 0);
  *(_QWORD *)(v11 + 64) = v112;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 64), (int32_t)v112, v113, v114, v115, v116, v117, v118);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v131.fields.fakeValue = v25;
  *(_QWORD *)&v131.fields.currentCryptoKey = *(_QWORD *)&value.fields.currentCryptoKey;
  v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v131, 0);
  *(_QWORD *)&v132.fields.currentCryptoKey = *(_QWORD *)&value.fields.currentCryptoKey;
  *(_QWORD *)&v132.fields.fakeValue = v25;
  v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v132, 0);
  v121 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_38205836(v121, v19, v119, v120, 0);
  *(_QWORD *)(v11 + 72) = v121;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 72), (int32_t)v121, v122, v123, v124, v125, v126, v127);
  return (ServantStatusListViewItem_TempLimitCountSetting_o *)v11;
}


ServantStatusListViewItem_TempLimitCountSetting_o *ServantStatusListViewItem__CreateTempLimitCountSetting_37101124(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t transformVal,
        const MethodInfo *method)
{
  int32_t ServantId; // w22
  __int64 v7; // x21
  int32_t CardImageLimitCountStage; // w22
  ServantStatusListViewItem_o *v9; // x23
  ServantStatusListViewItem_LimitCountStageData_o *v10; // x24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t MaxLimitCountStage; // w23
  int32_t v18; // w22
  ServantStatusListViewItem_o *DispLimitCountStage; // x0
  const MethodInfo *v20; // x4
  ServantStatusListViewItem_LimitCountStageData_o *LimitCountStageDataForOtherServant; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  ServantStatusListViewItem_o *CommandCardLimitCountStage; // x0
  const MethodInfo *v29; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  ServantStatusListViewItem_o *IconLimitCountStage; // x0
  const MethodInfo *v38; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  ServantStatusListViewItem_o *PortraitLimitCountStage; // x0
  const MethodInfo *v47; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7

  if ( (byte_4E73D82 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
    byte_4E73D82 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_8;
  ServantId = ServantLeaderInfo__GetServantId(servantLeaderInfo, transformVal, 0);
  v7 = sub_1D0F300(ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
  ServantStatusListViewItem_TempLimitCountSetting___ctor(
    (ServantStatusListViewItem_TempLimitCountSetting_o *)v7,
    ServantId,
    transformVal,
    0);
  CardImageLimitCountStage = ServantLeaderInfo__GetCardImageLimitCountStage(servantLeaderInfo, transformVal, 0);
  this = (ServantStatusListViewItem_o *)sub_1D0F15C(int___TypeInfo, 1);
  if ( !this )
    goto LABEL_8;
  v9 = this;
  if ( !LODWORD(this->fields.partyItem) )
    sub_1D0F314(this);
  LODWORD(this->fields.memberItem) = CardImageLimitCountStage;
  v10 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v10, (System_Int32_array *)v9, CardImageLimitCountStage, 0);
  if ( !v7 )
LABEL_8:
    sub_1D0F30C(this, servantLeaderInfo);
  *(_QWORD *)(v7 + 32) = v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v10, v11, v12, v13, v14, v15, v16);
  MaxLimitCountStage = ServantLeaderInfo__GetMaxLimitCountStage(servantLeaderInfo, 1, 0);
  v18 = ServantLeaderInfo__GetMaxLimitCountStage(servantLeaderInfo, 0, 0);
  DispLimitCountStage = (ServantStatusListViewItem_o *)ServantLeaderInfo__GetDispLimitCountStage(
                                                         servantLeaderInfo,
                                                         transformVal,
                                                         0);
  LimitCountStageDataForOtherServant = ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
                                         DispLimitCountStage,
                                         (int32_t)DispLimitCountStage,
                                         v18,
                                         0,
                                         v20);
  *(_QWORD *)(v7 + 40) = LimitCountStageDataForOtherServant;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)(v7 + 40),
    (int32_t)LimitCountStageDataForOtherServant,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  CommandCardLimitCountStage = (ServantStatusListViewItem_o *)ServantLeaderInfo__GetCommandCardLimitCountStage(
                                                                servantLeaderInfo,
                                                                transformVal,
                                                                0);
  v30 = ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
          CommandCardLimitCountStage,
          (int32_t)CommandCardLimitCountStage,
          v18,
          0,
          v29);
  *(_QWORD *)(v7 + 48) = v30;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)v30, v31, v32, v33, v34, v35, v36);
  IconLimitCountStage = (ServantStatusListViewItem_o *)ServantLeaderInfo__GetIconLimitCountStage(
                                                         servantLeaderInfo,
                                                         transformVal,
                                                         0);
  v39 = ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
          IconLimitCountStage,
          (int32_t)IconLimitCountStage,
          MaxLimitCountStage,
          1,
          v38);
  *(_QWORD *)(v7 + 56) = v39;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 56), (int32_t)v39, v40, v41, v42, v43, v44, v45);
  PortraitLimitCountStage = (ServantStatusListViewItem_o *)ServantLeaderInfo__GetPortraitLimitCountStage(
                                                             servantLeaderInfo,
                                                             transformVal,
                                                             0);
  v48 = ServantStatusListViewItem__CreateLimitCountStageDataForOtherServant(
          PortraitLimitCountStage,
          (int32_t)PortraitLimitCountStage,
          v18,
          0,
          v47);
  *(_QWORD *)(v7 + 64) = v48;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 64), (int32_t)v48, v49, v50, v51, v52, v53, v54);
  return (ServantStatusListViewItem_TempLimitCountSetting_o *)v7;
}


ServantStatusListViewItem_TempLimitCountSetting_o *ServantStatusListViewItem__CreateTempLimitCountSetting_37101908(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        int32_t svtId,
        int32_t transformVal,
        const MethodInfo *method)
{
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t LimitCountStage; // w21
  int32_t v12; // w20
  System_Collections_Generic_IEnumerable_TSource__o *LimitCountStageList; // x23
  System_Int32_array *v14; // x0
  ServantStatusListViewItem___c_c *v15; // x8
  System_Int32_array *v16; // x22
  System_Func_int__bool__o *_9__385_0; // x24
  Il2CppObject *v18; // x25
  struct ServantStatusListViewItem___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Int32_array *v27; // x25
  ServantStatusListViewItem_LimitCountStageData_o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v35; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v42; // x24
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v49; // x24
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7

  if ( (byte_4E73D85 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
    sub_1D0F0B4(&Method_ServantStatusListViewItem___c__CreateTempLimitCountSetting_b__385_0__);
    sub_1D0F0B4(&ServantStatusListViewItem___c_TypeInfo);
    byte_4E73D85 = 1;
  }
  v8 = sub_1D0F300(ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
  ServantStatusListViewItem_TempLimitCountSetting___ctor(
    (ServantStatusListViewItem_TempLimitCountSetting_o *)v8,
    svtId,
    transformVal,
    0);
  if ( !userServantCollectionEntity )
    goto LABEL_12;
  LimitCountStage = UserServantCollectionEntity__GetLimitCountStage(userServantCollectionEntity, 1, 0);
  v12 = UserServantCollectionEntity__GetLimitCountStage(userServantCollectionEntity, 0, 0);
  LimitCountStageList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantCollectionEntity__GetLimitCountStageList(
                                                                               userServantCollectionEntity,
                                                                               svtId,
                                                                               1,
                                                                               0);
  v14 = UserServantCollectionEntity__GetLimitCountStageList(userServantCollectionEntity, svtId, 0, 0);
  v15 = ServantStatusListViewItem___c_TypeInfo;
  v16 = v14;
  if ( !ServantStatusListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItem___c_TypeInfo);
    v15 = ServantStatusListViewItem___c_TypeInfo;
  }
  _9__385_0 = v15->static_fields->__9__385_0;
  if ( !_9__385_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = ServantStatusListViewItem___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__385_0 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__385_0,
      v18,
      Method_ServantStatusListViewItem___c__CreateTempLimitCountSetting_b__385_0__,
      0);
    static_fields = ServantStatusListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__385_0 = _9__385_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__385_0,
      (int32_t)_9__385_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__Where_int_(
          LimitCountStageList,
          (System_Func_TSource__bool__o *)_9__385_0,
          (const MethodInfo_3297274 *)Method_System_Linq_Enumerable_Where_int___);
  v27 = System_Linq_Enumerable__ToArray_int_(
          v26,
          (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
  v28 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v28, v27, LimitCountStage, 0);
  if ( !v8 )
LABEL_12:
    sub_1D0F30C(v9, v10);
  *(_QWORD *)(v8 + 32) = v28;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v8 + 32), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v35, v16, v12, 0);
  *(_QWORD *)(v8 + 40) = v35;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v8 + 40), (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v42, v16, v12, 0);
  *(_QWORD *)(v8 + 48) = v42;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v8 + 48), (int32_t)v42, v43, v44, v45, v46, v47, v48);
  v49 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(
    v49,
    (System_Int32_array *)LimitCountStageList,
    LimitCountStage,
    0);
  *(_QWORD *)(v8 + 56) = v49;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v8 + 56), (int32_t)v49, v50, v51, v52, v53, v54, v55);
  v56 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v56, v16, v12, 0);
  *(_QWORD *)(v8 + 64) = v56;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v8 + 64), (int32_t)v56, v57, v58, v59, v60, v61, v62);
  return (ServantStatusListViewItem_TempLimitCountSetting_o *)v8;
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
  sub_1D0F058(
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
  sub_1D0F058(
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
  sub_1D0F058(
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
  sub_1D0F058(
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)lvList, (int32_t)appendPassiveSkillLvList, v36, v37, v38, v39, v40, v41);
}


ServantEntity_o *ServantStatusListViewItem__GetBaseServantEntity(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.baseSvtEntity;
}


int32_t ServantStatusListViewItem__GetCardImageLimitCountStage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (cardImageLimitCountStageData = currentLimitCountSetting->fields.cardImageLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return cardImageLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetCardImageLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (cardImageLimitCountStageData = currentLimitCountSetting->fields.cardImageLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return cardImageLimitCountStageData->fields._StageList_k__BackingField;
}


int32_t ServantStatusListViewItem__GetCardImageLimitCountStageSealAfter(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t SvtId; // w20
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w21
  const MethodInfo *v7; // x1
  int32_t CardImageLimitCountStage; // w2

  SvtId = ServantStatusListViewItem__GetSvtId(this, 0, v2);
  LimitCount = ServantStatusListViewItem__get_LimitCount(this, v5);
  CardImageLimitCountStage = ServantStatusListViewItem__GetCardImageLimitCountStage(this, v7);
  return LimitCountUtility__GetSealAfter(SvtId, LimitCount, CardImageLimitCountStage, 1, 0);
}


int32_t ServantStatusListViewItem__GetCardImageLimitCountStageSealAfterAtStageLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t LimitCount; // w20
  const MethodInfo *v4; // x1
  int32_t CardImageLimitCountStageSealAfter; // w1

  LimitCount = ServantStatusListViewItem__get_LimitCount(this, method);
  CardImageLimitCountStageSealAfter = ServantStatusListViewItem__GetCardImageLimitCountStageSealAfter(this, v4);
  return LimitCountUtility__ConvertStageToLimitCount(LimitCount, CardImageLimitCountStageSealAfter, 1, 0);
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
      sub_1D0F30C(this, checkTransform);
  }
  return TransformedServant_k__BackingField->fields.cardIds;
}


int32_t ServantStatusListViewItem__GetCommandCardLimitCountStage(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t *p_TransformedServantDispLimitCount_k__BackingField; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x8

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
  {
    p_TransformedServantDispLimitCount_k__BackingField = &this->fields._TransformedServantDispLimitCount_k__BackingField;
  }
  else
  {
    currentLimitCountSetting = this->fields.currentLimitCountSetting;
    if ( !currentLimitCountSetting
      || (commandCardLimitCountStageData = currentLimitCountSetting->fields.commandCardLimitCountStageData) == 0 )
    {
      sub_1D0F30C(this, checkTransform);
    }
    p_TransformedServantDispLimitCount_k__BackingField = &commandCardLimitCountStageData->fields._Stage_k__BackingField;
  }
  return *p_TransformedServantDispLimitCount_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetCommandCardLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (commandCardLimitCountStageData = currentLimitCountSetting->fields.commandCardLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return commandCardLimitCountStageData->fields._StageList_k__BackingField;
}


int32_t ServantStatusListViewItem__GetCommandCardLimitCountStageSealAfter(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t SvtId; // w21
  const MethodInfo *v6; // x1
  int32_t LimitCount; // w22
  const MethodInfo *v8; // x2
  int32_t CommandCardLimitCountStage; // w2

  SvtId = ServantStatusListViewItem__GetSvtId(this, 0, method);
  LimitCount = ServantStatusListViewItem__get_LimitCount(this, v6);
  CommandCardLimitCountStage = ServantStatusListViewItem__GetCommandCardLimitCountStage(this, checkTransform, v8);
  return LimitCountUtility__GetSealAfter(SvtId, LimitCount, CommandCardLimitCountStage, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetCommandCardLimitCountStageSealAfterAtStageLimitCount(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t LimitCount; // w21
  const MethodInfo *v6; // x2
  int32_t CommandCardLimitCountStageSealAfter; // w1

  LimitCount = ServantStatusListViewItem__get_LimitCount(this, (const MethodInfo *)checkTransform);
  CommandCardLimitCountStageSealAfter = ServantStatusListViewItem__GetCommandCardLimitCountStageSealAfter(
                                          this,
                                          checkTransform,
                                          v6);
  return LimitCountUtility__ConvertStageToLimitCount(LimitCount, CommandCardLimitCountStageSealAfter, 0, 0);
}


int32_t ServantStatusListViewItem__GetCvId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v2; // x21
  struct ServantEntity_o *baseSvtEntity; // x22
  int32_t cvId; // w19
  int32_t CardImageLimitCountStageSealAfterAtStageLimitCount; // w20
  ServantStatusListViewItem_o *v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v2 = this;
  if ( (byte_4E73D75 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D75 = 1;
  }
  entity = 0;
  baseSvtEntity = v2->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_17;
  cvId = baseSvtEntity->fields.cvId;
  CardImageLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetCardImageLimitCountStageSealAfterAtStageLimitCount(
                                                         v2,
                                                         method);
  if ( v2->fields.tempTransformLimitCountSetting
    && LimitCountUtility__IsCostume(CardImageLimitCountStageSealAfterAtStageLimitCount, 0) )
  {
    baseSvtEntity = v2->fields.svtEntity;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !baseSvtEntity )
    goto LABEL_17;
  v6 = this;
  v8 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v11, 0);
  if ( !v6 )
    goto LABEL_17;
  if ( ServantLimitAddMaster__TryGetEntity(
         (ServantLimitAddMaster_o *)v6,
         &entity,
         (int32_t)this,
         CardImageLimitCountStageSealAfterAtStageLimitCount,
         0) )
  {
    this = (ServantStatusListViewItem_o *)entity;
    if ( entity )
      return ServantLimitAddEntity__GetOverwriteCvId(entity, cvId, 0);
LABEL_17:
    sub_1D0F30C(this, method);
  }
  return cvId;
}


System_String_o *ServantStatusListViewItem__GetDetailName(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  CommandCodeEntity_o *commandCodeEntity; // x0
  ServantEntity_o *baseSvtEntity; // x20
  const MethodInfo *v6; // x1
  ServantEntity_o *svtEntity; // x8

  commandCodeEntity = this->fields.commandCodeEntity;
  if ( commandCodeEntity )
    return CommandCodeEntity__GetName(commandCodeEntity, 0);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_8;
  if ( ServantEntity__get_IsServantEquip(this->fields.baseSvtEntity, 0) )
    return ServantEntity__GetDetailName(baseSvtEntity, 0);
  commandCodeEntity = (CommandCodeEntity_o *)ServantStatusListViewItem__GetCardImageLimitCountStageSealAfterAtStageLimitCount(
                                               this,
                                               v6);
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
LABEL_8:
    sub_1D0F30C(commandCodeEntity, method);
  return ServantEntity__getName(svtEntity, -1, (int32_t)commandCodeEntity, 0, 1, 0);
}


int32_t ServantStatusListViewItem__GetDispLimitCountStage(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t *p_TransformedServantDispLimitCount_k__BackingField; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
  {
    p_TransformedServantDispLimitCount_k__BackingField = &this->fields._TransformedServantDispLimitCount_k__BackingField;
  }
  else
  {
    currentLimitCountSetting = this->fields.currentLimitCountSetting;
    if ( !currentLimitCountSetting
      || (dispLimitCountStageData = currentLimitCountSetting->fields.dispLimitCountStageData) == 0 )
    {
      sub_1D0F30C(this, checkTransform);
    }
    p_TransformedServantDispLimitCount_k__BackingField = &dispLimitCountStageData->fields._Stage_k__BackingField;
  }
  return *p_TransformedServantDispLimitCount_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetDispLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (dispLimitCountStageData = currentLimitCountSetting->fields.dispLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return dispLimitCountStageData->fields._StageList_k__BackingField;
}


int32_t ServantStatusListViewItem__GetDispLimitCountStageSealAfter(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  bool v3; // w20
  int32_t SvtId; // w21
  const MethodInfo *v6; // x1
  int32_t LimitCount; // w22
  const MethodInfo *v8; // x2
  int32_t DispLimitCountStage; // w2

  v3 = checkTransform;
  SvtId = ServantStatusListViewItem__GetSvtId(this, checkTransform, method);
  LimitCount = ServantStatusListViewItem__get_LimitCount(this, v6);
  DispLimitCountStage = ServantStatusListViewItem__GetDispLimitCountStage(this, v3, v8);
  return LimitCountUtility__GetSealAfter(SvtId, LimitCount, DispLimitCountStage, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t LimitCount; // w21
  const MethodInfo *v6; // x2
  int32_t DispLimitCountStageSealAfter; // w1

  LimitCount = ServantStatusListViewItem__get_LimitCount(this, (const MethodInfo *)checkTransform);
  DispLimitCountStageSealAfter = ServantStatusListViewItem__GetDispLimitCountStageSealAfter(this, checkTransform, v6);
  return LimitCountUtility__ConvertStageToLimitCount(LimitCount, DispLimitCountStageSealAfter, 0, 0);
}


int32_t ServantStatusListViewItem__GetDispLimitCountStageSealAfterIndexZero(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t DispLimitCountStageSealAfter; // w0

  DispLimitCountStageSealAfter = ServantStatusListViewItem__GetDispLimitCountStageSealAfter(
                                   this,
                                   checkTransform,
                                   method);
  return LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipAtkByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4E73D69 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4E73D69 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[10].monitor;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1D0F30C(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4E73D6B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4E73D6B = 1;
  }
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_9;
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               equipGrandServantEntityList,
                                                                               index,
                                                                               (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
  if ( equipGrandServantEntityList )
  {
    equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
    if ( equipGrandServantEntityList )
    {
      equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   equipGrandServantEntityList,
                                                                                   index,
                                                                                   (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
      if ( equipGrandServantEntityList )
      {
        LODWORD(equipGrandServantEntityList) = equipGrandServantEntityList[3].fields._syncRoot;
        return (int)equipGrandServantEntityList;
      }
    }
LABEL_9:
    sub_1D0F30C(equipGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4E73D6F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4E73D6F = 1;
  }
  equipUserGrandServantEntityList = this->fields.equipUserGrandServantEntityList;
  if ( equipUserGrandServantEntityList
    && System_Collections_Generic_List_object___get_Item(
         (System_Collections_Generic_List_object__o *)equipUserGrandServantEntityList,
         index,
         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( !Item
      || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                index,
                                                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0 )
    {
      sub_1D0F30C(Item, v6);
    }
    LODWORD(Item) = HIDWORD(Item[10].klass);
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

  if ( (byte_4E73D70 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4E73D70 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getExpInfo(
                 (UserServantEntity_o *)equipUserGrandServantEntityList,
                 exp,
                 lateExp,
                 barExp,
                 0);
    }
LABEL_12:
    sub_1D0F30C(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4E73D6A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4E73D6A = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = HIDWORD(equipUserGrandServantEntityList[10].monitor);
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1D0F30C(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4E73D71 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_4E73D71 = 1;
  }
  grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
  if ( !grandServantEquipTargetIdList )
    sub_1D0F30C(0, *(_QWORD *)&index);
  return System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_3944154 *)Method_System_Collections_Generic_List_long__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_4E73D65 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4E73D65 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[10].klass;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_1D0F30C(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4E73D68 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D68 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        items = equipUserGrandServantEntityList[2].fields._items;
        v6 = *(_QWORD *)&equipUserGrandServantEntityList[2].fields._size;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v10.fields.currentCryptoKey = items;
        *(_QWORD *)&v10.fields.fakeValue = v6;
        LODWORD(servantLeaderInfo) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
        return (int)servantLeaderInfo;
      }
    }
LABEL_14:
    sub_1D0F30C(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4E73D66 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_4E73D66 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getLevelMax((UserServantEntity_o *)equipUserGrandServantEntityList, 0);
    }
LABEL_12:
    sub_1D0F30C(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_4E73D64 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4E73D64 = 1;
  }
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    sub_1D0F30C(0, *(_QWORD *)&index);
  return (ServantEntity_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)equipGrandServantEntityList,
                              index,
                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
  sub_1D0F058(
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

  if ( (byte_4E73D72 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo____get_Item__);
    byte_4E73D72 = 1;
  }
  grandServantSkillInfoList = this->fields.grandServantSkillInfoList;
  if ( !grandServantSkillInfoList )
    sub_1D0F30C(0, *(_QWORD *)&index);
  Item = (SkillInfo_array *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)grandServantSkillInfoList,
                              index,
                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_SkillInfo____get_Item__);
  *skillInfoList = Item;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)Item, v9, v10, v11, v12, v13, v14);
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
  struct ServantEntity_o *baseSvtEntity; // x8
  struct UserServantCollectionEntity_o *v15; // x9
  FriendshipMaster_o *v16; // x24
  int32_t friendshipId; // w25
  __int64 v18; // x26
  __int64 v19; // x27
  struct ServantEntity_o *v20; // x8
  struct UserServantCollectionEntity_o *v21; // x9
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4E73D73 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E73D73 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_19;
  v15 = this->fields.userSvtCollectionEntity;
  if ( !v15 )
    goto LABEL_19;
  v16 = (FriendshipMaster_o *)Instance;
  friendshipId = baseSvtEntity->fields.friendshipId;
  v18 = *(_QWORD *)&v15->fields.friendship.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v15->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v18;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v24, 0);
  v20 = this->fields.baseSvtEntity;
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
    sub_1D0F30C(Instance, v13);
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

  if ( (byte_4E73D7D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1D0F0B4(&EventDropUpValInfo_TypeInfo);
    sub_1D0F0B4(&FunctionEntity_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E73D7D = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v4 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v33,
             (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v8 )
        break;
      current = v33.fields._current;
      if ( !v33.fields._current )
        sub_1D0F30C(v8, v9);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v33.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v12 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v12 )
          sub_1D0F30C(0, v13);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v12, svtId, 0);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0) )
        {
          v15 = sub_1D0F300(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v15, 0);
          if ( !v15 )
            sub_1D0F30C(v16, v17);
          *(_QWORD *)(v15 + 24) = 111;
          v18 = (EventDropUpValInfo_o *)sub_1D0F300(EventDropUpValInfo_TypeInfo);
          EventDropUpValInfo___ctor(v18, 0, (FunctionEntity_o *)v15, 0);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
          if ( !v18 )
            sub_1D0F30C(OnlyMaxFuncGroupId, v20);
          v18->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v4 )
            sub_1D0F30C(OnlyMaxFuncGroupId, v20);
          items = v4->fields._items;
          v28 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1D0F30C(OnlyMaxFuncGroupId, v20);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v18,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v18;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v18, v21, v22, v23, v24, v25, v26);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v33,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v4 )
LABEL_35:
    sub_1D0F30C(Instance, v7);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v4,
                                       (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


int32_t ServantStatusListViewItem__GetIconLimitCountStage(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (iconLimitCountStageData = currentLimitCountSetting->fields.iconLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return iconLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetIconLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (iconLimitCountStageData = currentLimitCountSetting->fields.iconLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v8, (int32_t)method, v3, v4, v5, v6, v7);
  return this->fields.isTdResult;
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
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0
  System_Int32_array *passiveSkillIdList; // x1
  System_String_array *passiveSkillTitleMessageList; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_String_array **p_transformedPassiveSkillExplanationMessageList; // x8
  System_Int32_array *transformedPassiveSkillIdList; // x1
  System_String_array *transformedPassiveSkillTitleMessageList; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_String_array *v36; // x1

  if ( checkTransform
    && this->fields._IsTransformed_k__BackingField
    && ((transformInfoBefore = this->fields.transformInfoBefore) == 0
     || !ServantEntity_TransformInfo__IsNotClassSkillChange(transformInfoBefore, 0)) )
  {
    transformedPassiveSkillIdList = this->fields.transformedPassiveSkillIdList;
    *idList = transformedPassiveSkillIdList;
    sub_1D0F058(
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
    sub_1D0F058(
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
    sub_1D0F058(
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
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)titleList,
      (int32_t)passiveSkillTitleMessageList,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    p_transformedPassiveSkillExplanationMessageList = &this->fields.passiveSkillExplanationMessageList;
  }
  v36 = *p_transformedPassiveSkillExplanationMessageList;
  *explanationList = *p_transformedPassiveSkillExplanationMessageList;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v36, v21, v22, v23, v24, v25, v26);
}


int32_t ServantStatusListViewItem__GetPortraitLimitCountStage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (portraitLimitCountStageData = currentLimitCountSetting->fields.portraitLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return portraitLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetPortraitLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (portraitLimitCountStageData = currentLimitCountSetting->fields.portraitLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return portraitLimitCountStageData->fields._StageList_k__BackingField;
}


int32_t ServantStatusListViewItem__GetPortraitLimitCountStageSealAfter(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t SvtId; // w20
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w21
  const MethodInfo *v7; // x1
  int32_t PortraitLimitCountStage; // w2

  SvtId = ServantStatusListViewItem__GetSvtId(this, 0, v2);
  LimitCount = ServantStatusListViewItem__get_LimitCount(this, v5);
  PortraitLimitCountStage = ServantStatusListViewItem__GetPortraitLimitCountStage(this, v7);
  return LimitCountUtility__GetSealAfter(SvtId, LimitCount, PortraitLimitCountStage, 0, 0);
}


int32_t ServantStatusListViewItem__GetPortraitLimitCountStageSealAfterAtStageLimitCount(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t LimitCount; // w20
  const MethodInfo *v4; // x1
  int32_t PortraitLimitCountStageSealAfter; // w1

  LimitCount = ServantStatusListViewItem__get_LimitCount(this, method);
  PortraitLimitCountStageSealAfter = ServantStatusListViewItem__GetPortraitLimitCountStageSealAfter(this, v4);
  return LimitCountUtility__ConvertStageToLimitCount(LimitCount, PortraitLimitCountStageSealAfter, 0, 0);
}


int32_t ServantStatusListViewItem__GetRandomLimitCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_1D0F30C(this, method);
  return currentLimitCountSetting->fields.randomLimitCount;
}


int32_t ServantStatusListViewItem__GetRandomLimitCountSupport(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_1D0F30C(this, method);
  return currentLimitCountSetting->fields.randomLimitCountSupport;
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)skillInfoList,
    (int32_t)v10,
    checkTransform,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
ServantOverwriteStatus_o *ServantStatusListViewItem__GetStatus(
        ServantStatusListViewItem_o *this,
        int32_t stageLimitCount,
        const MethodInfo *method)
{
  int32_t v3; // w19
  ServantStatusListViewItem_o *v4; // x20
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  UserServantEntity_o *userSvtEntity; // x21
  int32_t TransformVal_k__BackingField; // w8
  struct PartyListViewItem_o *partyItem; // x22
  struct UserGameEntity_o *userGameEntity; // x23
  int32_t v10; // w23
  ServantOverwriteStatus_o *v11; // x22
  ServantLeaderInfo_o *servantLeaderInfo; // x21
  struct PartyListViewItem_o *v13; // x20
  struct UserGameEntity_o *v14; // x22
  int32_t v15; // w20
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  int32_t SvtId; // w20
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w19
  ServantOverwriteStatus_o *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v3 = stageLimitCount;
  v4 = this;
  if ( (byte_4E73D7B & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&ServantOverwriteStatus_TypeInfo);
    byte_4E73D7B = 1;
  }
  currentLimitCountSetting = v4->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    goto LABEL_25;
  userSvtEntity = v4->fields.userSvtEntity;
  TransformVal_k__BackingField = currentLimitCountSetting->fields._TransformVal_k__BackingField;
  if ( userSvtEntity )
  {
    if ( TransformVal_k__BackingField )
    {
      this = (ServantStatusListViewItem_o *)UserServantEntity__get_SaveTransformServantEntity(
                                              v4->fields.userSvtEntity,
                                              0);
      if ( !this )
        goto LABEL_25;
      userGameEntity = this->fields.userGameEntity;
      partyItem = this->fields.partyItem;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v21.fields.currentCryptoKey = userGameEntity;
      *(_QWORD *)&v21.fields.fakeValue = partyItem;
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v21, 0);
      v11 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_35208276(v11, userSvtEntity, v10, v3, 0);
    }
    else
    {
      v11 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor(v11, userSvtEntity, v3, 0);
    }
    *(_QWORD *)&stageLimitCount = v4->fields._GrandInfo_k__BackingField;
    if ( !*(_QWORD *)&stageLimitCount )
      return v11;
    if ( v11 )
    {
      ServantOverwriteStatus__ApplyGrandServantEffect(v11, *(UserServantGrandInfo_o **)&stageLimitCount, 0);
      return v11;
    }
LABEL_25:
    sub_1D0F30C(this, *(_QWORD *)&stageLimitCount);
  }
  servantLeaderInfo = v4->fields.servantLeaderInfo;
  if ( !servantLeaderInfo )
  {
    if ( !v4->fields.isCollection )
      return 0;
    userSvtCollectionEntity = v4->fields.userSvtCollectionEntity;
    SvtId = ServantStatusListViewItem__GetSvtId(v4, 0, method);
    v11 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
    ServantOverwriteStatus___ctor_35209680(v11, userSvtCollectionEntity, SvtId, v3, 0);
    return v11;
  }
  if ( TransformVal_k__BackingField )
  {
    this = (ServantStatusListViewItem_o *)ServantLeaderInfo__get_SaveTransformServantEntity(
                                            v4->fields.servantLeaderInfo,
                                            0);
    if ( this )
    {
      v14 = this->fields.userGameEntity;
      v13 = this->fields.partyItem;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = v14;
      *(_QWORD *)&v22.fields.fakeValue = v13;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v22, 0);
      v11 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_35209336(v11, servantLeaderInfo, v15, v3, 0);
      return v11;
    }
    goto LABEL_25;
  }
  DispLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    v4,
                                                    0,
                                                    method);
  v20 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
  ServantOverwriteStatus___ctor_35208796(v20, servantLeaderInfo, DispLimitCountStageSealAfterAtStageLimitCount, 0);
  return v20;
}


int32_t ServantStatusListViewItem__GetSupportLimitCountStage(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (supportLimitCountStageData = currentLimitCountSetting->fields.supportLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return supportLimitCountStageData->fields._Stage_k__BackingField;
}


System_Int32_array *ServantStatusListViewItem__GetSupportLimitCountStageList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (supportLimitCountStageData = currentLimitCountSetting->fields.supportLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  return supportLimitCountStageData->fields._StageList_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetSvtId(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x19
  struct ServantEntity_o *svtEntity; // x8
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4E73D7A & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D7A = 1;
  }
  if ( checkTransform && v4->fields._IsTransformed_k__BackingField )
    return v4->fields._TransformedSvtId_k__BackingField;
  svtEntity = v4->fields.svtEntity;
  if ( !svtEntity )
    sub_1D0F30C(this, checkTransform);
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v9, 0);
}


System_String_o *ServantStatusListViewItem__GetTransformName(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v2; // x19
  struct ServantEntity_TransformInfo_o *transformInfoAfter; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x9
  struct System_String_StaticFields *static_fields; // x8

  v2 = this;
  if ( (byte_4E73D79 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&string_TypeInfo);
    byte_4E73D79 = 1;
  }
  if ( v2->fields._IsTransformServant_k__BackingField )
  {
    if ( v2->fields._IsTransformed_k__BackingField )
    {
LABEL_5:
      transformInfoAfter = v2->fields.transformInfoAfter;
      if ( !transformInfoAfter )
        goto LABEL_15;
      goto LABEL_12;
    }
  }
  else
  {
    if ( !v2->fields.tempTransformLimitCountSetting )
    {
      static_fields = string_TypeInfo->static_fields;
      return static_fields->Empty;
    }
    currentLimitCountSetting = v2->fields.currentLimitCountSetting;
    if ( !currentLimitCountSetting || (tempLimitCountSetting = v2->fields.tempLimitCountSetting) == 0 )
LABEL_15:
      sub_1D0F30C(this, method);
    if ( currentLimitCountSetting->fields._TransformVal_k__BackingField != tempLimitCountSetting->fields._TransformVal_k__BackingField )
      goto LABEL_5;
  }
  transformInfoAfter = v2->fields.transformInfoBefore;
  if ( !transformInfoAfter )
    goto LABEL_15;
LABEL_12:
  static_fields = (struct System_String_StaticFields *)&transformInfoAfter->fields.condLabelTitle;
  return static_fields->Empty;
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)transformedTdInfo, (int32_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItem__GetUserServantInfo(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        int32_t limitCountStageIndexZero,
        TreasureDvcInfo_o **tdInfo,
        SkillInfo_array **skillInfoList,
        System_Int32_array **classPassiveSkillIdList,
        const MethodInfo *method)
{
  void *userSvtEntity; // x0
  UserServantEntity_o *v14; // x23
  System_String_array *explanationList; // [xsp+10h] [xbp-50h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4E73D8A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E73D8A = 1;
  }
  explanationList = 0;
  titleList = 0;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity
    || (UserServantEntity__GetTreasureDeviceInfo(
          (UserServantEntity_o *)userSvtEntity,
          tdInfo,
          svtId,
          -1,
          limitCountStageIndexZero,
          0,
          0),
        (userSvtEntity = this->fields.userSvtEntity) == 0)
    || (UserServantEntity__GetSkillInfo(
          (UserServantEntity_o *)userSvtEntity,
          skillInfoList,
          svtId,
          this->fields._BeforeClearQuestId_k__BackingField,
          limitCountStageIndexZero,
          1,
          0,
          -1,
          0),
        v14 = this->fields.userSvtEntity,
        (userSvtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || !v14 )
  {
    sub_1D0F30C(userSvtEntity, *(_QWORD *)&svtId);
  }
  UserServantEntity__GetPassiveSkillInfo(
    v14,
    classPassiveSkillIdList,
    &titleList,
    &explanationList,
    svtId,
    limitCountStageIndexZero,
    *((_QWORD *)userSvtEntity + 17),
    0,
    this->fields._IsGrandServant_k__BackingField,
    0);
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v15; // x1
  int32_t illustratorId; // w22
  struct ServantEntity_o *baseSvtEntity; // x8
  int32_t CvId; // w0
  int32_t v19; // w23
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_String_o *monitor; // x1
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_String_o *v35; // x1
  __int64 *v36; // x8
  System_String_o *v37; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E73D74 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CvMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_IllustratorMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_15028/*"UNKNOWN_NAME_ILLUST"*/);
    sub_1D0F0B4(&StringLiteral_9438/*"NO_ENTRY_NAME_ILLUST"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E73D74 = 1;
  }
  entity = 0;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_1D0F058(
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
    baseSvtEntity = this->fields.baseSvtEntity;
    if ( !baseSvtEntity )
      goto LABEL_31;
    illustratorId = baseSvtEntity->fields.illustratorId;
    CvId = ServantStatusListViewItem__GetCvId(this, v13);
    if ( CvId < 1 )
      goto LABEL_15;
    v19 = CvId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CvMaster___);
      if ( Instance )
      {
        v20 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v19,
                (const MethodInfo_3535B7C *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
        if ( v20 )
        {
          monitor = (System_String_o *)v20[1].monitor;
          *voice = monitor;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)voice, (int32_t)monitor, v21, v22, v23, v24, v25, v26);
          *isPlayVoice = 1;
        }
        goto LABEL_15;
      }
    }
LABEL_31:
    sub_1D0F30C(Instance, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Instance = (Il2CppObject *)ServantStatusListViewItem__get_CommandCodeId(this, v15);
  if ( !MasterData_object )
    goto LABEL_31;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               &entity,
                               (int32_t)Instance,
                               (const MethodInfo_3535BC8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    illustratorId = -1;
LABEL_21:
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( !illustratorId )
        goto LABEL_25;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !illustratorId )
      {
LABEL_25:
        v36 = &StringLiteral_9438/*"NO_ENTRY_NAME_ILLUST"*/;
LABEL_29:
        v37 = LocalizationManager__Get((System_String_o *)*v36, 0);
        LODWORD(v35) = (_DWORD)v37;
        *illust = v37;
        goto LABEL_30;
      }
    }
LABEL_28:
    v36 = &StringLiteral_15028/*"UNKNOWN_NAME_ILLUST"*/;
    goto LABEL_29;
  }
  if ( !entity )
    goto LABEL_31;
  illustratorId = (int32_t)entity[2].klass;
LABEL_15:
  if ( illustratorId < 1 )
    goto LABEL_21;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Instance )
    goto LABEL_31;
  v28 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          illustratorId,
          (const MethodInfo_3535B7C *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v28 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    goto LABEL_28;
  }
  v35 = (System_String_o *)v28[1].monitor;
  *illust = v35;
LABEL_30:
  sub_1D0F058((GrandQuestFolderBoardItem_o *)illust, (int32_t)v35, v29, v30, v31, v32, v33, v34);
  return 1;
}


bool ServantStatusListViewItem__HasRandomGroup(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem___c__DisplayClass417_0_o *v3; // x20
  __int64 LimitCount; // x0
  const MethodInfo *v5; // x1
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v7; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8
  System_Int32_array *StageList_k__BackingField; // x19
  System_Func_int__bool__o *v10; // x21

  if ( (byte_4E73D89 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_int____80372680);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&Method_ServantStatusListViewItem___c__DisplayClass417_0__HasRandomGroup_b__0__);
    sub_1D0F0B4(&ServantStatusListViewItem___c__DisplayClass417_0_TypeInfo);
    byte_4E73D89 = 1;
  }
  v3 = (ServantStatusListViewItem___c__DisplayClass417_0_o *)sub_1D0F300(ServantStatusListViewItem___c__DisplayClass417_0_TypeInfo);
  ServantStatusListViewItem___c__DisplayClass417_0___ctor(v3, 0);
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || !v3
    || (v3->fields.svtId = currentLimitCountSetting->fields._SvtId_k__BackingField,
        LimitCount = ServantStatusListViewItem__get_LimitCount(this, v5),
        v3->fields.limitCount = LimitCount,
        (v7 = this->fields.currentLimitCountSetting) == 0)
    || (dispLimitCountStageData = v7->fields.dispLimitCountStageData) == 0 )
  {
    sub_1D0F30C(LimitCount, v5);
  }
  StageList_k__BackingField = dispLimitCountStageData->fields._StageList_k__BackingField;
  v10 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ServantStatusListViewItem___c__DisplayClass417_0__HasRandomGroup_b__0__,
    0);
  return BasicHelper__Any_int__52658284(
           StageList_k__BackingField,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_323806C *)Method_BasicHelper_Any_int____80372680);
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
      sub_1D0F30C(this, method);
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

  if ( (byte_4E73D63 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D63 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
    if ( !grandServantEquipTargetIdList )
      return (char)grandServantEquipTargetIdList;
    v6 = System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_3944154 *)Method_System_Collections_Generic_List_long__get_Item__) <= 0;
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
      v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0) <= 0;
LABEL_11:
      LOBYTE(grandServantEquipTargetIdList) = !v6;
    }
  }
  return (char)grandServantEquipTargetIdList;
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


void ServantStatusListViewItem__ModifyInfo(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  TreasureDvcInfo_o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  void *svtEntity; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w21
  int32_t TransformVal_k__BackingField; // w23
  int32_t DispLimitCountStageSealAfter; // w0
  const MethodInfo *v17; // x2
  int32_t v18; // w22
  UserServantEntity_o *userSvtEntity; // x24
  struct UserServantEntity_o *v20; // x8
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  ServantLeaderInfo_o *v22; // x8
  EquipTargetInfo_o *equipTargetInfo; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w0
  const MethodInfo *v27; // x2
  struct ServantOverwriteStatus_o *Status; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4E73D5D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1D0F0B4(&TreasureDvcInfo_TypeInfo);
    byte_4E73D5D = 1;
  }
  this->fields.isTdResult = 0;
  v3 = (TreasureDvcInfo_o *)sub_1D0F300(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v3, 0);
  this->fields.tdInfo = v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.tdInfo, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    goto LABEL_39;
  SvtId_k__BackingField = currentLimitCountSetting->fields._SvtId_k__BackingField;
  TransformVal_k__BackingField = currentLimitCountSetting->fields._TransformVal_k__BackingField;
  DispLimitCountStageSealAfter = ServantStatusListViewItem__GetDispLimitCountStageSealAfter(this, 0, v12);
  v18 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  if ( this->fields.userSvtEntity )
  {
    UserServantEntity__GetSkillInfo(
      this->fields.userSvtEntity,
      &this->fields.skillInfoList,
      SvtId_k__BackingField,
      this->fields._BeforeClearQuestId_k__BackingField,
      v18,
      1,
      0,
      -1,
      0);
    svtEntity = this->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_39;
    if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
    {
      userSvtEntity = this->fields.userSvtEntity;
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !svtEntity )
        goto LABEL_39;
      if ( !userSvtEntity )
        goto LABEL_39;
      UserServantEntity__GetPassiveSkillInfo(
        userSvtEntity,
        &this->fields.passiveSkillIdList,
        &this->fields.passiveSkillTitleMessageList,
        &this->fields.passiveSkillExplanationMessageList,
        SvtId_k__BackingField,
        v18,
        *((_QWORD *)svtEntity + 17),
        0,
        this->fields._IsGrandServant_k__BackingField,
        0);
      svtEntity = this->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_39;
      UserServantEntity__GetAppendPassiveSkillInfo(
        (UserServantEntity_o *)svtEntity,
        &this->fields.appendPassiveSkillIdList,
        &this->fields.appendPassiveSkillTitleMessageList,
        &this->fields.appendPassiveSkillExplanationMessageList,
        &this->fields.appendPassiveSkillReleaseStateList,
        &this->fields.appendPassiveSkillLvList,
        0);
    }
    svtEntity = this->fields.userSvtEntity;
    if ( svtEntity )
    {
      svtEntity = (void *)UserServantEntity__GetTreasureDeviceInfo(
                            (UserServantEntity_o *)svtEntity,
                            &this->fields.tdInfo,
                            SvtId_k__BackingField,
                            -1,
                            v18,
                            0,
                            0);
      this->fields.isTdResult = (unsigned __int8)svtEntity & 1;
      if ( TransformVal_k__BackingField )
        goto LABEL_23;
      v20 = this->fields.userSvtEntity;
      if ( v20 )
      {
        v20->fields.dispLimitCountAfter = v18;
        goto LABEL_23;
      }
    }
LABEL_39:
    sub_1D0F30C(svtEntity, v11);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &this->fields.skillInfoList, TransformVal_k__BackingField, 0);
    svtEntity = this->fields.servantLeaderInfo;
    if ( !svtEntity )
      goto LABEL_39;
    ServantLeaderInfo__getPassiveSkillInfo(
      (ServantLeaderInfo_o *)svtEntity,
      &this->fields.passiveSkillIdList,
      &this->fields.passiveSkillTitleMessageList,
      &this->fields.passiveSkillExplanationMessageList,
      TransformVal_k__BackingField,
      0);
    svtEntity = this->fields.servantLeaderInfo;
    if ( !svtEntity )
      goto LABEL_39;
    ServantLeaderInfo__GetAppendPassiveSkillInfo(
      (ServantLeaderInfo_o *)svtEntity,
      &this->fields.appendPassiveSkillIdList,
      &this->fields.appendPassiveSkillTitleMessageList,
      &this->fields.appendPassiveSkillExplanationMessageList,
      &this->fields.appendPassiveSkillReleaseStateList,
      &this->fields.appendPassiveSkillLvList,
      0);
    svtEntity = this->fields.servantLeaderInfo;
    if ( !svtEntity )
      goto LABEL_39;
    svtEntity = (void *)ServantLeaderInfo__getTreasureDeviceInfo(
                          (ServantLeaderInfo_o *)svtEntity,
                          &this->fields.tdInfo,
                          TransformVal_k__BackingField,
                          0);
    v22 = this->fields.servantLeaderInfo;
    this->fields.isTdResult = (unsigned __int8)svtEntity & 1;
    if ( !v22 )
      goto LABEL_39;
    ServantLeaderInfo__SetSkillChangeInfo(v22, 0);
  }
  else
  {
    equipTargetInfo = this->fields.equipTargetInfo;
    if ( equipTargetInfo )
    {
      EquipTargetInfo__getSkillInfo(equipTargetInfo, &this->fields.skillInfoList, 0);
    }
    else if ( this->fields.userSvtCollectionEntity )
    {
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_39;
      if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
        goto LABEL_31;
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_39;
      if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)svtEntity, 0) )
      {
LABEL_31:
        svtEntity = this->fields.userSvtCollectionEntity;
        if ( !svtEntity )
          goto LABEL_39;
        UserServantCollectionEntity__GetSkillInfo(
          (UserServantCollectionEntity_o *)svtEntity,
          &this->fields.skillInfoList,
          SvtId_k__BackingField,
          -1,
          v18,
          -1,
          0);
      }
      svtEntity = this->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_39;
      if ( ServantEntity__get_IsServant((ServantEntity_o *)svtEntity, 0) )
      {
        svtEntity = this->fields.userSvtCollectionEntity;
        if ( !svtEntity )
          goto LABEL_39;
        UserServantCollectionEntity__GetPassiveSkillInfo(
          (UserServantCollectionEntity_o *)svtEntity,
          &this->fields.passiveSkillIdList,
          &this->fields.passiveSkillTitleMessageList,
          &this->fields.passiveSkillExplanationMessageList,
          SvtId_k__BackingField,
          v18,
          1,
          1,
          0);
        svtEntity = this->fields.userSvtCollectionEntity;
        if ( !svtEntity )
          goto LABEL_39;
        UserServantCollectionEntity__GetAppendPassiveSkillInfo(
          (UserServantCollectionEntity_o *)svtEntity,
          &this->fields.appendPassiveSkillIdList,
          &this->fields.appendPassiveSkillTitleMessageList,
          &this->fields.appendPassiveSkillExplanationMessageList,
          &this->fields.appendPassiveSkillReleaseStateList,
          &this->fields.appendPassiveSkillLvList,
          0);
        svtEntity = this->fields.userSvtCollectionEntity;
        if ( !svtEntity )
          goto LABEL_39;
        this->fields.isTdResult = UserServantCollectionEntity__GetTreasureDeviceInfo(
                                    (UserServantCollectionEntity_o *)svtEntity,
                                    &this->fields.tdInfo,
                                    SvtId_k__BackingField,
                                    -1,
                                    v18,
                                    0);
      }
    }
  }
LABEL_23:
  ServantStatusListViewItem__AddDuplicationInfo(this, 0, v17);
  if ( !this->fields.tempTransformLimitCountSetting )
    ServantStatusListViewItem__SetTransformData(this, v24);
  DispLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    this,
                                                    0,
                                                    v25);
  Status = ServantStatusListViewItem__GetStatus(this, DispLimitCountStageSealAfterAtStageLimitCount, v27);
  this->fields.overwriteStatus = Status;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteStatus,
    (int32_t)Status,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void ServantStatusListViewItem__RefreshWithRandom(
        ServantStatusListViewItem_o *this,
        ServantStatusListViewItem_TempLimitCountSetting_o *setting,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v5; // x0
  UserServantEntity_o *userSvtEntity; // x20
  bool v7; // w2

  if ( (byte_4E73D6C & 1) == 0 )
  {
    sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    byte_4E73D6C = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  if ( !byte_4E72E18 )
  {
    sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    byte_4E72E18 = 1;
  }
  v5 = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v5 = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
  }
  if ( LOBYTE(v5->fields.commandCodeEntity->monitor) )
  {
    if ( !setting )
      sub_1D0F30C(v5, setting);
    if ( !setting->fields.isConvertOverwriteImage )
    {
      userSvtEntity = this->fields.userSvtEntity;
      v7 = ServantStatusListViewItem__CheckEnableOwnRandomSetting(v5, setting, method);
      ServantStatusListViewItem_TempLimitCountSetting__RefreshWithRandom(setting, userSvtEntity, v7, 0);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
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

  this->fields._TransformedServant_k__BackingField = 0;
  *(_QWORD *)&this->fields._IsTransformServant_k__BackingField = 0;
  HIBYTE(this->fields._TransformedServantDispLimitCount_k__BackingField) = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._TransformedServant_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.transformedServantLimitEntity = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformedServantLimitEntity,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.transformedSkillInfoList = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.transformedSkillInfoList, 0, v15, v16, v17, v18, v19, v20);
  this->fields.transformedPassiveSkillIdList = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformedPassiveSkillIdList,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.transformedPassiveSkillTitleMessageList = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformedPassiveSkillTitleMessageList,
    0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.transformedPassiveSkillExplanationMessageList = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformedPassiveSkillExplanationMessageList,
    0,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.transformedTdInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.transformedTdInfo, 0, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)&this->fields.transformedAtk = 0;
  this->fields.transformInfoBefore = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.transformInfoBefore, 0, v45, v46, v47, v48, v49, v50);
  this->fields.transformInfoAfter = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.transformInfoAfter, 0, v51, v52, v53, v54, v55, v56);
}


bool ServantStatusListViewItem__SelectCardImageLimitCountStage(
        ServantStatusListViewItem_o *this,
        int32_t stage,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (this = (ServantStatusListViewItem_o *)currentLimitCountSetting->fields.cardImageLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, stage);
  }
  return ServantStatusListViewItem_LimitCountStageData__SelectStage(
           (ServantStatusListViewItem_LimitCountStageData_o *)this,
           stage,
           0);
}


bool ServantStatusListViewItem__SelectCommandCardLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (this = (ServantStatusListViewItem_o *)currentLimitCountSetting->fields.commandCardLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, index);
  }
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(
           (ServantStatusListViewItem_LimitCountStageData_o *)this,
           index,
           0);
}


bool ServantStatusListViewItem__SelectDispLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  ServantStatusListViewItem_o *v4; // x19
  bool v5; // w20
  const MethodInfo *v6; // x1

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (v4 = this, (this = (ServantStatusListViewItem_o *)currentLimitCountSetting->fields.dispLimitCountStageData) == 0) )
  {
    sub_1D0F30C(this, index);
  }
  v5 = ServantStatusListViewItem_LimitCountStageData__SelectStageList(
         (ServantStatusListViewItem_LimitCountStageData_o *)this,
         index,
         0);
  ServantStatusListViewItem__ModifyInfo(v4, v6);
  return v5;
}


bool ServantStatusListViewItem__SelectIconLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (this = (ServantStatusListViewItem_o *)currentLimitCountSetting->fields.iconLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, index);
  }
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(
           (ServantStatusListViewItem_LimitCountStageData_o *)this,
           index,
           0);
}


bool ServantStatusListViewItem__SelectPortraitLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (this = (ServantStatusListViewItem_o *)currentLimitCountSetting->fields.portraitLimitCountStageData) == 0 )
  {
    sub_1D0F30C(this, index);
  }
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(
           (ServantStatusListViewItem_LimitCountStageData_o *)this,
           index,
           0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantStatusListViewItem__SelectSupportLimitCountStageList(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v4; // x19
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8
  int32_t Stage_k__BackingField; // w21
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v9; // x8
  ServantStatusListViewItem_LimitCountStageData_o *v10; // x19

  v4 = this;
  if ( (byte_4E73D86 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&UserServantEntity_TypeInfo);
    byte_4E73D86 = 1;
  }
  currentLimitCountSetting = v4->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    goto LABEL_16;
  supportLimitCountStageData = currentLimitCountSetting->fields.supportLimitCountStageData;
  if ( !supportLimitCountStageData )
    goto LABEL_16;
  if ( index != -1 )
    return ServantStatusListViewItem_LimitCountStageData__SelectStageList(supportLimitCountStageData, index, 0);
  Stage_k__BackingField = supportLimitCountStageData->fields._Stage_k__BackingField;
  this = (ServantStatusListViewItem_o *)UserServantEntity_TypeInfo;
  if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
    this = (ServantStatusListViewItem_o *)UserServantEntity_TypeInfo;
  }
  if ( (CommandCodeEntity_c *)Stage_k__BackingField == this->fields.commandCodeEntity->klass )
    return 0;
  v9 = v4->fields.currentLimitCountSetting;
  if ( !v9 )
    goto LABEL_16;
  v10 = v9->fields.supportLimitCountStageData;
  if ( !LODWORD(this->fields.tempTransformLimitCountSetting) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !v10 )
LABEL_16:
    sub_1D0F30C(this, *(_QWORD *)&index);
  ServantStatusListViewItem_LimitCountStageData__SelectStage(
    v10,
    UserServantEntity_TypeInfo->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
    0);
  return 1;
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
  if ( (byte_4E73D5F & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&SkillInfo___TypeInfo);
    byte_4E73D5F = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    p_equipUserSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v9->fields.equipUserSvtEntity;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v9->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v60, 0);
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
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                      v61,
                                                      0);
              if ( v18 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                           (int32_t)this,
                           (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v9->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)&v9->fields.equipServantEntity,
                  (int32_t)Entity,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  if ( *p_equipUserSvtEntity )
                  {
                    v28 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                            (*p_equipUserSvtEntity)[5],
                                                            0);
                    v29 = *p_equipUserSvtEntity;
                    if ( *p_equipUserSvtEntity )
                    {
                      v30 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                              v29[6],
                                                              0);
                      if ( v28 )
                      {
                        v31 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v28, v30, (int32_t)this, 0);
                        v9->fields.equipSvtLimitEntity = v31;
                        sub_1D0F058(
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
          sub_1D0F30C(this, v10);
        }
LABEL_39:
        sub_1D0F314(this);
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v9->fields.equipUserSvtEntity, 0, (int32_t)method, v3, v4, v5, v6, v7);
  v9->fields.equipServantEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v9->fields.equipServantEntity, 0, v40, v41, v42, v43, v44, v45);
  v9->fields.equipSvtLimitEntity = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v9->fields.equipSvtLimitEntity, 0, v46, v47, v48, v49, v50, v51);
  v52 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v52 = BalanceConfig_TypeInfo;
  }
  v53 = sub_1D0F15C(SkillInfo___TypeInfo, (unsigned int)v52->static_fields->SvtEquipSkillListMax);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v53;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v9->fields.equipSkillInfoList, v53, v54, v55, v56, v57, v58, v59);
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
  const MethodInfo *v211; // x1
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-78h] BYREF
  SkillInfo_array *v213; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16

  if ( (byte_4E73D5E & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1D0F0B4(&long___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_SkillInfo____Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ServantLimitEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D5E = 1;
  }
  v213 = 0;
  entity = 0;
  skillInfoList = 0;
  equipIdList = this->fields.equipIdList;
  if ( equipIdList && SLODWORD(equipIdList->max_length) >= 2 && this->fields.userSvtEntity )
  {
    v4 = System_Array__Clone((System_Array_o *)equipIdList, 0);
    if ( v4 )
    {
      v11 = v4;
      v12 = (struct System_Int64_array *)sub_1D0F1F0(v4, long___TypeInfo);
      if ( !v12 || (this->fields.grandServantEquipIdList = v12, (v13 = sub_1D0F1F0(v11, long___TypeInfo)) == 0) )
      {
        sub_1D0F6A8(v11);
        ServantStatusListViewItem__UpdateServantComment(v210, v211);
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
    sub_1D0F058((GrandQuestFolderBoardItem_o *)p_grandServantEquipIdList, v14, v5, v6, v7, v8, v9, v10);
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
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantMaster___);
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
                                                                        (const MethodInfo_3538378 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_102;
        if ( !entity )
          break;
        klass = entity[5].klass;
        monitor = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v217.fields.currentCryptoKey = klass;
        *(_QWORD *)&v217.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v217, 0) >= 1 )
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
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
          }
          else
          {
            v133 = v130 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v133 + 32) = v17;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v133 + 32), (int32_t)v17, v117, v118, v119, v120, v121, v122);
          }
          grandServantEquipIdList = this->fields.grandServantEquipIdList;
          if ( !grandServantEquipIdList )
            break;
          if ( v126 >= LODWORD(grandServantEquipIdList->max_length) )
LABEL_165:
            sub_1D0F314(Master_object);
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
              *(const MethodInfo_3944444 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v176 + 1;
            *(_QWORD *)(v174 + 8 * v176 + 32) = v17;
          }
          equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !entity )
            break;
          v178 = Master_object;
          v180 = entity[5].klass;
          v179 = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v218.fields.currentCryptoKey = v180;
          *(_QWORD *)&v218.fields.fakeValue = v179;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                          v218,
                                                                          0);
          if ( !v178 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v178,
                                                                          (int32_t)Master_object,
                                                                          (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
          }
          else
          {
            v191 = &items->obj.klass + size;
            equipGrandServantEntityList->fields._size = size + 1;
            v191[4] = (Il2CppClass *)v190;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v191 + 4), (int32_t)v190, v181, v182, v183, v184, v185, v186);
          }
          equipGrandServantLimitEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitMaster___);
          if ( !entity )
            break;
          v193 = (ServantLimitMaster_o *)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                                                          0);
          if ( !entity )
            break;
          v194 = (int)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
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
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
          }
          else
          {
            v205 = &v201->obj.klass + v203;
            equipGrandServantLimitEntityList->fields._size = v203 + 1;
            v205[4] = (Il2CppClass *)v204;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v205 + 4), (int32_t)v204, v195, v196, v197, v198, v199, v200);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
          if ( !entity )
            break;
          UserServantEntity__getEquipSkillInfo((UserServantEntity_o *)entity, &v213, 1, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v17 = v213;
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
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
          }
          else
          {
            v137 = v134 + 8 * v136;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v136 + 1;
            *(_QWORD *)(v137 + 32) = 0;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v137 + 32), 0, v117, v118, v119, v120, v121, v122);
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
              *(const MethodInfo_3944444 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
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
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v150 = v147 + 8 * v149;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v149 + 1;
            *(_QWORD *)(v150 + 32) = 0;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v150 + 32), 0, v138, v139, v140, v141, v142, v143);
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
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
          }
          else
          {
            v160 = v157 + 8 * v159;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v159 + 1;
            *(_QWORD *)(v160 + 32) = 0;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v160 + 32), 0, v151, v152, v153, v154, v155, v156);
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
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v172 + 192) + 112LL));
            goto LABEL_129;
          }
          v170 = v167 + 8 * v169;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v169 + 1;
          *(_QWORD *)(v170 + 32) = 0;
          v171 = (GrandQuestFolderBoardItem_o *)(v170 + 32);
          LODWORD(v17) = 0;
        }
        sub_1D0F058(v171, (int32_t)v17, v161, v162, v163, v164, v165, v166);
LABEL_129:
        v123 = *p_grandServantEquipIdList;
        ++v124;
      }
      while ( *p_grandServantEquipIdList );
    }
LABEL_164:
    sub_1D0F30C(Master_object, v17);
  }
  if ( !this->fields.servantLeaderInfo )
    return;
  v16 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
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
      *(_QWORD *)&v215.fields.currentCryptoKey = v23;
      *(_QWORD *)&v215.fields.fakeValue = v22;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                      v215,
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
          *(const MethodInfo_3944444 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v16->fields._size = v26 + 1;
        v24->m_Items[v26] = (int)Master_object;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
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
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &v34->obj.klass + v36;
        equipUserGrandServantEntityList->fields._size = v36 + 1;
        v38[4] = 0;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v38 + 4), 0, v27, v28, v29, v30, v31, v32);
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
            *(const MethodInfo_3944444 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
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
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
        }
        else
        {
          v95 = v92 + 8 * v94;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v94 + 1;
          *(_QWORD *)(v95 + 32) = 0;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v95 + 32), 0, v39, v40, v41, v42, v43, v44);
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
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
        }
        else
        {
          v105 = v102 + 8 * v104;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v104 + 1;
          *(_QWORD *)(v105 + 32) = 0;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v105 + 32), 0, v96, v97, v98, v99, v100, v101);
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
        *(_QWORD *)&v216.fields.currentCryptoKey = v47;
        *(_QWORD *)&v216.fields.fakeValue = v46;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                        v216,
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
            *(const MethodInfo_3944444 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v50 + 1;
          v48->m_Items[v50] = (int)Master_object;
        }
        v54 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v55 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                                        v21->fields.svtId,
                                                                        0);
        if ( !v55 )
          goto LABEL_164;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v55,
                                                                        (int32_t)Master_object,
                                                                        (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = &v62->obj.klass + v64;
          v54->fields._size = v64 + 1;
          v66[4] = (Il2CppClass *)v65;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v66 + 4), (int32_t)v65, v56, v57, v58, v59, v60, v61);
        }
        v67 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
        v68 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
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
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = &v75->obj.klass + v77;
          v67->fields._size = v77 + 1;
          v79[4] = (Il2CppClass *)v78;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v79 + 4), (int32_t)v78, v69, v70, v71, v72, v73, v74);
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
          sub_1D0F058(v90, (int32_t)v17, v80, v81, v82, v83, v84, v85);
          continue;
        }
        v91 = v87[4];
      }
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Master_object,
        &v17->obj,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v91 + 192) + 112LL));
    }
  }
  if ( !v16 )
    goto LABEL_164;
  v110 = System_Collections_Generic_List_long___ToArray(
           v16,
           (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.grandServantEquipIdList = v110;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandServantEquipIdList,
    (int32_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItem__SetGrandInfo(
        ServantStatusListViewItem_o *this,
        bool isGrand,
        bool isTempGrandServant,
        bool isForceNotGrand,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  _BOOL4 v8; // w21
  ServantStatusListViewItem_o *v11; // x19
  UserServantGrandInfo_c *v12; // x0
  UserServantGrandInfo_o *Empty; // x1
  UserServantEntity_o *userSvtEntity; // x21
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  v8 = isForceNotGrand;
  v11 = this;
  if ( (byte_4E73D7E & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&UserServantGrandInfo_TypeInfo);
    byte_4E73D7E = 1;
  }
  if ( !v11 )
    sub_1D0F30C(this, isGrand);
  v11->fields._IsGrandServant_k__BackingField = !v8 && isGrand || isTempGrandServant;
  if ( v8 )
  {
LABEL_5:
    v12 = UserServantGrandInfo_TypeInfo;
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      v12 = UserServantGrandInfo_TypeInfo;
    }
    Empty = v12->static_fields->Empty;
    goto LABEL_16;
  }
  userSvtEntity = v11->fields.userSvtEntity;
  if ( !isTempGrandServant )
  {
    if ( userSvtEntity )
    {
      Empty = UserServantEntity__get_GrandInfo(v11->fields.userSvtEntity, 0);
      if ( Empty )
        goto LABEL_16;
    }
    servantLeaderInfo = v11->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      Empty = ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
      if ( Empty )
        goto LABEL_16;
    }
    goto LABEL_5;
  }
  if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
  Empty = UserServantGrandInfo__Make(userSvtEntity, 1, 0);
LABEL_16:
  v11->fields._GrandInfo_k__BackingField = Empty;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v11->fields._GrandInfo_k__BackingField,
    (int32_t)Empty,
    isTempGrandServant,
    isForceNotGrand,
    (System_String_o *)method,
    v5,
    v6,
    v7);
}


void ServantStatusListViewItem__SetRandomLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t randomLimitCount,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_1D0F30C(this, randomLimitCount);
  currentLimitCountSetting->fields.randomLimitCount = randomLimitCount;
  ServantStatusListViewItem__RefreshWithRandom(this, currentLimitCountSetting, method);
}


void ServantStatusListViewItem__SetRandomLimitCountSupport(
        ServantStatusListViewItem_o *this,
        int32_t randomLimitCount,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_1D0F30C(this, randomLimitCount);
  currentLimitCountSetting->fields.randomLimitCountSupport = randomLimitCount;
}


void ServantStatusListViewItem__SetTransformData(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  int32_t SvtId; // w21
  const MethodInfo *v7; // x2
  void *DispLimitCountStage; // x0
  UserServantGrandInfo_o *GrandInfo_k__BackingField; // x1
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v19; // x21
  const MethodInfo *v20; // x1
  struct ServantLimitEntity_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x2
  int32_t v29; // w20
  UserServantEntity_o *userSvtEntity; // x22
  int32_t v31; // w21
  UserServantEntity_o *v32; // x21
  int32_t v33; // w22
  int32_t v34; // w23
  ServantOverwriteStatus_o *v35; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  ServantLeaderInfo_o *v37; // x21
  int32_t v38; // w22
  int32_t v39; // w23
  int32_t v40; // w20
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  int32_t v42; // w22
  int32_t v43; // w23
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E73D78 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&ServantOverwriteStatus_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E73D78 = 1;
  }
  entity = 0;
  ServantStatusListViewItem__ResetTransformData(this, method);
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = ServantStatusListViewItem__get_SvtId(this, v5);
    DispLimitCountStage = (void *)ServantStatusListViewItem__GetDispLimitCountStage(this, 0, v7);
    if ( !Master_object )
      goto LABEL_38;
    if ( !ServantTransformMaster__TryGetEntity(
            (ServantTransformMaster_o *)Master_object,
            &entity,
            SvtId,
            (int32_t)DispLimitCountStage,
            0) )
      return;
    DispLimitCountStage = entity;
    if ( !entity )
      goto LABEL_38;
    DispLimitCountStage = (void *)ServantTransformEntity__IsUnlockTransformed(
                                    entity,
                                    this->fields._BeforeClearQuestId_k__BackingField,
                                    0);
    if ( ((unsigned __int8)DispLimitCountStage & 1) == 0 )
      return;
    if ( !entity )
      goto LABEL_38;
    *(_QWORD *)&this->fields._TransformedSvtId_k__BackingField = *(_QWORD *)&entity->fields.aftSvtId;
    this->fields._IsTransformServant_k__BackingField = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DispLimitCountStage = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !DispLimitCountStage )
      goto LABEL_38;
    v10 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)DispLimitCountStage,
            this->fields._TransformedSvtId_k__BackingField,
            (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v10;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields._TransformedServant_k__BackingField,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
    v19 = (ServantLimitMaster_o *)v17;
    DispLimitCountStage = (void *)ServantStatusListViewItem__get_LimitCount(this, v20);
    if ( !v19 )
      goto LABEL_38;
    v21 = ServantLimitMaster__GetEntity(v19, TransformedSvtId_k__BackingField, (int32_t)DispLimitCountStage, 0);
    this->fields.transformedServantLimitEntity = v21;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.transformedServantLimitEntity,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    DispLimitCountStage = entity;
    if ( !entity )
      goto LABEL_38;
    ServantTransformEntity__GetTransformInfo(
      entity,
      &this->fields.transformInfoBefore,
      &this->fields.transformInfoAfter,
      0);
    if ( this->fields.userSvtEntity )
    {
      DispLimitCountStage = (void *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                      this->fields._TransformedServantDispLimitCount_k__BackingField,
                                      0);
      if ( !this->fields.userSvtEntity )
        goto LABEL_38;
      v29 = (int)DispLimitCountStage;
      UserServantEntity__GetTransformedSkillInfo(
        this->fields.userSvtEntity,
        &this->fields.transformedSkillInfoList,
        this->fields._TransformedSvtId_k__BackingField,
        this->fields._BeforeClearQuestId_k__BackingField,
        (int32_t)DispLimitCountStage,
        1,
        0,
        -1,
        0);
      userSvtEntity = this->fields.userSvtEntity;
      v31 = this->fields._TransformedSvtId_k__BackingField;
      DispLimitCountStage = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !DispLimitCountStage )
        goto LABEL_38;
      if ( !userSvtEntity )
        goto LABEL_38;
      UserServantEntity__GetTransformedPassiveSkillInfo(
        userSvtEntity,
        &this->fields.transformedPassiveSkillIdList,
        &this->fields.transformedPassiveSkillTitleMessageList,
        &this->fields.transformedPassiveSkillExplanationMessageList,
        v31,
        v29,
        *((_QWORD *)DispLimitCountStage + 17),
        0,
        this->fields._IsGrandServant_k__BackingField,
        0);
      DispLimitCountStage = this->fields.userSvtEntity;
      if ( !DispLimitCountStage )
        goto LABEL_38;
      UserServantEntity__GetTransformedTreasureDeviceInfo(
        (UserServantEntity_o *)DispLimitCountStage,
        &this->fields.transformedTdInfo,
        this->fields._TransformedSvtId_k__BackingField,
        -1,
        v29,
        0,
        0);
      v32 = this->fields.userSvtEntity;
      v33 = this->fields._TransformedSvtId_k__BackingField;
      v34 = LimitCountUtility__ConvertStageToLimitCount_42407000(
              this->fields._TransformedServantDispLimitCount_k__BackingField,
              0);
      v35 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_35208276(v35, v32, v33, v34, 0);
      GrandInfo_k__BackingField = this->fields._GrandInfo_k__BackingField;
      if ( GrandInfo_k__BackingField )
      {
        if ( v35 )
        {
          ServantOverwriteStatus__ApplyGrandServantEffect(v35, GrandInfo_k__BackingField, 0);
          goto LABEL_30;
        }
        goto LABEL_38;
      }
    }
    else
    {
      servantLeaderInfo = this->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
      {
        if ( !this->fields.userSvtCollectionEntity )
          goto LABEL_31;
        DispLimitCountStage = (void *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                        this->fields._TransformedServantDispLimitCount_k__BackingField,
                                        0);
        if ( this->fields.userSvtCollectionEntity )
        {
          v40 = (int)DispLimitCountStage;
          UserServantCollectionEntity__GetTransformedSkillInfo(
            this->fields.userSvtCollectionEntity,
            &this->fields.transformedSkillInfoList,
            this->fields._TransformedSvtId_k__BackingField,
            -1,
            (int32_t)DispLimitCountStage,
            -1,
            0);
          DispLimitCountStage = this->fields.userSvtCollectionEntity;
          if ( DispLimitCountStage )
          {
            UserServantCollectionEntity__GetTransformedPassiveSkillInfo(
              (UserServantCollectionEntity_o *)DispLimitCountStage,
              &this->fields.transformedPassiveSkillIdList,
              &this->fields.transformedPassiveSkillTitleMessageList,
              &this->fields.transformedPassiveSkillExplanationMessageList,
              this->fields._TransformedSvtId_k__BackingField,
              v40,
              1,
              0);
            DispLimitCountStage = this->fields.userSvtCollectionEntity;
            if ( DispLimitCountStage )
            {
              UserServantCollectionEntity__GetTransformedTreasureDeviceInfo(
                (UserServantCollectionEntity_o *)DispLimitCountStage,
                &this->fields.transformedTdInfo,
                this->fields._TransformedSvtId_k__BackingField,
                -1,
                v40,
                0);
              userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
              v42 = this->fields._TransformedSvtId_k__BackingField;
              v43 = LimitCountUtility__ConvertStageToLimitCount_42407000(
                      this->fields._TransformedServantDispLimitCount_k__BackingField,
                      0);
              v35 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
              ServantOverwriteStatus___ctor_35209680(v35, userSvtCollectionEntity, v42, v43, 0);
              if ( v35 )
              {
LABEL_30:
                this->fields.transformedAtk = v35->fields._Atk_k__BackingField;
                this->fields.transformedHp = v35->fields._Hp_k__BackingField;
LABEL_31:
                ServantStatusListViewItem__AddDuplicationInfo(this, 1, v28);
                return;
              }
            }
          }
        }
LABEL_38:
        sub_1D0F30C(DispLimitCountStage, GrandInfo_k__BackingField);
      }
      ServantLeaderInfo__GetTransformedSkillInfo(
        servantLeaderInfo,
        &this->fields.transformedSkillInfoList,
        this->fields._TransformedSvtId_k__BackingField,
        0);
      DispLimitCountStage = this->fields.servantLeaderInfo;
      if ( !DispLimitCountStage )
        goto LABEL_38;
      ServantLeaderInfo__GetTransformedPassiveSkillInfo(
        (ServantLeaderInfo_o *)DispLimitCountStage,
        &this->fields.transformedPassiveSkillIdList,
        &this->fields.transformedPassiveSkillTitleMessageList,
        &this->fields.transformedPassiveSkillExplanationMessageList,
        this->fields._TransformedSvtId_k__BackingField,
        0);
      DispLimitCountStage = this->fields.servantLeaderInfo;
      if ( !DispLimitCountStage )
        goto LABEL_38;
      ServantLeaderInfo__GetTransformedTreasureDeviceInfo(
        (ServantLeaderInfo_o *)DispLimitCountStage,
        &this->fields.transformedTdInfo,
        this->fields._TransformedSvtId_k__BackingField,
        0);
      v37 = this->fields.servantLeaderInfo;
      v38 = this->fields._TransformedSvtId_k__BackingField;
      v39 = LimitCountUtility__ConvertStageToLimitCount_42407000(
              this->fields._TransformedServantDispLimitCount_k__BackingField,
              0);
      v35 = (ServantOverwriteStatus_o *)sub_1D0F300(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_35209336(v35, v37, v38, v39, 0);
    }
    if ( v35 )
      goto LABEL_30;
    goto LABEL_38;
  }
}


void ServantStatusListViewItem__SetupTempLimitCountSetting(
        ServantStatusListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *v8; // x21
  ServantStatusListViewItem_LimitCountStageData_o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ServantStatusListViewItem_LimitCountStageData_o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4E73D7F & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
    byte_4E73D7F = 1;
  }
  v5 = sub_1D0F300(ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
  ServantStatusListViewItem_TempLimitCountSetting___ctor(
    (ServantStatusListViewItem_TempLimitCountSetting_o *)v5,
    svtId,
    0,
    0);
  v6 = sub_1D0F15C(int___TypeInfo, 1);
  if ( !v6 )
    goto LABEL_7;
  v8 = (System_Int32_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1D0F314(v6);
  *(_DWORD *)(v6 + 32) = 1;
  v9 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v9, v8, 1, 0);
  if ( !v5 )
LABEL_7:
    sub_1D0F30C(v6, v7);
  *(_QWORD *)(v5 + 32) = v9;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F300(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v16, v8, 1, 0);
  *(_QWORD *)(v5 + 40) = v16;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  this->fields.tempLimitCountSetting = (struct ServantStatusListViewItem_TempLimitCountSetting_o *)v5;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.tempLimitCountSetting, v5, v23, v24, v25, v26, v27, v28);
  this->fields.currentLimitCountSetting = (struct ServantStatusListViewItem_TempLimitCountSetting_o *)v5;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.currentLimitCountSetting, v5, v29, v30, v31, v32, v33, v34);
}


void ServantStatusListViewItem__SetupTempLimitCountSetting_37067544(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  ServantStatusListViewItem_o *v9; // x20
  ServantStatusListViewItem_TempLimitCountSetting_o *TempLimitCountSetting; // x0
  struct ServantStatusListViewItem_TempLimitCountSetting_o **p_tempLimitCountSetting; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  ServantEntity_o *BaseServantEntity; // x0
  __int64 v19; // x1
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v20; // x27
  __int64 v21; // x24
  __int64 v22; // x25
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v23; // x23
  const MethodInfo *v24; // x2
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  ServantEntity_TransformInfo_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  ServantStatusListViewItem_o *v46; // x0
  const MethodInfo *v47; // x5
  ServantStatusListViewItem_TempLimitCountSetting_o *v48; // x0
  struct ServantStatusListViewItem_TempLimitCountSetting_o **p_tempTransformLimitCountSetting; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempTransformLimitCountSetting; // x25
  __int64 v57; // x22
  __int64 v58; // x24
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v59; // x22
  const MethodInfo *v60; // x2
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v67; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v9 = this;
  if ( (byte_4E73D80 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D80 = 1;
  }
  TempLimitCountSetting = ServantStatusListViewItem__CreateTempLimitCountSetting(
                            this,
                            userServantEntity,
                            0,
                            userServantCollectionEntity,
                            questRestrictionInfo,
                            v5);
  v9->fields.tempLimitCountSetting = TempLimitCountSetting;
  p_tempLimitCountSetting = &v9->fields.tempLimitCountSetting;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v9->fields.tempLimitCountSetting,
    (int32_t)TempLimitCountSetting,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !userServantEntity )
    goto LABEL_18;
  v20 = *p_tempLimitCountSetting;
  v22 = *(_QWORD *)&userServantEntity->fields.randomLimitCount.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userServantEntity->fields.randomLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v68.fields.currentCryptoKey = v22;
  *(_QWORD *)&v68.fields.fakeValue = v21;
  BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v68, 0);
  if ( !v20 )
    goto LABEL_18;
  v20->fields.randomLimitCount = (int)BaseServantEntity;
  v23 = *p_tempLimitCountSetting;
  BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                           userServantEntity->fields.randomLimitCountSupport,
                                           0);
  if ( !v23 )
    goto LABEL_18;
  v23->fields.randomLimitCountSupport = (int)BaseServantEntity;
  ServantStatusListViewItem__RefreshWithRandom(v9, v9->fields.tempLimitCountSetting, v24);
  v25 = v9->fields.tempLimitCountSetting;
  v9->fields.currentLimitCountSetting = v25;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v9->fields.currentLimitCountSetting,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !UserServantEntity__get_IsSaveTransformServant(userServantEntity, 0) )
    return;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity(userServantEntity, 0);
  if ( !BaseServantEntity )
    goto LABEL_18;
  TransformInfo = ServantEntity__GetTransformInfo(BaseServantEntity, 0);
  v9->fields.transformInfoBefore = TransformInfo;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v9->fields.transformInfoBefore,
    (int32_t)TransformInfo,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  BaseServantEntity = UserServantEntity__get_SaveTransformServantEntity(userServantEntity, 0);
  if ( !BaseServantEntity )
    goto LABEL_18;
  v39 = ServantEntity__GetTransformInfo(BaseServantEntity, 0);
  v9->fields.transformInfoAfter = v39;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v9->fields.transformInfoAfter, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  v48 = ServantStatusListViewItem__CreateTempLimitCountSetting(
          v46,
          userServantEntity,
          1,
          userServantCollectionEntity,
          questRestrictionInfo,
          v47);
  v9->fields.tempTransformLimitCountSetting = v48;
  p_tempTransformLimitCountSetting = &v9->fields.tempTransformLimitCountSetting;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v9->fields.tempTransformLimitCountSetting,
    (int32_t)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  tempTransformLimitCountSetting = v9->fields.tempTransformLimitCountSetting;
  v58 = *(_QWORD *)&userServantEntity->fields.randomLimitCount2.fields.currentCryptoKey;
  v57 = *(_QWORD *)&userServantEntity->fields.randomLimitCount2.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v69.fields.currentCryptoKey = v58;
  *(_QWORD *)&v69.fields.fakeValue = v57;
  BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v69, 0);
  if ( !tempTransformLimitCountSetting
    || (tempTransformLimitCountSetting->fields.randomLimitCount = (int)BaseServantEntity,
        v59 = *p_tempTransformLimitCountSetting,
        BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                 userServantEntity->fields.randomLimitCountSupport2,
                                                 0),
        !v59) )
  {
LABEL_18:
    sub_1D0F30C(BaseServantEntity, v19);
  }
  v59->fields.randomLimitCountSupport = (int)BaseServantEntity;
  ServantStatusListViewItem__RefreshWithRandom(v9, v9->fields.tempTransformLimitCountSetting, v60);
  if ( !UserServantEntity__CheckBaseServant(userServantEntity, -1, 0) )
  {
    v67 = *p_tempTransformLimitCountSetting;
    v9->fields.currentLimitCountSetting = *p_tempTransformLimitCountSetting;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&v9->fields.currentLimitCountSetting,
      (int32_t)v67,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
}


void ServantStatusListViewItem__SetupTempLimitCountSetting_37081072(
        ServantStatusListViewItem_o *this,
        ServantEntity_o *servantEntity,
        UserServantCollectionEntity_o *userServantCollectionEntity,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v6; // x19
  __int64 v7; // x22
  __int64 v8; // x23
  ServantStatusListViewItem_o *v9; // x0
  const MethodInfo *v10; // x4
  ServantStatusListViewItem_TempLimitCountSetting_o *TempLimitCountSetting_37101908; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t saveTransform; // w21
  ServantEntity_TransformInfo_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  ServantStatusListViewItem_o *v40; // x0
  const MethodInfo *v41; // x4
  ServantStatusListViewItem_TempLimitCountSetting_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v6 = this;
  if ( (byte_4E73D84 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D84 = 1;
  }
  if ( !servantEntity )
    goto LABEL_14;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v8;
  *(_QWORD *)&v49.fields.fakeValue = v7;
  v9 = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v49, 0);
  TempLimitCountSetting_37101908 = ServantStatusListViewItem__CreateTempLimitCountSetting_37101908(
                                     v9,
                                     userServantCollectionEntity,
                                     (int32_t)v9,
                                     0,
                                     v10);
  v6->fields.tempLimitCountSetting = TempLimitCountSetting_37101908;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v6->fields.tempLimitCountSetting,
    (int32_t)TempLimitCountSetting_37101908,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  tempLimitCountSetting = v6->fields.tempLimitCountSetting;
  v6->fields.currentLimitCountSetting = tempLimitCountSetting;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v6->fields.currentLimitCountSetting,
    (int32_t)tempLimitCountSetting,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  TransformInfo = ServantEntity__GetTransformInfo(servantEntity, 0);
  if ( TransformInfo )
  {
    saveTransform = TransformInfo->fields.saveTransform;
    if ( saveTransform >= 1 )
    {
      v6->fields.transformInfoBefore = TransformInfo;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v6->fields.transformInfoBefore,
        (int32_t)TransformInfo,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( this )
      {
        this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                saveTransform,
                                                (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          v33 = ServantEntity__GetTransformInfo((ServantEntity_o *)this, 0);
          v6->fields.transformInfoAfter = v33;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v6->fields.transformInfoAfter,
            (int32_t)v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          v42 = ServantStatusListViewItem__CreateTempLimitCountSetting_37101908(
                  v40,
                  userServantCollectionEntity,
                  saveTransform,
                  1,
                  v41);
          v6->fields.tempTransformLimitCountSetting = v42;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v6->fields.tempTransformLimitCountSetting,
            (int32_t)v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
          return;
        }
      }
LABEL_14:
      sub_1D0F30C(this, servantEntity);
    }
  }
}


void ServantStatusListViewItem__SetupTempLimitCountSetting_37084248(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ServantStatusListViewItem_TempLimitCountSetting_o *TempLimitCountSetting_37101124; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x1
  GrandQuestFolderBoardItem_o *p_currentLimitCountSetting; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantEntity_o *BaseServantEntity; // x0
  __int64 v22; // x1
  struct ServantEntity_TransformInfo_o *TransformInfo; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct ServantEntity_TransformInfo_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x3
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v38; // x0
  struct ServantStatusListViewItem_TempLimitCountSetting_o **p_tempTransformLimitCountSetting; // x19
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
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v52; // x1

  TempLimitCountSetting_37101124 = ServantStatusListViewItem__CreateTempLimitCountSetting_37101124(
                                     this,
                                     servantLeaderInfo,
                                     0,
                                     v3);
  this->fields.tempLimitCountSetting = TempLimitCountSetting_37101124;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.tempLimitCountSetting,
    (int32_t)TempLimitCountSetting_37101124,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  tempLimitCountSetting = this->fields.tempLimitCountSetting;
  this->fields.currentLimitCountSetting = tempLimitCountSetting;
  p_currentLimitCountSetting = (GrandQuestFolderBoardItem_o *)&this->fields.currentLimitCountSetting;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentLimitCountSetting,
    (int32_t)tempLimitCountSetting,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !servantLeaderInfo )
    goto LABEL_8;
  if ( !ServantLeaderInfo__get_IsSaveTransformServant(servantLeaderInfo, 0) )
    return;
  BaseServantEntity = ServantLeaderInfo__get_BaseServantEntity(servantLeaderInfo, 0);
  if ( !BaseServantEntity
    || (TransformInfo = ServantEntity__GetTransformInfo(BaseServantEntity, 0),
        this->fields.transformInfoBefore = TransformInfo,
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&this->fields.transformInfoBefore,
          (int32_t)TransformInfo,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        (BaseServantEntity = ServantLeaderInfo__get_SaveTransformServantEntity(servantLeaderInfo, 0)) == 0) )
  {
LABEL_8:
    sub_1D0F30C(BaseServantEntity, v22);
  }
  v30 = ServantEntity__GetTransformInfo(BaseServantEntity, 0);
  this->fields.transformInfoAfter = v30;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.transformInfoAfter,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v38 = ServantStatusListViewItem__CreateTempLimitCountSetting_37101124(this, servantLeaderInfo, 1, v37);
  this->fields.tempTransformLimitCountSetting = v38;
  p_tempTransformLimitCountSetting = &this->fields.tempTransformLimitCountSetting;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)p_tempTransformLimitCountSetting,
    (int32_t)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !ServantLeaderInfo__CheckBaseServant(servantLeaderInfo, -1, 0) )
  {
    v52 = *p_tempTransformLimitCountSetting;
    p_currentLimitCountSetting->klass = (GrandQuestFolderBoardItem_c *)*p_tempTransformLimitCountSetting;
    sub_1D0F058(p_currentLimitCountSetting, (int32_t)v52, v46, v47, v48, v49, v50, v51);
  }
}


bool ServantStatusListViewItem__UpdateServantComment(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  int32_t CardImageLimitCountStageSealAfter; // w20
  ServantCommentEntity_array *Master_object; // x0
  __int64 v5; // x1
  struct ServantEntity_o *baseSvtEntity; // x8
  ServantCommentMaster_o *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  _DWORD *klass; // x8
  GrandQuestFolderBoardItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v19; // x20
  int max_length; // w9
  unsigned int v21; // w10
  unsigned int v22; // w21
  char v23; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4E73D77 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D77 = 1;
  }
  CardImageLimitCountStageSealAfter = ServantStatusListViewItem__GetCardImageLimitCountStageSealAfter(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_20;
  v7 = (ServantCommentMaster_o *)Master_object;
  v9 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v9;
  *(_QWORD *)&v25.fields.fakeValue = v8;
  Master_object = (ServantCommentEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                                                  v25,
                                                  0);
  if ( !v7 )
    goto LABEL_20;
  Master_object = ServantCommentMaster__GetEntityList(
                    v7,
                    (int32_t)Master_object,
                    CardImageLimitCountStageSealAfter,
                    0,
                    0,
                    0,
                    0);
  svtCommentEntityList = this->fields.svtCommentEntityList;
  p_svtCommentEntityList = (GrandQuestFolderBoardItem_o *)&this->fields.svtCommentEntityList;
  klass = svtCommentEntityList;
  v19 = Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_21:
    v23 = 0;
    goto LABEL_24;
  }
  if ( !Master_object )
LABEL_20:
    sub_1D0F30C(Master_object, v5);
  max_length = klass[6];
  if ( max_length != LODWORD(Master_object->max_length) )
  {
    v23 = 1;
    goto LABEL_24;
  }
  if ( max_length < 1 )
    goto LABEL_21;
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= klass[6] || (v22 = v21, v21 >= max_length) )
      sub_1D0F314(Master_object);
    Master_object = *(ServantCommentEntity_array **)&klass[2 * v21 + 8];
    if ( !Master_object )
      goto LABEL_20;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, ServantCommentEntity_o *, const MethodInfo *))Master_object->obj.klass->vtable[0].methodPtr)(
                                                    Master_object,
                                                    v19->m_Items[v21],
                                                    Master_object->obj.klass->vtable[0].method);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      break;
    max_length = v19->max_length;
    v21 = v22 + 1;
    if ( (int)(v22 + 1) >= max_length )
      break;
    klass = p_svtCommentEntityList->klass;
    if ( !p_svtCommentEntityList->klass )
      goto LABEL_20;
  }
  v23 = (unsigned __int8)Master_object ^ 1;
LABEL_24:
  p_svtCommentEntityList->klass = (GrandQuestFolderBoardItem_c *)v19;
  sub_1D0F058(p_svtCommentEntityList, (int32_t)v19, v10, v11, v12, v13, v14, v15);
  return v23 & 1;
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
    sub_1D0F30C(this, method);
  return svtLimitEntity->fields.agility;
}


bool ServantStatusListViewItem__get_AnyTransformServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsTransformServant_k__BackingField || this->fields.tempTransformLimitCountSetting != 0;
}


int32_t ServantStatusListViewItem__get_Atk(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x8

  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields.transformedAtk;
  overwriteStatus = this->fields.overwriteStatus;
  if ( overwriteStatus )
    return overwriteStatus->fields._Atk_k__BackingField;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields.atk;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.atk;
  else
    return 0;
}


int32_t ServantStatusListViewItem__get_BeforeClearQuestId(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._BeforeClearQuestId_k__BackingField;
}


bool ServantStatusListViewItem__get_CanMoveCombine(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._CanMoveCombine_k__BackingField;
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


System_Int32_array *ServantStatusListViewItem__get_CommandCardParam(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCardParam;
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

  if ( (byte_4E73D61 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D61 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v7, 0);
}


System_Int32_array *ServantStatusListViewItem__get_CommandCodeIdList(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeIdList;
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
      sub_1D0F30C(this, method);
    p_Cost_k__BackingField = &svtEntity->fields.cost;
  }
  return *p_Cost_k__BackingField;
}


int32_t ServantStatusListViewItem__get_Defense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1D0F30C(this, method);
  return svtLimitEntity->fields.defense;
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

  if ( (byte_4E73D67 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D67 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v9, 0);
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


int32_t ServantStatusListViewItem__get_ExceedCount(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  int32_t *p_exceedCount; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8

  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    p_exceedCount = &userSvtEntity->fields.exceedCount;
    return *p_exceedCount;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    p_exceedCount = &servantLeaderInfo->fields.exceedCount;
    return *p_exceedCount;
  }
  return 0;
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
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x8

  if ( this->fields._IsTransformed_k__BackingField )
    return this->fields.transformedHp;
  overwriteStatus = this->fields.overwriteStatus;
  if ( overwriteStatus )
    return overwriteStatus->fields._Hp_k__BackingField;
  equipTargetInfo = this->fields.equipTargetInfo;
  if ( equipTargetInfo )
    return equipTargetInfo->fields.hp;
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
    return userSvtEntity->fields.hp;
  else
    return 0;
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
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_1D0F30C(this, method);
  return currentLimitCountSetting->fields.isConvertOverwriteImage;
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
  const MethodInfo *v2; // x2

  return ServantStatusListViewItem__CheckEnableOwnRandomSetting(this, this->fields.currentLimitCountSetting, v2);
}


bool ServantStatusListViewItem__get_IsEnableServantQuest(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnableServantQuest;
}


bool ServantStatusListViewItem__get_IsEnableSupportRandomSetting(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v2; // x19
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t randomLimitCountSupport; // w8

  v2 = this;
  if ( (byte_4E73D6E & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&OptionManager_TypeInfo);
    byte_4E73D6E = 1;
  }
  currentLimitCountSetting = v2->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_1D0F30C(this, method);
  randomLimitCountSupport = currentLimitCountSetting->fields.randomLimitCountSupport;
  if ( randomLimitCountSupport )
    return randomLimitCountSupport == 1;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  return OptionManager__GetRandomLimitCountFriend(0);
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


bool ServantStatusListViewItem__get_IsGrandServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsGrandServant_k__BackingField;
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


bool ServantStatusListViewItem__get_IsModifyLock(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userSvtEntity )
    return UserServantEntity__IsModifyLock(this->fields.userSvtEntity, this->fields.isLock, 0);
  if ( this->fields.userCommandCodeEntity )
    return UserCommandCodeEntity__IsModifyLock(this->fields.userCommandCodeEntity, this->fields.isLock, 0);
  return 0;
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


bool ServantStatusListViewItem__get_IsOpenSourceMySvt(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsOpenSourceMySvt_k__BackingField;
}


bool ServantStatusListViewItem__get_IsOpenSourceOtherSvt(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsOpenSourceOtherSvt_k__BackingField;
}


bool ServantStatusListViewItem__get_IsSaveTransformServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.tempTransformLimitCountSetting != 0;
}


bool ServantStatusListViewItem__get_IsServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0

  svtEntity = this->fields.svtEntity;
  if ( svtEntity )
    LOBYTE(svtEntity) = ServantEntity__get_IsServant(svtEntity, 0);
  return (char)svtEntity;
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

  if ( (byte_4E73D62 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D62 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v10, 0);
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
    sub_1D0F30C(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1D0F30C(this, method);
  return svtLimitEntity->fields.magic;
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


int32_t ServantStatusListViewItem__get_ModifyTransformVal(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._ModifyTransformVal_k__BackingField;
}


int32_t ServantStatusListViewItem__get_Np(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1D0F30C(this, method);
  return svtLimitEntity->fields.treasureDevice;
}


ServantOverwriteStatus_o *ServantStatusListViewItem__get_OverwriteStatus(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.overwriteStatus;
}


int32_t ServantStatusListViewItem__get_Power(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_1D0F30C(this, method);
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
      sub_1D0F30C(this, method);
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

  if ( (byte_4E73D60 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E73D60 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v7, 0);
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
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0

  transformInfoBefore = this->fields.transformInfoBefore;
  if ( transformInfoBefore )
    LOBYTE(transformInfoBefore) = ServantEntity_TransformInfo__IsNotClassSkillChange(transformInfoBefore, 0);
  return (char)transformInfoBefore;
}


bool ServantStatusListViewItem__get_TransformIsNotProfileParameterChange(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0

  transformInfoBefore = this->fields.transformInfoBefore;
  if ( transformInfoBefore )
    LOBYTE(transformInfoBefore) = ServantEntity_TransformInfo__IsNotProfileParameterChange(transformInfoBefore, 0);
  return (char)transformInfoBefore;
}


bool ServantStatusListViewItem__get_TransformIsNotSkillChange(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0

  transformInfoBefore = this->fields.transformInfoBefore;
  if ( transformInfoBefore )
    LOBYTE(transformInfoBefore) = ServantEntity_TransformInfo__IsNotSkillChange(transformInfoBefore, 0);
  return (char)transformInfoBefore;
}


UnityEngine_Color_o ServantStatusListViewItem__get_TransformNameLabelColor(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0

  transformInfoBefore = this->fields.transformInfoBefore;
  if ( transformInfoBefore )
    return ServantEntity_TransformInfo__GetCondLabelColor(transformInfoBefore, 0);
  else
    return TransformHelper__get_DefaultCondTitleLabelColor(0);
}


UnityEngine_Color_o ServantStatusListViewItem__get_TransformNameSpriteColor(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0

  transformInfoBefore = this->fields.transformInfoBefore;
  if ( transformInfoBefore )
    return ServantEntity_TransformInfo__GetCondSpriteColor(transformInfoBefore, 0);
  else
    return TransformHelper__get_DefaultCondTitleSpriteColor(0);
}


int32_t ServantStatusListViewItem__get_TransformedAgility(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1D0F30C(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t ServantStatusListViewItem__get_TransformedDefense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1D0F30C(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t ServantStatusListViewItem__get_TransformedLuck(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1D0F30C(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_TransformedMagic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1D0F30C(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t ServantStatusListViewItem__get_TransformedNp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1D0F30C(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t ServantStatusListViewItem__get_TransformedPower(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_1D0F30C(this, method);
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
  if ( (byte_4E73D76 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E73D76 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v8, 0);
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
        sub_1D0F30C(this, method);
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusListViewItem__set_IsGrandServant(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandServant_k__BackingField = value;
}


void ServantStatusListViewItem__set_IsMyEquip(ServantStatusListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsMyEquip_k__BackingField = value;
}


void ServantStatusListViewItem__set_IsOpenSourceMySvt(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOpenSourceMySvt_k__BackingField = value;
}


void ServantStatusListViewItem__set_IsOpenSourceOtherSvt(
        ServantStatusListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOpenSourceOtherSvt_k__BackingField = value;
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


void ServantStatusListViewItem__set_ModifyTransformVal(
        ServantStatusListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ModifyTransformVal_k__BackingField = value;
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
  sub_1D0F058(
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


void ServantStatusListViewItem_LimitCountSetting___ctor(
        ServantStatusListViewItem_LimitCountSetting_o *this,
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
  this->fields._ModifyStage_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._StageList_k__BackingField = stageList;
  v6 = (ServantStatusListViewItem_LimitCountStageData_o *)((char *)v6 + 16);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)v6, (int32_t)stageList, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = stage;
}


void ServantStatusListViewItem_LimitCountStageData___ctor_38205836(
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

  this->fields._ModifyStage_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._StageList_k__BackingField = stageList;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)stageList, v9, v10, v11, v12, v13, v14);
  this->fields._Stage_k__BackingField = stage;
  this->fields._ModifyStage_k__BackingField = originStage;
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
    sub_1D0F30C(this, index);
  max_length = StageList_k__BackingField->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1D0F314(this);
  v5 = StageList_k__BackingField->m_Items[index];
  Stage_k__BackingField = this->fields._Stage_k__BackingField;
  this->fields._Stage_k__BackingField = v5;
  this->fields._ModifyStage_k__BackingField = v5;
  return Stage_k__BackingField != v5;
}


void ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t svtId,
        int32_t dispLimitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *v10; // x19
  __int128 v11; // q1
  int64_t v12; // x0
  __int64 v13; // x25
  __int64 v14; // x26
  int64_t v15; // x24
  int32_t v16; // w25
  int32_t v17; // w0
  int32_t lv; // w23
  int32_t v19; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4E745EE & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantStatusListViewItem_LimitCountStageData_o *)sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    byte_4E745EE = 1;
  }
  if ( !userServantEntity )
    sub_1D0F30C(this, userServantEntity);
  v11 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v20, 0);
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v15 = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v22, 0);
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(userServantEntity->fields.limitCount, 0);
  lv = userServantEntity->fields.lv;
  v19 = v17;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  v10->fields._Stage_k__BackingField = RandomLimitCountManager__ChoiceLimitCount(
                                         v15,
                                         v16,
                                         svtId,
                                         v19,
                                         lv,
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void ServantStatusListViewItem_TempLimitCountSetting___ctor(
        ServantStatusListViewItem_TempLimitCountSetting_o *this,
        int32_t svtId,
        int32_t transformVal,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SvtId_k__BackingField = svtId;
  this->fields._TransformVal_k__BackingField = transformVal;
}


ServantStatusListViewItem_LimitCountSetting_o *ServantStatusListViewItem_TempLimitCountSetting__Export(
        ServantStatusListViewItem_TempLimitCountSetting_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8
  ServantStatusListViewItem_LimitCountSetting_o *result; // x0

  if ( (byte_4E745EF & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    byte_4E745EF = 1;
  }
  v3 = sub_1D0F300(ServantStatusListViewItem_LimitCountSetting_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_11;
  if ( !v3 )
    goto LABEL_11;
  *(_DWORD *)(v3 + 16) = cardImageLimitCountStageData->fields._ModifyStage_k__BackingField;
  dispLimitCountStageData = this->fields.dispLimitCountStageData;
  if ( !dispLimitCountStageData )
    goto LABEL_11;
  *(_DWORD *)(v3 + 20) = dispLimitCountStageData->fields._ModifyStage_k__BackingField;
  commandCardLimitCountStageData = this->fields.commandCardLimitCountStageData;
  if ( !commandCardLimitCountStageData
    || (*(_DWORD *)(v3 + 24) = commandCardLimitCountStageData->fields._ModifyStage_k__BackingField,
        (iconLimitCountStageData = this->fields.iconLimitCountStageData) == 0)
    || (*(_DWORD *)(v3 + 28) = iconLimitCountStageData->fields._ModifyStage_k__BackingField,
        (portraitLimitCountStageData = this->fields.portraitLimitCountStageData) == 0)
    || (*(_DWORD *)(v3 + 32) = portraitLimitCountStageData->fields._ModifyStage_k__BackingField,
        *(_QWORD *)(v3 + 36) = *(_QWORD *)&this->fields.randomLimitCount,
        (supportLimitCountStageData = this->fields.supportLimitCountStageData) == 0) )
  {
LABEL_11:
    sub_1D0F30C(v4, v5);
  }
  result = (ServantStatusListViewItem_LimitCountSetting_o *)v3;
  *(_DWORD *)(v3 + 44) = supportLimitCountStageData->fields._ModifyStage_k__BackingField;
  return result;
}


void ServantStatusListViewItem_TempLimitCountSetting__RefreshWithRandom(
        ServantStatusListViewItem_TempLimitCountSetting_o *this,
        UserServantEntity_o *userServantEntity,
        bool isRandom,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  struct ServantStatusListViewItem_LimitCountStageData_o *cardImageLimitCountStageData; // x0
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x5
  struct ServantStatusListViewItem_LimitCountStageData_o *v11; // x8
  const MethodInfo *v12; // x5
  struct ServantStatusListViewItem_LimitCountStageData_o *v13; // x8
  const MethodInfo *v14; // x5
  struct ServantStatusListViewItem_LimitCountStageData_o *v15; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *v16; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x8

  cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
  if ( isRandom )
  {
    dispLimitCountStageData = this->fields.dispLimitCountStageData;
    if ( dispLimitCountStageData )
    {
      if ( cardImageLimitCountStageData )
      {
        ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
          cardImageLimitCountStageData,
          userServantEntity,
          this->fields._SvtId_k__BackingField,
          dispLimitCountStageData->fields._ModifyStage_k__BackingField,
          1,
          v4);
        cardImageLimitCountStageData = this->fields.dispLimitCountStageData;
        if ( cardImageLimitCountStageData )
        {
          ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
            cardImageLimitCountStageData,
            userServantEntity,
            this->fields._SvtId_k__BackingField,
            cardImageLimitCountStageData->fields._ModifyStage_k__BackingField,
            0,
            v9);
          v11 = this->fields.dispLimitCountStageData;
          if ( v11 )
          {
            cardImageLimitCountStageData = this->fields.commandCardLimitCountStageData;
            if ( cardImageLimitCountStageData )
            {
              ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
                cardImageLimitCountStageData,
                userServantEntity,
                this->fields._SvtId_k__BackingField,
                v11->fields._ModifyStage_k__BackingField,
                0,
                v10);
              v13 = this->fields.dispLimitCountStageData;
              if ( v13 )
              {
                cardImageLimitCountStageData = this->fields.iconLimitCountStageData;
                if ( cardImageLimitCountStageData )
                {
                  ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
                    cardImageLimitCountStageData,
                    userServantEntity,
                    this->fields._SvtId_k__BackingField,
                    v13->fields._ModifyStage_k__BackingField,
                    1,
                    v12);
                  v15 = this->fields.dispLimitCountStageData;
                  if ( v15 )
                  {
                    cardImageLimitCountStageData = this->fields.portraitLimitCountStageData;
                    if ( cardImageLimitCountStageData )
                    {
                      ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
                        cardImageLimitCountStageData,
                        userServantEntity,
                        this->fields._SvtId_k__BackingField,
                        v15->fields._ModifyStage_k__BackingField,
                        0,
                        v14);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_1D0F30C(cardImageLimitCountStageData, userServantEntity);
  }
  if ( !cardImageLimitCountStageData )
    goto LABEL_18;
  cardImageLimitCountStageData->fields._Stage_k__BackingField = cardImageLimitCountStageData->fields._ModifyStage_k__BackingField;
  v16 = this->fields.dispLimitCountStageData;
  if ( !v16 )
    goto LABEL_18;
  v16->fields._Stage_k__BackingField = v16->fields._ModifyStage_k__BackingField;
  commandCardLimitCountStageData = this->fields.commandCardLimitCountStageData;
  if ( !commandCardLimitCountStageData )
    goto LABEL_18;
  commandCardLimitCountStageData->fields._Stage_k__BackingField = commandCardLimitCountStageData->fields._ModifyStage_k__BackingField;
  iconLimitCountStageData = this->fields.iconLimitCountStageData;
  if ( !iconLimitCountStageData )
    goto LABEL_18;
  iconLimitCountStageData->fields._Stage_k__BackingField = iconLimitCountStageData->fields._ModifyStage_k__BackingField;
  portraitLimitCountStageData = this->fields.portraitLimitCountStageData;
  if ( !portraitLimitCountStageData )
    goto LABEL_18;
  portraitLimitCountStageData->fields._Stage_k__BackingField = portraitLimitCountStageData->fields._ModifyStage_k__BackingField;
}


int32_t ServantStatusListViewItem_TempLimitCountSetting__get_SvtId(
        ServantStatusListViewItem_TempLimitCountSetting_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtId_k__BackingField;
}


int32_t ServantStatusListViewItem_TempLimitCountSetting__get_TransformVal(
        ServantStatusListViewItem_TempLimitCountSetting_o *this,
        const MethodInfo *method)
{
  return this->fields._TransformVal_k__BackingField;
}


void ServantStatusListViewItem_TempLimitCountSetting__set_SvtId(
        ServantStatusListViewItem_TempLimitCountSetting_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtId_k__BackingField = value;
}


void ServantStatusListViewItem_TempLimitCountSetting__set_TransformVal(
        ServantStatusListViewItem_TempLimitCountSetting_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TransformVal_k__BackingField = value;
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

  if ( (byte_4E745F0 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItem___c_TypeInfo);
    byte_4E745F0 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(ServantStatusListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItem___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItem___c_o *)v1;
  sub_1D0F058(
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


bool ServantStatusListViewItem___c___CreateTempLimitCountSetting_b__380_0(
        ServantStatusListViewItem___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return e > 0;
}


bool ServantStatusListViewItem___c___CreateTempLimitCountSetting_b__385_0(
        ServantStatusListViewItem___c_o *this,
        int32_t e,
        const MethodInfo *method)
{
  return e > 0;
}


void ServantStatusListViewItem___c__DisplayClass417_0___ctor(
        ServantStatusListViewItem___c__DisplayClass417_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusListViewItem___c__DisplayClass417_0___HasRandomGroup_b__0(
        ServantStatusListViewItem___c__DisplayClass417_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  int32_t limitCount; // w20
  int32_t svtId; // w21

  if ( (byte_4E745F1 & 1) == 0 )
  {
    sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    byte_4E745F1 = 1;
  }
  if ( e < 1 )
    return 0;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  return RandomLimitCountManager__GetGroupIndex(svtId, limitCount, e, 1, 0) != 0;
}