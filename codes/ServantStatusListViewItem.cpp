void ServantStatusListViewItem___ctor(
        ServantStatusListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_object__o *v25; // x24
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_object__o *v32; // x24
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_List_long__o *v39; // x24
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int64_t Instance; // x0
  const MethodInfo *v53; // x1
  bool v54; // w23
  struct PartyOrganizationListViewItem_o *v55; // x0
  struct PartyOrganizationListViewItem_o **p_memberItem; // x21
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  const MethodInfo_476E8C0 *v63; // x0
  bool v64; // w0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v79; // q0
  struct PartyOrganizationListViewItem_o *memberItem; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct PartyOrganizationListViewItem_o *v96; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  const MethodInfo *v98; // x4
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v102; // x8
  UserServantCollectionMaster_o *v103; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // q1
  __int64 v105; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v106; // x8
  int64_t v107; // x22
  __int64 v108; // x23
  __int64 v109; // x24
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  const MethodInfo *v117; // x4
  struct UserServantEntity_o *userSvtEntity; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w22
  struct ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  ServantLimitMaster_o *v136; // x23
  struct ServantLimitEntity_o *v137; // x0
  System_String_o *v138; // x2
  System_String_o *v139; // x3
  int32_t v140; // w4
  int32_t v141; // w5
  bool v142; // w6
  bool v143; // w7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v145; // x2
  System_String_o *v146; // x3
  int32_t v147; // w4
  int32_t v148; // w5
  bool v149; // w6
  bool v150; // w7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v160; // x8
  int32_t v161; // w8
  struct System_Int64_array *equipIdList; // x9
  bool IsLock; // w8
  const MethodInfo *v164; // x2
  QuestRestrictionInfo_o *v165; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v166; // x8
  __int64 v167; // x20
  __int64 v168; // x23
  int32_t v169; // w0
  __int64 OverwriteTempTreasureDeviceLv; // x0
  struct System_Int64_array *v171; // x8
  int64_t v172; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v175; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserGrandServantEntityList; // x8
  int32_t v177; // w2
  int v178; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *equipGrandServantLimitEntityList; // x8
  int32_t v180; // w2
  int v181; // w9
  struct System_Collections_Generic_List_SkillInfo____o *grandServantSkillInfoList; // x8
  int32_t v183; // w2
  int v184; // w9
  struct System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x8
  int v186; // w9
  struct UserServantCollectionEntity_o *v187; // x8
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v189; // x8
  const MethodInfo *v190; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v191; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v192; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16

  if ( (byte_59349D7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_59349D7 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v25;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v39,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v39;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.partyItem = partyItem;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
    (int32_t)partyItem,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( !partyItem )
    goto LABEL_68;
  v54 = isEnableServantQuest;
  v55 = PartyListViewItem__GetMember(partyItem, member, 0);
  this->fields.memberItem = v55;
  p_memberItem = &this->fields.memberItem;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.memberItem, (int32_t)v55, v57, v58, v59, v60, v61, v62);
  v63 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  this->fields.memberNum = member;
  this->fields.isEnableServantQuest = v54;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v63);
  if ( !Instance )
    goto LABEL_68;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0) )
  {
    v64 = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    v64 = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = v64;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  *(_BYTE *)(Instance + 205) = v54;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v66, v67, v68, v69, v70, v71);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99, v100);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v102 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v103 = (UserServantCollectionMaster_o *)Instance;
  v104 = v102[4];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v192.fields.currentCryptoKey = v102[3];
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v192.fields.fakeValue = v104;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53, v101);
  v191 = v192;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v191, 0);
  v106 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v107 = Instance;
  v108 = *(_QWORD *)&v106[5].fields.currentCryptoKey;
  v109 = *(_QWORD *)&v106[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53, v105);
  *(_QWORD *)&v193.fields.currentCryptoKey = v108;
  *(_QWORD *)&v193.fields.fakeValue = v109;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v193, 0);
  if ( !v103 )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v103, v107, Instance, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  ServantStatusListViewItem__SetupTempLimitCountSetting_42284616(
    this,
    this->fields.userSvtEntity,
    this->fields.userSvtCollectionEntity,
    this->fields.questRestrictionInfo,
    v117);
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userSvtEntity->fields.transformVal, 0);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)BaseServantEntity,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_68;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             SvtId_k__BackingField,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_68;
  v136 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412((*p_userSvtEntity)[6], 0);
  if ( !v136 )
    goto LABEL_68;
  v137 = ServantLimitMaster__GetEntity(v136, SvtId_k__BackingField, Instance, 0);
  this->fields.svtLimitEntity = v137;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_68;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_68;
  CommandCardParam = UserServantEntity__GetCommandCardParam((UserServantEntity_o *)Instance, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)CommandCardParam,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_68;
  svtCommonFlag = userSvtCollectionEntity->fields.svtCommonFlag;
  v160 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v160 )
    goto LABEL_68;
  v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v160->fields.battleVoice, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v161;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !Instance )
    goto LABEL_68;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_68;
  Instance = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  v165 = this->fields.questRestrictionInfo;
  *(_WORD *)&this->fields.isChoice = Instance & 1;
  if ( v165 )
  {
    v166 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_68;
    v167 = *(_QWORD *)&v166[5].fields.currentCryptoKey;
    v168 = *(_QWORD *)&v166[5].fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53, v164);
    *(_QWORD *)&v194.fields.currentCryptoKey = v167;
    *(_QWORD *)&v194.fields.fakeValue = v168;
    v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v194, 0);
    OverwriteTempTreasureDeviceLv = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(v165, v169, 0);
  }
  else
  {
    OverwriteTempTreasureDeviceLv = 0;
  }
  v171 = this->fields.equipIdList;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = OverwriteTempTreasureDeviceLv;
  if ( v171 )
  {
    if ( !LODWORD(v171->max_length) )
      sub_21FFED4(OverwriteTempTreasureDeviceLv);
    v172 = v171->m_Items[0];
  }
  else
  {
    v172 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v172, v164);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_68;
  size = equipGrandServantEntityList->fields._size;
  v175 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v175;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  equipUserGrandServantEntityList = this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_68;
  v177 = equipUserGrandServantEntityList->fields._size;
  v178 = equipUserGrandServantEntityList->fields._version + 1;
  equipUserGrandServantEntityList->fields._size = 0;
  equipUserGrandServantEntityList->fields._version = v178;
  if ( v177 >= 1 )
    System_Array__Clear((System_Array_o *)equipUserGrandServantEntityList->fields._items, 0, v177, 0);
  equipGrandServantLimitEntityList = this->fields.equipGrandServantLimitEntityList;
  if ( !equipGrandServantLimitEntityList )
    goto LABEL_68;
  v180 = equipGrandServantLimitEntityList->fields._size;
  v181 = equipGrandServantLimitEntityList->fields._version + 1;
  equipGrandServantLimitEntityList->fields._size = 0;
  equipGrandServantLimitEntityList->fields._version = v181;
  if ( v180 >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantLimitEntityList->fields._items, 0, v180, 0);
  grandServantSkillInfoList = this->fields.grandServantSkillInfoList;
  if ( !grandServantSkillInfoList )
    goto LABEL_68;
  v183 = grandServantSkillInfoList->fields._size;
  v184 = grandServantSkillInfoList->fields._version + 1;
  grandServantSkillInfoList->fields._size = 0;
  grandServantSkillInfoList->fields._version = v184;
  if ( v183 >= 1 )
    System_Array__Clear((System_Array_o *)grandServantSkillInfoList->fields._items, 0, v183, 0);
  grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
  if ( !grandServantEquipTargetIdList )
    goto LABEL_68;
  v186 = grandServantEquipTargetIdList->fields._version + 1;
  grandServantEquipTargetIdList->fields._size = 0;
  grandServantEquipTargetIdList->fields._version = v186;
  ServantStatusListViewItem__SetEquipTargetIds(this, v53);
  v187 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v187 != 0;
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
    sub_21FFECC(Instance, v53);
  IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
LABEL_67:
  v189 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields._IsOpenSourceMySvt_k__BackingField = 1;
  this->fields.isDisplayRandomLimitCount = v189 != 0;
  ServantStatusListViewItem__UpdateServantComment(this, v53);
  ServantStatusListViewItem__ModifyInfo(this, v190);
}


void ServantStatusListViewItem___ctor_42290696(
        ServantStatusListViewItem_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        bool isEnableServantQuest,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *v30; // x23
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_List_long__o *v37; // x23
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int64_t userSvtEntity; // x0
  const MethodInfo *v51; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v73; // q0
  struct PartyOrganizationListViewItem_o *v74; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userSvtEntity; // x20
  struct System_Int64_array *EquipList; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  struct PartyOrganizationListViewItem_o *v90; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  bool IsGrandServant; // w0
  const MethodInfo *v93; // x4
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x2
  struct UserServantEntity_o *v97; // x8
  UserServantCollectionMaster_o *v98; // x21
  __int128 v99; // q1
  __int64 v100; // x2
  struct UserServantEntity_o *v101; // x8
  int64_t v102; // x22
  __int64 v103; // x23
  __int64 v104; // x24
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  const MethodInfo *v112; // x4
  struct UserServantEntity_o *v113; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w22
  struct ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x21
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v131; // x8
  ServantLimitMaster_o *v132; // x20
  struct ServantLimitEntity_o *v133; // x0
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v156; // x8
  int32_t v157; // w8
  struct System_Int64_array *equipIdList; // x9
  bool IsLock; // w8
  _BOOL8 IsChoice; // x0
  const MethodInfo *v161; // x2
  struct System_Int64_array *v162; // x8
  int64_t v163; // x1
  struct UserServantCollectionEntity_o *v164; // x8
  bool IsNameTrue; // w0
  struct UserServantEntity_o *v166; // x8
  const MethodInfo *v167; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v169; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16

  if ( (byte_59349D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349D8 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v16;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v23;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v30;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v37;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.warBoardPartyItem,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.memberItem,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v60, v61, v62, v63, v64, v65);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v94, v95);
  userSvtEntity = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v97 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_42;
  v98 = (UserServantCollectionMaster_o *)userSvtEntity;
  v99 = *(_OWORD *)&v97->fields.userId.fields.fakeValue;
  *(_OWORD *)&v169.fields.currentCryptoKey = *(_OWORD *)&v97->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v169.fields.fakeValue = v99;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51, v96);
  v168 = v169;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v168, 0);
  v101 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_42;
  v102 = userSvtEntity;
  v103 = *(_QWORD *)&v101->fields.svtId.fields.currentCryptoKey;
  v104 = *(_QWORD *)&v101->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51, v100);
  *(_QWORD *)&v170.fields.currentCryptoKey = v103;
  *(_QWORD *)&v170.fields.fakeValue = v104;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v170, 0);
  if ( !v98 )
    goto LABEL_42;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v98, v102, userSvtEntity, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  ServantStatusListViewItem__SetupTempLimitCountSetting_42284616(
    this,
    this->fields.userSvtEntity,
    this->fields.userSvtCollectionEntity,
    this->fields.questRestrictionInfo,
    v112);
  v113 = this->fields.userSvtEntity;
  if ( !v113 )
    goto LABEL_42;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v113->fields.transformVal, 0);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)BaseServantEntity,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_42;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userSvtEntity )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity,
             SvtId_k__BackingField,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_42;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v131 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_42;
  v132 = (ServantLimitMaster_o *)userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v131[6], 0);
  if ( !v132 )
    goto LABEL_42;
  v133 = ServantLimitMaster__GetEntity(v132, SvtId_k__BackingField, userSvtEntity, 0);
  this->fields.svtLimitEntity = v133;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v133,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_42;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)userSvtEntity, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_42;
  CommandCardParam = UserServantEntity__GetCommandCardParam((UserServantEntity_o *)userSvtEntity, 0);
  this->fields.commandCardParam = CommandCardParam;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)CommandCardParam,
    v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_42;
  svtCommonFlag = userSvtCollectionEntity->fields.svtCommonFlag;
  v156 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v156 )
    goto LABEL_42;
  v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v156->fields.battleVoice, 0);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  equipIdList = this->fields.equipIdList;
  this->fields.changeVoiceFlag = v157;
  this->fields.isEquipShowMode = equipIdList != 0;
  if ( !userSvtEntity )
    goto LABEL_42;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)userSvtEntity, 0);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !userSvtEntity )
    goto LABEL_42;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)userSvtEntity, 0);
  v162 = this->fields.equipIdList;
  *(_WORD *)&this->fields.isChoice = IsChoice;
  if ( v162 )
  {
    if ( !LODWORD(v162->max_length) )
      sub_21FFED4(IsChoice);
    v163 = v162->m_Items[0];
  }
  else
  {
    v163 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v163, v161);
  v164 = this->fields.userSvtCollectionEntity;
  userSvtEntity = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v164 != 0;
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
    sub_21FFECC(userSvtEntity, v51);
  IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)userSvtEntity, 0);
LABEL_41:
  v166 = this->fields.userSvtEntity;
  this->fields.enableChangeVoice = IsNameTrue;
  this->fields._IsOpenSourceMySvt_k__BackingField = 1;
  this->fields.isDisplayRandomLimitCount = v166 != 0;
  ServantStatusListViewItem__UpdateServantComment(this, v51);
  ServantStatusListViewItem__ModifyInfo(this, v167);
}


void ServantStatusListViewItem___ctor_42292332(
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
  bool v18; // w20
  System_Collections_Generic_List_object__o *v19; // x26
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *v26; // x26
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_object__o *v33; // x26
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_object__o *v40; // x26
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_List_long__o *v47; // x26
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x26
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  int64_t Instance; // x0
  const MethodInfo *v63; // x1
  __int64 v64; // x2
  __int128 v65; // q1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct UserGameEntity_o *userGameEntity; // x8
  struct UserServantEntity_o **p_userSvtEntity; // x25
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x2
  struct UserServantEntity_o *v89; // x8
  UserServantCollectionMaster_o *v90; // x26
  __int128 v91; // q0
  __int128 v92; // q1
  int v93; // w8
  __int64 v94; // x2
  struct UserServantEntity_o *v95; // x8
  int64_t v96; // x27
  __int64 v97; // x28
  __int64 v98; // x29
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  const MethodInfo *v106; // x4
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x23
  __int64 v110; // x24
  int32_t v111; // w0
  const MethodInfo *v112; // x2
  bool IsGrandServant; // w0
  const MethodInfo *v114; // x4
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  const MethodInfo *v129; // x4
  __int64 v130; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v132; // x23
  __int64 v133; // x24
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w24
  struct ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  const MethodInfo_476E8C0 *v143; // x0
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_svtEntity; // x23
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  __int64 v152; // x2
  struct UserServantEntity_o *v153; // x8
  ServantLimitMaster_o *v154; // x26
  __int64 v155; // x27
  __int64 v156; // x28
  struct ServantLimitEntity_o *v157; // x0
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v166; // x8
  System_String_o *v167; // x2
  System_String_o *v168; // x3
  int32_t v169; // w4
  int32_t v170; // w5
  bool v171; // w6
  bool v172; // w7
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  bool IsLock; // w8
  bool IsChoice; // w8
  const MethodInfo *v181; // x2
  __int64 v182; // x2
  struct UserServantEntity_o *v183; // x8
  UserDeckMaster_o *v184; // x22
  __int128 v185; // q0
  __int128 v186; // q1
  int v187; // w8
  _BOOL8 IsEquip; // x0
  struct System_Int64_array *v189; // x8
  int64_t v190; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipGrandServantEntityList; // x8
  int32_t size; // w2
  int v193; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserGrandServantEntityList; // x8
  int32_t v195; // w2
  int v196; // w9
  struct System_Collections_Generic_List_ServantLimitEntity__o *equipGrandServantLimitEntityList; // x8
  int32_t v198; // w2
  int v199; // w9
  struct System_Collections_Generic_List_SkillInfo____o *grandServantSkillInfoList; // x8
  int32_t v201; // w2
  int v202; // w9
  struct System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x8
  int v204; // w9
  struct UserServantCollectionEntity_o *v205; // x8
  bool IsNameTrue; // w0
  bool v207; // w8
  const MethodInfo *v208; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v212; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v213; // [xsp+40h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v214; // [xsp+60h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v215; // [xsp+80h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // 0:x0.16

  v18 = isEnableServantQuest;
  if ( (byte_59349D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_59349D9 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v47,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v47;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
    (int32_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields._BeforeClearQuestId_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v56, v57, v58, v59, v60, v61);
  this->fields.isEnableServantQuest = v18;
  this->fields._BeforeClearQuestId_k__BackingField = beforeClearQuestId;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  *(_BYTE *)(Instance + 205) = v18;
  this->fields._CanMoveCombine_k__BackingField = canMoveCombine;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 40, 0) )
  {
    Instance = 1;
  }
  else
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_81;
    Instance = AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 39, 0);
  }
  this->fields._IsDisplayCombineButton_k__BackingField = Instance & 1;
  if ( !userServant )
    goto LABEL_81;
  v65 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v215.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v215.fields.fakeValue = v65;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v63, v64);
  v214 = v215;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v214, 0);
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v66, v67, v68, v69, v70, v71);
  }
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = &this->fields.userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServant,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.equipIdList = equipIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList,
    (int32_t)equipIdList,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v86, v87);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v89 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v90 = (UserServantCollectionMaster_o *)Instance;
  v91 = *(_OWORD *)&v89->fields.userId.fields.currentCryptoKey;
  v92 = *(_OWORD *)&v89->fields.userId.fields.fakeValue;
  v93 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v215.fields.currentCryptoKey = v91;
  *(_OWORD *)&v215.fields.fakeValue = v92;
  if ( !v93 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v63, v88);
  v213 = v215;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v213, 0);
  v95 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v96 = Instance;
  v97 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
  v98 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63, v94);
  *(_QWORD *)&v216.fields.currentCryptoKey = v97;
  *(_QWORD *)&v216.fields.fakeValue = v98;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v216, 0);
  if ( !v90 )
    goto LABEL_81;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v90, v96, Instance, 0);
  this->fields.userSvtCollectionEntity = EntityDefinitely;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)EntityDefinitely,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  if ( UserServantEntity__get_IsEquip(userServant, 0) )
  {
    ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v106);
    v109 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
    v110 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v107, v108);
    *(_QWORD *)&v217.fields.currentCryptoKey = v109;
    *(_QWORD *)&v217.fields.fakeValue = v110;
    v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v217, 0);
    ServantStatusListViewItem__SetupTempLimitCountSetting(this, v111, v112);
  }
  else
  {
    Instance = (int64_t)*p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_81;
    IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)Instance, 0);
    ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, isTempGrandServant, isForceNotGrand, v114);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_81;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)Instance, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
    Instance = (int64_t)this->fields.userSvtEntity;
    if ( !Instance )
      goto LABEL_81;
    CommandCardParam = UserServantEntity__GetCommandCardParam((UserServantEntity_o *)Instance, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
    ServantStatusListViewItem__SetupTempLimitCountSetting_42284616(
      this,
      this->fields.userSvtEntity,
      this->fields.userSvtCollectionEntity,
      questRestrictionInfo,
      v129);
    userSvtEntity = this->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_81;
    v132 = *(_QWORD *)&userSvtEntity->fields.transformVal.fields.currentCryptoKey;
    v133 = *(_QWORD *)&userSvtEntity->fields.transformVal.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63, v130);
    *(_QWORD *)&v218.fields.currentCryptoKey = v132;
    *(_QWORD *)&v218.fields.fakeValue = v133;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v218, 0);
    this->fields._ModifyTransformVal_k__BackingField = Instance;
  }
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    goto LABEL_81;
  Instance = (int64_t)*p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  SvtId_k__BackingField = currentLimitCountSetting->fields._SvtId_k__BackingField;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Instance, 0);
  this->fields.baseSvtEntity = BaseServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)BaseServantEntity,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  v143 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isFriendShipEquipSkillChange = isChangeFriendShipSkill;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v143);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_81;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             SvtId_k__BackingField,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v153 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_81;
  v154 = (ServantLimitMaster_o *)Instance;
  v155 = *(_QWORD *)&v153->fields.limitCount.fields.currentCryptoKey;
  v156 = *(_QWORD *)&v153->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63, v152);
  *(_QWORD *)&v219.fields.currentCryptoKey = v155;
  *(_QWORD *)&v219.fields.fakeValue = v156;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v219, 0);
  if ( !v154 )
    goto LABEL_81;
  v157 = ServantLimitMaster__GetEntity(v154, SvtId_k__BackingField, Instance, 0);
  this->fields.svtLimitEntity = v157;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v157,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_81;
  svtCommonFlag = userSvtCollectionEntity->fields.svtCommonFlag;
  v166 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v166 )
    goto LABEL_81;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                   v166->fields.battleVoice,
                                   0);
  this->fields.servantLeaderInfo = 0;
  this->fields.isEquipShowMode = equipIdList != 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo,
    0,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  this->fields.equipTargetInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipTargetInfo, 0, v173, v174, v175, v176, v177, v178);
  Instance = (int64_t)this->fields.userSvtEntity;
  if ( !Instance )
    goto LABEL_81;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_81;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isChoice = IsChoice;
  if ( !Instance )
    goto LABEL_81;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_81;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    v183 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_81;
    v184 = (UserDeckMaster_o *)Instance;
    v185 = *(_OWORD *)&v183->fields.id.fields.currentCryptoKey;
    v186 = *(_OWORD *)&v183->fields.id.fields.fakeValue;
    v187 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v215.fields.currentCryptoKey = v185;
    *(_OWORD *)&v215.fields.fakeValue = v186;
    if ( !v187 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v63, v182);
    v212 = v215;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v212, 0);
    if ( !v184 )
      goto LABEL_81;
    IsEquip = UserDeckMaster__IsEquip(v184, Instance, 0);
  }
  else
  {
    IsEquip = 0;
  }
  v189 = this->fields.equipIdList;
  this->fields.isUse = IsEquip;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = tempOverwriteTdLv;
  if ( v189 )
  {
    if ( !LODWORD(v189->max_length) )
      sub_21FFED4(IsEquip);
    v190 = v189->m_Items[0];
  }
  else
  {
    v190 = 0;
  }
  ServantStatusListViewItem__SetEquipTargetId1(this, v190, v181);
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_81;
  size = equipGrandServantEntityList->fields._size;
  v193 = equipGrandServantEntityList->fields._version + 1;
  equipGrandServantEntityList->fields._size = 0;
  equipGrandServantEntityList->fields._version = v193;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantEntityList->fields._items, 0, size, 0);
  equipUserGrandServantEntityList = this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_81;
  v195 = equipUserGrandServantEntityList->fields._size;
  v196 = equipUserGrandServantEntityList->fields._version + 1;
  equipUserGrandServantEntityList->fields._size = 0;
  equipUserGrandServantEntityList->fields._version = v196;
  if ( v195 >= 1 )
    System_Array__Clear((System_Array_o *)equipUserGrandServantEntityList->fields._items, 0, v195, 0);
  equipGrandServantLimitEntityList = this->fields.equipGrandServantLimitEntityList;
  if ( !equipGrandServantLimitEntityList )
    goto LABEL_81;
  v198 = equipGrandServantLimitEntityList->fields._size;
  v199 = equipGrandServantLimitEntityList->fields._version + 1;
  equipGrandServantLimitEntityList->fields._size = 0;
  equipGrandServantLimitEntityList->fields._version = v199;
  if ( v198 >= 1 )
    System_Array__Clear((System_Array_o *)equipGrandServantLimitEntityList->fields._items, 0, v198, 0);
  grandServantSkillInfoList = this->fields.grandServantSkillInfoList;
  if ( !grandServantSkillInfoList )
    goto LABEL_81;
  v201 = grandServantSkillInfoList->fields._size;
  v202 = grandServantSkillInfoList->fields._version + 1;
  grandServantSkillInfoList->fields._size = 0;
  grandServantSkillInfoList->fields._version = v202;
  if ( v201 >= 1 )
    System_Array__Clear((System_Array_o *)grandServantSkillInfoList->fields._items, 0, v201, 0);
  grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
  if ( !grandServantEquipTargetIdList )
    goto LABEL_81;
  v204 = grandServantEquipTargetIdList->fields._version + 1;
  grandServantEquipTargetIdList->fields._size = 0;
  grandServantEquipTargetIdList->fields._version = v204;
  ServantStatusListViewItem__SetEquipTargetIds(this, v63);
  v205 = this->fields.userSvtCollectionEntity;
  Instance = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v205 != 0 && enableTdSpeed;
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
    sub_21FFECC(Instance, v63);
  IsNameTrue = ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0);
LABEL_80:
  v207 = this->fields.userSvtEntity != 0;
  this->fields.enableChangeVoice = enableBattleVoice && IsNameTrue;
  this->fields.isDisplayRandomLimitCount = v207;
  this->fields._IsOpenSourceMySvt_k__BackingField = 1;
  ServantStatusListViewItem__UpdateServantComment(this, v63);
  ServantStatusListViewItem__ModifyInfo(this, v208);
}


void ServantStatusListViewItem___ctor_42295044(
        ServantStatusListViewItem_o *this,
        UserServantEntity_o *userServant,
        bool isUse,
        bool isSkillChange,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_long__o *v36; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int64_t userSvtEntity; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int128 v54; // q1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct UserGameEntity_o *userGameEntity; // x8
  __int128 v62; // q0
  bool v63; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x23
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  bool IsGrandServant; // w0
  const MethodInfo *v78; // x4
  __int64 v79; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x22
  __int64 v82; // x24
  __int64 v83; // x25
  Il2CppObject *Entity; // x24
  struct ServantEntity_o **p_svtEntity; // x22
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  ServantLimitMaster_o *v98; // x24
  int32_t v99; // w25
  struct ServantLimitEntity_o *v100; // x0
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  __int64 v107; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v108; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // q1
  int v111; // w9
  __int64 v112; // x21
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  __int64 v119; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v120; // x8
  UserServantCollectionMaster_o *v121; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // q1
  int v124; // w8
  __int64 v125; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v126; // x8
  int64_t v127; // x23
  __int64 v128; // x25
  __int64 v129; // x26
  struct UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v131; // w1
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  __int64 v140; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x8
  int32_t svtCommonFlag; // w9
  struct UserServantEntity_o *v143; // x8
  __int64 v144; // x23
  __int64 v145; // x24
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  bool IsLock; // w8
  bool IsChoice; // w0
  const MethodInfo *v160; // x2
  struct UserServantCollectionEntity_o *v161; // x8
  __int64 v162; // x2
  bool IsNameTrue; // w0
  bool v164; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v165; // x0
  __int64 v166; // x20
  __int64 v167; // x21
  int32_t v168; // w0
  const MethodInfo *v169; // x2
  const MethodInfo *v170; // x1
  const MethodInfo *v171; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16

  v7 = isSkillChange;
  if ( (byte_59349DA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349DA = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v22;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v29;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v36;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v45, v46, v47, v48, v49, v50);
  this->fields.isEnableServantQuest = 0;
  this->fields.isFriendShipEquipSkillChange = v7;
  if ( !userServant )
    goto LABEL_55;
  v54 = *(_OWORD *)&userServant->fields.userId.fields.fakeValue;
  *(_OWORD *)&v176.fields.currentCryptoKey = *(_OWORD *)&userServant->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v176.fields.fakeValue = v54;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52, v53);
  v175 = v176;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v175, 0);
  userGameEntity = p_fields->userGameEntity;
  if ( !p_fields->userGameEntity )
    goto LABEL_55;
  if ( userSvtEntity == userGameEntity->fields.userId )
  {
    v62 = *(_OWORD *)&userGameEntity->fields.favoriteUserSvtId;
    v63 = 1;
    *(_OWORD *)&this->fields.favoriteUserSvtId = v62;
  }
  else
  {
    this->fields.favoriteUserSvtId = -1;
    this->fields.pushUserSvtId = -1;
    this->fields.userGameEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v55, v56, v57, v58, v59, v60);
    v63 = 0;
  }
  this->fields._IsMyEquip_k__BackingField = v63;
  this->fields.userSvtEntity = userServant;
  p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userSvtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
    (int32_t)userServant,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.equipIdList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v65, v66, v67, v68, v69, v70);
  this->fields.questRestrictionInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo, 0, v71, v72, v73, v74, v75, v76);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_55;
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)userSvtEntity, 0);
  ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, 0, 0, v78);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_55;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v80 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_55;
  v81 = (DataMasterBase_TMaster__TEntity__PKType__o *)userSvtEntity;
  v82 = *(_QWORD *)&v80[5].fields.currentCryptoKey;
  v83 = *(_QWORD *)&v80[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52, v79);
  *(_QWORD *)&v177.fields.currentCryptoKey = v82;
  *(_QWORD *)&v177.fields.fakeValue = v83;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v177, 0);
  if ( !v81 )
    goto LABEL_55;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v81,
             userSvtEntity,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  p_svtEntity = &this->fields.svtEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.baseSvtEntity = (struct ServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)Entity,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !userSvtEntity )
    goto LABEL_55;
  userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)userSvtEntity,
                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtEntity )
    goto LABEL_55;
  v98 = (ServantLimitMaster_o *)userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412((*p_userSvtEntity)[5], 0);
  if ( !*p_userSvtEntity )
    goto LABEL_55;
  v99 = userSvtEntity;
  userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412((*p_userSvtEntity)[6], 0);
  if ( !v98 )
    goto LABEL_55;
  v100 = ServantLimitMaster__GetEntity(v98, v99, userSvtEntity, 0);
  this->fields.svtLimitEntity = v100;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v52, v107);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  userSvtEntity = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v52, v107);
    userSvtEntity = (int64_t)NetworkManager_TypeInfo;
  }
  v108 = *p_userSvtEntity;
  if ( !*p_userSvtEntity )
    goto LABEL_55;
  v109 = v108[3];
  v110 = v108[4];
  v111 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  v112 = *(_QWORD *)(*(_QWORD *)(userSvtEntity + 184) + 64LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.currentCryptoKey = v109;
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.fakeValue = v110;
  if ( !v111 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52, v107);
  v174 = v176;
  if ( v112 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v174, 0) )
  {
    userSvtEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !userSvtEntity )
      goto LABEL_55;
    userSvtEntity = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)userSvtEntity,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    v120 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_55;
    v121 = (UserServantCollectionMaster_o *)userSvtEntity;
    v122 = v120[3];
    v123 = v120[4];
    v124 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.currentCryptoKey = v122;
    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v176.fields.fakeValue = v123;
    if ( !v124 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52, v119);
    v173 = v176;
    userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v173, 0);
    v126 = *p_userSvtEntity;
    if ( !*p_userSvtEntity )
      goto LABEL_55;
    v127 = userSvtEntity;
    v128 = *(_QWORD *)&v126[5].fields.currentCryptoKey;
    v129 = *(_QWORD *)&v126[5].fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52, v125);
    *(_QWORD *)&v178.fields.currentCryptoKey = v128;
    *(_QWORD *)&v178.fields.fakeValue = v129;
    userSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v178, 0);
    if ( !v121 )
      goto LABEL_55;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v121, v127, userSvtEntity, 0);
    v131 = (int)EntityDefinitely;
    this->fields.userSvtCollectionEntity = EntityDefinitely;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  }
  else
  {
    v131 = 0;
    this->fields.userSvtCollectionEntity = 0;
    p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_userSvtCollectionEntity, v131, v113, v114, v115, v116, v117, v118);
  userSvtEntity = (int64_t)*(p_userSvtCollectionEntity - 3);
  if ( !userSvtEntity )
    goto LABEL_55;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)userSvtEntity, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
  if ( !userSvtCollectionEntity )
    goto LABEL_55;
  svtCommonFlag = userSvtCollectionEntity->fields.svtCommonFlag;
  v143 = this->fields.userSvtEntity;
  this->fields.svtCommonFlag = svtCommonFlag;
  if ( !v143 )
    goto LABEL_55;
  v144 = *(_QWORD *)&v143->fields.battleVoice.fields.currentCryptoKey;
  v145 = *(_QWORD *)&v143->fields.battleVoice.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52, v140);
  *(_QWORD *)&v179.fields.currentCryptoKey = v144;
  *(_QWORD *)&v179.fields.fakeValue = v145;
  this->fields.changeVoiceFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v179, 0);
  this->fields.servantLeaderInfo = 0;
  this->fields.isEquipShowMode = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo,
    0,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  this->fields.equipTargetInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipTargetInfo, 0, v152, v153, v154, v155, v156, v157);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_55;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)userSvtEntity, 0);
  userSvtEntity = (int64_t)this->fields.userSvtEntity;
  this->fields.isLock = IsLock;
  if ( !userSvtEntity )
    goto LABEL_55;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)userSvtEntity, 0);
  this->fields.isUse = isUse;
  this->fields.isChoice = IsChoice;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v160);
  v161 = this->fields.userSvtCollectionEntity;
  userSvtEntity = (int64_t)this->fields.svtEntity;
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = v161 != 0;
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
    sub_21FFECC(userSvtEntity, v52);
  }
  IsNameTrue = 0;
LABEL_52:
  v164 = IsNameTrue;
  v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableChangeVoice = v164;
  v167 = *(_QWORD *)&userServant->fields.svtId.fields.currentCryptoKey;
  v166 = *(_QWORD *)&userServant->fields.svtId.fields.fakeValue;
  if ( !*(&v165->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v165, v52, v162);
  *(_QWORD *)&v180.fields.currentCryptoKey = v167;
  *(_QWORD *)&v180.fields.fakeValue = v166;
  v168 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v180, 0);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, v168, v169);
  ServantStatusListViewItem__UpdateServantComment(this, v170);
  ServantStatusListViewItem__ModifyInfo(this, v171);
}


void ServantStatusListViewItem___ctor_42296860(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_long__o *v36; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  DataManager_o *Instance; // x0
  __int64 v52; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x22
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  __int64 v90; // x2
  struct UserServantCollectionEntity_o *v91; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x23
  __int64 v93; // x24
  __int64 v94; // x25
  Il2CppObject *Entity; // x23
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  ServantLimitMaster_o *v108; // x23
  struct ServantLimitEntity_o *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  const MethodInfo *v116; // x4
  __int64 v117; // x2
  struct ServantEntity_o *baseSvtEntity; // x8
  __int64 v119; // x21
  __int64 v120; // x23
  int32_t v121; // w0
  const MethodInfo *v122; // x2
  const MethodInfo *v123; // x2
  bool IsGrandServant; // w0
  const MethodInfo *v125; // x4
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  const MethodInfo *v140; // x3
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v142; // x8
  const MethodInfo *v143; // x1
  const MethodInfo *v144; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  v7 = isEnableServantQuest;
  if ( (byte_59349DB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349DB = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v22;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v29;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v36,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v36;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v45, v46, v47, v48, v49, v50);
  this->fields.isEnableServantQuest = v7;
  this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_26;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v53, v54, v55, v56, v57, v58);
  }
  this->fields.userSvtEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity, 0, v53, v54, v55, v56, v57, v58);
  this->fields.equipIdList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v59, v60, v61, v62, v63, v64);
  this->fields.questRestrictionInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo, 0, v65, v66, v67, v68, v69, v70);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.servantLeaderInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo, 0, v78, v79, v80, v81, v82, v83);
  this->fields.equipTargetInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipTargetInfo, 0, v84, v85, v86, v87, v88, v89);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v91 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_26;
  v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v93 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
  v94 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52, v90);
  *(_QWORD *)&v146.fields.currentCryptoKey = v93;
  *(_QWORD *)&v146.fields.fakeValue = v94;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v146, 0);
  if ( !v92 )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v92,
             (int32_t)Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.baseSvtEntity = (struct ServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)Entity,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_26;
  v108 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_26;
  if ( !v108 )
    goto LABEL_26;
  v109 = ServantLimitMaster__GetEntity(v108, (int32_t)Instance, (*p_userSvtCollectionEntity)->fields.maxLimitCount, 0);
  this->fields.svtLimitEntity = v109;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  Instance = (DataManager_o *)this->fields.baseSvtEntity;
  if ( !Instance )
    goto LABEL_26;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
  {
    ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v116);
    baseSvtEntity = this->fields.baseSvtEntity;
    if ( !baseSvtEntity )
      goto LABEL_26;
    v119 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
    v120 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52, v117);
    *(_QWORD *)&v147.fields.currentCryptoKey = v119;
    *(_QWORD *)&v147.fields.fakeValue = v120;
    v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v147, 0);
    ServantStatusListViewItem__SetupTempLimitCountSetting(this, v121, v122);
  }
  else
  {
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtCollectionEntity, 0);
    ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, 0, 0, v125);
    CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList(userSvtCollectionEntity, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
    CommandCardParam = UserServantCollectionEntity__GetCommandCardParam(userSvtCollectionEntity, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v134,
      v135,
      v136,
      v137,
      v138,
      v139);
    ServantStatusListViewItem__SetupTempLimitCountSetting_42298188(
      this,
      this->fields.svtEntity,
      userSvtCollectionEntity,
      v140);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_26;
  svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v123);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_26:
    sub_21FFECC(Instance, v52);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0);
  v142 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v142 != 0 && enableTdSpeed;
  ServantStatusListViewItem__UpdateServantComment(this, v143);
  ServantStatusListViewItem__ModifyInfo(this, v144);
}


void ServantStatusListViewItem___ctor_42298580(
        ServantStatusListViewItem_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t limitCount,
        bool isEnableServantQuest,
        bool enableTdSpeed,
        const MethodInfo *method)
{
  bool v8; // w24
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *v30; // x23
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_List_long__o *v37; // x23
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x23
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  DataManager_o *Instance; // x0
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct UserServantCollectionEntity_o **p_userSvtCollectionEntity; // x23
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x2
  struct UserServantCollectionEntity_o *v92; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x24
  __int64 v94; // x25
  __int64 v95; // x26
  Il2CppObject *Entity; // x24
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  ServantLimitMaster_o *v109; // x24
  struct ServantLimitEntity_o *v110; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  const MethodInfo *v117; // x4
  __int64 v118; // x2
  struct ServantEntity_o *baseSvtEntity; // x8
  __int64 v120; // x21
  __int64 v121; // x22
  int32_t v122; // w0
  const MethodInfo *v123; // x2
  const MethodInfo *v124; // x2
  bool IsGrandServant; // w0
  const MethodInfo *v126; // x4
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  struct System_Int32_array *CommandCardParam; // x0
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7
  const MethodInfo *v141; // x3
  int32_t svtCommonFlag; // w8
  struct UserServantCollectionEntity_o *v143; // x8
  const MethodInfo *v144; // x1
  const MethodInfo *v145; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16

  v8 = isEnableServantQuest;
  if ( (byte_59349DC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349DC = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v16;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v23;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v30;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v37;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v46, v47, v48, v49, v50, v51);
  this->fields.isEnableServantQuest = v8;
  this->fields.isEquipShowMode = 0;
  if ( !userSvtCollectionEntity || !p_fields->userGameEntity )
    goto LABEL_25;
  if ( userSvtCollectionEntity->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v54, v55, v56, v57, v58, v59);
  }
  this->fields.userSvtEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity, 0, v54, v55, v56, v57, v58, v59);
  this->fields.equipIdList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v60, v61, v62, v63, v64, v65);
  this->fields.questRestrictionInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo, 0, v66, v67, v68, v69, v70, v71);
  this->fields.userSvtCollectionEntity = userSvtCollectionEntity;
  p_userSvtCollectionEntity = &this->fields.userSvtCollectionEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    (int32_t)userSvtCollectionEntity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.servantLeaderInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo, 0, v79, v80, v81, v82, v83, v84);
  this->fields.equipTargetInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipTargetInfo, 0, v85, v86, v87, v88, v89, v90);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v92 = *p_userSvtCollectionEntity;
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_25;
  v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v94 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
  v95 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53, v91);
  *(_QWORD *)&v148.fields.currentCryptoKey = v94;
  *(_QWORD *)&v148.fields.fakeValue = v95;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v148, 0);
  if ( !v93 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v93,
             (int32_t)Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  this->fields.baseSvtEntity = (struct ServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)Entity,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_25;
  v109 = (ServantLimitMaster_o *)Instance;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                (*p_userSvtCollectionEntity)->fields.svtId,
                                0);
  if ( !v109 )
    goto LABEL_25;
  v110 = ServantLimitMaster__GetEntity(v109, (int32_t)Instance, limitCount, 0);
  this->fields.svtLimitEntity = v110;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  Instance = (DataManager_o *)this->fields.baseSvtEntity;
  if ( !Instance )
    goto LABEL_25;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0) )
  {
    ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v117);
    baseSvtEntity = this->fields.baseSvtEntity;
    if ( !baseSvtEntity )
      goto LABEL_25;
    v120 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
    v121 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53, v118);
    *(_QWORD *)&v149.fields.currentCryptoKey = v120;
    *(_QWORD *)&v149.fields.fakeValue = v121;
    v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v149, 0);
    ServantStatusListViewItem__SetupTempLimitCountSetting(this, v122, v123);
  }
  else
  {
    IsGrandServant = UserServantCollectionEntity__IsGrandServant(userSvtCollectionEntity, 0);
    ServantStatusListViewItem__SetGrandInfo(this, IsGrandServant, 0, 0, v126);
    CommandCodeIdList = UserServantCollectionEntity__getCommandCodeIdList(userSvtCollectionEntity, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v128,
      v129,
      v130,
      v131,
      v132,
      v133);
    CommandCardParam = UserServantCollectionEntity__GetCommandCardParam(userSvtCollectionEntity, 0);
    this->fields.commandCardParam = CommandCardParam;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commandCardParam,
      (int32_t)CommandCardParam,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
    ServantStatusListViewItem__SetupTempLimitCountSetting_42298188(
      this,
      this->fields.svtEntity,
      userSvtCollectionEntity,
      v141);
  }
  if ( !*p_userSvtCollectionEntity )
    goto LABEL_25;
  svtCommonFlag = (*p_userSvtCollectionEntity)->fields.svtCommonFlag;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.svtCommonFlag = svtCommonFlag;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v124);
  Instance = (DataManager_o *)this->fields.userSvtCollectionEntity;
  this->fields.isCollection = 1;
  if ( !Instance )
LABEL_25:
    sub_21FFECC(Instance, v53);
  UserServantCollectionEntity__getCollectionStatus(
    (UserServantCollectionEntity_o *)Instance,
    &this->fields.collectionLv,
    &this->fields.collectionHp,
    &this->fields.collectionAtk,
    0);
  v143 = this->fields.userSvtCollectionEntity;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields.enableTdSpeed = v143 != 0 && enableTdSpeed;
  ServantStatusListViewItem__UpdateServantComment(this, v144);
  ServantStatusListViewItem__ModifyInfo(this, v145);
}


void ServantStatusListViewItem___ctor_42299900(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isEquipShowMode,
        const MethodInfo *method)
{
  bool v6; // w23
  System_Collections_Generic_List_object__o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_List_object__o *v28; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_List_long__o *v35; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct ServantLeaderInfo_o **p_servantLeaderInfo; // x21
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *SelfUserGame; // x0
  __int64 v86; // x1
  bool IsGrandSvt; // w0
  const MethodInfo *v88; // x4
  const MethodInfo *v89; // x2
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w22
  struct ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  __int64 v99; // x1
  __int64 v100; // x2
  Il2CppObject *Entity; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct ServantLimitEntity_o *v108; // x0
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  struct ServantLeaderInfo_o *v128; // x8
  struct System_Int32_array *commandCardParam; // x1
  const MethodInfo *v130; // x2
  const MethodInfo *v131; // x1
  __int64 v132; // x2
  struct ServantLeaderInfo_o *v133; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v135; // x22
  __int64 v136; // x23
  __int64 v137; // x2
  struct EquipTargetInfo_o *v138; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v139; // x22
  __int64 v140; // x23
  __int64 v141; // x24
  Il2CppObject *v142; // x0
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  struct EquipTargetInfo_o *v149; // x8
  ServantLimitMaster_o *v150; // x22
  struct EquipTargetInfo_o *v151; // x8
  struct ServantLimitEntity_o *v152; // x0
  System_String_o *v153; // x2
  System_String_o *v154; // x3
  int32_t v155; // w4
  int32_t v156; // w5
  bool v157; // w6
  bool v158; // w7
  bool IsUserServant_k__BackingField; // w8
  const MethodInfo *v160; // x1
  const MethodInfo *v161; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  v6 = isEquipShowMode;
  if ( (byte_59349DD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349DD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v21;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v35;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v42, v43, v44, v45, v46, v47);
  this->fields.userSvtEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity, 0, v48, v49, v50, v51, v52, v53);
  this->fields.equipIdList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v54, v55, v56, v57, v58, v59);
  this->fields.questRestrictionInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo, 0, v60, v61, v62, v63, v64, v65);
  this->fields.userSvtCollectionEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    0,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.servantLeaderInfo = servantLeaderInfo;
  p_servantLeaderInfo = &this->fields.servantLeaderInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo,
    (int32_t)servantLeaderInfo,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.equipTargetInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipTargetInfo, 0, v79, v80, v81, v82, v83, v84);
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
  ServantStatusListViewItem__SetupTempLimitCountSetting_42301364(this, servantLeaderInfo, v89);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLeaderInfo__get_TransformVal(servantLeaderInfo, 0);
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  this->fields._ModifyTransformVal_k__BackingField = (int)SelfUserGame;
  if ( !currentLimitCountSetting )
    goto LABEL_34;
  SvtId_k__BackingField = currentLimitCountSetting->fields._SvtId_k__BackingField;
  BaseServantEntity = ServantLeaderInfo__get_BaseServantEntity(servantLeaderInfo, 0);
  this->fields.baseSvtEntity = BaseServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)BaseServantEntity,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99, v100);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_34;
  Entity = DataMasterBase_object__object__int___GetEntity(
             SelfUserGame,
             SvtId_k__BackingField,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  if ( !SelfUserGame )
    goto LABEL_34;
  v108 = ServantLimitMaster__GetEntity(
           (ServantLimitMaster_o *)SelfUserGame,
           SvtId_k__BackingField,
           servantLeaderInfo->fields.limitCount,
           0);
  this->fields.svtLimitEntity = v108;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantLeaderInfo;
  if ( !SelfUserGame )
    goto LABEL_34;
  CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList((ServantLeaderInfo_o *)SelfUserGame, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v128 = this->fields.servantLeaderInfo;
  if ( !v128 )
    goto LABEL_34;
  commandCardParam = v128->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCardParam,
    (int32_t)commandCardParam,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v130);
  ServantStatusListViewItem__SetEquipTargetIds(this, v131);
  v133 = this->fields.servantLeaderInfo;
  this->fields.isCollection = 0;
  if ( !v133 )
    goto LABEL_34;
  equipTarget1 = v133->fields.equipTarget1;
  if ( equipTarget1 )
  {
    v135 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
    v136 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v86, v132);
    *(_QWORD *)&v162.fields.currentCryptoKey = v135;
    *(_QWORD *)&v162.fields.fakeValue = v136;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v162, 0) >= 1 )
    {
      SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                       (DataManager_o *)SelfUserGame,
                                                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( *p_servantLeaderInfo )
        {
          v138 = (*p_servantLeaderInfo)->fields.equipTarget1;
          if ( v138 )
          {
            v139 = SelfUserGame;
            v140 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
            v141 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v86, v137);
            *(_QWORD *)&v163.fields.currentCryptoKey = v140;
            *(_QWORD *)&v163.fields.fakeValue = v141;
            SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                           v163,
                                                                           0);
            if ( v139 )
            {
              v142 = DataMasterBase_object__object__int___GetEntity(
                       v139,
                       (int32_t)SelfUserGame,
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.equipServantEntity = (struct ServantEntity_o *)v142;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntity,
                (int32_t)v142,
                v143,
                v144,
                v145,
                v146,
                v147,
                v148);
              SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( SelfUserGame )
              {
                SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                               (DataManager_o *)SelfUserGame,
                                                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                if ( *p_servantLeaderInfo )
                {
                  v149 = (*p_servantLeaderInfo)->fields.equipTarget1;
                  if ( v149 )
                  {
                    v150 = (ServantLimitMaster_o *)SelfUserGame;
                    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                   v149->fields.svtId,
                                                                                   0);
                    if ( *p_servantLeaderInfo )
                    {
                      v151 = (*p_servantLeaderInfo)->fields.equipTarget1;
                      if ( v151 )
                      {
                        if ( v150 )
                        {
                          v152 = ServantLimitMaster__GetEntity(v150, (int32_t)SelfUserGame, v151->fields.limitCount, 0);
                          this->fields.equipSvtLimitEntity = v152;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)&this->fields.equipSvtLimitEntity,
                            (int32_t)v152,
                            v153,
                            v154,
                            v155,
                            v156,
                            v157,
                            v158);
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
      sub_21FFECC(SelfUserGame, v86);
    }
  }
LABEL_32:
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_servantLeaderInfo;
  if ( !*p_servantLeaderInfo )
    goto LABEL_34;
  ServantLeaderInfo__getEquipSkillInfo((ServantLeaderInfo_o *)SelfUserGame, &this->fields.equipSkillInfoList, 0);
  IsUserServant_k__BackingField = servantLeaderInfo->fields._IsUserServant_k__BackingField;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  this->fields._IsOpenSourceOtherSvt_k__BackingField = IsUserServant_k__BackingField;
  ServantStatusListViewItem__UpdateServantComment(this, v160);
  ServantStatusListViewItem__ModifyInfo(this, v161);
}


void ServantStatusListViewItem___ctor_42301620(
        ServantStatusListViewItem_o *this,
        EquipTargetInfo_o *equipTargetInfo,
        bool isNpcFollowerServantEquip,
        bool isMyEquip,
        const MethodInfo *method)
{
  bool v9; // w26
  System_Collections_Generic_List_object__o *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x22
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_long__o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct EquipTargetInfo_o **p_equipTargetInfo; // x22
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  Il2CppObject *Instance; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  struct EquipTargetInfo_o *v91; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x21
  __int64 v93; // x23
  __int64 v94; // x24
  Il2CppObject *Entity; // x21
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  ServantLimitMaster_o *v108; // x21
  struct ServantLimitEntity_o *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x4
  int32_t v130; // w0
  const MethodInfo *v131; // x2
  const MethodInfo *v132; // x1
  const MethodInfo *v133; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16

  if ( (byte_59349DE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349DE = 1;
  }
  v9 = isNpcFollowerServantEquip;
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v38,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v38;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v45, v46, v47, v48, v49, v50);
  this->fields.userSvtEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity, 0, v51, v52, v53, v54, v55, v56);
  this->fields.equipIdList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v57, v58, v59, v60, v61, v62);
  this->fields.questRestrictionInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo, 0, v63, v64, v65, v66, v67, v68);
  this->fields.userSvtCollectionEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEntity,
    0,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.servantLeaderInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.servantLeaderInfo, 0, v75, v76, v77, v78, v79, v80);
  this->fields.equipTargetInfo = equipTargetInfo;
  p_equipTargetInfo = &this->fields.equipTargetInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipTargetInfo,
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v91 = *p_equipTargetInfo;
  if ( !*p_equipTargetInfo )
    goto LABEL_14;
  v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v93 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
  v94 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v89, v90);
  *(_QWORD *)&v134.fields.currentCryptoKey = v93;
  *(_QWORD *)&v134.fields.fakeValue = v94;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v134, 0);
  if ( !v92 )
    goto LABEL_14;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v92,
             (int32_t)Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtEntity = (struct ServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntity,
    (int32_t)Entity,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.baseSvtEntity = (struct ServantEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtEntity,
    (int32_t)Entity,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_equipTargetInfo )
    goto LABEL_14;
  v108 = (ServantLimitMaster_o *)Instance;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                               (*p_equipTargetInfo)->fields.svtId,
                               0);
  if ( !*p_equipTargetInfo )
    goto LABEL_14;
  if ( !v108 )
    goto LABEL_14;
  v109 = ServantLimitMaster__GetEntity(v108, (int32_t)Instance, (*p_equipTargetInfo)->fields.limitCount, 0);
  this->fields.svtLimitEntity = v109;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtLimitEntity,
    (int32_t)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  this->fields.commandCodeIdList = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
    0,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  this->fields.commandCardParam = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.commandCardParam, 0, v122, v123, v124, v125, v126, v127);
  this->fields.svtCommonFlag = 0;
  this->fields.changeVoiceFlag = 0;
  *(_WORD *)&this->fields.isLock = 0;
  this->fields.isUse = 0;
  ServantStatusListViewItem__SetEquipTargetId1(this, 0, v128);
  this->fields.isCollection = 0;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v129);
  if ( !equipTargetInfo )
LABEL_14:
    sub_21FFECC(Instance, v89);
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(equipTargetInfo->fields.svtId, 0);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, v130, v131);
  ServantStatusListViewItem__UpdateServantComment(this, v132);
  ServantStatusListViewItem__ModifyInfo(this, v133);
}


void ServantStatusListViewItem___ctor_42302708(
        ServantStatusListViewItem_o *this,
        CommandCodeEntity_o *commandCode,
        bool isUse,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_List_object__o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_List_long__o *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  DataManager_o *Instance; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x21
  __int64 v65; // x22
  __int64 v66; // x23
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  const MethodInfo *v73; // x4
  const MethodInfo *v74; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_59349DF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349DF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v7;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v21;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v35;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v42, v43, v44, v45, v46, v47);
  this->fields.userCommandCodeEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeEntity, 0, v48, v49, v50, v51, v52, v53);
  this->fields.commandCodeEntity = commandCode;
  this->fields.isEnableServantQuest = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)commandCode,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v65 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v66 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61, v62);
  *(_QWORD *)&v75.fields.currentCryptoKey = v65;
  *(_QWORD *)&v75.fields.fakeValue = v66;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v75, 0);
  if ( !v64 )
    goto LABEL_10;
  DataMasterBase_object__object__int___TryGetEntity(
    v64,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    (int32_t)Instance,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  this->fields.userCommandCodeCollectionEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeCollectionEntity,
    0,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = (DataManager_o *)this->fields.commandCodeEntity;
  this->fields.isChoice = 0;
  this->fields.isUse = isUse;
  this->fields.enableTdSpeed = 0;
  *(_WORD *)&this->fields.enableChangeVoice = 0;
  this->fields.isDisplayRandomLimitCount = 0;
  if ( !Instance )
LABEL_10:
    sub_21FFECC(Instance, v61);
  CommandCodeEntity__GetSkillInfo(
    (CommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
  ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v73);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, 0, v74);
}


void ServantStatusListViewItem___ctor_42303520(
        ServantStatusListViewItem_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_long__o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int64_t Instance; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int128 v51; // q1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct UserCommandCodeEntity_o **p_userCommandCodeEntity; // x20
  __int64 v59; // x2
  struct UserCommandCodeEntity_o *v60; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x21
  __int64 v62; // x22
  __int64 v63; // x23
  Il2CppObject *Entity; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x21
  __int64 v73; // x2
  struct UserCommandCodeEntity_o *v74; // x9
  __int128 v75; // q0
  __int128 v76; // q1
  int v77; // w9
  __int64 v78; // x21
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  __int64 v85; // x2
  struct UserCommandCodeEntity_o *v86; // x8
  UserCommandCodeCollectionMaster_o *v87; // x21
  __int128 v88; // q0
  __int128 v89; // q1
  int v90; // w8
  __int64 v91; // x2
  struct UserCommandCodeEntity_o *v92; // x8
  int64_t v93; // x22
  __int64 v94; // x23
  __int64 v95; // x24
  struct UserCommandCodeCollectionEntity_o *EntityDefinitely; // x0
  int32_t v97; // w1
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x0
  bool IsLock; // w8
  bool IsChoice; // w0
  const MethodInfo_476E8C0 *v101; // x8
  __int64 v102; // x2
  struct UserCommandCodeEntity_o *v103; // x8
  UserServantCommandCodeMaster_o *v104; // x20
  __int128 v105; // q0
  __int128 v106; // q1
  int v107; // w8
  bool IsAttach; // w8
  const MethodInfo *v109; // x4
  const MethodInfo *v110; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_59349E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349E0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v42, v43, v44, v45, v46, v47);
  this->fields.isEnableServantQuest = 0;
  if ( !userCommandCode )
    goto LABEL_46;
  v51 = *(_OWORD *)&userCommandCode->fields.userId.fields.fakeValue;
  *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v115.fields.fakeValue = v51;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v49, v50);
  v114 = v115;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v114, 0);
  if ( !p_fields->userGameEntity )
    goto LABEL_46;
  if ( Instance != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v52, v53, v54, v55, v56, v57);
  }
  this->fields.userCommandCodeEntity = userCommandCode;
  p_userCommandCodeEntity = &this->fields.userCommandCodeEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)userCommandCode,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v60 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v62 = *(_QWORD *)&v60->fields.commandCodeId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&v60->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49, v59);
  *(_QWORD *)&v116.fields.currentCryptoKey = v62;
  *(_QWORD *)&v116.fields.fakeValue = v63;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v116, 0);
  if ( !v61 )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v61,
             Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( !userCommandCodeEntity )
    goto LABEL_46;
  v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
               userCommandCodeEntity->fields.commandCodeId,
               0);
  if ( !v72 )
    goto LABEL_46;
  DataMasterBase_object__object__int___TryGetEntity(
    v72,
    (Il2CppObject **)&this->fields.commandCodeCommentEntity,
    Instance,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v49, v73);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v49, v73);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v74 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v75 = *(_OWORD *)&v74->fields.userId.fields.currentCryptoKey;
  v76 = *(_OWORD *)&v74->fields.userId.fields.fakeValue;
  v77 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  v78 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  *(_OWORD *)&v115.fields.currentCryptoKey = v75;
  *(_OWORD *)&v115.fields.fakeValue = v76;
  if ( !v77 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v49, v73);
  v113 = v115;
  if ( v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v113, 0) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
      v86 = *p_userCommandCodeEntity;
      if ( *p_userCommandCodeEntity )
      {
        v87 = (UserCommandCodeCollectionMaster_o *)Instance;
        v88 = *(_OWORD *)&v86->fields.userId.fields.currentCryptoKey;
        v89 = *(_OWORD *)&v86->fields.userId.fields.fakeValue;
        v90 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v115.fields.currentCryptoKey = v88;
        *(_OWORD *)&v115.fields.fakeValue = v89;
        if ( !v90 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v49, v85);
        v112 = v115;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v112, 0);
        v92 = *p_userCommandCodeEntity;
        if ( *p_userCommandCodeEntity )
        {
          v93 = Instance;
          v94 = *(_QWORD *)&v92->fields.commandCodeId.fields.currentCryptoKey;
          v95 = *(_QWORD *)&v92->fields.commandCodeId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49, v91);
          *(_QWORD *)&v117.fields.currentCryptoKey = v94;
          *(_QWORD *)&v117.fields.fakeValue = v95;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v117, 0);
          if ( v87 )
          {
            EntityDefinitely = UserCommandCodeCollectionMaster__GetEntityDefinitely(v87, v93, Instance, 0);
            v97 = (int)EntityDefinitely;
            this->fields.userCommandCodeCollectionEntity = EntityDefinitely;
            p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_46:
    sub_21FFECC(Instance, v49);
  }
  v97 = 0;
  this->fields.userCommandCodeCollectionEntity = 0;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
LABEL_37:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_userCommandCodeCollectionEntity, v97, v79, v80, v81, v82, v83, v84);
  Instance = (int64_t)*p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  IsLock = UserCommandCodeEntity__IsLock((UserCommandCodeEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_46;
  IsChoice = UserCommandCodeEntity__IsChoice((UserCommandCodeEntity_o *)Instance, 0);
  v101 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isChoice = IsChoice;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v101);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  v103 = *p_userCommandCodeEntity;
  if ( !*p_userCommandCodeEntity )
    goto LABEL_46;
  v104 = (UserServantCommandCodeMaster_o *)Instance;
  v105 = *(_OWORD *)&v103->fields.id.fields.currentCryptoKey;
  v106 = *(_OWORD *)&v103->fields.id.fields.fakeValue;
  v107 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v115.fields.currentCryptoKey = v105;
  *(_OWORD *)&v115.fields.fakeValue = v106;
  if ( !v107 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v49, v102);
  v111 = v115;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v111, 0);
  if ( !v104 )
    goto LABEL_46;
  IsAttach = UserServantCommandCodeMaster__IsAttach(v104, Instance, 0);
  Instance = (int64_t)this->fields.userCommandCodeEntity;
  this->fields.enableTdSpeed = 0;
  this->fields.enableChangeVoice = 0;
  *(_WORD *)&this->fields.isUse = IsAttach;
  if ( !Instance )
    goto LABEL_46;
  UserCommandCodeEntity__GetSkillInfo(
    (UserCommandCodeEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
  ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v109);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, 0, v110);
}


void ServantStatusListViewItem___ctor_42305076(
        ServantStatusListViewItem_o *this,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollection,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_long__o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UserGameEntity_o *SelfUserGame; // x0
  ServantStatusListViewItem_Fields *p_fields; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct UserCommandCodeCollectionEntity_o **p_userCommandCodeCollectionEntity; // x21
  __int64 v57; // x2
  struct UserCommandCodeCollectionEntity_o *v58; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x20
  __int64 v60; // x21
  __int64 v61; // x22
  Il2CppObject *Entity; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x20
  const MethodInfo *v71; // x4
  const MethodInfo *v72; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_59349E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349E1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipGrandServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantEntityList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserGrandServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserGrandServantEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitEntity___ctor__);
  this->fields.equipGrandServantLimitEntityList = (struct System_Collections_Generic_List_ServantLimitEntity__o *)v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipGrandServantLimitEntityList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo_____ctor__);
  this->fields.grandServantSkillInfoList = (struct System_Collections_Generic_List_SkillInfo____o *)v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSkillInfoList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.grandServantEquipTargetIdList = v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipTargetIdList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SelfUserGame, v42, v43, v44, v45, v46, v47);
  if ( !userCommandCodeCollection || !p_fields->userGameEntity )
    goto LABEL_17;
  if ( userCommandCodeCollection->fields.userId != p_fields->userGameEntity->fields.userId )
  {
    p_fields->userGameEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v50, v51, v52, v53, v54, v55);
  }
  this->fields.userCommandCodeCollectionEntity = userCommandCodeCollection;
  p_userCommandCodeCollectionEntity = &this->fields.userCommandCodeCollectionEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeCollectionEntity,
    (int32_t)userCommandCodeCollection,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v58 = *p_userCommandCodeCollectionEntity;
  if ( !*p_userCommandCodeCollectionEntity )
    goto LABEL_17;
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v60 = *(_QWORD *)&v58->fields.commandCodeId.fields.currentCryptoKey;
  v61 = *(_QWORD *)&v58->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49, v57);
  *(_QWORD *)&v73.fields.currentCryptoKey = v60;
  *(_QWORD *)&v73.fields.fakeValue = v61;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v73, 0);
  if ( !v59 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v59,
             (int32_t)Instance,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity,
    (int32_t)Entity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  userCommandCodeCollectionEntity = this->fields.userCommandCodeCollectionEntity;
  if ( !userCommandCodeCollectionEntity
    || (v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                      userCommandCodeCollectionEntity->fields.commandCodeId,
                                      0),
        !v70)
    || (DataMasterBase_object__object__int___TryGetEntity(
          v70,
          (Il2CppObject **)&this->fields.commandCodeCommentEntity,
          (int32_t)Instance,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__),
        Instance = (DataManager_o *)this->fields.userCommandCodeCollectionEntity,
        this->fields.enableTdSpeed = 0,
        *(_DWORD *)&this->fields.enableChangeVoice = 0,
        this->fields.isDisplayRandomLimitCount = 0,
        !Instance) )
  {
LABEL_17:
    sub_21FFECC(Instance, v49);
  }
  UserCommandCodeCollectionEntity__GetSkillInfo(
    (UserCommandCodeCollectionEntity_o *)Instance,
    &this->fields.passiveSkillIdList,
    &this->fields.passiveSkillTitleMessageList,
    &this->fields.passiveSkillExplanationMessageList,
    0);
  ServantStatusListViewItem__SetGrandInfo(this, 0, 0, 0, v71);
  ServantStatusListViewItem__SetupTempLimitCountSetting(this, 0, v72);
}


void ServantStatusListViewItem__AddDuplicationInfo(
        ServantStatusListViewItem_o *this,
        bool isTransformed,
        const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  ServantStatusListViewItem_o *SvtId; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x22
  System_Collections_Generic_List_int__o *v12; // x21
  Il2CppObject *Instance; // x0
  __int64 v14; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *NeedAddAnnotationSkillIds; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x23
  unsigned __int64 v21; // x24
  __int64 v22; // x27
  int32_t Item; // w0
  struct System_String_array *transformedPassiveSkillExplanationMessageList; // x28
  System_String_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5934A00 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_10497/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_5934A00 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
    DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( this->fields.userSvtEntity || this->fields.userSvtCollectionEntity )
    {
      SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(this, v8);
      FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)ServantStatusListViewItem__GetFriendshipUpCampaignInfo(
                                                                                                   SvtId,
                                                                                                   (int32_t)SvtId,
                                                                                                   v10);
    }
    else
    {
      FriendshipUpCampaignInfo = 0;
    }
    v12 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
    v14 = 392;
    if ( isTransformed )
      v14 = 528;
    v15 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&this->klass + v14);
    if ( v15 )
    {
      if ( !v12
        || (System_Collections_Generic_List_int___AddRange(
              v12,
              v15,
              (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__),
            (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
      {
LABEL_29:
        sub_21FFECC(Instance, v15);
      }
      NeedAddAnnotationSkillIds = (System_Collections_Generic_IEnumerable_TSource__o *)PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
                                                                                         (PartyOrganizationUtility_o *)Instance,
                                                                                         (System_Collections_Generic_IEnumerable_int__o *)v12,
                                                                                         FriendshipUpCampaignInfo,
                                                                                         0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10497/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
      if ( v12->fields._size >= 1 )
      {
        v20 = v19;
        v21 = 0;
        v22 = 32;
        do
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   v12,
                   v21,
                   (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
          Instance = (Il2CppObject *)System_Linq_Enumerable__Contains_int_(
                                       NeedAddAnnotationSkillIds,
                                       Item,
                                       (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
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
            if ( v21 >= LODWORD(transformedPassiveSkillExplanationMessageList->max_length) )
              sub_21FFED4(Instance);
            v25 = System_String__Concat_75438412(
                    *(System_String_o **)((char *)&transformedPassiveSkillExplanationMessageList->obj.klass + v22),
                    v20,
                    0);
            *(Il2CppClass **)((char *)&transformedPassiveSkillExplanationMessageList->obj.klass + v22) = (Il2CppClass *)v25;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)((char *)transformedPassiveSkillExplanationMessageList + v22),
              (int32_t)v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
          }
          ++v21;
          v22 += 8;
        }
        while ( (__int64)v21 < v12->fields._size );
      }
    }
  }
}


bool ServantStatusListViewItem__ChangeChoice(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isChoice; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isChoice = this->fields.isChoice;
  v4 = !isChoice;
  v5 = !isChoice;
  result = v4;
  this->fields.isChoice = v5;
  return result;
}


bool ServantStatusListViewItem__ChangeLock(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  _BOOL4 isLock; // w9
  bool v4; // zf
  bool v5; // w9
  bool result; // w0

  isLock = this->fields.isLock;
  v4 = !isLock;
  v5 = !isLock;
  result = v4;
  this->fields.isLock = v5;
  return result;
}


void ServantStatusListViewItem__ChangeMainServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_21FFECC(this, method);
  this->fields._ModifyTransformVal_k__BackingField = currentLimitCountSetting->fields._TransformVal_k__BackingField;
}


void ServantStatusListViewItem__ChangeTransform(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusListViewItem_o *v8; // x19
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x9
  bool v11; // zf
  __int64 v12; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v13; // x1
  __int64 v14; // x2
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v15; // x8
  int32_t SvtId_k__BackingField; // w20
  Il2CppObject *Entity; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *Master_object; // x21
  const MethodInfo *v25; // x1
  ServantLimitEntity_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1

  v8 = this;
  if ( (byte_5934A0B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_5934A0B = 1;
  }
  tempLimitCountSetting = v8->fields.tempLimitCountSetting;
  if ( !tempLimitCountSetting )
    goto LABEL_13;
  this = (ServantStatusListViewItem_o *)&v8->fields.currentLimitCountSetting;
  currentLimitCountSetting = v8->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    goto LABEL_13;
  v11 = tempLimitCountSetting->fields._TransformVal_k__BackingField == currentLimitCountSetting->fields._TransformVal_k__BackingField;
  v12 = 216;
  if ( v11 )
    v12 = 224;
  v13 = *(struct ServantStatusListViewItem_TempLimitCountSetting_o **)((char *)&v8->klass + v12);
  v8->fields.currentLimitCountSetting = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)this, (int32_t)v13, v2, v3, v4, v5, v6, v7);
  v15 = v8->fields.currentLimitCountSetting;
  if ( !v15 )
    goto LABEL_13;
  SvtId_k__BackingField = v15->fields._SvtId_k__BackingField;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v14);
  this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !this
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   SvtId_k__BackingField,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        v8->fields.svtEntity = (struct ServantEntity_o *)Entity,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v8->fields.svtEntity,
          (int32_t)Entity,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___),
        this = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(v8, v25),
        !Master_object) )
  {
LABEL_13:
    sub_21FFECC(this, method);
  }
  v26 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Master_object, SvtId_k__BackingField, (int32_t)this, 0);
  v8->fields.svtLimitEntity = v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields.svtLimitEntity,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ServantStatusListViewItem__UpdateServantComment(v8, v33);
  ServantStatusListViewItem__ModifyInfo(v8, v34);
}


bool ServantStatusListViewItem__CheckCurrentMainServant(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_21FFECC(this, method);
  return this->fields._ModifyTransformVal_k__BackingField == currentLimitCountSetting->fields._TransformVal_k__BackingField;
}


bool ServantStatusListViewItem__CheckEnableOwnRandomSetting(
        ServantStatusListViewItem_o *this,
        ServantStatusListViewItem_TempLimitCountSetting_o *setting,
        const MethodInfo *method)
{
  int32_t randomLimitCount; // w8

  if ( (byte_59349F2 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&OptionManager_TypeInfo);
    byte_59349F2 = 1;
  }
  if ( !setting )
    sub_21FFECC(this, setting);
  randomLimitCount = setting->fields.randomLimitCount;
  if ( randomLimitCount )
    return randomLimitCount == 1;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, setting, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  struct UserServantEntity_o *userSvtEntity; // x9
  __int64 v19; // x22
  __int64 v20; // x23
  int32_t imageLimitCount; // w26
  __int64 v22; // x2
  struct UserServantEntity_o *v23; // x9
  __int64 v24; // x22
  __int64 v25; // x23
  int32_t dispLimitCount; // w26
  __int64 v27; // x2
  struct UserServantEntity_o *v28; // x9
  __int64 v29; // x22
  __int64 v30; // x23
  int32_t commandCardLimitCount; // w26
  __int64 v32; // x2
  struct UserServantEntity_o *v33; // x9
  __int64 v34; // x22
  __int64 v35; // x23
  int32_t iconLimitCount; // w26
  __int64 v37; // x2
  struct UserServantEntity_o *v38; // x9
  __int64 v39; // x22
  __int64 v40; // x23
  int32_t portraitLimitCount; // w26
  __int64 v42; // x2
  struct UserServantEntity_o *v43; // x9
  __int64 v44; // x22
  __int64 v45; // x23
  int32_t randomLimitCount; // w26
  __int64 v47; // x2
  struct UserServantEntity_o *v48; // x9
  __int64 v49; // x22
  __int64 v50; // x23
  int32_t randomLimitCountSupport; // w26
  __int64 v52; // x2
  ServantStatusListViewItem_LimitCountSetting_o *v53; // x8
  struct UserServantEntity_o *v54; // x9
  __int64 v55; // x21
  __int64 v56; // x22
  int32_t limitCountSupport; // w23
  char v58; // w21
  ServantStatusListViewItem_LimitCountSetting_o *v59; // x20
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  ServantStatusListViewItem_LimitCountSetting_o *v66; // x20
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  ServantStatusListViewItem_TempLimitCountSetting_o *tempTransformLimitCountSetting; // x0
  ServantStatusListViewItem_LimitCountSetting_o *v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 v81; // x2
  struct UserServantEntity_o *v82; // x9
  __int64 v83; // x21
  __int64 v84; // x22
  int32_t v85; // w23
  __int64 v86; // x2
  struct UserServantEntity_o *v87; // x9
  __int64 v88; // x21
  __int64 v89; // x22
  int32_t v90; // w23
  __int64 v91; // x2
  struct UserServantEntity_o *v92; // x9
  __int64 v93; // x21
  __int64 v94; // x22
  int32_t v95; // w23
  __int64 v96; // x2
  struct UserServantEntity_o *v97; // x9
  __int64 v98; // x21
  __int64 v99; // x22
  int32_t v100; // w23
  __int64 v101; // x2
  struct UserServantEntity_o *v102; // x9
  __int64 v103; // x21
  __int64 v104; // x22
  int32_t v105; // w23
  __int64 v106; // x2
  struct UserServantEntity_o *v107; // x9
  __int64 v108; // x21
  __int64 v109; // x22
  int32_t v110; // w23
  __int64 v111; // x2
  struct UserServantEntity_o *v112; // x9
  __int64 v113; // x21
  __int64 v114; // x22
  int32_t v115; // w23
  __int64 v116; // x2
  ServantStatusListViewItem_LimitCountSetting_o *v117; // x8
  struct UserServantEntity_o *v118; // x9
  __int64 v119; // x19
  __int64 v120; // x20
  int32_t v121; // w21
  ServantStatusListViewItem_LimitCountSetting_o *v122; // x20
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16

  if ( (byte_5934A0C & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5934A0C = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity || !ServantEntity__get_IsServant(svtEntity, 0) )
  {
    v59 = (ServantStatusListViewItem_LimitCountSetting_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    ServantStatusListViewItem_LimitCountSetting___ctor(v59, 0);
    *setting = v59;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)setting, (int32_t)v59, v60, v61, v62, v63, v64, v65);
    v66 = (ServantStatusListViewItem_LimitCountSetting_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    ServantStatusListViewItem_LimitCountSetting___ctor(v66, 0);
    *transformSetting = v66;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)transformSetting, (int32_t)v66, v67, v68, v69, v70, v71, v72);
    return 0;
  }
  tempLimitCountSetting = this->fields.tempLimitCountSetting;
  if ( !tempLimitCountSetting )
    goto LABEL_93;
  v10 = ServantStatusListViewItem_TempLimitCountSetting__Export(tempLimitCountSetting, 0);
  *setting = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)setting, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !*setting )
    goto LABEL_93;
  userSvtEntity = this->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_93;
  v19 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEntity->fields.imageLimitCount.fields.fakeValue;
  imageLimitCount = (*setting)->fields.imageLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v17);
  *(_QWORD *)&v130.fields.currentCryptoKey = v19;
  *(_QWORD *)&v130.fields.fakeValue = v20;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v130,
                                                                                 0);
  if ( imageLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v23 = this->fields.userSvtEntity;
  if ( !v23 )
    goto LABEL_93;
  v24 = *(_QWORD *)&v23->fields.dispLimitCount.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.dispLimitCount.fields.fakeValue;
  dispLimitCount = (*setting)->fields.dispLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v22);
  *(_QWORD *)&v131.fields.currentCryptoKey = v24;
  *(_QWORD *)&v131.fields.fakeValue = v25;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v131,
                                                                                 0);
  if ( dispLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v28 = this->fields.userSvtEntity;
  if ( !v28 )
    goto LABEL_93;
  v29 = *(_QWORD *)&v28->fields.commandCardLimitCount.fields.currentCryptoKey;
  v30 = *(_QWORD *)&v28->fields.commandCardLimitCount.fields.fakeValue;
  commandCardLimitCount = (*setting)->fields.commandCardLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v27);
  *(_QWORD *)&v132.fields.currentCryptoKey = v29;
  *(_QWORD *)&v132.fields.fakeValue = v30;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v132,
                                                                                 0);
  if ( commandCardLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v33 = this->fields.userSvtEntity;
  if ( !v33 )
    goto LABEL_93;
  v34 = *(_QWORD *)&v33->fields.iconLimitCount.fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33->fields.iconLimitCount.fields.fakeValue;
  iconLimitCount = (*setting)->fields.iconLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v32);
  *(_QWORD *)&v133.fields.currentCryptoKey = v34;
  *(_QWORD *)&v133.fields.fakeValue = v35;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v133,
                                                                                 0);
  if ( iconLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v38 = this->fields.userSvtEntity;
  if ( !v38 )
    goto LABEL_93;
  v39 = *(_QWORD *)&v38->fields.portraitLimitCount.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38->fields.portraitLimitCount.fields.fakeValue;
  portraitLimitCount = (*setting)->fields.portraitLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v37);
  *(_QWORD *)&v134.fields.currentCryptoKey = v39;
  *(_QWORD *)&v134.fields.fakeValue = v40;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v134,
                                                                                 0);
  if ( portraitLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v43 = this->fields.userSvtEntity;
  if ( !v43 )
    goto LABEL_93;
  v44 = *(_QWORD *)&v43->fields.randomLimitCount.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v43->fields.randomLimitCount.fields.fakeValue;
  randomLimitCount = (*setting)->fields.randomLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v42);
  *(_QWORD *)&v135.fields.currentCryptoKey = v44;
  *(_QWORD *)&v135.fields.fakeValue = v45;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v135,
                                                                                 0);
  if ( randomLimitCount != (_DWORD)tempLimitCountSetting )
    goto LABEL_47;
  if ( !*setting )
    goto LABEL_93;
  v48 = this->fields.userSvtEntity;
  if ( !v48 )
    goto LABEL_93;
  v49 = *(_QWORD *)&v48->fields.randomLimitCountSupport.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48->fields.randomLimitCountSupport.fields.fakeValue;
  randomLimitCountSupport = (*setting)->fields.randomLimitCountSupport;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v47);
  *(_QWORD *)&v136.fields.currentCryptoKey = v49;
  *(_QWORD *)&v136.fields.fakeValue = v50;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v136,
                                                                                 0);
  if ( randomLimitCountSupport == (_DWORD)tempLimitCountSetting )
  {
    v53 = *setting;
    if ( !*setting )
      goto LABEL_93;
    v54 = this->fields.userSvtEntity;
    if ( !v54 )
      goto LABEL_93;
    v55 = *(_QWORD *)&v54->fields.limitCountSupport.fields.currentCryptoKey;
    v56 = *(_QWORD *)&v54->fields.limitCountSupport.fields.fakeValue;
    limitCountSupport = v53->fields.limitCountSupport;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v52);
    *(_QWORD *)&v137.fields.currentCryptoKey = v55;
    *(_QWORD *)&v137.fields.fakeValue = v56;
    v58 = limitCountSupport != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v137, 0);
  }
  else
  {
LABEL_47:
    v58 = 1;
  }
  tempTransformLimitCountSetting = this->fields.tempTransformLimitCountSetting;
  if ( !tempTransformLimitCountSetting )
  {
    v122 = (ServantStatusListViewItem_LimitCountSetting_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    ServantStatusListViewItem_LimitCountSetting___ctor(v122, 0);
    *transformSetting = v122;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)transformSetting, (int32_t)v122, v123, v124, v125, v126, v127, v128);
    return v58;
  }
  v74 = ServantStatusListViewItem_TempLimitCountSetting__Export(tempTransformLimitCountSetting, 0);
  *transformSetting = v74;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)transformSetting, (int32_t)v74, v75, v76, v77, v78, v79, v80);
  if ( (v58 & 1) != 0 )
    return 1;
  if ( !*transformSetting )
    goto LABEL_93;
  v82 = this->fields.userSvtEntity;
  if ( !v82 )
    goto LABEL_93;
  v83 = *(_QWORD *)&v82->fields.imageLimitCount2.fields.currentCryptoKey;
  v84 = *(_QWORD *)&v82->fields.imageLimitCount2.fields.fakeValue;
  v85 = (*transformSetting)->fields.imageLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v81);
  *(_QWORD *)&v138.fields.currentCryptoKey = v83;
  *(_QWORD *)&v138.fields.fakeValue = v84;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v138,
                                                                                 0);
  if ( v85 != (_DWORD)tempLimitCountSetting )
    return 1;
  if ( !*transformSetting )
    goto LABEL_93;
  v87 = this->fields.userSvtEntity;
  if ( !v87 )
    goto LABEL_93;
  v88 = *(_QWORD *)&v87->fields.dispLimitCount2.fields.currentCryptoKey;
  v89 = *(_QWORD *)&v87->fields.dispLimitCount2.fields.fakeValue;
  v90 = (*transformSetting)->fields.dispLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v86);
  *(_QWORD *)&v139.fields.currentCryptoKey = v88;
  *(_QWORD *)&v139.fields.fakeValue = v89;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v139,
                                                                                 0);
  if ( v90 != (_DWORD)tempLimitCountSetting )
    return 1;
  if ( !*transformSetting )
    goto LABEL_93;
  v92 = this->fields.userSvtEntity;
  if ( !v92 )
    goto LABEL_93;
  v93 = *(_QWORD *)&v92->fields.commandCardLimitCount2.fields.currentCryptoKey;
  v94 = *(_QWORD *)&v92->fields.commandCardLimitCount2.fields.fakeValue;
  v95 = (*transformSetting)->fields.commandCardLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v91);
  *(_QWORD *)&v140.fields.currentCryptoKey = v93;
  *(_QWORD *)&v140.fields.fakeValue = v94;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v140,
                                                                                 0);
  if ( v95 != (_DWORD)tempLimitCountSetting )
    return 1;
  if ( !*transformSetting )
    goto LABEL_93;
  v97 = this->fields.userSvtEntity;
  if ( !v97 )
    goto LABEL_93;
  v98 = *(_QWORD *)&v97->fields.iconLimitCount2.fields.currentCryptoKey;
  v99 = *(_QWORD *)&v97->fields.iconLimitCount2.fields.fakeValue;
  v100 = (*transformSetting)->fields.iconLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v96);
  *(_QWORD *)&v141.fields.currentCryptoKey = v98;
  *(_QWORD *)&v141.fields.fakeValue = v99;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v141,
                                                                                 0);
  if ( v100 != (_DWORD)tempLimitCountSetting )
    return 1;
  if ( !*transformSetting )
    goto LABEL_93;
  v102 = this->fields.userSvtEntity;
  if ( !v102 )
    goto LABEL_93;
  v103 = *(_QWORD *)&v102->fields.portraitLimitCount2.fields.currentCryptoKey;
  v104 = *(_QWORD *)&v102->fields.portraitLimitCount2.fields.fakeValue;
  v105 = (*transformSetting)->fields.portraitLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v101);
  *(_QWORD *)&v142.fields.currentCryptoKey = v103;
  *(_QWORD *)&v142.fields.fakeValue = v104;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v142,
                                                                                 0);
  if ( v105 != (_DWORD)tempLimitCountSetting )
    return 1;
  if ( !*transformSetting )
    goto LABEL_93;
  v107 = this->fields.userSvtEntity;
  if ( !v107 )
    goto LABEL_93;
  v108 = *(_QWORD *)&v107->fields.randomLimitCount2.fields.currentCryptoKey;
  v109 = *(_QWORD *)&v107->fields.randomLimitCount2.fields.fakeValue;
  v110 = (*transformSetting)->fields.randomLimitCount;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v106);
  *(_QWORD *)&v143.fields.currentCryptoKey = v108;
  *(_QWORD *)&v143.fields.fakeValue = v109;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v143,
                                                                                 0);
  if ( v110 != (_DWORD)tempLimitCountSetting )
    return 1;
  if ( !*transformSetting || (v112 = this->fields.userSvtEntity) == 0 )
LABEL_93:
    sub_21FFECC(tempLimitCountSetting, v8);
  v113 = *(_QWORD *)&v112->fields.randomLimitCountSupport2.fields.currentCryptoKey;
  v114 = *(_QWORD *)&v112->fields.randomLimitCountSupport2.fields.fakeValue;
  v115 = (*transformSetting)->fields.randomLimitCountSupport;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v111);
  *(_QWORD *)&v144.fields.currentCryptoKey = v113;
  *(_QWORD *)&v144.fields.fakeValue = v114;
  tempLimitCountSetting = (ServantStatusListViewItem_TempLimitCountSetting_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                                 v144,
                                                                                 0);
  if ( v115 != (_DWORD)tempLimitCountSetting )
    return 1;
  v117 = *transformSetting;
  if ( !*transformSetting )
    goto LABEL_93;
  v118 = this->fields.userSvtEntity;
  if ( !v118 )
    goto LABEL_93;
  v119 = *(_QWORD *)&v118->fields.limitCountSupport2.fields.currentCryptoKey;
  v120 = *(_QWORD *)&v118->fields.limitCountSupport2.fields.fakeValue;
  v121 = v117->fields.limitCountSupport;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v116);
  *(_QWORD *)&v145.fields.currentCryptoKey = v119;
  *(_QWORD *)&v145.fields.fakeValue = v120;
  return v121 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v145, 0);
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

  if ( (byte_5934A07 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Append_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    byte_5934A07 = 1;
  }
  if ( (limitCountStage >= maxLimitCountStage) | LimitCountUtility__IsCostume(limitCountStage, 0) )
    v8 = maxLimitCountStage;
  else
    v8 = limitCountStage;
  LimitCountStageList = (System_Collections_Generic_IEnumerable_TSource__o *)LimitCountUtility__GetLimitCountStageList(
                                                                               v8,
                                                                               hasRewardStage,
                                                                               0);
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
    LimitCountStageList = System_Linq_Enumerable__Append_int_(
                            LimitCountStageList,
                            limitCountStage,
                            (const MethodInfo_3834F94 *)Method_System_Linq_Enumerable_Append_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          LimitCountStageList,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  v11 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
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
  __int64 v12; // x2
  __int64 v13; // x25
  __int64 v14; // x27
  int32_t v15; // w22
  int32_t lv; // w24
  System_Int32_array *LimitCountStageList_50097308; // x22
  int32_t v18; // w24
  int32_t v19; // w25
  int32_t v20; // w0
  System_Int32_array *v21; // x25
  bool v22; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x24
  int32_t v28; // w27
  int32_t DispLimitCountStage; // w0
  ServantStatusListViewItem_o *v30; // x26
  int32_t v31; // w27
  int32_t CardImageLimitCountStage; // w28
  ServantStatusListViewItem_LimitCountStageData_o *v33; // x29
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w26
  int32_t v41; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v42; // x28
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w26
  int32_t CommandCardLimitCountStage; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v51; // x28
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int32_t v58; // w26
  int32_t IconLimitCountStage; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v60; // x28
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  int32_t v67; // w26
  int32_t PortraitLimitCountStage; // w20
  ServantStatusListViewItem_LimitCountStageData_o *v69; // x21
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // x0
  ServantStatusListViewItem___c_c *v80; // x0
  struct ServantStatusListViewItem___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__380_0; // x26
  Il2CppObject *v83; // x27
  struct ServantStatusListViewItem___c_StaticFields *v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_Int32_array *v92; // x26
  int32_t v93; // w27
  int32_t v94; // w28
  ServantStatusListViewItem_LimitCountStageData_o *v95; // x29
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  int32_t v102; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v103; // x28
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  int32_t v110; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v111; // x28
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  int32_t v118; // w27
  ServantStatusListViewItem_LimitCountStageData_o *v119; // x28
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  int32_t v126; // w20
  ServantStatusListViewItem_LimitCountStageData_o *v127; // x21
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  __int64 v134; // x1
  __int64 v135; // x2
  int32_t v136; // w20
  int32_t v137; // w21
  ServantStatusListViewItem_LimitCountStageData_o *v138; // x23
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  __int64 value_8; // [xsp+10h] [xbp-70h]
  int32_t afterLimitCountStage; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16

  if ( (byte_5934A05 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
    sub_21FFC50(&Method_ServantStatusListViewItem___c__CreateTempLimitCountSetting_b__380_0__);
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&ServantStatusListViewItem___c_TypeInfo);
    byte_5934A05 = 1;
  }
  afterLimitCountStage = 0;
  if ( !userServantEntity )
    goto LABEL_29;
  ServantId = UserServantEntity__GetServantId(userServantEntity, transformVal, 0);
  v11 = sub_21FFEBC(ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
  ServantStatusListViewItem_TempLimitCountSetting___ctor(
    (ServantStatusListViewItem_TempLimitCountSetting_o *)v11,
    ServantId,
    transformVal,
    0);
  if ( !v11 )
    goto LABEL_29;
  v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  v15 = *(_DWORD *)(v11 + 16);
  lv = userServantEntity->fields.lv;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity, v12);
  *(_QWORD *)&v148.fields.currentCryptoKey = v13;
  *(_QWORD *)&v148.fields.fakeValue = v14;
  this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v148, 0);
  if ( !userServantCollectionEntity )
    goto LABEL_29;
  LimitCountStageList_50097308 = UserServantCollectionEntity__GetLimitCountStageList_50097308(
                                   userServantCollectionEntity,
                                   v15,
                                   lv,
                                   (int32_t)this,
                                   1,
                                   0);
  v18 = *(_DWORD *)(v11 + 16);
  v19 = userServantEntity->fields.lv;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userServantEntity->fields.limitCount, 0);
  v21 = UserServantCollectionEntity__GetLimitCountStageList_50097308(userServantCollectionEntity, v18, v19, v20, 0, 0);
  v22 = UserServantEntity__CheckBaseServant(userServantEntity, transformVal, 0);
  v25 = 376;
  if ( v22 )
  {
    v25 = 248;
    v26 = 240;
  }
  else
  {
    v26 = 368;
  }
  v27 = *(__int64 *)((char *)&userServantEntity->klass + v26);
  value_8 = *(__int64 *)((char *)&userServantEntity->klass + v25);
  if ( questRestrictionInfo )
  {
    if ( !QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(
            questRestrictionInfo,
            *(_DWORD *)(v11 + 16),
            0,
            0) )
    {
      v28 = *(_DWORD *)(v11 + 16);
      DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(
                              userServantEntity,
                              transformVal,
                              1,
                              questRestrictionInfo,
                              0);
      if ( QuestRestrictionInfo__TryConvertOverwriteImageLimitCount(
             questRestrictionInfo,
             v28,
             DispLimitCountStage,
             &afterLimitCountStage,
             0) )
      {
        *(_BYTE *)(v11 + 24) = 1;
        this = (ServantStatusListViewItem_o *)sub_21FFD10(int___TypeInfo, 1);
        if ( this )
        {
          v30 = this;
          if ( !LODWORD(this->fields.partyItem) )
            sub_21FFED4(this);
          LODWORD(this->fields.memberItem) = afterLimitCountStage;
          v31 = afterLimitCountStage;
          CardImageLimitCountStage = UserServantEntity__GetCardImageLimitCountStage(
                                       userServantEntity,
                                       transformVal,
                                       1,
                                       0,
                                       0);
          v33 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_43187568(
            v33,
            (System_Int32_array *)v30,
            v31,
            CardImageLimitCountStage,
            0);
          *(_QWORD *)(v11 + 32) = v33;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
          v40 = afterLimitCountStage;
          v41 = UserServantEntity__GetDispLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
          v42 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_43187568(v42, v21, v40, v41, 0);
          *(_QWORD *)(v11 + 40) = v42;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)v42, v43, v44, v45, v46, v47, v48);
          v49 = afterLimitCountStage;
          CommandCardLimitCountStage = UserServantEntity__GetCommandCardLimitCountStage(
                                         userServantEntity,
                                         transformVal,
                                         1,
                                         0);
          v51 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_43187568(v51, v21, v49, CommandCardLimitCountStage, 0);
          *(_QWORD *)(v11 + 48) = v51;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)v51, v52, v53, v54, v55, v56, v57);
          v58 = afterLimitCountStage;
          IconLimitCountStage = UserServantEntity__GetIconLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
          v60 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_43187568(
            v60,
            LimitCountStageList_50097308,
            v58,
            IconLimitCountStage,
            0);
          *(_QWORD *)(v11 + 56) = v60;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 56), (int32_t)v60, v61, v62, v63, v64, v65, v66);
          v67 = afterLimitCountStage;
          PortraitLimitCountStage = UserServantEntity__GetPortraitLimitCountStage(userServantEntity, transformVal, 1, 0);
          v69 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
          ServantStatusListViewItem_LimitCountStageData___ctor_43187568(v69, v21, v67, PortraitLimitCountStage, 0);
          *(_QWORD *)(v11 + 64) = v69;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 64), (int32_t)v69, v70, v71, v72, v73, v74, v75);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v76, v77);
          v78 = v27;
          *(_QWORD *)&v79.fields.currentCryptoKey = v27;
          goto LABEL_28;
        }
LABEL_29:
        sub_21FFECC(this, userServantEntity);
      }
    }
  }
  v80 = ServantStatusListViewItem___c_TypeInfo;
  if ( !*(&ServantStatusListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItem___c_TypeInfo, v23, v24);
    v80 = ServantStatusListViewItem___c_TypeInfo;
  }
  static_fields = v80->static_fields;
  _9__380_0 = static_fields->__9__380_0;
  if ( !_9__380_0 )
  {
    if ( !*(&v80->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v80, v23, v24);
      static_fields = ServantStatusListViewItem___c_TypeInfo->static_fields;
    }
    v83 = (Il2CppObject *)static_fields->__9;
    _9__380_0 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__380_0,
      v83,
      Method_ServantStatusListViewItem___c__CreateTempLimitCountSetting_b__380_0__,
      0);
    v84 = ServantStatusListViewItem___c_TypeInfo->static_fields;
    v84->__9__380_0 = _9__380_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v84->__9__380_0, (int32_t)_9__380_0, v85, v86, v87, v88, v89, v90);
  }
  v91 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)LimitCountStageList_50097308,
          (System_Func_TSource__bool__o *)_9__380_0,
          (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
  v92 = System_Linq_Enumerable__ToArray_int_(
          v91,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  v93 = UserServantEntity__GetCardImageLimitCountStage(userServantEntity, transformVal, 0, 0, 0);
  v94 = UserServantEntity__GetCardImageLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
  v95 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_43187568(v95, v92, v93, v94, 0);
  *(_QWORD *)(v11 + 32) = v95;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v95, v96, v97, v98, v99, v100, v101);
  LODWORD(v92) = UserServantEntity__GetDispLimitCountStage(userServantEntity, transformVal, 0, 0, 0);
  v102 = UserServantEntity__GetDispLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
  v103 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_43187568(v103, v21, (int32_t)v92, v102, 0);
  *(_QWORD *)(v11 + 40) = v103;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)v103, v104, v105, v106, v107, v108, v109);
  LODWORD(v92) = UserServantEntity__GetCommandCardLimitCountStage(userServantEntity, transformVal, 0, 0);
  v110 = UserServantEntity__GetCommandCardLimitCountStage(userServantEntity, transformVal, 1, 0);
  v111 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_43187568(v111, v21, (int32_t)v92, v110, 0);
  *(_QWORD *)(v11 + 48) = v111;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)v111, v112, v113, v114, v115, v116, v117);
  LODWORD(v92) = UserServantEntity__GetIconLimitCountStage(userServantEntity, transformVal, 0, 0, 0);
  v118 = UserServantEntity__GetIconLimitCountStage(userServantEntity, transformVal, 1, 0, 0);
  v119 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_43187568(
    v119,
    LimitCountStageList_50097308,
    (int32_t)v92,
    v118,
    0);
  *(_QWORD *)(v11 + 56) = v119;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 56), (int32_t)v119, v120, v121, v122, v123, v124, v125);
  LODWORD(v92) = UserServantEntity__GetPortraitLimitCountStage(userServantEntity, transformVal, 0, 0);
  v126 = UserServantEntity__GetPortraitLimitCountStage(userServantEntity, transformVal, 1, 0);
  v127 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_43187568(v127, v21, (int32_t)v92, v126, 0);
  *(_QWORD *)(v11 + 64) = v127;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 64), (int32_t)v127, v128, v129, v130, v131, v132, v133);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v134, v135);
  v78 = v27;
  *(_QWORD *)&v79.fields.currentCryptoKey = v27;
LABEL_28:
  *(_QWORD *)&v79.fields.fakeValue = value_8;
  v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v79, 0);
  *(_QWORD *)&v149.fields.currentCryptoKey = v78;
  *(_QWORD *)&v149.fields.fakeValue = value_8;
  v137 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v149, 0);
  v138 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor_43187568(v138, LimitCountStageList_50097308, v136, v137, 0);
  *(_QWORD *)(v11 + 72) = v138;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 72), (int32_t)v138, v139, v140, v141, v142, v143, v144);
  return (ServantStatusListViewItem_TempLimitCountSetting_o *)v11;
}


ServantStatusListViewItem_TempLimitCountSetting_o *ServantStatusListViewItem__CreateTempLimitCountSetting_42318368(
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t MaxLimitCountStage; // w23
  int32_t v18; // w22
  ServantStatusListViewItem_o *DispLimitCountStage; // x0
  const MethodInfo *v20; // x4
  ServantStatusListViewItem_LimitCountStageData_o *LimitCountStageDataForOtherServant; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  ServantStatusListViewItem_o *CommandCardLimitCountStage; // x0
  const MethodInfo *v29; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  ServantStatusListViewItem_o *IconLimitCountStage; // x0
  const MethodInfo *v38; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  ServantStatusListViewItem_o *PortraitLimitCountStage; // x0
  const MethodInfo *v47; // x4
  ServantStatusListViewItem_LimitCountStageData_o *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7

  if ( (byte_5934A06 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
    byte_5934A06 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_8;
  ServantId = ServantLeaderInfo__GetServantId(servantLeaderInfo, transformVal, 0);
  v7 = sub_21FFEBC(ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
  ServantStatusListViewItem_TempLimitCountSetting___ctor(
    (ServantStatusListViewItem_TempLimitCountSetting_o *)v7,
    ServantId,
    transformVal,
    0);
  CardImageLimitCountStage = ServantLeaderInfo__GetCardImageLimitCountStage(servantLeaderInfo, transformVal, 0);
  this = (ServantStatusListViewItem_o *)sub_21FFD10(int___TypeInfo, 1);
  if ( !this )
    goto LABEL_8;
  v9 = this;
  if ( !LODWORD(this->fields.partyItem) )
    sub_21FFED4(this);
  LODWORD(this->fields.memberItem) = CardImageLimitCountStage;
  v10 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v10, (System_Int32_array *)v9, CardImageLimitCountStage, 0);
  if ( !v7 )
LABEL_8:
    sub_21FFECC(this, servantLeaderInfo);
  *(_QWORD *)(v7 + 32) = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v7 + 40),
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)v30, v31, v32, v33, v34, v35, v36);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 56), (int32_t)v39, v40, v41, v42, v43, v44, v45);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 64), (int32_t)v48, v49, v50, v51, v52, v53, v54);
  return (ServantStatusListViewItem_TempLimitCountSetting_o *)v7;
}


ServantStatusListViewItem_TempLimitCountSetting_o *ServantStatusListViewItem__CreateTempLimitCountSetting_42319152(
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
  __int64 v15; // x1
  __int64 v16; // x2
  ServantStatusListViewItem___c_c *v17; // x8
  System_Int32_array *v18; // x22
  struct ServantStatusListViewItem___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__385_0; // x24
  Il2CppObject *v21; // x25
  struct ServantStatusListViewItem___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x25
  ServantStatusListViewItem_LimitCountStageData_o *v31; // x24
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  ServantStatusListViewItem_LimitCountStageData_o *v38; // x24
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  ServantStatusListViewItem_LimitCountStageData_o *v45; // x24
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  ServantStatusListViewItem_LimitCountStageData_o *v52; // x24
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  ServantStatusListViewItem_LimitCountStageData_o *v59; // x21
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7

  if ( (byte_5934A09 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
    sub_21FFC50(&Method_ServantStatusListViewItem___c__CreateTempLimitCountSetting_b__385_0__);
    sub_21FFC50(&ServantStatusListViewItem___c_TypeInfo);
    byte_5934A09 = 1;
  }
  v8 = sub_21FFEBC(ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
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
  v17 = ServantStatusListViewItem___c_TypeInfo;
  v18 = v14;
  if ( !*(&ServantStatusListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItem___c_TypeInfo, v15, v16);
    v17 = ServantStatusListViewItem___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__385_0 = static_fields->__9__385_0;
  if ( !_9__385_0 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v15, v16);
      static_fields = ServantStatusListViewItem___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__385_0 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__385_0,
      v21,
      Method_ServantStatusListViewItem___c__CreateTempLimitCountSetting_b__385_0__,
      0);
    v22 = ServantStatusListViewItem___c_TypeInfo->static_fields;
    v22->__9__385_0 = _9__385_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__385_0, (int32_t)_9__385_0, v23, v24, v25, v26, v27, v28);
  }
  v29 = System_Linq_Enumerable__Where_int_(
          LimitCountStageList,
          (System_Func_TSource__bool__o *)_9__385_0,
          (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
  v30 = System_Linq_Enumerable__ToArray_int_(
          v29,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  v31 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v31, v30, LimitCountStage, 0);
  if ( !v8 )
LABEL_12:
    sub_21FFECC(v9, v10);
  *(_QWORD *)(v8 + 32) = v31;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v38, v18, v12, 0);
  *(_QWORD *)(v8 + 40) = v38;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v45, v18, v12, 0);
  *(_QWORD *)(v8 + 48) = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 48), (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(
    v52,
    (System_Int32_array *)LimitCountStageList,
    LimitCountStage,
    0);
  *(_QWORD *)(v8 + 56) = v52;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 56), (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v59, v18, v12, 0);
  *(_QWORD *)(v8 + 64) = v59;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 64), (int32_t)v59, v60, v61, v62, v63, v64, v65);
  return (ServantStatusListViewItem_TempLimitCountSetting_o *)v8;
}


bool ServantStatusListViewItem__GetAdjustMax(
        ServantStatusListViewItem_o *this,
        int32_t *maxAjustHp,
        int32_t *maxAjustAtk,
        int32_t *secondMaxAdjustHp,
        int32_t *secondMaxAdjustAtk,
        int32_t *addParamMaxAdjust1,
        int32_t *addParamMaxAdjust2,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  if ( this->fields.userSvtEntity )
  {
    LOBYTE(servantLeaderInfo) = UserServantEntity__GetAdjustMax(
                                  this->fields.userSvtEntity,
                                  maxAjustHp,
                                  maxAjustAtk,
                                  secondMaxAdjustHp,
                                  secondMaxAdjustAtk,
                                  addParamMaxAdjust1,
                                  addParamMaxAdjust2,
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
                                    addParamMaxAdjust1,
                                    addParamMaxAdjust2,
                                    0);
    }
    else
    {
      *maxAjustHp = 0;
      *maxAjustAtk = 0;
      *secondMaxAdjustHp = 0;
      *secondMaxAdjustAtk = 0;
      *addParamMaxAdjust1 = 0;
      *addParamMaxAdjust2 = 0;
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
  bool v7; // w7
  System_Int32_array *appendPassiveSkillIdList; // x1
  System_String_array *appendPassiveSkillTitleMessageList; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_array *appendPassiveSkillExplanationMessageList; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Boolean_array *appendPassiveSkillReleaseStateList; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Int32_array *appendPassiveSkillLvList; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  appendPassiveSkillIdList = this->fields.appendPassiveSkillIdList;
  *idList = appendPassiveSkillIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)idList,
    (int32_t)appendPassiveSkillIdList,
    (System_String_o *)titleList,
    (System_String_o *)explanationList,
    (int32_t)releaseStateList,
    (int32_t)lvList,
    (bool)method,
    v7);
  appendPassiveSkillTitleMessageList = this->fields.appendPassiveSkillTitleMessageList;
  *titleList = appendPassiveSkillTitleMessageList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)titleList,
    (int32_t)appendPassiveSkillTitleMessageList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  appendPassiveSkillExplanationMessageList = this->fields.appendPassiveSkillExplanationMessageList;
  *explanationList = appendPassiveSkillExplanationMessageList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)explanationList,
    (int32_t)appendPassiveSkillExplanationMessageList,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  appendPassiveSkillReleaseStateList = this->fields.appendPassiveSkillReleaseStateList;
  *releaseStateList = appendPassiveSkillReleaseStateList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)releaseStateList,
    (int32_t)appendPassiveSkillReleaseStateList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  appendPassiveSkillLvList = this->fields.appendPassiveSkillLvList;
  *lvList = appendPassiveSkillLvList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)lvList,
    (int32_t)appendPassiveSkillLvList,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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


// local variable allocation has failed, the output may be wrong!
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
      sub_21FFECC(this, checkTransform);
  }
  return TransformedServant_k__BackingField->fields.cardIds;
}


// local variable allocation has failed, the output may be wrong!
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
      sub_21FFECC(this, checkTransform);
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
    sub_21FFECC(this, method);
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
  struct ServantEntity_o *baseSvtEntity; // x23
  int32_t cvId; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t CardImageLimitCountStageSealAfterAtStageLimitCount; // w20
  __int64 v8; // x2
  ServantStatusListViewItem_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v2 = this;
  if ( (byte_59349FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349FA = 1;
  }
  baseSvtEntity = v2->fields.baseSvtEntity;
  entity = 0;
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !baseSvtEntity )
    goto LABEL_17;
  v9 = this;
  v10 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v8);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0);
  if ( !v9 )
    goto LABEL_17;
  if ( ServantLimitAddMaster__TryGetEntity(
         (ServantLimitAddMaster_o *)v9,
         &entity,
         (int32_t)this,
         CardImageLimitCountStageSealAfterAtStageLimitCount,
         0) )
  {
    this = (ServantStatusListViewItem_o *)entity;
    if ( entity )
      return ServantLimitAddEntity__GetOverwriteCvId(entity, cvId, 0);
LABEL_17:
    sub_21FFECC(this, method);
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
    sub_21FFECC(commandCodeEntity, method);
  return ServantEntity__getName(svtEntity, -1, (int32_t)commandCodeEntity, 0, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_21FFECC(this, checkTransform);
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
    sub_21FFECC(this, method);
  }
  return dispLimitCountStageData->fields._StageList_k__BackingField;
}


int32_t ServantStatusListViewItem__GetDispLimitCountStageSealAfter(
        ServantStatusListViewItem_o *this,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t SvtId; // w21
  const MethodInfo *v6; // x1
  int32_t LimitCount; // w22
  const MethodInfo *v8; // x2
  int32_t DispLimitCountStage; // w2

  SvtId = ServantStatusListViewItem__GetSvtId(this, checkTransform, method);
  LimitCount = ServantStatusListViewItem__get_LimitCount(this, v6);
  DispLimitCountStage = ServantStatusListViewItem__GetDispLimitCountStage(this, checkTransform, v8);
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
  _DWORD *p_monitor; // x8
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  if ( (byte_59349EE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_59349EE = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        p_monitor = &equipUserGrandServantEntityList[10].monitor;
LABEL_8:
        LODWORD(servantLeaderInfo) = *p_monitor;
        return (int)servantLeaderInfo;
      }
    }
LABEL_13:
    sub_21FFECC(equipUserGrandServantEntityList, *(_QWORD *)&index);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    servantLeaderInfo = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                 servantLeaderInfo,
                                                 index,
                                                 0);
    if ( servantLeaderInfo )
    {
      p_monitor = &servantLeaderInfo->fields.adjustAtk;
      goto LABEL_8;
    }
  }
  return (int)servantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipCostByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x0

  if ( (byte_59349F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_59349F0 = 1;
  }
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    goto LABEL_9;
  equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               equipGrandServantEntityList,
                                                                               index,
                                                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
  if ( equipGrandServantEntityList )
  {
    equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
    if ( equipGrandServantEntityList )
    {
      equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   equipGrandServantEntityList,
                                                                                   index,
                                                                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
      if ( equipGrandServantEntityList )
      {
        LODWORD(equipGrandServantEntityList) = equipGrandServantEntityList[3].fields._syncRoot;
        return (int)equipGrandServantEntityList;
      }
    }
LABEL_9:
    sub_21FFECC(equipGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_59349F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_59349F4 = 1;
  }
  equipUserGrandServantEntityList = this->fields.equipUserGrandServantEntityList;
  if ( equipUserGrandServantEntityList
    && System_Collections_Generic_List_object___get_Item(
         (System_Collections_Generic_List_object__o *)equipUserGrandServantEntityList,
         index,
         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( !Item
      || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                index,
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0 )
    {
      sub_21FFECC(Item, v6);
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
  bool result; // w0
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0

  if ( (byte_59349F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_59349F5 = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getExpInfo(
                 (UserServantEntity_o *)equipUserGrandServantEntityList,
                 exp,
                 lateExp,
                 barExp,
                 0);
    }
LABEL_12:
    sub_21FFECC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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
  result = 0;
  *barExp = 0.0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipHpByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0
  int32_t *p_adjustHp; // x8
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  if ( (byte_59349EF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_59349EF = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        p_adjustHp = (int32_t *)&equipUserGrandServantEntityList[10].monitor + 1;
LABEL_8:
        LODWORD(servantLeaderInfo) = *p_adjustHp;
        return (int)servantLeaderInfo;
      }
    }
LABEL_13:
    sub_21FFECC(equipUserGrandServantEntityList, *(_QWORD *)&index);
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    servantLeaderInfo = (ServantLeaderInfo_o *)ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                                 servantLeaderInfo,
                                                 index,
                                                 0);
    if ( servantLeaderInfo )
    {
      p_adjustHp = &servantLeaderInfo->fields.adjustHp;
      goto LABEL_8;
    }
  }
  return (int)servantLeaderInfo;
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantStatusListViewItem__GetEquipIdByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x0

  if ( (byte_59349F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_59349F6 = 1;
  }
  grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
  if ( !grandServantEquipTargetIdList )
    sub_21FFECC(0, *(_QWORD *)&index);
  return System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItem__GetEquipLevelByIndex(
        ServantStatusListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserGrandServantEntityList; // x0

  if ( (byte_59349EA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_59349EA = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        LODWORD(equipUserGrandServantEntityList) = equipUserGrandServantEntityList[10].klass;
        return (int)equipUserGrandServantEntityList;
      }
    }
LABEL_12:
    sub_21FFECC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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
  __int64 v6; // x2
  struct System_Object_array *items; // x19
  __int64 v8; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59349ED & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349ED = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
      {
        items = equipUserGrandServantEntityList[2].fields._items;
        v8 = *(_QWORD *)&equipUserGrandServantEntityList[2].fields._size;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index, v6);
        *(_QWORD *)&v11.fields.currentCryptoKey = items;
        *(_QWORD *)&v11.fields.fakeValue = v8;
        LODWORD(servantLeaderInfo) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v11, 0);
        return (int)servantLeaderInfo;
      }
    }
LABEL_14:
    sub_21FFECC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_59349EB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    byte_59349EB = 1;
  }
  equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
  if ( !equipUserGrandServantEntityList )
    goto LABEL_12;
  if ( System_Collections_Generic_List_object___get_Item(
         equipUserGrandServantEntityList,
         index,
         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__) )
  {
    equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserGrandServantEntityList;
    if ( equipUserGrandServantEntityList )
    {
      equipUserGrandServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserGrandServantEntityList,
                                                                                       index,
                                                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( equipUserGrandServantEntityList )
        return UserServantEntity__getLevelMax((UserServantEntity_o *)equipUserGrandServantEntityList, 0);
    }
LABEL_12:
    sub_21FFECC(equipUserGrandServantEntityList, *(_QWORD *)&index);
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

  if ( (byte_59349E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_59349E9 = 1;
  }
  equipGrandServantEntityList = this->fields.equipGrandServantEntityList;
  if ( !equipGrandServantEntityList )
    sub_21FFECC(0, *(_QWORD *)&index);
  return (ServantEntity_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)equipGrandServantEntityList,
                              index,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
}


void ServantStatusListViewItem__GetEquipSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SkillInfo_array *equipSkillInfoList; // x8

  equipSkillInfoList = this->fields.equipSkillInfoList;
  *skillInfoList = equipSkillInfoList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)skillInfoList,
    (int32_t)equipSkillInfoList,
    (System_String_o *)method,
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
  SkillInfo_array *Item; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59349F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo____get_Item__);
    byte_59349F7 = 1;
  }
  grandServantSkillInfoList = this->fields.grandServantSkillInfoList;
  if ( !grandServantSkillInfoList )
    sub_21FFECC(0, *(_QWORD *)&index);
  Item = (SkillInfo_array *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)grandServantSkillInfoList,
                              index,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SkillInfo____get_Item__);
  *skillInfoList = Item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)Item, v9, v10, v11, v12, v13, v14);
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
  __int64 v14; // x2
  struct ServantEntity_o *baseSvtEntity; // x8
  struct UserServantCollectionEntity_o *v16; // x9
  FriendshipMaster_o *v17; // x24
  int32_t friendshipId; // w25
  __int64 v19; // x26
  __int64 v20; // x27
  struct ServantEntity_o *v21; // x8
  struct UserServantCollectionEntity_o *v22; // x9
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_59349F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_FriendshipMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59349F8 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_FriendshipMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_19;
  v16 = this->fields.userSvtCollectionEntity;
  if ( !v16 )
    goto LABEL_19;
  v17 = (FriendshipMaster_o *)Instance;
  friendshipId = baseSvtEntity->fields.friendshipId;
  v19 = *(_QWORD *)&v16->fields.friendship.fields.currentCryptoKey;
  v20 = *(_QWORD *)&v16->fields.friendship.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
  *(_QWORD *)&v25.fields.currentCryptoKey = v19;
  *(_QWORD *)&v25.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v25, 0);
  v21 = this->fields.baseSvtEntity;
  if ( !v21 )
    goto LABEL_19;
  v22 = this->fields.userSvtCollectionEntity;
  if ( !v22 || !v17 )
    goto LABEL_19;
  FriendshipMaster__GetFriendshipRank(
    v17,
    friendshipId,
    (int32_t)Instance,
    v22->fields.friendshipExceedCount + v21->fields.maxFriendshipRank,
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
    sub_21FFECC(Instance, v13);
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x21
  void *Instance; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  UserServantEntity_o *HeroineData; // x0
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  EventDropUpValInfo_c *v21; // x0
  EventDropUpValInfo_o *v22; // x22
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_5934A01 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_21FFC50(&EventDropUpValInfo_TypeInfo);
    sub_21FFC50(&FunctionEntity_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5934A01 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 17),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v37 = v36;
    v36.fields._list = 0;
    *(_QWORD *)&v36.fields._index = &v37;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v10 )
        break;
      current = v37.fields._current;
      if ( !v37.fields._current )
        sub_21FFECC(v10, v11);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v37.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
        v15 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v15 )
          sub_21FFECC(0, v16);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v15, svtId, 0);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0) )
        {
          v18 = sub_21FFEBC(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v18, 0);
          if ( !v18 )
            sub_21FFECC(v19, v20);
          v21 = EventDropUpValInfo_TypeInfo;
          *(_QWORD *)(v18 + 24) = 111;
          v22 = (EventDropUpValInfo_o *)sub_21FFEBC(v21);
          EventDropUpValInfo___ctor(v22, 0, (FunctionEntity_o *)v18, 0);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
          if ( !v22 )
            sub_21FFECC(OnlyMaxFuncGroupId, v24);
          v22->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v4
            || (items = v4->fields._items,
                v32 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__,
                ++v4->fields._version,
                !items) )
          {
            sub_21FFECC(OnlyMaxFuncGroupId, v24);
          }
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v22,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v22;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v4 )
      return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v4,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
LABEL_35:
    sub_21FFECC(Instance, v9);
  }
  if ( !v4 )
    goto LABEL_35;
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v4,
                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


int32_t ServantStatusListViewItem__GetIconLimitCountStage(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || (iconLimitCountStageData = currentLimitCountSetting->fields.iconLimitCountStageData) == 0 )
  {
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
  }
  return iconLimitCountStageData->fields._StageList_k__BackingField;
}


bool ServantStatusListViewItem__GetNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TreasureDvcInfo_o *v8; // x8

  v8 = this->fields.tdInfo;
  *tdInfo = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)tdInfo, (int32_t)v8, (System_String_o *)method, v3, v4, v5, v6, v7);
  return this->fields.isTdResult;
}


void ServantStatusListViewItem__GetPassiveSkillInfo(
        ServantStatusListViewItem_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        bool checkTransform,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  ServantEntity_TransformInfo_o *transformInfoBefore; // x0
  System_Int32_array *passiveSkillIdList; // x1
  System_String_array *passiveSkillTitleMessageList; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  char v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  char v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_array **p_transformedPassiveSkillExplanationMessageList; // x8
  System_Int32_array *transformedPassiveSkillIdList; // x1
  System_String_array *transformedPassiveSkillTitleMessageList; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  char v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_array *v36; // x1

  if ( checkTransform
    && this->fields._IsTransformed_k__BackingField
    && ((transformInfoBefore = this->fields.transformInfoBefore) == 0
     || !ServantEntity_TransformInfo__IsNotClassSkillChange(transformInfoBefore, 0)) )
  {
    transformedPassiveSkillIdList = this->fields.transformedPassiveSkillIdList;
    *idList = transformedPassiveSkillIdList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)idList,
      (int32_t)transformedPassiveSkillIdList,
      (System_String_o *)titleList,
      (System_String_o *)explanationList,
      checkTransform,
      (int32_t)method,
      v6,
      v7);
    transformedPassiveSkillTitleMessageList = this->fields.transformedPassiveSkillTitleMessageList;
    *titleList = transformedPassiveSkillTitleMessageList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)titleList,
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)idList,
      (int32_t)passiveSkillIdList,
      (System_String_o *)titleList,
      (System_String_o *)explanationList,
      checkTransform,
      (int32_t)method,
      v6,
      v7);
    passiveSkillTitleMessageList = this->fields.passiveSkillTitleMessageList;
    *titleList = passiveSkillTitleMessageList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)titleList,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v36, v21, v22, v23, v24, v25, v26);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
  return currentLimitCountSetting->fields.randomLimitCount;
}


int32_t ServantStatusListViewItem__GetRandomLimitCountSupport(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_21FFECC(this, method);
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


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItem__GetSkillInfo(
        ServantStatusListViewItem_o *this,
        SkillInfo_array **skillInfoList,
        bool checkTransform,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SkillInfo_array **p_transformedSkillInfoList; // x9
  SkillInfo_array *v10; // x1

  if ( checkTransform && this->fields._IsTransformed_k__BackingField )
    p_transformedSkillInfoList = &this->fields.transformedSkillInfoList;
  else
    p_transformedSkillInfoList = &this->fields.skillInfoList;
  v10 = *p_transformedSkillInfoList;
  *skillInfoList = *p_transformedSkillInfoList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)skillInfoList,
    (int32_t)v10,
    (System_String_o *)checkTransform,
    (System_String_o *)method,
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
  UserServantEntity_o *userSvtEntity; // x22
  int32_t TransformVal_k__BackingField; // w8
  __int64 v8; // x2
  struct UserGameEntity_o *userGameEntity; // x21
  struct PartyListViewItem_o *partyItem; // x23
  int32_t v11; // w23
  ServantOverwriteStatus_o *v12; // x21
  ServantLeaderInfo_o *servantLeaderInfo; // x22
  __int64 v14; // x2
  struct UserGameEntity_o *v15; // x20
  struct PartyListViewItem_o *v16; // x21
  int32_t v17; // w20
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  int32_t SvtId; // w20
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v3 = stageLimitCount;
  v4 = this;
  if ( (byte_59349FF & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&ServantOverwriteStatus_TypeInfo);
    byte_59349FF = 1;
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
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&stageLimitCount,
          v8);
      *(_QWORD *)&v22.fields.currentCryptoKey = userGameEntity;
      *(_QWORD *)&v22.fields.fakeValue = partyItem;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v22, 0);
      v12 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_40386416(v12, userSvtEntity, v11, v3, 0);
    }
    else
    {
      v12 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor(v12, userSvtEntity, v3, 0);
    }
    *(_QWORD *)&stageLimitCount = v4->fields._GrandInfo_k__BackingField;
    if ( *(_QWORD *)&stageLimitCount )
    {
      if ( v12 )
      {
        ServantOverwriteStatus__ApplyGrandServantEffect(v12, *(UserServantGrandInfo_o **)&stageLimitCount, 0);
        return v12;
      }
LABEL_25:
      sub_21FFECC(this, *(_QWORD *)&stageLimitCount);
    }
  }
  else
  {
    servantLeaderInfo = v4->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      if ( !TransformVal_k__BackingField )
      {
        DispLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                          v4,
                                                          0,
                                                          method);
        v12 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
        ServantOverwriteStatus___ctor_40386940(v12, servantLeaderInfo, DispLimitCountStageSealAfterAtStageLimitCount, 0);
        return v12;
      }
      this = (ServantStatusListViewItem_o *)ServantLeaderInfo__get_SaveTransformServantEntity(
                                              v4->fields.servantLeaderInfo,
                                              0);
      if ( !this )
        goto LABEL_25;
      v15 = this->fields.userGameEntity;
      v16 = this->fields.partyItem;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
          *(_QWORD *)&stageLimitCount,
          v14);
      *(_QWORD *)&v23.fields.currentCryptoKey = v15;
      *(_QWORD *)&v23.fields.fakeValue = v16;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0);
      v12 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_40387480(v12, servantLeaderInfo, v17, v3, 0);
    }
    else if ( v4->fields.isCollection )
    {
      userSvtCollectionEntity = v4->fields.userSvtCollectionEntity;
      SvtId = ServantStatusListViewItem__GetSvtId(v4, 0, method);
      v12 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_40387824(v12, userSvtCollectionEntity, SvtId, v3, 0);
    }
    else
    {
      return 0;
    }
  }
  return v12;
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  if ( (byte_59349FE & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349FE = 1;
  }
  if ( checkTransform && v4->fields._IsTransformed_k__BackingField )
    return v4->fields._TransformedSvtId_k__BackingField;
  svtEntity = v4->fields.svtEntity;
  if ( !svtEntity )
    sub_21FFECC(this, checkTransform);
  v7 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, checkTransform, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v9, 0);
}


System_String_o *ServantStatusListViewItem__GetTransformName(
        ServantStatusListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_TransformInfo_o *transformInfoAfter; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x9
  System_String_o **p_condLabelTitle; // x8

  if ( this->fields._IsTransformServant_k__BackingField )
  {
    if ( this->fields._IsTransformed_k__BackingField )
    {
LABEL_3:
      transformInfoAfter = this->fields.transformInfoAfter;
      if ( !transformInfoAfter )
        goto LABEL_13;
      goto LABEL_10;
    }
  }
  else
  {
    if ( !this->fields.tempTransformLimitCountSetting )
    {
      p_condLabelTitle = *(System_String_o ***)(qword_594C0B8 + 184);
      return *p_condLabelTitle;
    }
    currentLimitCountSetting = this->fields.currentLimitCountSetting;
    if ( !currentLimitCountSetting || (tempLimitCountSetting = this->fields.tempLimitCountSetting) == 0 )
LABEL_13:
      sub_21FFECC(this, method);
    if ( currentLimitCountSetting->fields._TransformVal_k__BackingField != tempLimitCountSetting->fields._TransformVal_k__BackingField )
      goto LABEL_3;
  }
  transformInfoAfter = this->fields.transformInfoBefore;
  if ( !transformInfoAfter )
    goto LABEL_13;
LABEL_10:
  p_condLabelTitle = &transformInfoAfter->fields.condLabelTitle;
  return *p_condLabelTitle;
}


void ServantStatusListViewItem__GetTransformedNpInfo(
        ServantStatusListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TreasureDvcInfo_o *transformedTdInfo; // x8

  transformedTdInfo = this->fields.transformedTdInfo;
  *tdInfo = transformedTdInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)tdInfo,
    (int32_t)transformedTdInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_5934A0E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5934A0E = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  explanationList = 0;
  titleList = 0;
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
        (userSvtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || !v14 )
  {
    sub_21FFECC(userSvtEntity, *(_QWORD *)&svtId);
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
  bool v6; // w6
  bool v7; // w7
  int32_t v12; // w1
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v16; // x1
  System_String_o *v17; // x2
  int32_t illustratorId; // w23
  struct ServantEntity_o *baseSvtEntity; // x8
  int32_t CvId; // w0
  int32_t v21; // w22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *monitor; // x1
  Il2CppObject *v29; // x0
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x1
  __int64 *v36; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59349F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_CvMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_IllustratorMaster___);
    sub_21FFC50(&Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_15393/*"UNKNOWN_NAME_ILLUST"*/);
    sub_21FFC50(&StringLiteral_9698/*"NO_ENTRY_NAME_ILLUST"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59349F9 = 1;
  }
  v12 = (int)StringLiteral_1/*""*/;
  entity = 0;
  *voice = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)voice,
    v12,
    (System_String_o *)voice,
    (System_String_o *)isPlayVoice,
    (int32_t)method,
    v5,
    v6,
    v7);
  *isPlayVoice = 0;
  if ( !this->fields.commandCodeEntity )
  {
    baseSvtEntity = this->fields.baseSvtEntity;
    if ( !baseSvtEntity )
      goto LABEL_29;
    illustratorId = baseSvtEntity->fields.illustratorId;
    CvId = ServantStatusListViewItem__GetCvId(this, v14);
    if ( CvId < 1 )
      goto LABEL_15;
    v21 = CvId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CvMaster___);
      if ( Instance )
      {
        v22 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v21,
                (const MethodInfo_3EDD388 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
        if ( v22 )
        {
          monitor = (System_String_o *)v22[1].monitor;
          *voice = monitor;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)voice, (int32_t)monitor, v17, v23, v24, v25, v26, v27);
          *isPlayVoice = 1;
        }
        goto LABEL_15;
      }
    }
LABEL_29:
    sub_21FFECC(Instance, v14);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeCommentMaster___);
  Instance = (Il2CppObject *)ServantStatusListViewItem__get_CommandCodeId(this, v16);
  if ( !MasterData_object )
    goto LABEL_29;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               &entity,
                               (int32_t)Instance,
                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_CommandCodeCommentMaster__CommandCodeCommentEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_21;
  if ( !entity )
    goto LABEL_29;
  illustratorId = (int32_t)entity[2].klass;
LABEL_15:
  if ( illustratorId < 1 )
  {
    if ( !illustratorId )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v17);
      v36 = &StringLiteral_9698/*"NO_ENTRY_NAME_ILLUST"*/;
      goto LABEL_24;
    }
LABEL_21:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v17);
    v36 = &StringLiteral_15393/*"UNKNOWN_NAME_ILLUST"*/;
LABEL_24:
    v35 = LocalizationManager__Get((System_String_o *)*v36, 0);
    goto LABEL_25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_IllustratorMaster___);
  if ( !Instance )
    goto LABEL_29;
  v29 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          illustratorId,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_IllustratorMaster__IllustratorEntity__int__GetEntity__);
  if ( !v29 )
    goto LABEL_21;
  v35 = (System_String_o *)v29[1].monitor;
LABEL_25:
  *illust = v35;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)illust, (int32_t)v35, v17, v30, v31, v32, v33, v34);
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

  if ( (byte_5934A0D & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_ServantStatusListViewItem___c__DisplayClass417_0__HasRandomGroup_b__0__);
    sub_21FFC50(&ServantStatusListViewItem___c__DisplayClass417_0_TypeInfo);
    byte_5934A0D = 1;
  }
  v3 = (ServantStatusListViewItem___c__DisplayClass417_0_o *)sub_21FFEBC(ServantStatusListViewItem___c__DisplayClass417_0_TypeInfo);
  ServantStatusListViewItem___c__DisplayClass417_0___ctor(v3, 0);
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting
    || !v3
    || (v3->fields.svtId = currentLimitCountSetting->fields._SvtId_k__BackingField,
        LimitCount = ServantStatusListViewItem__get_LimitCount(this, v5),
        v7 = this->fields.currentLimitCountSetting,
        v3->fields.limitCount = LimitCount,
        !v7)
    || (dispLimitCountStageData = v7->fields.dispLimitCountStageData) == 0 )
  {
    sub_21FFECC(LimitCount, v5);
  }
  StageList_k__BackingField = dispLimitCountStageData->fields._StageList_k__BackingField;
  v10 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ServantStatusListViewItem___c__DisplayClass417_0__HasRandomGroup_b__0__,
    0);
  return BasicHelper__Any_int__58574768(
           StageList_k__BackingField,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
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
      sub_21FFECC(this, method);
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
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int64_array *items; // x19
  __int64 v10; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_59349E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349E8 = 1;
  }
  if ( this->fields.userSvtEntity )
  {
    grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
    if ( !grandServantEquipTargetIdList )
      return (char)grandServantEquipTargetIdList;
    v6 = System_Collections_Generic_List_long___get_Item(
           grandServantEquipTargetIdList,
           index,
           (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__) <= 0;
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
      v10 = *(_QWORD *)&grandServantEquipTargetIdList[1].fields._size;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
      *(_QWORD *)&v12.fields.currentCryptoKey = items;
      *(_QWORD *)&v12.fields.fakeValue = v10;
      v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v12, 0) <= 0;
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
  TreasureDvcInfo_c *v3; // x0
  TreasureDvcInfo_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  void *svtEntity; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t SvtId_k__BackingField; // w21
  int32_t TransformVal_k__BackingField; // w22
  int32_t DispLimitCountStageSealAfter; // w0
  const MethodInfo *v18; // x2
  int32_t v19; // w20
  UserServantEntity_o *userSvtEntity; // x23
  struct UserServantEntity_o *v21; // x8
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  bool TreasureDeviceInfo; // w8
  EquipTargetInfo_o *equipTargetInfo; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w0
  const MethodInfo *v28; // x2
  struct ServantOverwriteStatus_o *Status; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_59349E2 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&TreasureDvcInfo_TypeInfo);
    byte_59349E2 = 1;
  }
  v3 = TreasureDvcInfo_TypeInfo;
  this->fields.isTdResult = 0;
  v4 = (TreasureDvcInfo_o *)sub_21FFEBC(v3);
  TreasureDvcInfo___ctor(v4, 0);
  this->fields.tdInfo = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tdInfo, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    goto LABEL_39;
  SvtId_k__BackingField = currentLimitCountSetting->fields._SvtId_k__BackingField;
  TransformVal_k__BackingField = currentLimitCountSetting->fields._TransformVal_k__BackingField;
  DispLimitCountStageSealAfter = ServantStatusListViewItem__GetDispLimitCountStageSealAfter(this, 0, v13);
  v19 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
  if ( this->fields.userSvtEntity )
  {
    UserServantEntity__GetSkillInfo(
      this->fields.userSvtEntity,
      &this->fields.skillInfoList,
      SvtId_k__BackingField,
      this->fields._BeforeClearQuestId_k__BackingField,
      v19,
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
      svtEntity = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        v19,
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
                            v19,
                            0,
                            0);
      this->fields.isTdResult = (unsigned __int8)svtEntity & 1;
      if ( TransformVal_k__BackingField )
        goto LABEL_23;
      v21 = this->fields.userSvtEntity;
      if ( v21 )
      {
        v21->fields.dispLimitCountAfter = v19;
        goto LABEL_23;
      }
    }
LABEL_39:
    sub_21FFECC(svtEntity, v12);
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
    TreasureDeviceInfo = ServantLeaderInfo__getTreasureDeviceInfo(
                           (ServantLeaderInfo_o *)svtEntity,
                           &this->fields.tdInfo,
                           TransformVal_k__BackingField,
                           0);
    svtEntity = this->fields.servantLeaderInfo;
    this->fields.isTdResult = TreasureDeviceInfo;
    if ( !svtEntity )
      goto LABEL_39;
    ServantLeaderInfo__SetSkillChangeInfo((ServantLeaderInfo_o *)svtEntity, 0);
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
          v19,
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
          v19,
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
                                    v19,
                                    0);
      }
    }
  }
LABEL_23:
  ServantStatusListViewItem__AddDuplicationInfo(this, 0, v18);
  if ( !this->fields.tempTransformLimitCountSetting )
    ServantStatusListViewItem__SetTransformData(this, v25);
  DispLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    this,
                                                    0,
                                                    v26);
  Status = ServantStatusListViewItem__GetStatus(this, DispLimitCountStageSealAfterAtStageLimitCount, v28);
  this->fields.overwriteStatus = Status;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteStatus,
    (int32_t)Status,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void ServantStatusListViewItem__RefreshWithRandom(
        ServantStatusListViewItem_o *this,
        ServantStatusListViewItem_TempLimitCountSetting_o *setting,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v5; // x0
  UserServantEntity_o *userSvtEntity; // x20
  bool v7; // w8

  if ( (byte_59349F1 & 1) == 0 )
  {
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_59349F1 = 1;
  }
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, setting, method);
  if ( !byte_5934082 )
  {
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_5934082 = 1;
  }
  v5 = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, setting, method);
    v5 = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
  }
  if ( LOBYTE(v5->fields.commandCodeEntity->monitor) )
  {
    if ( !setting )
      sub_21FFECC(v5, setting);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7

  this->fields._TransformedServant_k__BackingField = 0;
  HIBYTE(this->fields._TransformedServantDispLimitCount_k__BackingField) = 0;
  *(_QWORD *)&this->fields._IsTransformServant_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransformedServant_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.transformedServantLimitEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.transformedServantLimitEntity,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.transformedSkillInfoList = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.transformedSkillInfoList,
    0,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.transformedPassiveSkillIdList = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.transformedPassiveSkillIdList,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.transformedPassiveSkillTitleMessageList = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.transformedPassiveSkillTitleMessageList,
    0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.transformedPassiveSkillExplanationMessageList = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.transformedPassiveSkillExplanationMessageList,
    0,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.transformedTdInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.transformedTdInfo, 0, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)&this->fields.transformedAtk = 0;
  this->fields.transformInfoBefore = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.transformInfoBefore, 0, v45, v46, v47, v48, v49, v50);
  this->fields.transformInfoAfter = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.transformInfoAfter, 0, v51, v52, v53, v54, v55, v56);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, *(_QWORD *)&stage);
  }
  return ServantStatusListViewItem_LimitCountStageData__SelectStage(
           (ServantStatusListViewItem_LimitCountStageData_o *)this,
           stage,
           0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, *(_QWORD *)&index);
  }
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(
           (ServantStatusListViewItem_LimitCountStageData_o *)this,
           index,
           0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, *(_QWORD *)&index);
  }
  v5 = ServantStatusListViewItem_LimitCountStageData__SelectStageList(
         (ServantStatusListViewItem_LimitCountStageData_o *)this,
         index,
         0);
  ServantStatusListViewItem__ModifyInfo(v4, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, *(_QWORD *)&index);
  }
  return ServantStatusListViewItem_LimitCountStageData__SelectStageList(
           (ServantStatusListViewItem_LimitCountStageData_o *)this,
           index,
           0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, *(_QWORD *)&index);
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
  struct ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8
  int32_t Stage_k__BackingField; // w21
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v9; // x8
  ServantStatusListViewItem_LimitCountStageData_o *v10; // x19

  v4 = this;
  if ( (byte_5934A0A & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&UserServantEntity_TypeInfo);
    byte_5934A0A = 1;
  }
  currentLimitCountSetting = v4->fields.currentLimitCountSetting;
  if ( index != -1 )
  {
    if ( currentLimitCountSetting )
    {
      this = (ServantStatusListViewItem_o *)currentLimitCountSetting->fields.supportLimitCountStageData;
      if ( this )
        return ServantStatusListViewItem_LimitCountStageData__SelectStageList(
                 (ServantStatusListViewItem_LimitCountStageData_o *)this,
                 index,
                 0);
    }
LABEL_18:
    sub_21FFECC(this, *(_QWORD *)&index);
  }
  if ( !currentLimitCountSetting )
    goto LABEL_18;
  supportLimitCountStageData = currentLimitCountSetting->fields.supportLimitCountStageData;
  if ( !supportLimitCountStageData )
    goto LABEL_18;
  Stage_k__BackingField = supportLimitCountStageData->fields._Stage_k__BackingField;
  this = (ServantStatusListViewItem_o *)UserServantEntity_TypeInfo;
  if ( !*(&UserServantEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo, *(_QWORD *)&index, method);
    this = (ServantStatusListViewItem_o *)UserServantEntity_TypeInfo;
  }
  if ( (CommandCodeEntity_c *)Stage_k__BackingField == this->fields.commandCodeEntity->klass )
    return 0;
  v9 = v4->fields.currentLimitCountSetting;
  if ( !v9 )
    goto LABEL_18;
  v10 = v9->fields.supportLimitCountStageData;
  if ( !HIDWORD(this->fields.tempTransformLimitCountSetting) )
    j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&index, method);
  if ( !v10 )
    goto LABEL_18;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusListViewItem_o *v9; // x19
  __int64 v10; // x1
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  struct System_Int64_array *equipIdList; // x8
  PartyOrganizationListViewItem_o *memberItem; // x0
  __int64 v16; // x2
  struct UserServantEntity_o *v17; // x8
  ServantStatusListViewItem_o *v18; // x20
  __int64 v19; // x21
  __int64 v20; // x22
  Il2CppObject *Entity; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v28; // x8
  ServantStatusListViewItem_o *v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x8
  int32_t v31; // w21
  ServantLimitEntity_o *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Int64_array *v39; // x8
  PartyOrganizationListViewItem_o *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  __int64 v54; // x2
  BalanceConfig_c *v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v9 = this;
  if ( (byte_59349E4 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&SkillInfo___TypeInfo);
    byte_59349E4 = 1;
  }
  if ( equipUserSvtId >= 1 && v9->fields.userSvtEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, equipUserSvtId, method);
    this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (Il2CppObject **)&v9->fields.equipUserSvtEntity,
                                            equipUserSvtId,
                                            (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      equipUserSvtEntity = v9->fields.equipUserSvtEntity;
      if ( !equipUserSvtEntity )
        goto LABEL_38;
      v12 = *(_QWORD *)&equipUserSvtEntity->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&equipUserSvtEntity->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, method);
      *(_QWORD *)&v63.fields.currentCryptoKey = v12;
      *(_QWORD *)&v63.fields.fakeValue = v13;
      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v63, 0);
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
          this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
            v17 = v9->fields.equipUserSvtEntity;
            if ( v17 )
            {
              v18 = this;
              v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
              v20 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v16);
              *(_QWORD *)&v64.fields.currentCryptoKey = v19;
              *(_QWORD *)&v64.fields.fakeValue = v20;
              this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                      v64,
                                                      0);
              if ( v18 )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                           (int32_t)this,
                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v9->fields.equipServantEntity = (struct ServantEntity_o *)Entity;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v9->fields.equipServantEntity,
                  (int32_t)Entity,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27);
                this = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                  v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v9->fields.equipUserSvtEntity;
                  if ( v28 )
                  {
                    v29 = this;
                    this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                            v28[5],
                                                            0);
                    v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v9->fields.equipUserSvtEntity;
                    if ( v30 )
                    {
                      v31 = (int)this;
                      this = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                              v30[6],
                                                              0);
                      if ( v29 )
                      {
                        v32 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v29, v31, (int32_t)this, 0);
                        v9->fields.equipSvtLimitEntity = v32;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)&v9->fields.equipSvtLimitEntity,
                          (int32_t)v32,
                          v33,
                          v34,
                          v35,
                          v36,
                          v37,
                          v38);
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
          sub_21FFECC(this, v10);
        }
LABEL_39:
        sub_21FFED4(this);
      }
    }
  }
  v39 = v9->fields.equipIdList;
  if ( v39 )
  {
    if ( !LODWORD(v39->max_length) )
      goto LABEL_39;
    v39->m_Items[0] = 0;
  }
  v40 = v9->fields.memberItem;
  if ( v40 && !v40->fields._IsDisappearEquip_k__BackingField )
    PartyOrganizationListViewItem__SetEquipUserServantId(v40, 0, 0, 0);
  v9->fields.equipTargetId1 = 0;
  v9->fields.equipUserSvtEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.equipUserSvtEntity,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v9->fields.equipServantEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->fields.equipServantEntity, 0, v41, v42, v43, v44, v45, v46);
  v9->fields.equipSvtLimitEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->fields.equipSvtLimitEntity, 0, v47, v48, v49, v50, v51, v52);
  v55 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v53, v54);
    v55 = BalanceConfig_TypeInfo;
  }
  v56 = sub_21FFD10(SkillInfo___TypeInfo, (unsigned int)v55->static_fields->SvtEquipSkillListMax);
  v9->fields.equipSkillInfoList = (struct SkillInfo_array *)v56;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->fields.equipSkillInfoList, v56, v57, v58, v59, v60, v61, v62);
}


void ServantStatusListViewItem__SetEquipTargetIds(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x0
  Il2CppObject *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *v11; // x20
  Il2CppClass *v12; // x21
  struct System_Int64_array *v13; // x0
  __int64 v14; // x0
  int32_t v15; // w1
  struct System_Int64_array **p_grandServantEquipIdList; // x20
  System_Collections_Generic_List_long__o *v17; // x20
  SkillInfo_array *v18; // x1
  __int64 v19; // x2
  int32_t i; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  struct System_Int64_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w8
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // x24
  __int64 v53; // x25
  struct System_Collections_Generic_List_long__o *grandServantEquipTargetIdList; // x23
  __int64 v55; // x2
  struct System_Int64_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x1
  System_Collections_Generic_List_object__o *v60; // x23
  Il2CppObject *v61; // x24
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x1
  Il2CppClass **v72; // x0
  System_Collections_Generic_List_object__o *v73; // x23
  Il2CppObject *v74; // x24
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x1
  Il2CppClass **v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  MissionNaviTransitionBoardItem_o *v96; // x8
  __int64 v97; // x8
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x8
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  __int64 v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x8
  __int64 v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x8
  struct System_Int64_array *v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  struct System_Int64_array *v132; // x8
  __int64 v133; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v135; // x23
  struct System_Int64_array *v136; // x8
  Il2CppClass *klass; // x21
  void *monitor; // x22
  __int64 v139; // x8
  _QWORD *v140; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v142; // x8
  __int64 v143; // x2
  __int64 v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  __int64 v147; // x8
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  __int64 v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  __int64 v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  __int64 v160; // x8
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  __int64 v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  __int64 v170; // x8
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  __int64 v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  __int64 v180; // x8
  MissionNaviTransitionBoardItem_o *v181; // x8
  __int64 v182; // x8
  struct System_Int64_array *grandServantEquipIdList; // x8
  __int64 v184; // x9
  _QWORD *v185; // x8
  __int64 v186; // x10
  System_Collections_Generic_List_object__o *equipGrandServantEntityList; // x21
  __int64 v188; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v189; // x22
  Il2CppClass *v190; // x23
  void *v191; // x26
  System_String_o *v192; // x2
  System_String_o *v193; // x3
  int32_t v194; // w4
  int32_t v195; // w5
  bool v196; // w6
  bool v197; // w7
  struct System_Object_array *items; // x8
  _QWORD *v199; // x9
  __int64 size; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v201; // x1
  Il2CppClass **v202; // x0
  System_Collections_Generic_List_object__o *equipGrandServantLimitEntityList; // x21
  ServantLimitMaster_o *v204; // x22
  int32_t v205; // w23
  System_String_o *v206; // x2
  System_String_o *v207; // x3
  int32_t v208; // w4
  int32_t v209; // w5
  bool v210; // w6
  bool v211; // w7
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  DataMasterBase_TMaster__TEntity__PKType__o *v215; // x1
  Il2CppClass **v216; // x0
  __int64 v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  __int64 v220; // x8
  ServantStatusListViewItem_o *v221; // x0
  const MethodInfo *v222; // x1
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-78h] BYREF
  SkillInfo_array *v224; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // 0:x0.16

  if ( (byte_59349E3 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349E3 = 1;
  }
  equipIdList = this->fields.equipIdList;
  v224 = 0;
  entity = 0;
  skillInfoList = 0;
  if ( equipIdList && SLODWORD(equipIdList->max_length) >= 2 && this->fields.userSvtEntity )
  {
    v4 = System_Array__Clone((System_Array_o *)equipIdList, 0);
    if ( v4 )
    {
      v11 = v4;
      v12 = long___TypeInfo;
      v13 = (struct System_Int64_array *)sub_21FFDA4(v4, long___TypeInfo);
      if ( !v13
        || (v12 = long___TypeInfo, this->fields.grandServantEquipIdList = v13, (v14 = sub_21FFDA4(v11, v12)) == 0) )
      {
        sub_220024C(v11, v12, v5, v6);
        ServantStatusListViewItem__UpdateServantComment(v221, v222);
        return;
      }
      v15 = v14;
      p_grandServantEquipIdList = &this->fields.grandServantEquipIdList;
    }
    else
    {
      v15 = 0;
      p_grandServantEquipIdList = &this->fields.grandServantEquipIdList;
      this->fields.grandServantEquipIdList = 0;
    }
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_grandServantEquipIdList, v15, v5, v6, v7, v8, v9, v10);
    v132 = *p_grandServantEquipIdList;
    if ( *p_grandServantEquipIdList )
    {
      v133 = 4;
      do
      {
        max_length_low = LODWORD(v132->max_length);
        v135 = v133 - 4;
        if ( v133 - 4 >= (int)max_length_low )
          return;
        if ( v135 >= max_length_low )
          goto LABEL_170;
        if ( *((__int64 *)&v132->obj.klass + v133) < 1 )
          goto LABEL_107;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v126);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
        v136 = *p_grandServantEquipIdList;
        if ( !*p_grandServantEquipIdList )
          break;
        if ( v135 >= LODWORD(v136->max_length) )
          goto LABEL_170;
        if ( !Master_object )
          break;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                        Master_object,
                                                                        &entity,
                                                                        *((_QWORD *)&v136->obj.klass + v133),
                                                                        (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_107;
        if ( !entity )
          break;
        klass = entity[5].klass;
        monitor = entity[5].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v126);
        *(_QWORD *)&v228.fields.currentCryptoKey = klass;
        *(_QWORD *)&v228.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v228, 0) >= 1 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v139 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v18 = (SkillInfo_array *)entity;
          v140 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v139 )
            break;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v139 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v18->obj,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
          }
          else
          {
            v142 = v139 + 8 * MasterName_k__BackingField_low;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_QWORD *)(v142 + 32) = v18;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v142 + 32),
              (int32_t)v18,
              v126,
              v127,
              v128,
              v129,
              v130,
              v131);
          }
          grandServantEquipIdList = this->fields.grandServantEquipIdList;
          if ( !grandServantEquipIdList )
            break;
          if ( v135 >= LODWORD(grandServantEquipIdList->max_length) )
LABEL_170:
            sub_21FFED4(Master_object);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v184 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v18 = (SkillInfo_array *)*((_QWORD *)&grandServantEquipIdList->obj.klass + v133);
          v185 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v184 )
            break;
          v186 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v186 >= *(_DWORD *)(v184 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              (int64_t)v18,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v186 + 1;
            *(_QWORD *)(v184 + 8 * v186 + 32) = v18;
          }
          equipGrandServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v143);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( !entity )
            break;
          v189 = Master_object;
          v190 = entity[5].klass;
          v191 = entity[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v188);
          *(_QWORD *)&v229.fields.currentCryptoKey = v190;
          *(_QWORD *)&v229.fields.fakeValue = v191;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                          v229,
                                                                          0);
          if ( !v189 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          v189,
                                                                          (int32_t)Master_object,
                                                                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !equipGrandServantEntityList )
            break;
          items = equipGrandServantEntityList->fields._items;
          v199 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++equipGrandServantEntityList->fields._version;
          if ( !items )
            break;
          size = equipGrandServantEntityList->fields._size;
          v201 = Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
          }
          else
          {
            v202 = &items->obj.klass + size;
            equipGrandServantEntityList->fields._size = size + 1;
            v202[4] = (Il2CppClass *)v201;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v202 + 4),
              (int32_t)v201,
              v192,
              v193,
              v194,
              v195,
              v196,
              v197);
          }
          equipGrandServantLimitEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
          if ( !entity )
            break;
          v204 = (ServantLimitMaster_o *)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[5],
                                                                          0);
          if ( !entity )
            break;
          v205 = (int)Master_object;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                                                                          0);
          if ( !v204 )
            break;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                          v204,
                                                                          v205,
                                                                          (int32_t)Master_object,
                                                                          0);
          if ( !equipGrandServantLimitEntityList )
            break;
          v212 = equipGrandServantLimitEntityList->fields._items;
          v213 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++equipGrandServantLimitEntityList->fields._version;
          if ( !v212 )
            break;
          v214 = equipGrandServantLimitEntityList->fields._size;
          v215 = Master_object;
          if ( (unsigned int)v214 >= LODWORD(v212->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              equipGrandServantLimitEntityList,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
          }
          else
          {
            v216 = &v212->obj.klass + v214;
            equipGrandServantLimitEntityList->fields._size = v214 + 1;
            v216[4] = (Il2CppClass *)v215;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v216 + 4),
              (int32_t)v215,
              v206,
              v207,
              v208,
              v209,
              v210,
              v211);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
          if ( !entity )
            break;
          UserServantEntity__getEquipSkillInfo((UserServantEntity_o *)entity, &v224, 1, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v217 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v18 = v224;
          v218 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v217 )
            break;
          v219 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v219 >= *(_DWORD *)(v217 + 24) )
          {
            v182 = v218[4];
            goto LABEL_133;
          }
          v220 = v217 + 8 * v219;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v219 + 1;
          *(_QWORD *)(v220 + 32) = v18;
          v181 = (MissionNaviTransitionBoardItem_o *)(v220 + 32);
        }
        else
        {
LABEL_107:
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
          if ( !Master_object )
            break;
          v144 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v145 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v144 )
            break;
          v146 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v146 >= *(_DWORD *)(v144 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
          }
          else
          {
            v147 = v144 + 8 * v146;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v146 + 1;
            *(_QWORD *)(v147 + 32) = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v147 + 32), 0, v126, v127, v128, v129, v130, v131);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
          if ( !Master_object )
            break;
          v154 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v155 = Method_System_Collections_Generic_List_long__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v154 )
            break;
          v156 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v156 >= *(_DWORD *)(v154 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              0,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v156 + 1;
            *(_QWORD *)(v154 + 8 * v156 + 32) = 0;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
          if ( !Master_object )
            break;
          v157 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v158 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v157 )
            break;
          v159 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v159 >= *(_DWORD *)(v157 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
          }
          else
          {
            v160 = v157 + 8 * v159;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v159 + 1;
            *(_QWORD *)(v160 + 32) = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v160 + 32), 0, v148, v149, v150, v151, v152, v153);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
          if ( !Master_object )
            break;
          v167 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v168 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v167 )
            break;
          v169 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v169 >= *(_DWORD *)(v167 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              0,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
          }
          else
          {
            v170 = v167 + 8 * v169;
            LODWORD(Master_object->fields._MasterName_k__BackingField) = v169 + 1;
            *(_QWORD *)(v170 + 32) = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v170 + 32), 0, v161, v162, v163, v164, v165, v166);
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
          if ( !Master_object )
            break;
          v177 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
          v178 = Method_System_Collections_Generic_List_SkillInfo____Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !v177 )
            break;
          v179 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)v179 >= *(_DWORD *)(v177 + 24) )
          {
            v182 = v178[4];
            v18 = 0;
LABEL_133:
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Master_object,
              &v18->obj,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v182 + 192) + 112LL));
            goto LABEL_134;
          }
          v180 = v177 + 8 * v179;
          LODWORD(v18) = 0;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v179 + 1;
          *(_QWORD *)(v180 + 32) = 0;
          v181 = (MissionNaviTransitionBoardItem_o *)(v180 + 32);
        }
        sub_21FFBF4(v181, (int32_t)v18, v171, v172, v173, v174, v175, v176);
LABEL_134:
        v132 = *p_grandServantEquipIdList;
        ++v133;
      }
      while ( *p_grandServantEquipIdList );
    }
LABEL_169:
    sub_21FFECC(Master_object, v18);
  }
  if ( !this->fields.servantLeaderInfo )
    return;
  v17 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  for ( i = 0; ; ++i )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18, v19);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
    }
    if ( i >= SHIDWORD(Master_object[2].fields.list->fields.PropertyChanged) )
      break;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.servantLeaderInfo;
    if ( !Master_object )
      goto LABEL_169;
    EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                  (ServantLeaderInfo_o *)Master_object,
                                  i,
                                  0);
    if ( EquipTargetInfoByEquipIdx )
    {
      v23 = EquipTargetInfoByEquipIdx;
      v24 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19);
      *(_QWORD *)&v226.fields.currentCryptoKey = v24;
      *(_QWORD *)&v226.fields.fakeValue = v25;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                      v226,
                                                                      0);
      if ( !v17 )
        goto LABEL_169;
      v26 = v17->fields._items;
      v27 = Method_System_Collections_Generic_List_long__Add__;
      ++v17->fields._version;
      if ( !v26 )
        goto LABEL_169;
      v28 = v17->fields._size;
      if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v17,
          (int)Master_object,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = v28 + 1;
        v26->m_Items[v28] = (int)Master_object;
      }
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23->fields.svtId, 0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipUserGrandServantEntityList;
      if ( v35 < 1 )
      {
        if ( !Master_object )
          goto LABEL_169;
        v42 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v43 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v42 )
          goto LABEL_169;
        v44 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = v42 + 8 * v44;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v44 + 1;
          *(_QWORD *)(v45 + 32) = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 32), 0, v29, v30, v31, v32, v33, v34);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantEquipTargetIdList;
        if ( !Master_object )
          goto LABEL_169;
        v98 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v99 = Method_System_Collections_Generic_List_long__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v98 )
          goto LABEL_169;
        v100 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            (System_Collections_Generic_List_long__o *)Master_object,
            0,
            *(const MethodInfo_4438164 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v100 + 1;
          *(_QWORD *)(v98 + 8 * v100 + 32) = 0;
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantEntityList;
        if ( !Master_object )
          goto LABEL_169;
        v101 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v102 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v101 )
          goto LABEL_169;
        v103 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v103 >= *(_DWORD *)(v101 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
        }
        else
        {
          v104 = v101 + 8 * v103;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v103 + 1;
          *(_QWORD *)(v104 + 32) = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v104 + 32), 0, v46, v47, v48, v49, v50, v51);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.equipGrandServantLimitEntityList;
        if ( !Master_object )
          goto LABEL_169;
        v111 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v112 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v111 )
          goto LABEL_169;
        v113 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v113 >= *(_DWORD *)(v111 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
        }
        else
        {
          v114 = v111 + 8 * v113;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v113 + 1;
          *(_QWORD *)(v114 + 32) = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v114 + 32), 0, v105, v106, v107, v108, v109, v110);
        }
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_169;
        v115 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v116 = Method_System_Collections_Generic_List_SkillInfo____Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v115 )
          goto LABEL_169;
        v117 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v117 < *(_DWORD *)(v115 + 24) )
        {
          v118 = v115 + 8 * v117;
          LODWORD(v18) = 0;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v117 + 1;
          *(_QWORD *)(v118 + 32) = 0;
          v96 = (MissionNaviTransitionBoardItem_o *)(v118 + 32);
          goto LABEL_80;
        }
        v97 = v116[4];
        v18 = 0;
      }
      else
      {
        if ( !Master_object )
          goto LABEL_169;
        v36 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v36 )
          goto LABEL_169;
        v38 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            0,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = v36 + 8 * v38;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v38 + 1;
          *(_QWORD *)(v39 + 32) = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 32), 0, v29, v30, v31, v32, v33, v34);
        }
        v52 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
        v53 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
        grandServantEquipTargetIdList = this->fields.grandServantEquipTargetIdList;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40, v41);
        *(_QWORD *)&v227.fields.currentCryptoKey = v52;
        *(_QWORD *)&v227.fields.fakeValue = v53;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                        v227,
                                                                        0);
        if ( !grandServantEquipTargetIdList )
          goto LABEL_169;
        v56 = grandServantEquipTargetIdList->fields._items;
        v57 = Method_System_Collections_Generic_List_long__Add__;
        ++grandServantEquipTargetIdList->fields._version;
        if ( !v56 )
          goto LABEL_169;
        v58 = grandServantEquipTargetIdList->fields._size;
        v59 = (int)Master_object;
        if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            grandServantEquipTargetIdList,
            (int)Master_object,
            *(const MethodInfo_4438164 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          grandServantEquipTargetIdList->fields._size = v58 + 1;
          v56->m_Items[v58] = (int)Master_object;
        }
        v60 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantEntityList;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59, v55);
        v61 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                        v23->fields.svtId,
                                                                        0);
        if ( !v61 )
          goto LABEL_169;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v61,
                                                                        (int32_t)Master_object,
                                                                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v60 )
          goto LABEL_169;
        v68 = v60->fields._items;
        v69 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v60->fields._version;
        if ( !v68 )
          goto LABEL_169;
        v70 = v60->fields._size;
        v71 = Master_object;
        if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v60,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &v68->obj.klass + v70;
          v60->fields._size = v70 + 1;
          v72[4] = (Il2CppClass *)v71;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v72 + 4), (int32_t)v71, v62, v63, v64, v65, v66, v67);
        }
        v73 = (System_Collections_Generic_List_object__o *)this->fields.equipGrandServantLimitEntityList;
        v74 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                        v23->fields.svtId,
                                                                        0);
        if ( !v74 )
          goto LABEL_169;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                        (ServantLimitMaster_o *)v74,
                                                                        (int32_t)Master_object,
                                                                        v23->fields.limitCount,
                                                                        0);
        if ( !v73 )
          goto LABEL_169;
        v81 = v73->fields._items;
        v82 = Method_System_Collections_Generic_List_ServantLimitEntity__Add__;
        ++v73->fields._version;
        if ( !v81 )
          goto LABEL_169;
        v83 = v73->fields._size;
        v84 = Master_object;
        if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v73,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v81->obj.klass + v83;
          v73->fields._size = v83 + 1;
          v85[4] = (Il2CppClass *)v84;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 4), (int32_t)v84, v75, v76, v77, v78, v79, v80);
        }
        EquipTargetInfo__getSkillInfo(v23, &skillInfoList, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grandServantSkillInfoList;
        if ( !Master_object )
          goto LABEL_169;
        v92 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        v18 = skillInfoList;
        v93 = Method_System_Collections_Generic_List_SkillInfo____Add__;
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
        if ( !v92 )
          goto LABEL_169;
        v94 = SLODWORD(Master_object->fields._MasterName_k__BackingField);
        if ( (unsigned int)v94 < *(_DWORD *)(v92 + 24) )
        {
          v95 = v92 + 8 * v94;
          LODWORD(Master_object->fields._MasterName_k__BackingField) = v94 + 1;
          *(_QWORD *)(v95 + 32) = v18;
          v96 = (MissionNaviTransitionBoardItem_o *)(v95 + 32);
LABEL_80:
          sub_21FFBF4(v96, (int32_t)v18, v86, v87, v88, v89, v90, v91);
          continue;
        }
        v97 = v93[4];
      }
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Master_object,
        &v18->obj,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v97 + 192) + 112LL));
    }
  }
  if ( !v17 )
    goto LABEL_169;
  v119 = System_Collections_Generic_List_long___ToArray(
           v17,
           (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.grandServantEquipIdList = v119;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantEquipIdList,
    (int32_t)v119,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
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
  bool v6; // w6
  bool v7; // w7
  _BOOL4 v8; // w21
  bool v10; // w22
  ServantStatusListViewItem_o *v11; // x19
  UserServantGrandInfo_c *v12; // x0
  UserServantEntity_o *userSvtEntity; // x21
  ServantLeaderInfo_o *servantLeaderInfo; // x0

  v8 = isForceNotGrand;
  v10 = isGrand;
  v11 = this;
  if ( (byte_5934A02 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&UserServantGrandInfo_TypeInfo);
    byte_5934A02 = 1;
  }
  if ( !v11 )
    sub_21FFECC(this, isGrand);
  v11->fields._IsGrandServant_k__BackingField = !v8 && v10 || isTempGrandServant;
  if ( v8 )
  {
LABEL_5:
    v12 = UserServantGrandInfo_TypeInfo;
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, isGrand, isTempGrandServant);
      v12 = UserServantGrandInfo_TypeInfo;
    }
    *(_QWORD *)&isGrand = v12->static_fields->Empty;
    goto LABEL_16;
  }
  userSvtEntity = v11->fields.userSvtEntity;
  if ( !isTempGrandServant )
  {
    if ( userSvtEntity )
    {
      *(_QWORD *)&isGrand = UserServantEntity__get_GrandInfo(v11->fields.userSvtEntity, 0);
      if ( isGrand )
        goto LABEL_16;
    }
    servantLeaderInfo = v11->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
    {
      *(_QWORD *)&isGrand = ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
      if ( isGrand )
        goto LABEL_16;
    }
    goto LABEL_5;
  }
  if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, isGrand, isTempGrandServant);
  *(_QWORD *)&isGrand = UserServantGrandInfo__Make(userSvtEntity, 1, 0);
LABEL_16:
  v11->fields._GrandInfo_k__BackingField = (struct UserServantGrandInfo_o *)isGrand;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v11->fields._GrandInfo_k__BackingField,
    isGrand,
    (System_String_o *)isTempGrandServant,
    (System_String_o *)isForceNotGrand,
    (int32_t)method,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItem__SetRandomLimitCount(
        ServantStatusListViewItem_o *this,
        int32_t randomLimitCount,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  ServantStatusListViewItem_TempLimitCountSetting_o *v5; // x1

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_21FFECC(this, *(_QWORD *)&randomLimitCount);
  v5 = this->fields.currentLimitCountSetting;
  currentLimitCountSetting->fields.randomLimitCount = randomLimitCount;
  ServantStatusListViewItem__RefreshWithRandom(this, v5, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItem__SetRandomLimitCountSupport(
        ServantStatusListViewItem_o *this,
        int32_t randomLimitCount,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8

  currentLimitCountSetting = this->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_21FFECC(this, *(_QWORD *)&randomLimitCount);
  currentLimitCountSetting->fields.randomLimitCountSupport = randomLimitCount;
}


void ServantStatusListViewItem__SetTransformData(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtEntity; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v7; // x1
  int32_t SvtId; // w21
  const MethodInfo *v9; // x2
  void *DispLimitCountStage; // x0
  UserServantGrandInfo_o *GrandInfo_k__BackingField; // x1
  __int64 v12; // x2
  DataManager_c *v13; // x0
  int v14; // w8
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *v22; // x0
  int32_t TransformedSvtId_k__BackingField; // w20
  ServantLimitMaster_o *v24; // x21
  const MethodInfo *v25; // x1
  struct ServantLimitEntity_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x2
  int32_t v34; // w20
  UserServantEntity_o *userSvtEntity; // x21
  int32_t v36; // w22
  UserServantEntity_o *v37; // x21
  int32_t v38; // w22
  int32_t v39; // w23
  ServantOverwriteStatus_o *v40; // x20
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  ServantLeaderInfo_o *v42; // x21
  int32_t v43; // w22
  int32_t v44; // w23
  int32_t Hp_k__BackingField; // w9
  int32_t v46; // w20
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  int32_t v48; // w22
  int32_t v49; // w23
  ServantTransformEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59349FD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&ServantOverwriteStatus_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_59349FD = 1;
  }
  entity = 0;
  ServantStatusListViewItem__ResetTransformData(this, method);
  svtEntity = this->fields.svtEntity;
  if ( svtEntity && ServantEntity__get_IsServant(svtEntity, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    SvtId = ServantStatusListViewItem__get_SvtId(this, v7);
    DispLimitCountStage = (void *)ServantStatusListViewItem__GetDispLimitCountStage(this, 0, v9);
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
    v13 = DataManager_TypeInfo;
    *(_QWORD *)&this->fields._TransformedSvtId_k__BackingField = *(_QWORD *)&entity->fields.aftSvtId;
    v14 = *(&v13->_2.cctor_finished + 1);
    this->fields._IsTransformServant_k__BackingField = 1;
    if ( !v14 )
      j_il2cpp_runtime_class_init_0(v13, GrandInfo_k__BackingField, v12);
    DispLimitCountStage = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !DispLimitCountStage )
      goto LABEL_38;
    v15 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)DispLimitCountStage,
            this->fields._TransformedSvtId_k__BackingField,
            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this->fields._TransformedServant_k__BackingField = (struct ServantEntity_o *)v15;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._TransformedServant_k__BackingField,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitMaster___);
    TransformedSvtId_k__BackingField = this->fields._TransformedSvtId_k__BackingField;
    v24 = (ServantLimitMaster_o *)v22;
    DispLimitCountStage = (void *)ServantStatusListViewItem__get_LimitCount(this, v25);
    if ( !v24 )
      goto LABEL_38;
    v26 = ServantLimitMaster__GetEntity(v24, TransformedSvtId_k__BackingField, (int32_t)DispLimitCountStage, 0);
    this->fields.transformedServantLimitEntity = v26;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.transformedServantLimitEntity,
      (int32_t)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
      v34 = (int)DispLimitCountStage;
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
      v36 = this->fields._TransformedSvtId_k__BackingField;
      DispLimitCountStage = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !DispLimitCountStage )
        goto LABEL_38;
      if ( !userSvtEntity )
        goto LABEL_38;
      UserServantEntity__GetTransformedPassiveSkillInfo(
        userSvtEntity,
        &this->fields.transformedPassiveSkillIdList,
        &this->fields.transformedPassiveSkillTitleMessageList,
        &this->fields.transformedPassiveSkillExplanationMessageList,
        v36,
        v34,
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
        v34,
        0,
        0);
      v37 = this->fields.userSvtEntity;
      v38 = this->fields._TransformedSvtId_k__BackingField;
      v39 = LimitCountUtility__ConvertStageToLimitCount_47970664(
              this->fields._TransformedServantDispLimitCount_k__BackingField,
              0);
      v40 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_40386416(v40, v37, v38, v39, 0);
      GrandInfo_k__BackingField = this->fields._GrandInfo_k__BackingField;
      if ( GrandInfo_k__BackingField )
      {
        if ( v40 )
        {
          ServantOverwriteStatus__ApplyGrandServantEffect(v40, GrandInfo_k__BackingField, 0);
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
          v46 = (int)DispLimitCountStage;
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
              v46,
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
                v46,
                0);
              userSvtCollectionEntity = this->fields.userSvtCollectionEntity;
              v48 = this->fields._TransformedSvtId_k__BackingField;
              v49 = LimitCountUtility__ConvertStageToLimitCount_47970664(
                      this->fields._TransformedServantDispLimitCount_k__BackingField,
                      0);
              v40 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
              ServantOverwriteStatus___ctor_40387824(v40, userSvtCollectionEntity, v48, v49, 0);
              if ( v40 )
              {
LABEL_30:
                Hp_k__BackingField = v40->fields._Hp_k__BackingField;
                this->fields.transformedAtk = v40->fields._Atk_k__BackingField;
                this->fields.transformedHp = Hp_k__BackingField;
LABEL_31:
                ServantStatusListViewItem__AddDuplicationInfo(this, 1, v33);
                return;
              }
            }
          }
        }
LABEL_38:
        sub_21FFECC(DispLimitCountStage, GrandInfo_k__BackingField);
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
      v42 = this->fields.servantLeaderInfo;
      v43 = this->fields._TransformedSvtId_k__BackingField;
      v44 = LimitCountUtility__ConvertStageToLimitCount_47970664(
              this->fields._TransformedServantDispLimitCount_k__BackingField,
              0);
      v40 = (ServantOverwriteStatus_o *)sub_21FFEBC(ServantOverwriteStatus_TypeInfo);
      ServantOverwriteStatus___ctor_40387480(v40, v42, v43, v44, 0);
    }
    if ( v40 )
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ServantStatusListViewItem_LimitCountStageData_o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_5934A03 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&ServantStatusListViewItem_LimitCountStageData_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
    byte_5934A03 = 1;
  }
  v5 = sub_21FFEBC(ServantStatusListViewItem_TempLimitCountSetting_TypeInfo);
  ServantStatusListViewItem_TempLimitCountSetting___ctor(
    (ServantStatusListViewItem_TempLimitCountSetting_o *)v5,
    svtId,
    0,
    0);
  v6 = sub_21FFD10(int___TypeInfo, 1);
  if ( !v6 )
    goto LABEL_7;
  v8 = (System_Int32_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_21FFED4(v6);
  *(_DWORD *)(v6 + 32) = 1;
  v9 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v9, v8, 1, 0);
  if ( !v5 )
LABEL_7:
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 32) = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFEBC(ServantStatusListViewItem_LimitCountStageData_TypeInfo);
  ServantStatusListViewItem_LimitCountStageData___ctor(v16, v8, 1, 0);
  *(_QWORD *)(v5 + 40) = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  this->fields.tempLimitCountSetting = (struct ServantStatusListViewItem_TempLimitCountSetting_o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tempLimitCountSetting, v5, v23, v24, v25, v26, v27, v28);
  this->fields.currentLimitCountSetting = (struct ServantStatusListViewItem_TempLimitCountSetting_o *)v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentLimitCountSetting,
    v5,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void ServantStatusListViewItem__SetupTempLimitCountSetting_42284616(
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  ServantEntity_o *BaseServantEntity; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x24
  __int64 v22; // x25
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v23; // x27
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v24; // x23
  const MethodInfo *v25; // x2
  ServantStatusListViewItem_TempLimitCountSetting_o *v26; // x1
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  ServantEntity_TransformInfo_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  ServantStatusListViewItem_o *v48; // x0
  const MethodInfo *v49; // x5
  ServantStatusListViewItem_TempLimitCountSetting_o *v50; // x0
  struct ServantStatusListViewItem_TempLimitCountSetting_o **p_tempTransformLimitCountSetting; // x21
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x22
  __int64 v61; // x24
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempTransformLimitCountSetting; // x25
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v63; // x22
  const MethodInfo *v64; // x2
  ServantStatusListViewItem_TempLimitCountSetting_o *v65; // x1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v72; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v9 = this;
  if ( (byte_5934A04 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5934A04 = 1;
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.tempLimitCountSetting,
    (int32_t)TempLimitCountSetting,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !userServantEntity )
    goto LABEL_18;
  v21 = *(_QWORD *)&userServantEntity->fields.randomLimitCount.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.randomLimitCount.fields.fakeValue;
  v23 = *p_tempLimitCountSetting;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
  *(_QWORD *)&v73.fields.currentCryptoKey = v21;
  *(_QWORD *)&v73.fields.fakeValue = v22;
  BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v73, 0);
  if ( !v23 )
    goto LABEL_18;
  v23->fields.randomLimitCount = (int)BaseServantEntity;
  v24 = *p_tempLimitCountSetting;
  BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                           userServantEntity->fields.randomLimitCountSupport,
                                           0);
  if ( !v24 )
    goto LABEL_18;
  v26 = v9->fields.tempLimitCountSetting;
  v24->fields.randomLimitCountSupport = (int)BaseServantEntity;
  ServantStatusListViewItem__RefreshWithRandom(v9, v26, v25);
  v27 = v9->fields.tempLimitCountSetting;
  v9->fields.currentLimitCountSetting = v27;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.currentLimitCountSetting,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !UserServantEntity__get_IsSaveTransformServant(userServantEntity, 0) )
    return;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity(userServantEntity, 0);
  if ( !BaseServantEntity )
    goto LABEL_18;
  TransformInfo = ServantEntity__GetTransformInfo(BaseServantEntity, 0);
  v9->fields.transformInfoBefore = TransformInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.transformInfoBefore,
    (int32_t)TransformInfo,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  BaseServantEntity = UserServantEntity__get_SaveTransformServantEntity(userServantEntity, 0);
  if ( !BaseServantEntity )
    goto LABEL_18;
  v41 = ServantEntity__GetTransformInfo(BaseServantEntity, 0);
  v9->fields.transformInfoAfter = v41;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.transformInfoAfter,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v50 = ServantStatusListViewItem__CreateTempLimitCountSetting(
          v48,
          userServantEntity,
          1,
          userServantCollectionEntity,
          questRestrictionInfo,
          v49);
  v9->fields.tempTransformLimitCountSetting = v50;
  p_tempTransformLimitCountSetting = &v9->fields.tempTransformLimitCountSetting;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.tempTransformLimitCountSetting,
    (int32_t)v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v60 = *(_QWORD *)&userServantEntity->fields.randomLimitCount2.fields.currentCryptoKey;
  v61 = *(_QWORD *)&userServantEntity->fields.randomLimitCount2.fields.fakeValue;
  tempTransformLimitCountSetting = v9->fields.tempTransformLimitCountSetting;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58, v59);
  *(_QWORD *)&v74.fields.currentCryptoKey = v60;
  *(_QWORD *)&v74.fields.fakeValue = v61;
  BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v74, 0);
  if ( !tempTransformLimitCountSetting
    || (tempTransformLimitCountSetting->fields.randomLimitCount = (int)BaseServantEntity,
        v63 = *p_tempTransformLimitCountSetting,
        BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                 userServantEntity->fields.randomLimitCountSupport2,
                                                 0),
        !v63) )
  {
LABEL_18:
    sub_21FFECC(BaseServantEntity, v19);
  }
  v65 = v9->fields.tempTransformLimitCountSetting;
  v63->fields.randomLimitCountSupport = (int)BaseServantEntity;
  ServantStatusListViewItem__RefreshWithRandom(v9, v65, v64);
  if ( !UserServantEntity__CheckBaseServant(userServantEntity, -1, 0) )
  {
    v72 = *p_tempTransformLimitCountSetting;
    v9->fields.currentLimitCountSetting = *p_tempTransformLimitCountSetting;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.currentLimitCountSetting,
      (int32_t)v72,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
}


void ServantStatusListViewItem__SetupTempLimitCountSetting_42298188(
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
  ServantStatusListViewItem_TempLimitCountSetting_o *TempLimitCountSetting_42319152; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t saveTransform; // w21
  __int64 v33; // x1
  __int64 v34; // x2
  ServantEntity_TransformInfo_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  ServantStatusListViewItem_o *v42; // x0
  const MethodInfo *v43; // x4
  ServantStatusListViewItem_TempLimitCountSetting_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v6 = this;
  if ( (byte_5934A08 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5934A08 = 1;
  }
  if ( !servantEntity )
    goto LABEL_14;
  v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      servantEntity,
      userServantCollectionEntity);
  *(_QWORD *)&v51.fields.currentCryptoKey = v7;
  *(_QWORD *)&v51.fields.fakeValue = v8;
  v9 = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v51, 0);
  TempLimitCountSetting_42319152 = ServantStatusListViewItem__CreateTempLimitCountSetting_42319152(
                                     v9,
                                     userServantCollectionEntity,
                                     (int32_t)v9,
                                     0,
                                     v10);
  v6->fields.tempLimitCountSetting = TempLimitCountSetting_42319152;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.tempLimitCountSetting,
    (int32_t)TempLimitCountSetting_42319152,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  tempLimitCountSetting = v6->fields.tempLimitCountSetting;
  v6->fields.currentLimitCountSetting = tempLimitCountSetting;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.currentLimitCountSetting,
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
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v6->fields.transformInfoBefore,
        (int32_t)TransformInfo,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v34);
      this = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( this )
      {
        this = (ServantStatusListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                saveTransform,
                                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          v35 = ServantEntity__GetTransformInfo((ServantEntity_o *)this, 0);
          v6->fields.transformInfoAfter = v35;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v6->fields.transformInfoAfter,
            (int32_t)v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          v44 = ServantStatusListViewItem__CreateTempLimitCountSetting_42319152(
                  v42,
                  userServantCollectionEntity,
                  saveTransform,
                  1,
                  v43);
          v6->fields.tempTransformLimitCountSetting = v44;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v6->fields.tempTransformLimitCountSetting,
            (int32_t)v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
          return;
        }
      }
LABEL_14:
      sub_21FFECC(this, servantEntity);
    }
  }
}


void ServantStatusListViewItem__SetupTempLimitCountSetting_42301364(
        ServantStatusListViewItem_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ServantStatusListViewItem_TempLimitCountSetting_o *TempLimitCountSetting_42318368; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ServantStatusListViewItem_TempLimitCountSetting_o *tempLimitCountSetting; // x1
  MissionNaviTransitionBoardItem_o *p_currentLimitCountSetting; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ServantEntity_o *BaseServantEntity; // x0
  __int64 v22; // x1
  struct ServantEntity_TransformInfo_o *TransformInfo; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ServantEntity_TransformInfo_o *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x3
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v38; // x0
  struct ServantStatusListViewItem_TempLimitCountSetting_o **p_tempTransformLimitCountSetting; // x19
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct ServantStatusListViewItem_TempLimitCountSetting_o *v52; // x1

  TempLimitCountSetting_42318368 = ServantStatusListViewItem__CreateTempLimitCountSetting_42318368(
                                     this,
                                     servantLeaderInfo,
                                     0,
                                     v3);
  this->fields.tempLimitCountSetting = TempLimitCountSetting_42318368;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tempLimitCountSetting,
    (int32_t)TempLimitCountSetting_42318368,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  tempLimitCountSetting = this->fields.tempLimitCountSetting;
  this->fields.currentLimitCountSetting = tempLimitCountSetting;
  p_currentLimitCountSetting = (MissionNaviTransitionBoardItem_o *)&this->fields.currentLimitCountSetting;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentLimitCountSetting,
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
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.transformInfoBefore,
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
    sub_21FFECC(BaseServantEntity, v22);
  }
  v30 = ServantEntity__GetTransformInfo(BaseServantEntity, 0);
  this->fields.transformInfoAfter = v30;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.transformInfoAfter,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v38 = ServantStatusListViewItem__CreateTempLimitCountSetting_42318368(this, servantLeaderInfo, 1, v37);
  this->fields.tempTransformLimitCountSetting = v38;
  p_tempTransformLimitCountSetting = &this->fields.tempTransformLimitCountSetting;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_tempTransformLimitCountSetting,
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
    p_currentLimitCountSetting->klass = (MissionNaviTransitionBoardItem_c *)*p_tempTransformLimitCountSetting;
    sub_21FFBF4(p_currentLimitCountSetting, (int32_t)v52, v46, v47, v48, v49, v50, v51);
  }
}


bool ServantStatusListViewItem__UpdateServantComment(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t CardImageLimitCountStageSealAfter; // w20
  ServantCommentEntity_array *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct ServantEntity_o *baseSvtEntity; // x8
  ServantCommentMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct ServantCommentEntity_array *v19; // x8
  MissionNaviTransitionBoardItem_o *p_svtCommentEntityList; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // t1
  ServantCommentEntity_array *v22; // x20
  int max_length; // w8
  __int64 v24; // x21
  MissionNaviTransitionBoardItem_c *klass; // x9
  char v26; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_59349FC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349FC = 1;
  }
  CardImageLimitCountStageSealAfter = ServantStatusListViewItem__GetCardImageLimitCountStageSealAfter(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = (ServantCommentEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_24;
  v10 = (ServantCommentMaster_o *)Master_object;
  v11 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
  *(_QWORD *)&v28.fields.currentCryptoKey = v11;
  *(_QWORD *)&v28.fields.fakeValue = v12;
  Master_object = (ServantCommentEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                  v28,
                                                  0);
  if ( !v10 )
    goto LABEL_24;
  Master_object = ServantCommentMaster__GetEntityList(
                    v10,
                    (int32_t)Master_object,
                    CardImageLimitCountStageSealAfter,
                    0,
                    0,
                    0,
                    0);
  svtCommentEntityList = this->fields.svtCommentEntityList;
  p_svtCommentEntityList = (MissionNaviTransitionBoardItem_o *)&this->fields.svtCommentEntityList;
  v19 = svtCommentEntityList;
  v22 = Master_object;
  if ( !svtCommentEntityList )
  {
LABEL_21:
    v26 = 0;
    goto LABEL_23;
  }
  if ( !Master_object )
LABEL_24:
    sub_21FFECC(Master_object, v7);
  max_length = v19->max_length;
  if ( max_length != LODWORD(Master_object->max_length) )
  {
    v26 = 1;
    goto LABEL_23;
  }
  if ( max_length < 1 )
    goto LABEL_21;
  v24 = 4;
  do
  {
    klass = p_svtCommentEntityList->klass;
    if ( !p_svtCommentEntityList->klass )
      goto LABEL_24;
    if ( (unsigned int)(v24 - 4) >= LODWORD(klass->_1.namespaze) || (int)v24 - 4 >= (unsigned int)max_length )
      sub_21FFED4(Master_object);
    Master_object = (ServantCommentEntity_array *)*((_QWORD *)&klass->_1.image + v24);
    if ( !Master_object )
      goto LABEL_24;
    Master_object = (ServantCommentEntity_array *)((__int64 (__fastcall *)(ServantCommentEntity_array *, _QWORD, const MethodInfo *))Master_object->obj.klass->vtable[0].methodPtr)(
                                                    Master_object,
                                                    *((_QWORD *)&v22->obj.klass + v24),
                                                    Master_object->obj.klass->vtable[0].method);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      break;
    max_length = v22->max_length;
    ++v24;
  }
  while ( (int)v24 - 4 < max_length );
  v26 = (unsigned __int8)Master_object ^ 1;
LABEL_23:
  p_svtCommentEntityList->klass = (MissionNaviTransitionBoardItem_c *)v22;
  sub_21FFBF4(p_svtCommentEntityList, (int32_t)v22, v13, v14, v15, v16, v17, v18);
  return v26 & 1;
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
    sub_21FFECC(this, method);
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
  __int64 v2; // x2
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_59349E6 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349E6 = 1;
  }
  commandCodeEntity = this->fields.commandCodeEntity;
  if ( !commandCodeEntity )
    return 0;
  v5 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0);
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
      sub_21FFECC(this, method);
    p_Cost_k__BackingField = &svtEntity->fields.cost;
  }
  return *p_Cost_k__BackingField;
}


int32_t ServantStatusListViewItem__get_Defense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_21FFECC(this, method);
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
  int32_t *p_atk; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    p_atk = &equipUserSvtEntity->fields.atk;
    return *p_atk;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    equipTarget1 = servantLeaderInfo->fields.equipTarget1;
    if ( equipTarget1 )
    {
      p_atk = &equipTarget1->fields.atk;
      return *p_atk;
    }
  }
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
  int32_t *p_hp; // x8
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8

  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    p_hp = &equipUserSvtEntity->fields.hp;
    return *p_hp;
  }
  servantLeaderInfo = this->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    equipTarget1 = servantLeaderInfo->fields.equipTarget1;
    if ( equipTarget1 )
    {
      p_hp = &equipTarget1->fields.hp;
      return *p_hp;
    }
  }
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
  __int64 v2; // x2
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_59349EC & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349EC = 1;
  }
  equipUserSvtEntity = this->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    v5 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&equipUserSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    *(_QWORD *)&v10.fields.currentCryptoKey = v5;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10, 0);
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
    sub_21FFECC(this, method);
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
  __int64 v2; // x2
  ServantStatusListViewItem_o *v3; // x19
  struct ServantStatusListViewItem_TempLimitCountSetting_o *currentLimitCountSetting; // x8
  int32_t randomLimitCountSupport; // w8

  v3 = this;
  if ( (byte_59349F3 & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&OptionManager_TypeInfo);
    byte_59349F3 = 1;
  }
  currentLimitCountSetting = v3->fields.currentLimitCountSetting;
  if ( !currentLimitCountSetting )
    sub_21FFECC(this, method);
  randomLimitCountSupport = currentLimitCountSetting->fields.randomLimitCountSupport;
  if ( randomLimitCountSupport )
    return randomLimitCountSupport == 1;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
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
  __int64 v2; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  _DWORD *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTargetInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_59349E7 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349E7 = 1;
  }
  userSvtEntity = this->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v5 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    *(_QWORD *)&v10.fields.currentCryptoKey = v5;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10, 0);
  }
  else
  {
    servantLeaderInfo = this->fields.servantLeaderInfo;
    if ( servantLeaderInfo )
      return servantLeaderInfo[16];
    equipTargetInfo = this->fields.equipTargetInfo;
    if ( equipTargetInfo )
      return equipTargetInfo->fields.limitCount;
    servantLeaderInfo = this->fields.userSvtCollectionEntity;
    if ( servantLeaderInfo )
      return servantLeaderInfo[16];
    return 0;
  }
}


int32_t ServantStatusListViewItem__get_Luck(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_21FFECC(this, method);
  return svtLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_Magic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtLimitEntity; // x8

  svtLimitEntity = this->fields.svtLimitEntity;
  if ( !svtLimitEntity )
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
      sub_21FFECC(this, method);
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
  __int64 v2; // x2
  struct ServantEntity_o *svtEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_59349E5 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59349E5 = 1;
  }
  svtEntity = this->fields.svtEntity;
  if ( !svtEntity )
    return 0;
  v5 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0);
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
    sub_21FFECC(this, method);
  return transformedServantLimitEntity->fields.agility;
}


int32_t ServantStatusListViewItem__get_TransformedDefense(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_21FFECC(this, method);
  return transformedServantLimitEntity->fields.defense;
}


int32_t ServantStatusListViewItem__get_TransformedLuck(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_21FFECC(this, method);
  return transformedServantLimitEntity->fields.luck;
}


int32_t ServantStatusListViewItem__get_TransformedMagic(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_21FFECC(this, method);
  return transformedServantLimitEntity->fields.magic;
}


int32_t ServantStatusListViewItem__get_TransformedNp(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_21FFECC(this, method);
  return transformedServantLimitEntity->fields.treasureDevice;
}


int32_t ServantStatusListViewItem__get_TransformedPower(ServantStatusListViewItem_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *transformedServantLimitEntity; // x8

  transformedServantLimitEntity = this->fields.transformedServantLimitEntity;
  if ( !transformedServantLimitEntity )
    sub_21FFECC(this, method);
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
  int32_t svtCommonFlag; // w9
  int v3; // w8

  svtCommonFlag = this->fields.svtCommonFlag;
  if ( (svtCommonFlag & 4) != 0 )
    v3 = 2;
  else
    v3 = 1;
  return v3 & (svtCommonFlag << 30 >> 31);
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
  __int64 v2; // x2
  ServantStatusListViewItem_o *v3; // x19
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v5; // q1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  _QWORD *p_klass; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_59349FB & 1) == 0 )
  {
    this = (ServantStatusListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59349FB = 1;
  }
  userSvtEntity = v3->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v5 = *(_OWORD *)&userSvtEntity->fields.userId.fields.fakeValue;
    *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v10.fields.fakeValue = v5;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    v9 = v10;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v9, 0);
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
        return 0;
      p_klass = &v3->fields.userSvtCollectionEntity->klass;
      if ( !p_klass )
        sub_21FFECC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TransformedServant_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TransformedServant_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  this->fields._ModifyStage_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._StageList_k__BackingField = stageList;
  v6 = (ServantStatusListViewItem_LimitCountStageData_o *)((char *)v6 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)stageList, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = stage;
}


void ServantStatusListViewItem_LimitCountStageData___ctor_43187568(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        System_Int32_array *stageList,
        int32_t stage,
        int32_t originStage,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields._ModifyStage_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._StageList_k__BackingField = stageList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)stageList, v9, v10, v11, v12, v13, v14);
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
  int32_t Stage_k__BackingField; // w9

  Stage_k__BackingField = this->fields._Stage_k__BackingField;
  this->fields._ModifyStage_k__BackingField = stage;
  this->fields._Stage_k__BackingField = stage;
  return Stage_k__BackingField != stage;
}


// local variable allocation has failed, the output may be wrong!
bool ServantStatusListViewItem_LimitCountStageData__SelectStageList(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *StageList_k__BackingField; // x8
  int32_t Stage_k__BackingField; // w9
  int32_t v5; // w8

  if ( index < 0 )
    return 0;
  StageList_k__BackingField = this->fields._StageList_k__BackingField;
  if ( !StageList_k__BackingField )
    sub_21FFECC(this, *(_QWORD *)&index);
  if ( SLODWORD(StageList_k__BackingField->max_length) <= index )
    return 0;
  Stage_k__BackingField = this->fields._Stage_k__BackingField;
  v5 = StageList_k__BackingField->m_Items[index];
  this->fields._Stage_k__BackingField = v5;
  this->fields._ModifyStage_k__BackingField = v5;
  return Stage_k__BackingField != v5;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItem_LimitCountStageData__SetRandomStage(
        ServantStatusListViewItem_LimitCountStageData_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t svtId,
        int32_t dispLimitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  ServantStatusListViewItem_LimitCountStageData_o *v10; // x20
  __int128 v11; // q1
  int v12; // w8
  int64_t v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x25
  __int64 v17; // x26
  int64_t v18; // x24
  int32_t v19; // w25
  int32_t v20; // w0
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t lv; // w23
  int32_t v24; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v10 = this;
  if ( (byte_593513B & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantStatusListViewItem_LimitCountStageData_o *)sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_593513B = 1;
  }
  if ( !userServantEntity )
    sub_21FFECC(this, userServantEntity);
  v11 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v11;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
      userServantEntity,
      *(_QWORD *)&svtId);
  v25 = v26;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v25, 0);
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v18 = v13;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
  *(_QWORD *)&v27.fields.currentCryptoKey = v16;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v27, 0);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(userServantEntity->fields.limitCount, 0);
  lv = userServantEntity->fields.lv;
  v24 = v20;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v21, v22);
  v10->fields._Stage_k__BackingField = RandomLimitCountManager__ChoiceLimitCount(
                                         v18,
                                         v19,
                                         svtId,
                                         v24,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._StageList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t ModifyStage_k__BackingField; // w9
  struct ServantStatusListViewItem_LimitCountStageData_o *dispLimitCountStageData; // x8
  int32_t v9; // w9
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x8
  int32_t v11; // w9
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8
  int32_t v13; // w9
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *supportLimitCountStageData; // x8
  ServantStatusListViewItem_LimitCountSetting_o *result; // x0

  if ( (byte_593513C & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewItem_LimitCountSetting_TypeInfo);
    byte_593513C = 1;
  }
  v3 = sub_21FFEBC(ServantStatusListViewItem_LimitCountSetting_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  cardImageLimitCountStageData = this->fields.cardImageLimitCountStageData;
  if ( !cardImageLimitCountStageData )
    goto LABEL_11;
  if ( !v3 )
    goto LABEL_11;
  ModifyStage_k__BackingField = cardImageLimitCountStageData->fields._ModifyStage_k__BackingField;
  dispLimitCountStageData = this->fields.dispLimitCountStageData;
  *(_DWORD *)(v3 + 16) = ModifyStage_k__BackingField;
  if ( !dispLimitCountStageData )
    goto LABEL_11;
  v9 = dispLimitCountStageData->fields._ModifyStage_k__BackingField;
  commandCardLimitCountStageData = this->fields.commandCardLimitCountStageData;
  *(_DWORD *)(v3 + 20) = v9;
  if ( !commandCardLimitCountStageData )
    goto LABEL_11;
  v11 = commandCardLimitCountStageData->fields._ModifyStage_k__BackingField;
  iconLimitCountStageData = this->fields.iconLimitCountStageData;
  *(_DWORD *)(v3 + 24) = v11;
  if ( !iconLimitCountStageData
    || (v13 = iconLimitCountStageData->fields._ModifyStage_k__BackingField,
        portraitLimitCountStageData = this->fields.portraitLimitCountStageData,
        *(_DWORD *)(v3 + 28) = v13,
        !portraitLimitCountStageData)
    || (*(_DWORD *)(v3 + 32) = portraitLimitCountStageData->fields._ModifyStage_k__BackingField,
        supportLimitCountStageData = this->fields.supportLimitCountStageData,
        *(_QWORD *)(v3 + 36) = *(_QWORD *)&this->fields.randomLimitCount,
        !supportLimitCountStageData) )
  {
LABEL_11:
    sub_21FFECC(v4, v5);
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
  struct ServantStatusListViewItem_LimitCountStageData_o *commandCardLimitCountStageData; // x9
  struct ServantStatusListViewItem_LimitCountStageData_o *iconLimitCountStageData; // x8
  struct ServantStatusListViewItem_LimitCountStageData_o *portraitLimitCountStageData; // x9

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
    sub_21FFECC(cardImageLimitCountStageData, userServantEntity);
  }
  if ( !cardImageLimitCountStageData )
    goto LABEL_18;
  v16 = this->fields.dispLimitCountStageData;
  cardImageLimitCountStageData->fields._Stage_k__BackingField = cardImageLimitCountStageData->fields._ModifyStage_k__BackingField;
  if ( !v16 )
    goto LABEL_18;
  commandCardLimitCountStageData = this->fields.commandCardLimitCountStageData;
  v16->fields._Stage_k__BackingField = v16->fields._ModifyStage_k__BackingField;
  if ( !commandCardLimitCountStageData )
    goto LABEL_18;
  iconLimitCountStageData = this->fields.iconLimitCountStageData;
  commandCardLimitCountStageData->fields._Stage_k__BackingField = commandCardLimitCountStageData->fields._ModifyStage_k__BackingField;
  if ( !iconLimitCountStageData )
    goto LABEL_18;
  portraitLimitCountStageData = this->fields.portraitLimitCountStageData;
  iconLimitCountStageData->fields._Stage_k__BackingField = iconLimitCountStageData->fields._ModifyStage_k__BackingField;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593513D & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewItem___c_TypeInfo);
    byte_593513D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantStatusListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusListViewItem___c_TypeInfo->static_fields->__9 = (struct ServantStatusListViewItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantStatusListViewItem___c_TypeInfo->static_fields,
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


// local variable allocation has failed, the output may be wrong!
bool ServantStatusListViewItem___c__DisplayClass417_0___HasRandomGroup_b__0(
        ServantStatusListViewItem___c__DisplayClass417_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  int32_t limitCount; // w20
  int32_t svtId; // w21

  if ( (byte_593513E & 1) == 0 )
  {
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_593513E = 1;
  }
  if ( e < 1 )
    return 0;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, *(_QWORD *)&e, method);
  return RandomLimitCountManager__GetGroupIndex(svtId, limitCount, e, 1, 0) != 0;
}